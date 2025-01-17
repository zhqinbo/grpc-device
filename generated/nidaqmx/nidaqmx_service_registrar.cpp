
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-DAQMX Metadata
//---------------------------------------------------------------------
#include "nidaqmx_library.h"

#include <grpcpp/server_builder.h>

#include "nidaqmx_service.h"
#include "nidaqmx_service_registrar.h"

namespace nidaqmx_grpc {

namespace {
struct LibraryAndService {
  LibraryAndService(
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<TaskHandle>>& resource_repository,
    const NiDAQmxFeatureToggles& feature_toggles)
      : library(std::make_shared<NiDAQmxLibrary>()),
      service(std::make_shared<NiDAQmxService>(
        library,
        resource_repository,
        feature_toggles)) {
  }
  std::shared_ptr<NiDAQmxLibrary> library;
  std::shared_ptr<NiDAQmxService> service;
};
}

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<TaskHandle>>& resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiDAQmxFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library_and_service_ptr = std::make_shared<LibraryAndService>(
      resource_repository,
      toggles);
    auto& service = library_and_service_ptr->service;
    builder.RegisterService(service.get());
    return library_and_service_ptr;
  }

  return {};
}

} // nidaqmx_grpc
