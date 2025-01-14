
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-SCOPE-RESTRICTED Metadata
//---------------------------------------------------------------------
#include "niscope_restricted_library.h"

#include <grpcpp/server_builder.h>

#include "niscope_restricted_service.h"
#include "niscope_restricted_service_registrar.h"

namespace niscope_restricted_grpc {

namespace {
struct LibraryAndService {
  LibraryAndService(
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& resource_repository,
    const NiScopeRestrictedFeatureToggles& feature_toggles)
      : library(std::make_shared<NiScopeRestrictedLibrary>()),
      service(std::make_shared<NiScopeRestrictedService>(
        library,
        resource_repository,
        feature_toggles)) {
  }
  std::shared_ptr<NiScopeRestrictedLibrary> library;
  std::shared_ptr<NiScopeRestrictedService> service;
};
}

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiScopeRestrictedFeatureToggles(feature_toggles);

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

} // niscope_restricted_grpc
