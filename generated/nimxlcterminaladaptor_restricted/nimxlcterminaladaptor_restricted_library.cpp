//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-MXLCTERMINALADAPTOR-RESTRICTED Metadata
//---------------------------------------------------------------------
#include "nimxlcterminaladaptor_restricted_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "nimxlcTerminalAdaptor.dll";
#else
static const char* kLibraryName = "liblibnimxlcTerminalAdaptor.so.1";
#endif

namespace nimxlcterminaladaptor_restricted_grpc {

NimxlcTerminalAdaptorRestrictedLibrary::NimxlcTerminalAdaptorRestrictedLibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.createSession = reinterpret_cast<createSessionPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_createSession"));
  function_pointers_.destroySession = reinterpret_cast<destroySessionPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_destroySession"));
  function_pointers_.refreshTerminalCache = reinterpret_cast<refreshTerminalCachePtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_refreshTerminalCache"));
  function_pointers_.hasTerminalInformationChanged = reinterpret_cast<hasTerminalInformationChangedPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_hasTerminalInformationChanged"));
  function_pointers_.getSystemChangeNumber = reinterpret_cast<getSystemChangeNumberPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_getSystemChangeNumber"));
  function_pointers_.getDeviceContainer = reinterpret_cast<getDeviceContainerPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_getDeviceContainer"));
  function_pointers_.DeviceContainer_begin = reinterpret_cast<DeviceContainer_beginPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_DeviceContainer_begin"));
  function_pointers_.DeviceIterator_next = reinterpret_cast<DeviceIterator_nextPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_DeviceIterator_next"));
  function_pointers_.DeviceIterator_getTerminalContainer = reinterpret_cast<DeviceIterator_getTerminalContainerPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_DeviceIterator_getTerminalContainer"));
  function_pointers_.DeviceIterator_getDeviceName = reinterpret_cast<DeviceIterator_getDeviceNamePtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_DeviceIterator_getDeviceName"));
  function_pointers_.DeviceIterator_supportsOnBoardClock = reinterpret_cast<DeviceIterator_supportsOnBoardClockPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_DeviceIterator_supportsOnBoardClock"));
  function_pointers_.DeviceIterator_isEnd = reinterpret_cast<DeviceIterator_isEndPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_DeviceIterator_isEnd"));
  function_pointers_.DeviceContainer_destroy = reinterpret_cast<DeviceContainer_destroyPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_DeviceContainer_destroy"));
  function_pointers_.TerminalContainer_begin = reinterpret_cast<TerminalContainer_beginPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_TerminalContainer_begin"));
  function_pointers_.TerminalIterator_next = reinterpret_cast<TerminalIterator_nextPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_TerminalIterator_next"));
  function_pointers_.TerminalIterator_isEnd = reinterpret_cast<TerminalIterator_isEndPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_TerminalIterator_isEnd"));
  function_pointers_.TerminalContainer_destroy = reinterpret_cast<TerminalContainer_destroyPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_TerminalContainer_destroy"));
  function_pointers_.TerminalIterator_getTerminalName = reinterpret_cast<TerminalIterator_getTerminalNamePtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_TerminalIterator_getTerminalName"));
  function_pointers_.TerminalIterator_getVisibility = reinterpret_cast<TerminalIterator_getVisibilityPtr>(shared_library_.get_function_pointer("nimxlc_ta_nimxlc_TerminalIterator_getVisibility"));
}

NimxlcTerminalAdaptorRestrictedLibrary::~NimxlcTerminalAdaptorRestrictedLibrary()
{
}

::grpc::Status NimxlcTerminalAdaptorRestrictedLibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

nimxlc_Session NimxlcTerminalAdaptorRestrictedLibrary::createSession(const char hostname[], nierr_Status* c_status)
{
  if (!function_pointers_.createSession) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_createSession.");
  }
  return function_pointers_.createSession(hostname, c_status);
}

void NimxlcTerminalAdaptorRestrictedLibrary::destroySession(nimxlc_Session session)
{
  if (!function_pointers_.destroySession) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_destroySession.");
  }
  return function_pointers_.destroySession(session);
}

void NimxlcTerminalAdaptorRestrictedLibrary::refreshTerminalCache(nimxlc_Session session, nierr_Status* c_status)
{
  if (!function_pointers_.refreshTerminalCache) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_refreshTerminalCache.");
  }
  return function_pointers_.refreshTerminalCache(session, c_status);
}

bool NimxlcTerminalAdaptorRestrictedLibrary::hasTerminalInformationChanged(nimxlc_Session session, uint32_t systemChangeNumber, nierr_Status* c_status)
{
  if (!function_pointers_.hasTerminalInformationChanged) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_hasTerminalInformationChanged.");
  }
  return function_pointers_.hasTerminalInformationChanged(session, systemChangeNumber, c_status);
}

uint32_t NimxlcTerminalAdaptorRestrictedLibrary::getSystemChangeNumber(nimxlc_Session session, nierr_Status* c_status)
{
  if (!function_pointers_.getSystemChangeNumber) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_getSystemChangeNumber.");
  }
  return function_pointers_.getSystemChangeNumber(session, c_status);
}

nimxlc_DeviceContainer NimxlcTerminalAdaptorRestrictedLibrary::getDeviceContainer(nimxlc_Session session, nierr_Status* c_status)
{
  if (!function_pointers_.getDeviceContainer) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_getDeviceContainer.");
  }
  return function_pointers_.getDeviceContainer(session, c_status);
}

nimxlc_DeviceIterator NimxlcTerminalAdaptorRestrictedLibrary::DeviceContainer_begin(nimxlc_DeviceContainer container)
{
  if (!function_pointers_.DeviceContainer_begin) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_DeviceContainer_begin.");
  }
  return function_pointers_.DeviceContainer_begin(container);
}

void NimxlcTerminalAdaptorRestrictedLibrary::DeviceIterator_next(nimxlc_DeviceIterator* iterator)
{
  if (!function_pointers_.DeviceIterator_next) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_DeviceIterator_next.");
  }
  return function_pointers_.DeviceIterator_next(iterator);
}

nimxlc_TerminalContainer NimxlcTerminalAdaptorRestrictedLibrary::DeviceIterator_getTerminalContainer(nimxlc_DeviceContainer container, nimxlc_DeviceIterator iterator, nierr_Status* cStatus)
{
  if (!function_pointers_.DeviceIterator_getTerminalContainer) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_DeviceIterator_getTerminalContainer.");
  }
  return function_pointers_.DeviceIterator_getTerminalContainer(container, iterator, cStatus);
}

const char* NimxlcTerminalAdaptorRestrictedLibrary::DeviceIterator_getDeviceName(nimxlc_DeviceContainer container, nimxlc_DeviceIterator iterator, nierr_Status* cStatus)
{
  if (!function_pointers_.DeviceIterator_getDeviceName) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_DeviceIterator_getDeviceName.");
  }
  return function_pointers_.DeviceIterator_getDeviceName(container, iterator, cStatus);
}

bool NimxlcTerminalAdaptorRestrictedLibrary::DeviceIterator_supportsOnBoardClock(nimxlc_DeviceContainer container, nimxlc_DeviceIterator iterator, nierr_Status* cStatus)
{
  if (!function_pointers_.DeviceIterator_supportsOnBoardClock) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_DeviceIterator_supportsOnBoardClock.");
  }
  return function_pointers_.DeviceIterator_supportsOnBoardClock(container, iterator, cStatus);
}

bool NimxlcTerminalAdaptorRestrictedLibrary::DeviceIterator_isEnd(nimxlc_DeviceContainer container, nimxlc_DeviceIterator iterator)
{
  if (!function_pointers_.DeviceIterator_isEnd) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_DeviceIterator_isEnd.");
  }
  return function_pointers_.DeviceIterator_isEnd(container, iterator);
}

void NimxlcTerminalAdaptorRestrictedLibrary::DeviceContainer_destroy(nimxlc_DeviceContainer container)
{
  if (!function_pointers_.DeviceContainer_destroy) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_DeviceContainer_destroy.");
  }
  return function_pointers_.DeviceContainer_destroy(container);
}

nimxlc_TerminalIterator NimxlcTerminalAdaptorRestrictedLibrary::TerminalContainer_begin(nimxlc_TerminalContainer container)
{
  if (!function_pointers_.TerminalContainer_begin) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_TerminalContainer_begin.");
  }
  return function_pointers_.TerminalContainer_begin(container);
}

void NimxlcTerminalAdaptorRestrictedLibrary::TerminalIterator_next(nimxlc_TerminalIterator* iterator)
{
  if (!function_pointers_.TerminalIterator_next) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_TerminalIterator_next.");
  }
  return function_pointers_.TerminalIterator_next(iterator);
}

bool NimxlcTerminalAdaptorRestrictedLibrary::TerminalIterator_isEnd(nimxlc_TerminalContainer container, nimxlc_TerminalIterator iterator)
{
  if (!function_pointers_.TerminalIterator_isEnd) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_TerminalIterator_isEnd.");
  }
  return function_pointers_.TerminalIterator_isEnd(container, iterator);
}

void NimxlcTerminalAdaptorRestrictedLibrary::TerminalContainer_destroy(nimxlc_TerminalContainer container)
{
  if (!function_pointers_.TerminalContainer_destroy) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_TerminalContainer_destroy.");
  }
  return function_pointers_.TerminalContainer_destroy(container);
}

const char* NimxlcTerminalAdaptorRestrictedLibrary::TerminalIterator_getTerminalName(nimxlc_TerminalContainer container, nimxlc_TerminalIterator iterator, nierr_Status* cStatus)
{
  if (!function_pointers_.TerminalIterator_getTerminalName) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_TerminalIterator_getTerminalName.");
  }
  return function_pointers_.TerminalIterator_getTerminalName(container, iterator, cStatus);
}

const char* NimxlcTerminalAdaptorRestrictedLibrary::TerminalIterator_getVisibility(nimxlc_TerminalContainer container, nimxlc_TerminalIterator iterator, nierr_Status* cStatus)
{
  if (!function_pointers_.TerminalIterator_getVisibility) {
    throw nidevice_grpc::LibraryLoadException("Could not find nimxlc_ta_nimxlc_TerminalIterator_getVisibility.");
  }
  return function_pointers_.TerminalIterator_getVisibility(container, iterator, cStatus);
}

}  // namespace nimxlcterminaladaptor_restricted_grpc
