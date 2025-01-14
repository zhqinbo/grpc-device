//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-FAKE-EXTENSION
//---------------------------------------------------------------------
#ifndef NIFAKE_EXTENSION_GRPC_LIBRARY_WRAPPER_H
#define NIFAKE_EXTENSION_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niFake.h>

namespace nifake_extension_grpc {

class NiFakeExtensionLibraryInterface {
 public:
  virtual ~NiFakeExtensionLibraryInterface() {}

  virtual ViStatus AddCoolFunctionality(ViSession vi, ViInt32 param) = 0;
};

}  // namespace nifake_extension_grpc
#endif  // NIFAKE_EXTENSION_GRPC_LIBRARY_WRAPPER_H
