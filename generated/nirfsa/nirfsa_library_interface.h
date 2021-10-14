//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-RFSA
//---------------------------------------------------------------------
#ifndef NIRFSA_GRPC_LIBRARY_WRAPPER_H
#define NIRFSA_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niRFSA.h>
#include "custom/nirfsa_aliases.h"

namespace nirfsa_grpc {

class NiRFSALibraryInterface {
 public:
  virtual ~NiRFSALibraryInterface() {}

  virtual ViStatus Abort(ViSession vi) = 0;
  virtual ViStatus CalAdjustCalTonePower(ViSession vi, ViConstString channelList, ViReal64 measurement) = 0;
  virtual ViStatus CalAdjustDeviceGain(ViSession vi, ViConstString channelList, ViReal64 frequency, ViReal64 gain) = 0;
  virtual ViStatus CalAdjustDownconverterGain(ViSession vi, ViConstString channelList, ViReal64 frequency, ViReal64 gain) = 0;
  virtual ViStatus CalAdjustIFAttenuationCalibration(ViSession vi, ViConstString channelList, ViInt32 ifFilter, ViInt32 numberOfAttenuators, ViReal64 attenuatorSettings[], ViReal64 measurement) = 0;
  virtual ViStatus CalAdjustIFResponseCalibration(ViSession vi, ViConstString channelList, ViInt32 ifFilter, ViReal64 rfFrequency, ViReal64 bandWidth, ViInt32 numberOfMeasurements, ViReal64 measurements[]) = 0;
  virtual ViStatus CalSetTemperature(ViSession vi, ViConstString channelList, ViReal64 temperature) = 0;
  virtual ViStatus ChangeExtCalPassword(ViSession vi, ViConstString oldPassword, ViConstString newPassword) = 0;
  virtual ViStatus CheckAcquisitionStatus(ViSession vi, ViBoolean* isDone) = 0;
  virtual ViStatus ClearError(ViSession vi) = 0;
  virtual ViStatus ClearSelfCalibrateRange(ViSession vi) = 0;
  virtual ViStatus Close(ViSession vi) = 0;
  virtual ViStatus CloseCalibrationStep(ViSession vi) = 0;
  virtual ViStatus CloseExternalAlignmentStep(ViSession vi) = 0;
  virtual ViStatus Commit(ViSession vi) = 0;
  virtual ViStatus ConfigureAcquisitionType(ViSession vi, ViInt32 acquisitionType) = 0;
  virtual ViStatus ConfigureDeembeddingTableInterpolationLinear(ViSession vi, ViConstString port, ViConstString tableName, ViInt32 format) = 0;
  virtual ViStatus ConfigureDeembeddingTableInterpolationNearest(ViSession vi, ViConstString port, ViConstString tableName) = 0;
  virtual ViStatus ConfigureDeembeddingTableInterpolationSpline(ViSession vi, ViConstString port, ViConstString tableName) = 0;
  virtual ViStatus ConfigureDigitalEdgeAdvanceTrigger(ViSession vi, ViConstString source, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeRefTrigger(ViSession vi, ViConstString source, ViInt32 edge, ViInt64 pretriggerSamples) = 0;
  virtual ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString source, ViInt32 edge) = 0;
  virtual ViStatus ConfigureIQCarrierFrequency(ViSession vi, ViConstString channelList, ViReal64 carrierFrequency) = 0;
  virtual ViStatus ConfigureIQPowerEdgeRefTrigger(ViSession vi, ViConstString source, ViReal64 level, ViInt32 slope, ViInt64 pretriggerSamples) = 0;
  virtual ViStatus ConfigureIQRate(ViSession vi, ViConstString channelList, ViReal64 iqRate) = 0;
  virtual ViStatus ConfigureNumberOfRecords(ViSession vi, ViConstString channelList, ViBoolean numberOfRecordsIsFinite, ViInt64 numberOfRecords) = 0;
  virtual ViStatus ConfigureNumberOfSamples(ViSession vi, ViConstString channelList, ViBoolean numberOfSamplesIsFinite, ViInt64 samplesPerRecord) = 0;
  virtual ViStatus ConfigurePXIChassisClk10(ViSession vi, ViConstString pxiClk10Source) = 0;
  virtual ViStatus ConfigureRefClock(ViSession vi, ViConstString clockSource, ViReal64 refClockRate) = 0;
  virtual ViStatus ConfigureReferenceLevel(ViSession vi, ViConstString channelList, ViReal64 referenceLevel) = 0;
  virtual ViStatus ConfigureResolutionBandwidth(ViSession vi, ViConstString channelList, ViReal64 resolutionBandwidth) = 0;
  virtual ViStatus ConfigureSoftwareEdgeAdvanceTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureSoftwareEdgeRefTrigger(ViSession vi, ViInt64 pretriggerSamples) = 0;
  virtual ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureSpectrumFrequencyCenterSpan(ViSession vi, ViConstString channelList, ViReal64 centerFrequency, ViReal64 span) = 0;
  virtual ViStatus ConfigureSpectrumFrequencyStartStop(ViSession vi, ViConstString channelList, ViReal64 startFrequency, ViReal64 stopFrequency) = 0;
  virtual ViStatus CreateConfigurationList(ViSession vi, ViConstString listName, ViInt32 numberOfListAttributes, ViAttr listAttributeIDs[], ViBoolean setAsActiveList) = 0;
  virtual ViStatus CreateConfigurationListStep(ViSession vi, ViBoolean setAsActiveStep) = 0;
  virtual ViStatus CreateDeembeddingSparameterTableArray(ViSession vi, ViConstString port, ViConstString tableName, ViReal64 frequencies[], ViInt32 frequenciesSize, NIComplexNumber_struct sparameterTable[], ViInt32 sparameterTableSize, ViInt32 numberOfPorts, ViInt32 sparameterOrientation) = 0;
  virtual ViStatus CreateDeembeddingSparameterTableS2PFile(ViSession vi, ViConstString port, ViConstString tableName, ViConstString s2pFilePath, ViInt32 sparameterOrientation) = 0;
  virtual ViStatus DeleteAllDeembeddingTables(ViSession vi) = 0;
  virtual ViStatus DeleteConfigurationList(ViSession vi, ViConstString listName) = 0;
  virtual ViStatus DeleteDeembeddingTable(ViSession vi, ViConstString port, ViConstString tableName) = 0;
  virtual ViStatus Disable(ViSession vi) = 0;
  virtual ViStatus DisableAdvanceTrigger(ViSession vi) = 0;
  virtual ViStatus DisableRefTrigger(ViSession vi) = 0;
  virtual ViStatus DisableStartTrigger(ViSession vi) = 0;
  virtual ViStatus EnableSessionAccess(ViSession vi, ViBoolean enable) = 0;
  virtual ViStatus ErrorMessage(ViSession vi, ViStatus statusCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus ErrorQuery(ViSession vi, ViInt32* errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal) = 0;
  virtual ViStatus ExtCalStoreBaselineForSelfCalibration(ViSession vi, ViString password, ViInt64 selfCalibrationStep) = 0;
  virtual ViStatus ExternalAlignmentAdjustPreselector(ViSession vi, ViInt32 numberOfCoefficients, ViReal64 coefficients[]) = 0;
  virtual ViStatus FetchIQMultiRecordComplexF32(ViSession vi, ViConstString channelList, ViInt64 startingRecord, ViInt64 numberOfRecords, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumberF32_struct data[], niRFSA_wfmInfo_struct wfmInfo[]) = 0;
  virtual ViStatus FetchIQMultiRecordComplexF64(ViSession vi, ViConstString channelList, ViInt64 startingRecord, ViInt64 numberOfRecords, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumber_struct data[], niRFSA_wfmInfo_struct wfmInfo[]) = 0;
  virtual ViStatus FetchIQMultiRecordComplexI16(ViSession vi, ViConstString channelList, ViInt64 startingRecord, ViInt64 numberOfRecords, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexI16_struct data[], niRFSA_wfmInfo_struct wfmInfo[]) = 0;
  virtual ViStatus FetchIQSingleRecordComplexF32(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumberF32_struct data[], niRFSA_wfmInfo_struct* wfmInfo) = 0;
  virtual ViStatus FetchIQSingleRecordComplexF64(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumber_struct data[], niRFSA_wfmInfo_struct* wfmInfo) = 0;
  virtual ViStatus FetchIQSingleRecordComplexI16(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexI16_struct data[], niRFSA_wfmInfo_struct* wfmInfo) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* value) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* value) = 0;
  virtual ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* value) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* value) = 0;
  virtual ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* value) = 0;
  virtual ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufSize, ViChar value[]) = 0;
  virtual ViStatus GetCalUserDefinedInfo(ViSession vi, ViChar info[256]) = 0;
  virtual ViStatus GetCalUserDefinedInfoMaxSize(ViSession vi, ViInt32* infoSize) = 0;
  virtual ViStatus GetDeembeddingSparameters(ViSession vi, NIComplexNumber_struct sparameters[], ViInt32 sparametersArraySize, ViInt32* numberOfSparameters, ViInt32* numberOfPorts) = 0;
  virtual ViStatus GetDeviceResponse(ViSession vi, ViConstString channelList, ViInt32 responseType, ViInt32 bufferSize, ViReal64 frequencies[], ViReal64 magnitudeResponse[], ViReal64 phaseResponse[], ViInt32* numberOfFrequencies) = 0;
  virtual ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]) = 0;
  virtual ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months) = 0;
  virtual ViStatus GetFetchBacklog(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64* backlog) = 0;
  virtual ViStatus GetFrequencyResponse(ViSession vi, ViConstString channelList, ViInt32 bufferSize, ViReal64 frequencies[], ViReal64 magnitudeResponse[], ViReal64 phaseResponse[], ViInt32* numberOfFrequencies) = 0;
  virtual ViStatus GetGainReferenceCalBaseline(ViSession vi, ViInt32 bufferSize, ViReal64 gainReferenceCalConstants[], ViInt32* numberOfGainReferenceCalConstants) = 0;
  virtual ViStatus GetNormalizationCoefficients(ViSession vi, ViConstString channelList, ViInt32 arraySize, niRFSA_coefficientInfo_struct coefficientInfo[], ViInt32* numberOfCoefficientSets) = 0;
  virtual ViStatus GetNumberOfSpectralLines(ViSession vi, ViConstString channelList, ViInt32* numberOfSpectralLines) = 0;
  virtual ViStatus GetRelayName(ViSession vi, ViConstString channelList, ViInt32 index, ViChar name[], ViInt32* bufferSize) = 0;
  virtual ViStatus GetRelayOperationsCount(ViSession vi, ViConstString channelList, ViInt32 operationsCount[], ViInt32* bufferSize) = 0;
  virtual ViStatus GetScalingCoefficients(ViSession vi, ViConstString channelList, ViInt32 arraySize, niRFSA_coefficientInfo_struct coefficientInfo[], ViInt32* numberOfCoefficientSets) = 0;
  virtual ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt64 selfCalibrationStep, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetSelfCalLastTemp(ViSession vi, ViInt64 selfCalibrationStep, ViReal64* temp) = 0;
  virtual ViStatus GetSpectralInfoForSMT(ViSession vi, SmtSpectrumInfo_struct* spectrumInfo) = 0;
  virtual ViStatus GetStreamEndpointHandle(ViSession vi, ViConstString streamEndpoint, ViUInt32* writerHandle) = 0;
  virtual ViStatus GetTerminalName(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViInt32 bufferSize, ViChar terminalName[]) = 0;
  virtual ViStatus GetUserData(ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[], ViInt32* actualDataSize) = 0;
  virtual ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean reset, ViSession* vi) = 0;
  virtual ViStatus InitExtCal(ViRsrc resourceName, ViConstString password, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean reset, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus InitializeExternalAlignment(ViRsrc resourceName, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus Initiate(ViSession vi) = 0;
  virtual ViStatus InvalidateAllAttributes(ViSession vi) = 0;
  virtual ViStatus IsSelfCalValid(ViSession vi, ViBoolean* selfCalValid, ViInt64* validSteps) = 0;
  virtual ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus PerformThermalCorrection(ViSession vi) = 0;
  virtual ViStatus ReadIQSingleRecordComplexF64(ViSession vi, ViConstString channelList, ViReal64 timeout, NIComplexNumber_struct data[], ViInt64 dataArraySize, niRFSA_wfmInfo_struct* wfmInfo) = 0;
  virtual ViStatus ReadPowerSpectrumF32(ViSession vi, ViConstString channelList, ViReal64 timeout, ViReal32 powerSpectrumData[], ViInt32 dataArraySize, niRFSA_spectrumInfo_struct* spectrumInfo) = 0;
  virtual ViStatus ReadPowerSpectrumF64(ViSession vi, ViConstString channelList, ViReal64 timeout, ViReal64 powerSpectrumData[], ViInt32 dataArraySize, niRFSA_spectrumInfo_struct* spectrumInfo) = 0;
  virtual ViStatus Reset(ViSession vi) = 0;
  virtual ViStatus ResetAttribute(ViSession vi, ViConstString channelName, ViAttr attributeId) = 0;
  virtual ViStatus ResetDevice(ViSession vi) = 0;
  virtual ViStatus ResetWithDefaults(ViSession vi) = 0;
  virtual ViStatus ResetWithOptions(ViSession vi, ViUInt64 stepsToOmit) = 0;
  virtual ViStatus RevisionQuery(ViSession vi, ViChar driverRev[256], ViChar instrRev[256]) = 0;
  virtual ViStatus SelfCal(ViSession vi) = 0;
  virtual ViStatus SelfCalibrate(ViSession vi, ViInt64 stepsToOmit) = 0;
  virtual ViStatus SelfCalibrateRange(ViSession vi, ViInt64 stepsToOmit, ViReal64 minFrequency, ViReal64 maxFrequency, ViReal64 minReferenceLevel, ViReal64 maxReferenceLevel) = 0;
  virtual ViStatus SelfTest(ViSession vi, ViInt16* testResult, ViChar testMessage[256]) = 0;
  virtual ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger, ViConstString triggerIdentifier) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean value) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 value) = 0;
  virtual ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 value) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 value) = 0;
  virtual ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession value) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString value) = 0;
  virtual ViStatus SetCalUserDefinedInfo(ViSession vi, ViConstString info) = 0;
  virtual ViStatus SetUserData(ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[]) = 0;
  virtual ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
};

}  // namespace nirfsa_grpc
#endif  // NIRFSA_GRPC_LIBRARY_WRAPPER_H
