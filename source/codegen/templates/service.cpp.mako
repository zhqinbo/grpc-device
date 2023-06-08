<%
import common_helpers
import service_helpers

config = data['config']
functions = data['functions']

service_class_prefix = config["service_class_prefix"]
namespace_prefix = config["namespace_component"] + "_grpc::"
module_name = config["module_name"]
custom_types = common_helpers.get_custom_types(config)
(input_custom_types, output_custom_types) = common_helpers.get_input_and_output_custom_types(config, functions)
has_async_functions = any(service_helpers.get_async_functions(functions))
has_two_dimension_functions = any(service_helpers.get_functions_with_two_dimension_param(functions))
function_names = service_helpers.filter_proto_rpc_functions_to_generate(functions)
# If there are any non-mockable functions, we need to call the library directly, which
# means we need another include file
any_non_mockable_functions = any(not common_helpers.can_mock_function(functions[name]['parameters']) for name in function_names)
# Define the constant for buffer too small if we have any of these functions.
any_ivi_dance_functions = any(
  common_helpers.has_ivi_dance_with_a_twist_param(functions[name]['parameters']) or
  common_helpers.has_ivi_dance_param(functions[name]['parameters']) for name in function_names)

resource_repository_deps = service_helpers.get_driver_shared_resource_repository_ptr_deps(config, functions)
%>\
<%namespace name="mako_helper" file="/service_helpers.mako"/>\

//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the ${config["driver_name"]} Metadata
//---------------------------------------------------------------------
#include "${module_name}_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>
#include <vector>
% if has_two_dimension_functions:
#include <numeric>
% endif
% for additional_header in common_helpers.get_additional_headers(config, "service.cpp"):
#include "${additional_header}"
% endfor
#include <server/converters.h>
% if has_async_functions:
#include <server/callback_router.h>
#include <server/server_reactor.h>
% endif
% if any_non_mockable_functions:
#include "${module_name}_library.h"
% endif

namespace ${config["namespace_component"]}_grpc {

  using nidevice_grpc::converters::allocate_output_storage;
  using nidevice_grpc::converters::calculate_linked_array_size;
  using nidevice_grpc::converters::convert_from_grpc;
  using nidevice_grpc::converters::convert_to_grpc;
  using nidevice_grpc::converters::MatchState;

% if any_ivi_dance_functions:
  const auto kErrorReadBufferTooSmall = -200229;
  const auto kWarningCAPIStringTruncatedToFitBuffer = 200026;

% endif
  ${service_class_prefix}Service::${service_class_prefix}Service(
      LibrarySharedPtr library,
% for resource_handle_type in resource_repository_deps:
      ${resource_repository_deps[resource_handle_type].resource_repository_alias} ${resource_repository_deps[resource_handle_type].local_name},
% endfor
      const ${service_class_prefix}FeatureToggles& feature_toggles)
      : library_(library),
% for resource_handle_type in resource_repository_deps:
      ${resource_repository_deps[resource_handle_type].field_name}(${resource_repository_deps[resource_handle_type].local_name}),
% endfor
      feature_toggles_(feature_toggles)
  {
  }

  ${service_class_prefix}Service::~${service_class_prefix}Service()
  {
  }

  // Returns true if it's safe to use outputs of a method with the given status.
  inline bool status_ok(int32 status)
  {
    return ${config['status_ok']};
  }

% if common_helpers.has_enum_array_string_out_param(functions):
  template <typename TEnum>
  void ${service_class_prefix}Service::CopyBytesToEnums(const std::string& input, google::protobuf::RepeatedField<TEnum>* output)
  {
    for (auto item : input)
    {
      output->Add(item);
    }
  }

% endif
% for function_name in service_helpers.filter_proto_rpc_functions_to_generate(functions):
<%
    function_data = functions[function_name]
    method_name = common_helpers.snake_to_pascal(function_name)
    parameters = function_data['parameters']
    request_param = service_helpers.get_request_param(method_name)
    response_param = service_helpers.get_response_param(method_name)
    response_type = service_helpers.get_response_type(method_name)
    is_async_streaming = common_helpers.has_async_streaming_response(function_data)
%>\
  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
% if is_async_streaming:
  ::grpc::ServerWriteReactor<${response_type}>*
  ${service_class_prefix}Service::${method_name}(::grpc::CallbackServerContext* context, ${request_param})
  {
${mako_helper.define_async_callback_method_body(function_name=function_name, function_data=function_data, parameters=parameters, config=config)}\
  }
% else:
  ::grpc::Status ${service_class_prefix}Service::${method_name}(::grpc::ServerContext* context, ${request_param}, ${response_param})
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
%   if common_helpers.has_unsupported_parameter(function_data):
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
%   elif common_helpers.is_cross_driver_init_method(function_data):
${mako_helper.define_cross_driver_init_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   elif common_helpers.is_init_method(function_data):
${mako_helper.define_init_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   elif common_helpers.has_ivi_dance_param(parameters):
${mako_helper.define_ivi_dance_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   elif common_helpers.has_ivi_dance_with_a_twist_param(parameters):
${mako_helper.define_ivi_dance_with_a_twist_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   elif common_helpers.has_repeated_varargs_parameter(parameters):
${mako_helper.define_repeated_varargs_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   else:
${mako_helper.define_simple_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   endif
    }
    catch (nidevice_grpc::NonDriverException& ex) {
      return ex.GetStatus();
    }
  }
% endif

% endfor

<%
  feature_toggles = service_helpers.get_feature_toggles(config)
%>\
  ${service_class_prefix}FeatureToggles::${service_class_prefix}FeatureToggles(
    const nidevice_grpc::FeatureToggles& feature_toggles)
<%block filter="common_helpers.trim_trailing_comma()">\
    : is_enabled(
        feature_toggles.is_feature_enabled("${config["module_name"]}", ${service_helpers.get_driver_service_readiness(config)})),
% for toggle, readiness in feature_toggles.items():
      ${service_helpers.get_toggle_member_name(toggle)}(
        feature_toggles.is_feature_enabled("${toggle}", ${service_helpers.to_cpp_readiness(readiness)})),
% endfor
</%block>\
  {
  }
} // namespace ${config["namespace_component"]}_grpc

% if any(input_custom_types) or any(output_custom_types):
namespace nidevice_grpc {
namespace converters {
%   for custom_type in custom_types:
%     if custom_type["name"] in output_custom_types:
template <>
void convert_to_grpc(const ${custom_type["name"]}& input, ${namespace_prefix}${custom_type["grpc_name"]}* output) 
{
%       for field in common_helpers.filter_parameters_for_grpc_fields(custom_type["fields"]):
%         if common_helpers.supports_standard_copy_conversion_routines(field):
  convert_to_grpc(${str.join(", ", [f'input.{field["name"]}', f'output->mutable_{common_helpers.get_grpc_field_name(field)}()'] + field.get("additional_arguments_to_copy_convert", []))});
%         else:
  output->set_${common_helpers.get_grpc_field_name(field)}(input.${field["name"]});
%         endif
%       endfor
}

%     endif
%     if custom_type["name"] in input_custom_types:
template <>
${custom_type["name"]} convert_from_grpc(const ${namespace_prefix}${custom_type["grpc_name"]}& input) 
{
  auto output = ${custom_type["name"]}();  
%       for field in common_helpers.filter_parameters_for_grpc_fields(custom_type["fields"]):
<%
            input_field_name = common_helpers.get_grpc_field_name(field)
            output_field_name = field["name"]
%>\
%             if field.get("coerced", False):
<%
               c_element_type = field["type"]
%>\
  if (input.${input_field_name}() < std::numeric_limits<${c_element_type}>::min() || input.${input_field_name}() > std::numeric_limits<${c_element_type}>::max()) {
      std::string message("value ");
      message.append(std::to_string(input.${input_field_name}()));
      message.append(" doesn't fit in datatype ");
      message.append("${c_element_type}");
      throw nidevice_grpc::ValueOutOfRangeException(message);
  }
  output.${output_field_name} = static_cast<${c_element_type}>(input.${input_field_name}());
%            elif common_helpers.supports_standard_copy_conversion_routines(field):
<%
  c_type = field['type']
  c_type_underlying_type = common_helpers.get_underlying_type_name(c_type)
  request_snippet = f'input.{input_field_name}()'
%>\
  output.${output_field_name} = convert_from_grpc<${c_type_underlying_type}>(${str.join(", ", [request_snippet] + field.get("additional_arguments_to_copy_convert", []))});
%            else:
  output.${output_field_name} = input.${input_field_name}();
%            endif
%       endfor
  return output;
}

%     endif
%   endfor
} // converters
} // nidevice_grpc

% endif