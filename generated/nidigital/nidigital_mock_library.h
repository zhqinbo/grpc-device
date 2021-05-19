//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-Digital Pattern Driver
//---------------------------------------------------------------------
#ifndef NIDIGITAL_GRPC_MOCK_LIBRARY_H
#define NIDIGITAL_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nidigital_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiDigitalMockLibrary : public nidigital_grpc::NiDigitalLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, Abort, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, AbortKeepAlive, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ApplyLevelsAndTiming, (ViSession vi, ViConstString siteList, ViConstString levelsSheet, ViConstString timingSheet, ViConstString initialStateHighPins, ViConstString initialStateLowPins, ViConstString initialStateTristatePins), (override));
  MOCK_METHOD(ViStatus, ApplyTDROffsets, (ViSession vi, ViConstString channelList, ViInt32 numOffsets, ViReal64 offsets[]), (override));
  MOCK_METHOD(ViStatus, BurstPattern, (ViSession vi, ViConstString siteList, ViConstString startLabel, ViBoolean selectDigitalFunction, ViBoolean waitUntilDone, ViReal64 timeout), (override));
  MOCK_METHOD(ViStatus, ClearError, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClockGeneratorAbort, (ViSession vi, ViConstString channelList), (override));
  MOCK_METHOD(ViStatus, ClockGeneratorGenerateClock, (ViSession vi, ViConstString channelList, ViReal64 frequency, ViBoolean selectDigitalFunction), (override));
  MOCK_METHOD(ViStatus, ClockGeneratorInitiate, (ViSession vi, ViConstString channelList), (override));
  MOCK_METHOD(ViStatus, Close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, Commit, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureActiveLoadLevels, (ViSession vi, ViConstString channelList, ViReal64 iol, ViReal64 ioh, ViReal64 vcom), (override));
  MOCK_METHOD(ViStatus, ConfigureCycleNumberHistoryRAMTrigger, (ViSession vi, ViInt64 cycleNumber, ViInt32 pretriggerSamples), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeConditionalJumpTrigger, (ViSession vi, ViConstString triggerIdentifier, ViConstString source, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeStartTrigger, (ViSession vi, ViConstString source, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureFirstFailureHistoryRAMTrigger, (ViSession vi, ViInt32 pretriggerSamples), (override));
  MOCK_METHOD(ViStatus, ConfigureHistoryRAMCyclesToAcquire, (ViSession vi, ViInt32 cyclesToAcquire), (override));
  MOCK_METHOD(ViStatus, ConfigurePatternBurstSites, (ViSession vi, ViConstString siteList), (override));
  MOCK_METHOD(ViStatus, ConfigurePatternLabelHistoryRAMTrigger, (ViSession vi, ViConstString label, ViInt64 vectorOffset, ViInt64 cycleOffset, ViInt32 pretriggerSamples), (override));
  MOCK_METHOD(ViStatus, ConfigureStartLabel, (ViSession vi, ViConstString label), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeConditionalJumpTrigger, (ViSession vi, ViConstString triggerIdentifier), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureTerminationMode, (ViSession vi, ViConstString channelList, ViInt32 mode), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetCompareEdgesStrobe, (ViSession vi, ViConstString pinList, ViConstString timeSetName, ViReal64 strobeEdge), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetCompareEdgesStrobe2x, (ViSession vi, ViConstString pinList, ViConstString timeSetName, ViReal64 strobeEdge, ViReal64 strobe2Edge), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetDriveEdges, (ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 format, ViReal64 driveOnEdge, ViReal64 driveDataEdge, ViReal64 driveReturnEdge, ViReal64 driveOffEdge), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetDriveEdges2x, (ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 format, ViReal64 driveOnEdge, ViReal64 driveDataEdge, ViReal64 driveReturnEdge, ViReal64 driveOffEdge, ViReal64 driveData2Edge, ViReal64 driveReturn2Edge), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetDriveFormat, (ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 driveFormat), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetEdge, (ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 edge, ViReal64 time), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetEdgeMultiplier, (ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 edgeMultiplier), (override));
  MOCK_METHOD(ViStatus, ConfigureTimeSetPeriod, (ViSession vi, ViConstString timeSetName, ViReal64 period), (override));
  MOCK_METHOD(ViStatus, ConfigureVoltageLevels, (ViSession vi, ViConstString channelList, ViReal64 vil, ViReal64 vih, ViReal64 vol, ViReal64 voh, ViReal64 vterm), (override));
  MOCK_METHOD(ViStatus, CreateCaptureWaveformFromFileDigicapture, (ViSession vi, ViConstString waveformName, ViConstString waveformFilePath), (override));
  MOCK_METHOD(ViStatus, CreateCaptureWaveformParallel, (ViSession vi, ViConstString pinList, ViConstString waveformName), (override));
  MOCK_METHOD(ViStatus, CreateCaptureWaveformSerial, (ViSession vi, ViConstString pinList, ViConstString waveformName, ViUInt32 sampleWidth, ViInt32 bitOrder), (override));
  MOCK_METHOD(ViStatus, CreateChannelMap, (ViSession vi, ViInt32 numSites), (override));
  MOCK_METHOD(ViStatus, CreateSourceWaveformFromFileTDMS, (ViSession vi, ViConstString waveformName, ViConstString waveformFilePath, ViBoolean writeWaveformData), (override));
  MOCK_METHOD(ViStatus, CreatePinMap, (ViSession vi, ViConstString dutPinList, ViConstString systemPinList), (override));
  MOCK_METHOD(ViStatus, CreatePinGroup, (ViSession vi, ViConstString pinGroupName, ViConstString pinList), (override));
  MOCK_METHOD(ViStatus, CreateSourceWaveformParallel, (ViSession vi, ViConstString pinList, ViConstString waveformName, ViInt32 dataMapping), (override));
  MOCK_METHOD(ViStatus, CreateSourceWaveformSerial, (ViSession vi, ViConstString pinList, ViConstString waveformName, ViInt32 dataMapping, ViUInt32 sampleWidth, ViInt32 bitOrder), (override));
  MOCK_METHOD(ViStatus, CreateTimeSet, (ViSession vi, ViConstString name), (override));
  MOCK_METHOD(ViStatus, DeleteAllTimeSets, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableConditionalJumpTrigger, (ViSession vi, ViConstString triggerIdentifier), (override));
  MOCK_METHOD(ViStatus, DisableSites, (ViSession vi, ViConstString siteList), (override));
  MOCK_METHOD(ViStatus, DisableStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, EnableSites, (ViSession vi, ViConstString siteList), (override));
  MOCK_METHOD(ViStatus, EndChannelMap, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ErrorMessage, (ViSession vi, ViStatus errorCode, ViChar errorMessage[256]), (override));
  MOCK_METHOD(ViStatus, ExportSignal, (ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal), (override));
  MOCK_METHOD(ViStatus, FetchHistoryRAMCycleInformation, (ViSession vi, ViConstString site, ViInt64 sampleIndex, ViInt32* patternIndex, ViInt32* timeSetIndex, ViInt64* vectorNumber, ViInt64* cycleNumber, ViInt32* numDutCycles), (override));
  MOCK_METHOD(ViStatus, FetchHistoryRAMScanCycleNumber, (ViSession vi, ViConstString site, ViInt64 sampleIndex, ViInt64* scanCycleNumber), (override));
  MOCK_METHOD(ViStatus, FrequencyCounterConfigureMeasurementMode, (ViSession vi, ViInt32 measurementMode), (override));
  MOCK_METHOD(ViStatus, FrequencyCounterConfigureMeasurementTime, (ViSession vi, ViConstString channelList, ViReal64 measurementTime), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt64* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViSession, (ViSession vi, ViConstString channelList, ViAttr attribute, ViSession* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 bufferSize, ViChar value[]), (override));
  MOCK_METHOD(ViStatus, GetChannelName, (ViSession vi, ViInt32 index, ViInt32 nameBufferSize, ViChar name[]), (override));
  MOCK_METHOD(ViStatus, GetChannelNameFromString, (ViSession vi, ViConstString indices, ViInt32 nameBufferSize, ViChar names[]), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]), (override));
  MOCK_METHOD(ViStatus, GetHistoryRAMSampleCount, (ViSession vi, ViConstString site, ViInt64* sampleCount), (override));
  MOCK_METHOD(ViStatus, GetPatternName, (ViSession vi, ViInt32 patternIndex, ViInt32 nameBufferSize, ViChar name[]), (override));
  MOCK_METHOD(ViStatus, GetPatternPinList, (ViSession vi, ViConstString startLabel, ViInt32 pinListBufferSize, ViChar pinList[]), (override));
  MOCK_METHOD(ViStatus, GetPinName, (ViSession vi, ViInt32 pinIndex, ViInt32 nameBufferSize, ViChar name[]), (override));
  MOCK_METHOD(ViStatus, GetTimeSetDriveFormat, (ViSession vi, ViConstString pin, ViConstString timeSetName, ViInt32* format), (override));
  MOCK_METHOD(ViStatus, GetTimeSetEdge, (ViSession vi, ViConstString pin, ViConstString timeSetName, ViInt32 edge, ViReal64* time), (override));
  MOCK_METHOD(ViStatus, GetTimeSetEdgeMultiplier, (ViSession vi, ViConstString pin, ViConstString timeSetName, ViInt32* edgeMultiplier), (override));
  MOCK_METHOD(ViStatus, GetTimeSetName, (ViSession vi, ViInt32 timeSetIndex, ViInt32 nameBufferSize, ViChar name[]), (override));
  MOCK_METHOD(ViStatus, GetTimeSetPeriod, (ViSession vi, ViConstString timeSetName, ViReal64* period), (override));
  MOCK_METHOD(ViStatus, Init, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, InitWithOptions, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, Initiate, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, IsDone, (ViSession vi, ViBoolean* done), (override));
  MOCK_METHOD(ViStatus, IsSiteEnabled, (ViSession vi, ViConstString site, ViBoolean* enable), (override));
  MOCK_METHOD(ViStatus, LoadLevels, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, LoadPattern, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, LoadPinMap, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, LoadSpecifications, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, LoadTiming, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, LockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, MapPinToChannel, (ViSession vi, ViConstString pin, ViInt32 site, ViConstString channel), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureApertureTime, (ViSession vi, ViConstString channelList, ViReal64 apertureTime, ViInt32 units), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureCurrentLevel, (ViSession vi, ViConstString channelList, ViReal64 currentLevel), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureCurrentLevelRange, (ViSession vi, ViConstString channelList, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureCurrentLimit, (ViSession vi, ViConstString channelList, ViInt32 behavior, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureCurrentLimitRange, (ViSession vi, ViConstString channelList, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureOutputFunction, (ViSession vi, ViConstString channelList, ViInt32 outputFunction), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureVoltageLevel, (ViSession vi, ViConstString channelList, ViReal64 voltageLevel), (override));
  MOCK_METHOD(ViStatus, PPMUConfigureVoltageLimits, (ViSession vi, ViConstString channelList, ViReal64 lowerVoltageLimit, ViReal64 upperVoltageLimit), (override));
  MOCK_METHOD(ViStatus, PPMUSource, (ViSession vi, ViConstString channelList), (override));
  MOCK_METHOD(ViStatus, ReadSequencerFlag, (ViSession vi, ViConstString flag, ViBoolean* value), (override));
  MOCK_METHOD(ViStatus, ReadSequencerRegister, (ViSession vi, ViConstString reg, ViInt32* value), (override));
  MOCK_METHOD(ViStatus, Reset, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetAttribute, (ViSession vi, ViConstString channelName, ViAttr attributeId), (override));
  MOCK_METHOD(ViStatus, ResetDevice, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SelectFunction, (ViSession vi, ViConstString channelList, ViInt32 function), (override));
  MOCK_METHOD(ViStatus, SelfCalibrate, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SelfTest, (ViSession vi, ViInt16* testResult, ViChar testMessage[2048]), (override));
  MOCK_METHOD(ViStatus, SendSoftwareEdgeTrigger, (ViSession vi, ViInt32 trigger, ViConstString triggerIdentifier), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt64 value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViSession, (ViSession vi, ViConstString channelList, ViAttr attribute, ViSession value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value), (override));
  MOCK_METHOD(ViStatus, UnloadAllPatterns, (ViSession vi, ViBoolean unloadKeepAlivePattern), (override));
  MOCK_METHOD(ViStatus, UnloadSpecifications, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, UnlockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, WaitUntilDone, (ViSession vi, ViReal64 timeout), (override));
  MOCK_METHOD(ViStatus, WriteSequencerFlag, (ViSession vi, ViConstString flag, ViBoolean value), (override));
  MOCK_METHOD(ViStatus, WriteSequencerRegister, (ViSession vi, ViConstString reg, ViInt32 value), (override));
  MOCK_METHOD(ViStatus, WriteSourceWaveformBroadcastU32, (ViSession vi, ViConstString waveformName, ViInt32 waveformSize, ViUInt32 waveformData[]), (override));
  MOCK_METHOD(ViStatus, WriteSourceWaveformDataFromFileTDMS, (ViSession vi, ViConstString waveformName, ViConstString waveformFilePath), (override));
  MOCK_METHOD(ViStatus, WriteSourceWaveformSiteUniqueU32, (ViSession vi, ViConstString siteList, ViConstString waveformName, ViInt32 numWaveforms, ViInt32 samplesPerWaveform, ViUInt32 waveformData[1]), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIDIGITAL_GRPC_MOCK_LIBRARY_H
