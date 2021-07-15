
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-DAQMX Metadata
//---------------------------------------------------------------------
#include "nidaqmx_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>
#include <vector>

namespace nidaqmx_grpc {

  NiDAQmxService::NiDAQmxService(NiDAQmxLibraryInterface* library, ResourceRepositorySharedPtr session_repository)
      : library_(library), session_repository_(session_repository)
  {
  }

  NiDAQmxService::~NiDAQmxService()
  {
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::AddGlobalChansToTask(::grpc::ServerContext* context, const AddGlobalChansToTaskRequest* request, AddGlobalChansToTaskResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      auto channel_names = request->channel_names().c_str();
      auto status = library_->AddGlobalChansToTask(task, channel_names);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::ClearTask(::grpc::ServerContext* context, const ClearTaskRequest* request, ClearTaskResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      session_repository_->remove_session(task);
      auto status = library_->ClearTask(task);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::CreateAIVoltageChan(::grpc::ServerContext* context, const CreateAIVoltageChanRequest* request, CreateAIVoltageChanResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      auto physical_channel = request->physical_channel().c_str();
      auto name_to_assign_to_channel = request->name_to_assign_to_channel().c_str();
      int32 terminal_config;
      switch (request->terminal_config_enum_case()) {
        case nidaqmx_grpc::CreateAIVoltageChanRequest::TerminalConfigEnumCase::kTerminalConfig: {
          terminal_config = static_cast<int32>(request->terminal_config());
          break;
        }
        case nidaqmx_grpc::CreateAIVoltageChanRequest::TerminalConfigEnumCase::kTerminalConfigRaw: {
          terminal_config = static_cast<int32>(request->terminal_config_raw());
          break;
        }
        case nidaqmx_grpc::CreateAIVoltageChanRequest::TerminalConfigEnumCase::TERMINAL_CONFIG_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for terminal_config was not specified or out of range");
          break;
        }
      }

      float64 min_val = request->min_val();
      float64 max_val = request->max_val();
      int32 units;
      switch (request->units_enum_case()) {
        case nidaqmx_grpc::CreateAIVoltageChanRequest::UnitsEnumCase::kUnits: {
          units = static_cast<int32>(request->units());
          break;
        }
        case nidaqmx_grpc::CreateAIVoltageChanRequest::UnitsEnumCase::kUnitsRaw: {
          units = static_cast<int32>(request->units_raw());
          break;
        }
        case nidaqmx_grpc::CreateAIVoltageChanRequest::UnitsEnumCase::UNITS_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for units was not specified or out of range");
          break;
        }
      }

      auto custom_scale_name = request->custom_scale_name().c_str();
      auto status = library_->CreateAIVoltageChan(task, physical_channel, name_to_assign_to_channel, terminal_config, min_val, max_val, units, custom_scale_name);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::CreateAOVoltageChan(::grpc::ServerContext* context, const CreateAOVoltageChanRequest* request, CreateAOVoltageChanResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      auto physical_channel = request->physical_channel().c_str();
      auto name_to_assign_to_channel = request->name_to_assign_to_channel().c_str();
      float64 min_val = request->min_val();
      float64 max_val = request->max_val();
      int32 units;
      switch (request->units_enum_case()) {
        case nidaqmx_grpc::CreateAOVoltageChanRequest::UnitsEnumCase::kUnits: {
          units = static_cast<int32>(request->units());
          break;
        }
        case nidaqmx_grpc::CreateAOVoltageChanRequest::UnitsEnumCase::kUnitsRaw: {
          units = static_cast<int32>(request->units_raw());
          break;
        }
        case nidaqmx_grpc::CreateAOVoltageChanRequest::UnitsEnumCase::UNITS_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for units was not specified or out of range");
          break;
        }
      }

      auto custom_scale_name = request->custom_scale_name().c_str();
      auto status = library_->CreateAOVoltageChan(task, physical_channel, name_to_assign_to_channel, min_val, max_val, units, custom_scale_name);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::CreateDIChan(::grpc::ServerContext* context, const CreateDIChanRequest* request, CreateDIChanResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      auto lines = request->lines().c_str();
      auto name_to_assign_to_lines = request->name_to_assign_to_lines().c_str();
      int32 line_grouping;
      switch (request->line_grouping_enum_case()) {
        case nidaqmx_grpc::CreateDIChanRequest::LineGroupingEnumCase::kLineGrouping: {
          line_grouping = static_cast<int32>(request->line_grouping());
          break;
        }
        case nidaqmx_grpc::CreateDIChanRequest::LineGroupingEnumCase::kLineGroupingRaw: {
          line_grouping = static_cast<int32>(request->line_grouping_raw());
          break;
        }
        case nidaqmx_grpc::CreateDIChanRequest::LineGroupingEnumCase::LINE_GROUPING_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for line_grouping was not specified or out of range");
          break;
        }
      }

      auto status = library_->CreateDIChan(task, lines, name_to_assign_to_lines, line_grouping);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::CreateDOChan(::grpc::ServerContext* context, const CreateDOChanRequest* request, CreateDOChanResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      auto lines = request->lines().c_str();
      auto name_to_assign_to_lines = request->name_to_assign_to_lines().c_str();
      int32 line_grouping;
      switch (request->line_grouping_enum_case()) {
        case nidaqmx_grpc::CreateDOChanRequest::LineGroupingEnumCase::kLineGrouping: {
          line_grouping = static_cast<int32>(request->line_grouping());
          break;
        }
        case nidaqmx_grpc::CreateDOChanRequest::LineGroupingEnumCase::kLineGroupingRaw: {
          line_grouping = static_cast<int32>(request->line_grouping_raw());
          break;
        }
        case nidaqmx_grpc::CreateDOChanRequest::LineGroupingEnumCase::LINE_GROUPING_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for line_grouping was not specified or out of range");
          break;
        }
      }

      auto status = library_->CreateDOChan(task, lines, name_to_assign_to_lines, line_grouping);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::CreateTask(::grpc::ServerContext* context, const CreateTaskRequest* request, CreateTaskResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto session_name = request->session_name().c_str();

      auto init_lambda = [&] () {
        TaskHandle task;
        int status = library_->CreateTask(session_name, &task);
        return std::make_tuple(status, task);
      };
      uint32_t session_id = 0;
      const std::string& grpc_device_session_name = request->session_name();
      auto cleanup_lambda = [&] (TaskHandle id) { library_->ClearTask(id); };
      int status = session_repository_->add_session(grpc_device_session_name, init_lambda, cleanup_lambda, session_id);
      response->set_status(status);
      if (status == 0) {
        response->mutable_task()->set_id(session_id);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::GetNthTaskChannel(::grpc::ServerContext* context, const GetNthTaskChannelRequest* request, GetNthTaskChannelResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      uInt32 index = request->index();
      int32 buffer_size = request->buffer_size();
      std::string buffer;
      if (buffer_size > 0) {
          buffer.resize(buffer_size-1);
      }
      auto status = library_->GetNthTaskChannel(task, index, (char*)buffer.data(), buffer_size);
      response->set_status(status);
      if (status == 0) {
        response->set_buffer(buffer);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::GetNthTaskDevice(::grpc::ServerContext* context, const GetNthTaskDeviceRequest* request, GetNthTaskDeviceResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      uInt32 index = request->index();
      int32 buffer_size = request->buffer_size();
      std::string buffer;
      if (buffer_size > 0) {
          buffer.resize(buffer_size-1);
      }
      auto status = library_->GetNthTaskDevice(task, index, (char*)buffer.data(), buffer_size);
      response->set_status(status);
      if (status == 0) {
        response->set_buffer(buffer);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::IsTaskDone(::grpc::ServerContext* context, const IsTaskDoneRequest* request, IsTaskDoneResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      bool32 is_task_done {};
      auto status = library_->IsTaskDone(task, &is_task_done);
      response->set_status(status);
      if (status == 0) {
        response->set_is_task_done(is_task_done);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::ReadAnalogF64(::grpc::ServerContext* context, const ReadAnalogF64Request* request, ReadAnalogF64Response* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      int32 num_samps_per_chan = request->num_samps_per_chan();
      float64 timeout = request->timeout();
      int32 fill_mode;
      switch (request->fill_mode_enum_case()) {
        case nidaqmx_grpc::ReadAnalogF64Request::FillModeEnumCase::kFillMode: {
          fill_mode = static_cast<int32>(request->fill_mode());
          break;
        }
        case nidaqmx_grpc::ReadAnalogF64Request::FillModeEnumCase::kFillModeRaw: {
          fill_mode = static_cast<int32>(request->fill_mode_raw());
          break;
        }
        case nidaqmx_grpc::ReadAnalogF64Request::FillModeEnumCase::FILL_MODE_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for fill_mode was not specified or out of range");
          break;
        }
      }

      uInt32 array_size_in_samps = request->array_size_in_samps();
      auto reserved = nullptr;
      response->mutable_read_array()->Resize(array_size_in_samps, 0);
      float64* read_array = response->mutable_read_array()->mutable_data();
      int32 samps_per_chan_read {};
      auto status = library_->ReadAnalogF64(task, num_samps_per_chan, timeout, fill_mode, read_array, array_size_in_samps, &samps_per_chan_read, reserved);
      response->set_status(status);
      if (status == 0) {
        response->set_samps_per_chan_read(samps_per_chan_read);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::ReadDigitalU16(::grpc::ServerContext* context, const ReadDigitalU16Request* request, ReadDigitalU16Response* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      int32 num_samps_per_chan = request->num_samps_per_chan();
      float64 timeout = request->timeout();
      int32 fill_mode;
      switch (request->fill_mode_enum_case()) {
        case nidaqmx_grpc::ReadDigitalU16Request::FillModeEnumCase::kFillMode: {
          fill_mode = static_cast<int32>(request->fill_mode());
          break;
        }
        case nidaqmx_grpc::ReadDigitalU16Request::FillModeEnumCase::kFillModeRaw: {
          fill_mode = static_cast<int32>(request->fill_mode_raw());
          break;
        }
        case nidaqmx_grpc::ReadDigitalU16Request::FillModeEnumCase::FILL_MODE_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for fill_mode was not specified or out of range");
          break;
        }
      }

      uInt32 array_size_in_samps = request->array_size_in_samps();
      auto reserved = nullptr;
      std::vector<uInt16> read_array(array_size_in_samps);
      int32 samps_per_chan_read {};
      auto status = library_->ReadDigitalU16(task, num_samps_per_chan, timeout, fill_mode, read_array.data(), array_size_in_samps, &samps_per_chan_read, reserved);
      response->set_status(status);
      if (status == 0) {
        response->mutable_read_array()->Clear();
        response->mutable_read_array()->Reserve(array_size_in_samps);
        std::transform(
          read_array.begin(),
          read_array.end(),
          google::protobuf::RepeatedFieldBackInserter(response->mutable_read_array()),
          [](auto x) { 
              return x;
          });
        response->set_samps_per_chan_read(samps_per_chan_read);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::ReadDigitalU8(::grpc::ServerContext* context, const ReadDigitalU8Request* request, ReadDigitalU8Response* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      int32 num_samps_per_chan = request->num_samps_per_chan();
      float64 timeout = request->timeout();
      int32 fill_mode;
      switch (request->fill_mode_enum_case()) {
        case nidaqmx_grpc::ReadDigitalU8Request::FillModeEnumCase::kFillMode: {
          fill_mode = static_cast<int32>(request->fill_mode());
          break;
        }
        case nidaqmx_grpc::ReadDigitalU8Request::FillModeEnumCase::kFillModeRaw: {
          fill_mode = static_cast<int32>(request->fill_mode_raw());
          break;
        }
        case nidaqmx_grpc::ReadDigitalU8Request::FillModeEnumCase::FILL_MODE_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for fill_mode was not specified or out of range");
          break;
        }
      }

      uInt32 array_size_in_samps = request->array_size_in_samps();
      auto reserved = nullptr;
      std::string read_array(array_size_in_samps, '\0');
      int32 samps_per_chan_read {};
      auto status = library_->ReadDigitalU8(task, num_samps_per_chan, timeout, fill_mode, (uInt8*)read_array.data(), array_size_in_samps, &samps_per_chan_read, reserved);
      response->set_status(status);
      if (status == 0) {
        response->set_read_array(read_array);
        response->set_samps_per_chan_read(samps_per_chan_read);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::StartTask(::grpc::ServerContext* context, const StartTaskRequest* request, StartTaskResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      auto status = library_->StartTask(task);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::StopTask(::grpc::ServerContext* context, const StopTaskRequest* request, StopTaskResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      auto status = library_->StopTask(task);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::TaskControl(::grpc::ServerContext* context, const TaskControlRequest* request, TaskControlResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      int32 action;
      switch (request->action_enum_case()) {
        case nidaqmx_grpc::TaskControlRequest::ActionEnumCase::kAction: {
          action = static_cast<int32>(request->action());
          break;
        }
        case nidaqmx_grpc::TaskControlRequest::ActionEnumCase::kActionRaw: {
          action = static_cast<int32>(request->action_raw());
          break;
        }
        case nidaqmx_grpc::TaskControlRequest::ActionEnumCase::ACTION_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for action was not specified or out of range");
          break;
        }
      }

      auto status = library_->TaskControl(task, action);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::WaitUntilTaskDone(::grpc::ServerContext* context, const WaitUntilTaskDoneRequest* request, WaitUntilTaskDoneResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      float64 time_to_wait = request->time_to_wait();
      auto status = library_->WaitUntilTaskDone(task, time_to_wait);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::WriteAnalogF64(::grpc::ServerContext* context, const WriteAnalogF64Request* request, WriteAnalogF64Response* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      int32 num_samps_per_chan = request->num_samps_per_chan();
      bool32 auto_start = request->auto_start();
      float64 timeout = request->timeout();
      int32 data_layout;
      switch (request->data_layout_enum_case()) {
        case nidaqmx_grpc::WriteAnalogF64Request::DataLayoutEnumCase::kDataLayout: {
          data_layout = static_cast<int32>(request->data_layout());
          break;
        }
        case nidaqmx_grpc::WriteAnalogF64Request::DataLayoutEnumCase::kDataLayoutRaw: {
          data_layout = static_cast<int32>(request->data_layout_raw());
          break;
        }
        case nidaqmx_grpc::WriteAnalogF64Request::DataLayoutEnumCase::DATA_LAYOUT_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for data_layout was not specified or out of range");
          break;
        }
      }

      auto write_array = const_cast<const float64*>(request->write_array().data());
      auto reserved = nullptr;
      int32 samps_per_chan_written {};
      auto status = library_->WriteAnalogF64(task, num_samps_per_chan, auto_start, timeout, data_layout, write_array, &samps_per_chan_written, reserved);
      response->set_status(status);
      if (status == 0) {
        response->set_samps_per_chan_written(samps_per_chan_written);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::WriteDigitalU16(::grpc::ServerContext* context, const WriteDigitalU16Request* request, WriteDigitalU16Response* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      int32 num_samps_per_chan = request->num_samps_per_chan();
      bool32 auto_start = request->auto_start();
      float64 timeout = request->timeout();
      int32 data_layout;
      switch (request->data_layout_enum_case()) {
        case nidaqmx_grpc::WriteDigitalU16Request::DataLayoutEnumCase::kDataLayout: {
          data_layout = static_cast<int32>(request->data_layout());
          break;
        }
        case nidaqmx_grpc::WriteDigitalU16Request::DataLayoutEnumCase::kDataLayoutRaw: {
          data_layout = static_cast<int32>(request->data_layout_raw());
          break;
        }
        case nidaqmx_grpc::WriteDigitalU16Request::DataLayoutEnumCase::DATA_LAYOUT_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for data_layout was not specified or out of range");
          break;
        }
      }

      auto write_array_raw = request->write_array();
      auto write_array = std::vector<uInt16>();
      write_array.reserve(write_array_raw.size());
      std::transform(
        write_array_raw.begin(),
        write_array_raw.end(),
        std::back_inserter(write_array),
        [](auto x) { 
              if (x < std::numeric_limits<uInt16>::min() || x > std::numeric_limits<uInt16>::max()) {
                  std::string message("value ");
                  message.append(std::to_string(x));
                  message.append(" doesn't fit in datatype ");
                  message.append("uInt16");
                  throw nidevice_grpc::ValueOutOfRangeException(message);
              }
              return static_cast<uInt16>(x);
        });

      auto reserved = nullptr;
      int32 samps_per_chan_written {};
      auto status = library_->WriteDigitalU16(task, num_samps_per_chan, auto_start, timeout, data_layout, write_array.data(), &samps_per_chan_written, reserved);
      response->set_status(status);
      if (status == 0) {
        response->set_samps_per_chan_written(samps_per_chan_written);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
    catch (nidevice_grpc::ValueOutOfRangeException& ex) {
      return ::grpc::Status(::grpc::OUT_OF_RANGE, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDAQmxService::WriteDigitalU8(::grpc::ServerContext* context, const WriteDigitalU8Request* request, WriteDigitalU8Response* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto task_grpc_session = request->task();
      TaskHandle task = session_repository_->access_session(task_grpc_session.id(), task_grpc_session.name());
      int32 num_samps_per_chan = request->num_samps_per_chan();
      bool32 auto_start = request->auto_start();
      float64 timeout = request->timeout();
      int32 data_layout;
      switch (request->data_layout_enum_case()) {
        case nidaqmx_grpc::WriteDigitalU8Request::DataLayoutEnumCase::kDataLayout: {
          data_layout = static_cast<int32>(request->data_layout());
          break;
        }
        case nidaqmx_grpc::WriteDigitalU8Request::DataLayoutEnumCase::kDataLayoutRaw: {
          data_layout = static_cast<int32>(request->data_layout_raw());
          break;
        }
        case nidaqmx_grpc::WriteDigitalU8Request::DataLayoutEnumCase::DATA_LAYOUT_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for data_layout was not specified or out of range");
          break;
        }
      }

      const uInt8* write_array = (const uInt8*)request->write_array().c_str();
      auto reserved = nullptr;
      int32 samps_per_chan_written {};
      auto status = library_->WriteDigitalU8(task, num_samps_per_chan, auto_start, timeout, data_layout, write_array, &samps_per_chan_written, reserved);
      response->set_status(status);
      if (status == 0) {
        response->set_samps_per_chan_written(samps_per_chan_written);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

} // namespace nidaqmx_grpc

