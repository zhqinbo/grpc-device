//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-RFMXNR
//---------------------------------------------------------------------
#ifndef NIRFMXNR_GRPC_LIBRARY_WRAPPER_H
#define NIRFMXNR_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niRFmxNR.h>

namespace nirfmxnr_grpc {

class NiRFmxNRLibraryInterface {
 public:
  virtual ~NiRFmxNRLibraryInterface() {}

  virtual int32 ACPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 ACPCfgMeasurementMethod(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 measurementMethod) = 0;
  virtual int32 ACPCfgNoiseCompensationEnabled(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 noiseCompensationEnabled) = 0;
  virtual int32 ACPCfgNumberOfENDCOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfENDCOffsets) = 0;
  virtual int32 ACPCfgNumberOfEUTRAOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfEUTRAOffsets) = 0;
  virtual int32 ACPCfgNumberOfNROffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfNROffsets) = 0;
  virtual int32 ACPCfgNumberOfUTRAOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfUTRAOffsets) = 0;
  virtual int32 ACPCfgPowerUnits(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 powerUnits) = 0;
  virtual int32 ACPCfgRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 rbwAuto, float64 rbw, int32 rbwFilterType) = 0;
  virtual int32 ACPCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 ACPFetchAbsolutePowersTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 traceIndex, float64* x0, float64* dx, float32 absolutePowersTrace[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchComponentCarrierMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* absolutePower, float64* relativePower) = 0;
  virtual int32 ACPFetchComponentCarrierMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 absolutePower[], float64 relativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchOffsetMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* lowerRelativePower, float64* upperRelativePower, float64* lowerAbsolutePower, float64* upperAbsolutePower) = 0;
  virtual int32 ACPFetchOffsetMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 lowerRelativePower[], float64 upperRelativePower[], float64 lowerAbsolutePower[], float64 upperAbsolutePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchRelativePowersTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 traceIndex, float64* x0, float64* dx, float32 relativePowersTrace[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchSubblockMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* subblockPower, float64* integrationBandwidth, float64* frequency) = 0;
  virtual int32 ACPFetchTotalAggregatedPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* totalAggregatedPower) = 0;
  virtual int32 ACPValidateNoiseCalibrationData(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* noiseCalibrationDataValid) = 0;
  virtual int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 AnalyzeIQ1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved) = 0;
  virtual int32 AnalyzeSpectrum1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, float32 spectrum[], int32 arraySize, int32 reset, int64 reserved) = 0;
  virtual int32 AutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementInterval, float64* referenceLevel) = 0;
  virtual int32 BuildBandwidthPartString(char selectorString[], int32 bandwidthPartNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildCORESETClusterString(char selectorString[], int32 coresetClusterNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildCORESETString(char selectorString[], int32 coresetNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildCarrierString(char selectorString[], int32 carrierNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildListStepString(char listName[], char resultName[], int32 stepNumber, int32 selectorStringLength, char selectorString[]) = 0;
  virtual int32 BuildListString(char listName[], char resultName[], int32 selectorStringLength, char selectorString[]) = 0;
  virtual int32 BuildOffsetString(char selectorString[], int32 offsetNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildPDCCHString(char selectorString[], int32 pdcchNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildPDSCHClusterString(char selectorString[], int32 pdschClusterNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildPDSCHString(char selectorString[], int32 pdschNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildPUSCHClusterString(char selectorString[], int32 puschClusterNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildPUSCHString(char selectorString[], int32 puschNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[]) = 0;
  virtual int32 BuildSubblockString(char selectorString[], int32 subblockNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildUserString(char selectorString[], int32 userNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 CHPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 CHPCfgRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 rbwAuto, float64 rbw, int32 rbwFilterType) = 0;
  virtual int32 CHPCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 CHPFetchComponentCarrierMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* absolutePower, float64* relativePower) = 0;
  virtual int32 CHPFetchComponentCarrierMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 absolutePower[], float64 relativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CHPFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 CHPFetchSubblockPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* subblockPower) = 0;
  virtual int32 CHPFetchTotalAggregatedPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* totalAggregatedPower) = 0;
  virtual int32 CHPValidateNoiseCalibrationData(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* noiseCalibrationDataValid) = 0;
  virtual int32 CfgDigitalEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CfgExternalAttenuation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation) = 0;
  virtual int32 CfgFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency) = 0;
  virtual int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency) = 0;
  virtual int32 CfgIQPowerEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], int32 iqPowerEdgeSlope, float64 iqPowerEdgeLevel, float64 triggerDelay, int32 triggerMinQuietTimeMode, float64 triggerMinQuietTimeDuration, int32 iqPowerEdgeLevelType, int32 enableTrigger) = 0;
  virtual int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue) = 0;
  virtual int32 CfgRF(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation) = 0;
  virtual int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue) = 0;
  virtual int32 CfgReferenceLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel) = 0;
  virtual int32 CfgSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CfggNodeBCategory(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 gNodeBCategory) = 0;
  virtual int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* isDone) = 0;
  virtual int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 ClearNoiseCalibrationDatabase(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[]) = 0;
  virtual int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy) = 0;
  virtual int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CreateList(niRFmxInstrHandle instrumentHandle, char listName[]) = 0;
  virtual int32 CreateListStep(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* createdStepIndex) = 0;
  virtual int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DeleteList(niRFmxInstrHandle instrumentHandle, char listName[]) = 0;
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
  virtual int32 ModAccAutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
  virtual int32 ModAccCfgMeasurementMode(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 measurementMode) = 0;
  virtual int32 ModAccCfgNoiseCompensationEnabled(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 noiseCompensationEnabled) = 0;
  virtual int32 ModAccCfgReferenceWaveform(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 x0, float64 dx, NIComplexSingle referenceWaveform[], int32 arraySize) = 0;
  virtual int32 ModAccClearNoiseCalibrationDatabase(niRFmxInstrHandle instrumentHandle) = 0;
  virtual int32 ModAccFetchCompositeEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* compositeRMSEVMMean, float64* compositePeakEVMMaximum) = 0;
  virtual int32 ModAccFetchFrequencyErrorMean(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* frequencyErrorMean) = 0;
  virtual int32 ModAccFetchFrequencyErrorPerSlotMaximumTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 frequencyErrorPerSlotMaximum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchIQGainImbalancePerSubcarrierMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 iqGainImbalancePerSubcarrierMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchIQQuadratureErrorPerSubcarrierMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 iqQuadratureErrorPerSubcarrierMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchInBandEmissionTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 inBandEmission[], float32 inBandEmissionMask[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPBCHDMRSConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle pbchdmrsConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPBCHDMRSRMSEVMPerSubcarrierMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pbchdmrsrmsevmPerSubcarrierMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPBCHDMRSRMSEVMPerSymbolMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pbchdmrsrmsevmPerSymbolMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPBCHDataConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle pbchDataConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPBCHDataRMSEVMPerSubcarrierMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pbchDataRMSEVMPerSubcarrierMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPBCHDataRMSEVMPerSymbolMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pbchDataRMSEVMPerSymbolMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCH1024QAMConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle qam1024Constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCH16QAMConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle qam16Constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCH256QAMConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle qam256Constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCH64QAMConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle qam64Constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCH8PSKConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle psk8Constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCHDMRSConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle pdschdmrsConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCHDataConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle pdschDataConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCHDemodulatedBits(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int8 bits[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCHPTRSConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle pdschptrsConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPDSCHQPSKConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle qpskConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPSSConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle pssConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPSSRMSEVMPerSubcarrierMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pssrmsevmPerSubcarrierMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPSSRMSEVMPerSymbolMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pssrmsevmPerSymbolMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPUSCHDMRSConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle puschdmrsConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPUSCHDataConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle puschDataConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPUSCHDemodulatedBits(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int8 bits[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPUSCHPTRSConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle puschptrsConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPUSCHPhaseOffsetTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 puschPhaseOffset[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPeakEVMPerSlotMaximumTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 peakEVMPerSlotMaximum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPeakEVMPerSubcarrierMaximumTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 peakEVMPerSubcarrierMaximum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPeakEVMPerSymbolMaximumTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 peakEVMPerSymbolMaximum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchRMSEVMHighPerSymbolMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 rmsevmHighPerSymbolMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchRMSEVMLowPerSymbolMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 rmsevmLowPerSymbolMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchRMSEVMPerSlotMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 rmsevmPerSlotMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchRMSEVMPerSubcarrierMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 rmsevmPerSubcarrierMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchRMSEVMPerSymbolMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 rmsevmPerSymbolMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchSSSConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle sssConstellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchSSSRMSEVMPerSubcarrierMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 sssrmsevmPerSubcarrierMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchSSSRMSEVMPerSymbolMeanTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 sssrmsevmPerSymbolMean[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchSpectralFlatnessTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectralFlatness[], float32 spectralFlatnessLowerMask[], float32 spectralFlatnessUpperMask[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchSubblockInBandEmissionTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 subblockInBandEmission[], float64 subblockInBandEmissionMask[], float64 subblockInBandEmissionRBIndices[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchTransientPeriodLocationsTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 transientPeriodLocations[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccValidateCalibrationData(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* calibrationDataValid) = 0;
  virtual int32 OBWCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 OBWCfgRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 rbwAuto, float64 rbw, int32 rbwFilterType) = 0;
  virtual int32 OBWCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 OBWFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* occupiedBandwidth, float64* absolutePower, float64* startFrequency, float64* stopFrequency) = 0;
  virtual int32 OBWFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 PVTCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 PVTCfgMeasurementMethod(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 measurementMethod) = 0;
  virtual int32 PVTCfgOFFPowerExclusionPeriods(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offPowerExclusionBefore, float64 offPowerExclusionAfter) = 0;
  virtual int32 PVTFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus, float64* absoluteOFFPowerBefore, float64* absoluteOFFPowerAfter, float64* absoluteONPower, float64* burstWidth) = 0;
  virtual int32 PVTFetchMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 measurementStatus[], float64 absoluteOFFPowerBefore[], float64 absoluteOFFPowerAfter[], float64 absoluteONPower[], float64 burstWidth[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 PVTFetchSignalPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 signalPower[], float32 absoluteLimit[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 PVTFetchWindowedSignalPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 windowedSignalPower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID) = 0;
  virtual int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 SEMCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 SEMCfgComponentCarrierRatedOutputPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 componentCarrierRatedOutputPower) = 0;
  virtual int32 SEMCfgComponentCarrierRatedOutputPowerArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 componentCarrierRatedOutputPower[], int32 numberOfElements) = 0;
  virtual int32 SEMCfgNumberOfOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfOffsets) = 0;
  virtual int32 SEMCfgOffsetAbsoluteLimit(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 absoluteLimitStart, float64 absoluteLimitStop) = 0;
  virtual int32 SEMCfgOffsetAbsoluteLimitArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 absoluteLimitStart[], float64 absoluteLimitStop[], int32 numberOfElements) = 0;
  virtual int32 SEMCfgOffsetBandwidthIntegral(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 bandwidthIntegral) = 0;
  virtual int32 SEMCfgOffsetBandwidthIntegralArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 bandwidthIntegral[], int32 numberOfElements) = 0;
  virtual int32 SEMCfgOffsetFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offsetStartFrequency, float64 offsetStopFrequency, int32 offsetSideband) = 0;
  virtual int32 SEMCfgOffsetFrequencyArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offsetStartFrequency[], float64 offsetStopFrequency[], int32 offsetSideband[], int32 numberOfElements) = 0;
  virtual int32 SEMCfgOffsetLimitFailMask(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 limitFailMask) = 0;
  virtual int32 SEMCfgOffsetLimitFailMaskArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 limitFailMask[], int32 numberOfElements) = 0;
  virtual int32 SEMCfgOffsetRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offsetRBW, int32 offsetRBWFilterType) = 0;
  virtual int32 SEMCfgOffsetRBWFilterArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 offsetRBW[], int32 offsetRBWFilterType[], int32 numberOfElements) = 0;
  virtual int32 SEMCfgOffsetRelativeLimit(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 relativeLimitStart, float64 relativeLimitStop) = 0;
  virtual int32 SEMCfgOffsetRelativeLimitArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 relativeLimitStart[], float64 relativeLimitStop[], int32 numberOfElements) = 0;
  virtual int32 SEMCfgSweepTime(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sweepTimeAuto, float64 sweepTimeInterval) = 0;
  virtual int32 SEMCfgUplinkMaskType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 uplinkMaskType) = 0;
  virtual int32 SEMFetchComponentCarrierMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* absolutePower, float64* peakAbsolutePower, float64* peakFrequency, float64* relativePower) = 0;
  virtual int32 SEMFetchComponentCarrierMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 absolutePower[], float64 peakAbsolutePower[], float64 peakFrequency[], float64 relativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchLowerOffsetMargin(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus, float64* margin, float64* marginFrequency, float64* marginAbsolutePower, float64* marginRelativePower) = 0;
  virtual int32 SEMFetchLowerOffsetMarginArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 measurementStatus[], float64 margin[], float64 marginFrequency[], float64 marginAbsolutePower[], float64 marginRelativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchLowerOffsetPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* totalAbsolutePower, float64* totalRelativePower, float64* peakAbsolutePower, float64* peakFrequency, float64* peakRelativePower) = 0;
  virtual int32 SEMFetchLowerOffsetPowerArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 totalAbsolutePower[], float64 totalRelativePower[], float64 peakAbsolutePower[], float64 peakFrequency[], float64 peakRelativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus) = 0;
  virtual int32 SEMFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], float32 compositeMask[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchSubblockMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* subblockPower, float64* integrationBandwidth, float64* frequency) = 0;
  virtual int32 SEMFetchTotalAggregatedPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* totalAggregatedPower) = 0;
  virtual int32 SEMFetchUpperOffsetMargin(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus, float64* margin, float64* marginFrequency, float64* marginAbsolutePower, float64* marginRelativePower) = 0;
  virtual int32 SEMFetchUpperOffsetMarginArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 measurementStatus[], float64 margin[], float64 marginFrequency[], float64 marginAbsolutePower[], float64 marginRelativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 SEMFetchUpperOffsetPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* totalAbsolutePower, float64* totalRelativePower, float64* peakAbsolutePower, float64* peakFrequency, float64* peakRelativePower) = 0;
  virtual int32 SEMFetchUpperOffsetPowerArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 totalAbsolutePower[], float64 totalRelativePower[], float64 peakAbsolutePower[], float64 peakFrequency[], float64 peakRelativePower[], int32 arraySize, int32* actualArraySize) = 0;
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
  virtual int32 TXPFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averagePowerMean, float64* peakPowerMaximum) = 0;
  virtual int32 TXPFetchPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 power[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout) = 0;
  virtual int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
};

}  // namespace nirfmxnr_grpc
#endif  // NIRFMXNR_GRPC_LIBRARY_WRAPPER_H
