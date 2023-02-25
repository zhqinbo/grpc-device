//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-rfmxtdscdma Metadata
//---------------------------------------------------------------------
#include "nirfmxtdscdma_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "niRFmxTDSCDMA.dll";
#else
static const char* kLibraryName = "libnirfmxtdscdma.so.1";
#endif

namespace nirfmxtdscdma_grpc {

NiRFmxTDSCDMALibrary::NiRFmxTDSCDMALibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Close = reinterpret_cast<ClosePtr>(shared_library_.get_function_pointer("RFmxTDSCDMA_Close"));
  function_pointers_.GetError = reinterpret_cast<GetErrorPtr>(shared_library_.get_function_pointer("RFmxTDSCDMA_GetError"));
  function_pointers_.GetErrorString = reinterpret_cast<GetErrorStringPtr>(shared_library_.get_function_pointer("RFmxTDSCDMA_GetErrorString"));
  function_pointers_.Initialize = reinterpret_cast<InitializePtr>(shared_library_.get_function_pointer("RFmxTDSCDMA_Initialize"));
}

NiRFmxTDSCDMALibrary::~NiRFmxTDSCDMALibrary()
{
}

::grpc::Status NiRFmxTDSCDMALibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

int32 NiRFmxTDSCDMALibrary::Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy)
{
  if (!function_pointers_.Close) {
    throw nidevice_grpc::LibraryLoadException("Could not find RFmxTDSCDMA_Close.");
  }
  return function_pointers_.Close(instrumentHandle, forceDestroy);
}

int32 NiRFmxTDSCDMALibrary::GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[])
{
  if (!function_pointers_.GetError) {
    throw nidevice_grpc::LibraryLoadException("Could not find RFmxTDSCDMA_GetError.");
  }
  return function_pointers_.GetError(instrumentHandle, errorCode, errorDescriptionBufferSize, errorDescription);
}

int32 NiRFmxTDSCDMALibrary::GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[])
{
  if (!function_pointers_.GetErrorString) {
    throw nidevice_grpc::LibraryLoadException("Could not find RFmxTDSCDMA_GetErrorString.");
  }
  return function_pointers_.GetErrorString(instrumentHandle, errorCode, errorDescriptionBufferSize, errorDescription);
}

int32 NiRFmxTDSCDMALibrary::Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession)
{
  if (!function_pointers_.Initialize) {
    throw nidevice_grpc::LibraryLoadException("Could not find RFmxTDSCDMA_Initialize.");
  }
  return function_pointers_.Initialize(resourceName, optionString, handleOut, isNewSession);
}

}  // namespace nirfmxtdscdma_grpc
