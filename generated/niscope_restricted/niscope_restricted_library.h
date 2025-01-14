//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-SCOPE-RESTRICTED
//---------------------------------------------------------------------
#ifndef NISCOPE_RESTRICTED_GRPC_LIBRARY_H
#define NISCOPE_RESTRICTED_GRPC_LIBRARY_H

#include "niscope_restricted_library_interface.h"

#include <server/shared_library.h>

namespace niscope_restricted_grpc {

class NiScopeRestrictedLibrary : public niscope_restricted_grpc::NiScopeRestrictedLibraryInterface {
 public:
  NiScopeRestrictedLibrary();
  virtual ~NiScopeRestrictedLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  ViStatus GetErrorMessage(ViSession vi, ViStatus errorCode, ViInt32 bufferSize, ViChar errorMessage[]);
  ViStatus GetStartTimestampInformation(ViSession vi, ViUInt32* sysTimeIn128BitsT1, ViUInt32* sysTimeIn128BitsT2, ViUInt32* sysTimeIn128BitsT3, ViUInt32* sysTimeIn128BitsT4, ViReal64* deviceTimeInAbsoluteTimeUnits);

 private:
  using GetErrorPtr = ViStatus (*)(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  using GetErrorMessagePtr = ViStatus (*)(ViSession vi, ViStatus errorCode, ViInt32 bufferSize, ViChar errorMessage[]);
  using GetStartTimestampInformationPtr = ViStatus (*)(ViSession vi, ViUInt32* sysTimeIn128BitsT1, ViUInt32* sysTimeIn128BitsT2, ViUInt32* sysTimeIn128BitsT3, ViUInt32* sysTimeIn128BitsT4, ViReal64* deviceTimeInAbsoluteTimeUnits);

  typedef struct FunctionPointers {
    GetErrorPtr GetError;
    GetErrorMessagePtr GetErrorMessage;
    GetStartTimestampInformationPtr GetStartTimestampInformation;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace niscope_restricted_grpc

#endif  // NISCOPE_RESTRICTED_GRPC_LIBRARY_H
