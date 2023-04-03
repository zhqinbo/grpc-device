//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-rfmxcdma2k
//---------------------------------------------------------------------
#ifndef NIRFMXCDMA2K_GRPC_LIBRARY_WRAPPER_H
#define NIRFMXCDMA2K_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niRFmxCDMA2k.h>

namespace nirfmxcdma2k_grpc {

class NiRFmxCDMA2kLibraryInterface {
 public:
  virtual ~NiRFmxCDMA2kLibraryInterface() {}

  virtual int32 ACPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 ACPCfgMeasurementMethod(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 measurementMethod) = 0;
  virtual int32 ACPCfgNoiseCompensationEnabled(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 noiseCompensationEnabled) = 0;
  virtual int32 ACPCfgNumberOfOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfOffsets) = 0;
  virtual int32 ACPCfgRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 rbwAuto, float64 rbw, int32 rbwFilterType) = 0;
  virtual int32 ACPCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 ACPFetchAbsolutePowersTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 traceIndex, float64* x0, float64* dx, float32 absolutePowersTrace[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchCarrierAbsolutePower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* carrierAbsolutePower) = 0;
  virtual int32 ACPFetchOffsetMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* lowerRelativePower, float64* upperRelativePower, float64* lowerAbsolutePower, float64* upperAbsolutePower) = 0;
  virtual int32 ACPFetchOffsetMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 lowerRelativePower[], float64 upperRelativePower[], float64 lowerAbsolutePower[], float64 upperAbsolutePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchRelativePowersTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 traceIndex, float64* x0, float64* dx, float32 relativePowersTrace[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 AnalyzeIQ1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved) = 0;
  virtual int32 AnalyzeSpectrum1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, float32 spectrum[], int32 arraySize, int32 reset, int64 reserved) = 0;
  virtual int32 AutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementInterval, float64* referenceLevel) = 0;
  virtual int32 BuildChannelString(char selectorString[], int32 channelNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildOffsetString(char selectorString[], int32 offsetNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[]) = 0;
  virtual int32 CDACfgMeasurementChannel(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 walshCodeLength, int32 walshCodeNumber, int32 branch) = 0;
  virtual int32 CDACfgPowerUnit(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 powerUnit) = 0;
  virtual int32 CDACfgSynchronizationModeAndInterval(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 synchronizationMode, int32 measurementOffset, int32 measurementLength) = 0;
  virtual int32 CDAFetchCodeDomainIAndQPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* iMeanActivePower, float64* qMeanActivePower, float64* iPeakInactivePower, float64* qPeakInactivePower) = 0;
  virtual int32 CDAFetchCodeDomainIAndQPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 iCodeDomainPowers[], float32 qCodeDomainPowers[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CDAFetchCodeDomainPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* totalPower, float64* totalActivePower, float64* meanActivePower, float64* peakActivePower, float64* meanInactivePower, float64* peakInactivePower) = 0;
  virtual int32 CDAFetchIQImpairments(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* iqOriginOffset, float64* iqGainImbalance, float64* iqQuadratureError) = 0;
  virtual int32 CDAFetchSymbolConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle symbolConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CDAFetchSymbolEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* rmsSymbolEVM, float64* peakSymbolEVM, float64* rmsSymbolMagnitudeError, float64* rmsSymbolPhaseError, float64* meanSymbolPower, float64* frequencyError, float64* chipRateError) = 0;
  virtual int32 CDAFetchSymbolEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 symbolEVM[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CDAFetchSymbolMagnitudeErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 symbolMagnitudeError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CDAFetchSymbolPhaseErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 symbolPhaseError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CDAFetchSymbolPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 symbolPowers[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CHPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 CHPCfgRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 rbwAuto, float64 rbw, int32 rbwFilterType) = 0;
  virtual int32 CHPCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 CHPFetchCarrierAbsolutePower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* carrierAbsolutePower) = 0;
  virtual int32 CHPFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CfgBandClass(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 bandClass) = 0;
  virtual int32 CfgChannelConfigurationMode(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 channelConfigurationMode) = 0;
  virtual int32 CfgDigitalEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CfgExternalAttenuation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation) = 0;
  virtual int32 CfgFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency) = 0;
  virtual int32 CfgFrequencyChannelNumber(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 linkDirection, int32 bandClass, int32 channelNumber) = 0;
  virtual int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency) = 0;
  virtual int32 CfgIQPowerEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], int32 iqPowerEdgeSlope, float64 iqPowerEdgeLevel, float64 triggerDelay, int32 minimumQuietTimeMode, float64 minimumQuietTime, int32 iqPowerEdgeLevelType, int32 enableTrigger) = 0;
  virtual int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue) = 0;
  virtual int32 CfgNumberOfChannels(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfChannels) = 0;
  virtual int32 CfgRF(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation) = 0;
  virtual int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue) = 0;
  virtual int32 CfgRadioConfiguration(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 radioConfiguration) = 0;
  virtual int32 CfgReferenceLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel) = 0;
  virtual int32 CfgSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CfgUplinkSpreading(niRFmxInstrHandle instrumentHandle, char selectorString[], int64 uplinkSpreadingLongCodeMask) = 0;
  virtual int32 CfgUserDefinedChannel(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 walshCodeLength, int32 walshCodeNumber, int32 branch) = 0;
  virtual int32 CfgUserDefinedChannelArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 walshCodeLength[], int32 walshCodeNumber[], int32 branch[], int32 numberOfElements) = 0;
  virtual int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* done) = 0;
  virtual int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[]) = 0;
  virtual int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy) = 0;
  virtual int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DeleteSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DisableTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 GetAllNamedResultNames(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists) = 0;
  virtual int32 GetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal) = 0;
  virtual int32 GetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal) = 0;
  virtual int32 GetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal) = 0;
  virtual int32 GetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal) = 0;
  virtual int32 GetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal) = 0;
  virtual int32 GetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal) = 0;
  virtual int32 GetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[]) = 0;
  virtual int32 GetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal) = 0;
  virtual int32 GetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal) = 0;
  virtual int32 GetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal) = 0;
  virtual int32 GetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession) = 0;
  virtual int32 InitializeFromNIRFSASession(uInt32 nirfsaSession, niRFmxInstrHandle* handleOut) = 0;
  virtual int32 Initiate(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[]) = 0;
  virtual int32 ModAccCfgSynchronizationModeAndInterval(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 synchronizationMode, int32 measurementOffset, int32 measurementLength) = 0;
  virtual int32 ModAccFetchConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchDetectedChannel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* detectedWalshCodeLength, int32* detectedWalshCodeNumber, int32* detectedBranch) = 0;
  virtual int32 ModAccFetchDetectedChannelArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 detectedWalshCodeLength[], int32 detectedWalshCodeNumber[], int32 detectedBranch[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* rmsevm, float64* peakEVM, float64* rho, float64* frequencyError, float64* chipRateError, float64* rmsMagnitudeError, float64* rmsPhaseError) = 0;
  virtual int32 ModAccFetchEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 evm[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchIQImpairments(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* iqOriginOffset, float64* iqGainImbalance, float64* iqQuadratureError) = 0;
  virtual int32 ModAccFetchMagnitudeErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 magnitudeError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchNumberOfDetectedChannels(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* numberOfDetectedChannels) = 0;
  virtual int32 ModAccFetchPeakActiveCDE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakActiveCDE, int32* peakActiveCDEWalshCodeLength, int32* peakActiveCDEWalshCodeNumber, int32* peakActiveCDEBranch) = 0;
  virtual int32 ModAccFetchPeakCDE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakCDE, int32* peakCDEWalshCodeNumber, int32* peakCDEBranch) = 0;
  virtual int32 ModAccFetchPhaseErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 phaseError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 OBWCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 OBWCfgRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 rbwAuto, float64 rbw, int32 rbwFilterType) = 0;
  virtual int32 OBWCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 OBWFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* occupiedBandwidth, float64* absolutePower, float64* startFrequency, float64* stopFrequency) = 0;
  virtual int32 OBWFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 QEVMCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount) = 0;
  virtual int32 QEVMCfgMeasurementLength(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 measurementLength) = 0;
  virtual int32 QEVMFetchConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 QEVMFetchEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanRMSEVM, float64* maximumPeakEVM, float64* meanFrequencyError, float64* meanMagnitudeError, float64* meanPhaseError, float64* meanChipRateError) = 0;
  virtual int32 QEVMFetchEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 evm[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 QEVMFetchIQImpairments(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanIQOriginOffset, float64* meanIQGainImbalance, float64* meanIQQuadratureError, float64* maximumIQOriginOffset, float64* maximumIQGainImbalance, float64* maximumIQQuadratureError) = 0;
  virtual int32 QEVMFetchMagnitudeErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 magnitudeError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 QEVMFetchPhaseErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 phaseError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID) = 0;
  virtual int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 SEMCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 SEMCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 SEMFetchCarrierAbsoluteIntegratedPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* carrierAbsoluteIntegratedPower) = 0;
  virtual int32 SEMFetchLowerOffsetMargin(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus, float64* margin, float64* marginFrequency, float64* marginAbsolutePower, float64* marginRelativePower) = 0;
  virtual int32 SEMFetchLowerOffsetMarginArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 measurementStatus[], float64 margin[], float64 marginFrequency[], float64 marginAbsolutePower[], float64 marginRelativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchLowerOffsetPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* absoluteIntegratedPower, float64* relativeIntegratedPower, float64* absolutePeakPower, float64* peakFrequency, float64* relativePeakPower) = 0;
  virtual int32 SEMFetchLowerOffsetPowerArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 absoluteIntegratedPower[], float64 relativeIntegratedPower[], float64 absolutePeakPower[], float64 peakFrequency[], float64 relativePeakPower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus) = 0;
  virtual int32 SEMFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], float32 relativeMask[], float32 absoluteMask[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchUpperOffsetMargin(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus, float64* margin, float64* marginFrequency, float64* marginAbsolutePower, float64* marginRelativePower) = 0;
  virtual int32 SEMFetchUpperOffsetMarginArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 measurementStatus[], float64 margin[], float64 marginFrequency[], float64 marginAbsolutePower[], float64 marginRelativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchUpperOffsetPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* absoluteIntegratedPower, float64* relativeIntegratedPower, float64* absolutePeakPower, float64* peakFrequency, float64* relativePeakPower) = 0;
  virtual int32 SEMFetchUpperOffsetPowerArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 absoluteIntegratedPower[], float64 relativeIntegratedPower[], float64 absolutePeakPower[], float64 peakFrequency[], float64 relativePeakPower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SelectMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces) = 0;
  virtual int32 SendSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle) = 0;
  virtual int32 SetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal) = 0;
  virtual int32 SetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal) = 0;
  virtual int32 SetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal) = 0;
  virtual int32 SetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal) = 0;
  virtual int32 SetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal) = 0;
  virtual int32 SetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal) = 0;
  virtual int32 SetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[]) = 0;
  virtual int32 SetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal) = 0;
  virtual int32 SetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal) = 0;
  virtual int32 SetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal) = 0;
  virtual int32 SetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize) = 0;
  virtual int32 SlotPhaseCfgSynchronizationModeAndInterval(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 synchronizationMode, int32 measurementOffset, int32 measurementLength) = 0;
  virtual int32 SlotPhaseFetchChipPhaseErrorLinearFitTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 chipPhaseErrorLinearFit[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SlotPhaseFetchChipPhaseErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 chipPhaseError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SlotPhaseFetchMaximumPhaseDiscontinuity(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* maximumPhaseDiscontinuity) = 0;
  virtual int32 SlotPhaseFetchPhaseDiscontinuities(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 slotPhaseDiscontinuity[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SlotPowerCfgSynchronizationModeAndInterval(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 synchronizationMode, int32 measurementOffset, int32 measurementLength) = 0;
  virtual int32 SlotPowerFetchPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 slotPower[], float64 slotPowerDelta[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout) = 0;
  virtual int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
};

}  // namespace nirfmxcdma2k_grpc
#endif  // NIRFMXCDMA2K_GRPC_LIBRARY_WRAPPER_H
