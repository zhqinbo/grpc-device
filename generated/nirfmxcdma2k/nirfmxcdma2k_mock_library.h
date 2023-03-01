//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-rfmxcdma2k
//---------------------------------------------------------------------
#ifndef NIRFMXCDMA2K_GRPC_MOCK_LIBRARY_H
#define NIRFMXCDMA2K_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nirfmxcdma2k_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiRFmxCDMA2kMockLibrary : public nirfmxcdma2k_grpc::NiRFmxCDMA2kLibraryInterface {
 public:
  MOCK_METHOD(int32, Close, (niRFmxInstrHandle instrumentHandle, int32 forceDestroy), (override));
  MOCK_METHOD(int32, GetError, (niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]), (override));
  MOCK_METHOD(int32, GetErrorString, (niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]), (override));
  MOCK_METHOD(int32, Initialize, (char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIRFMXCDMA2K_GRPC_MOCK_LIBRARY_H
