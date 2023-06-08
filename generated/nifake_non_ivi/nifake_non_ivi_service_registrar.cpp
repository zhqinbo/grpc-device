
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-FAKE-NON-IVI Metadata
//---------------------------------------------------------------------
#include "nifake_non_ivi_library.h"

#include <grpcpp/server_builder.h>

#include "nifake_non_ivi_service.h"
#include "nifake_non_ivi_service_registrar.h"

namespace nifake_non_ivi_grpc {

namespace {
struct LibraryAndService {
  LibraryAndService(
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<FakeHandle>>& resource_repository,
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<SecondarySessionHandle>>& secondary_session_handle_resource_repository,
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<FakeCrossDriverHandle>>& fake_cross_driver_handle_resource_repository,
    const NiFakeNonIviFeatureToggles& feature_toggles)
      : library(std::make_shared<NiFakeNonIviLibrary>()),
      service(std::make_shared<NiFakeNonIviService>(
        library,
        resource_repository,
        secondary_session_handle_resource_repository,
        fake_cross_driver_handle_resource_repository,
        feature_toggles)) {
  }
  std::shared_ptr<NiFakeNonIviLibrary> library;
  std::shared_ptr<NiFakeNonIviService> service;
};
}

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<FakeHandle>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<SecondarySessionHandle>>& secondary_session_handle_resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<FakeCrossDriverHandle>>& fake_cross_driver_handle_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiFakeNonIviFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library_and_service_ptr = std::make_shared<LibraryAndService>(
      resource_repository,
      secondary_session_handle_resource_repository,
      fake_cross_driver_handle_resource_repository,
      toggles);
    auto& service = library_and_service_ptr->service;
    builder.RegisterService(service.get());
    return library_and_service_ptr;
  }

  return {};
}

} // nifake_non_ivi_grpc
