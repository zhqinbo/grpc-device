//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Compilation test for the NI-rfmxdemod Metadata
//---------------------------------------------------------------------
#include "nirfmxdemod_library.h"

namespace nirfmxdemod_grpc {

int32 ADemodCfgAMCarrierSuppressed(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 amCarrierSuppressedEnabled)
{
  return RFmxDemod_ADemodCfgAMCarrierSuppressed(instrumentHandle, selectorString, amCarrierSuppressedEnabled);
}

int32 ADemodCfgAudioFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 audioFilterType, float64 audioFilterLowerCutoffFrequency, float64 audioFilterUpperCutoffFrequency)
{
  return RFmxDemod_ADemodCfgAudioFilter(instrumentHandle, selectorString, audioFilterType, audioFilterLowerCutoffFrequency, audioFilterUpperCutoffFrequency);
}

int32 ADemodCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType)
{
  return RFmxDemod_ADemodCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount, averagingType);
}

int32 ADemodCfgCarrierCorrection(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 carrierFrequencyCorrectionEnabled, int32 carrierPhaseCorrectionEnabled)
{
  return RFmxDemod_ADemodCfgCarrierCorrection(instrumentHandle, selectorString, carrierFrequencyCorrectionEnabled, carrierPhaseCorrectionEnabled);
}

int32 ADemodCfgFMDeEmphasis(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 deEmphasis)
{
  return RFmxDemod_ADemodCfgFMDeEmphasis(instrumentHandle, selectorString, deEmphasis);
}

int32 ADemodCfgMeasurementInterval(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementInterval)
{
  return RFmxDemod_ADemodCfgMeasurementInterval(instrumentHandle, selectorString, measurementInterval);
}

int32 ADemodCfgModulationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 modulationType)
{
  return RFmxDemod_ADemodCfgModulationType(instrumentHandle, selectorString, modulationType);
}

int32 ADemodCfgRBWFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 rbw, int32 rbwFilterType, float64 rbwrrcAlpha)
{
  return RFmxDemod_ADemodCfgRBWFilter(instrumentHandle, selectorString, rbw, rbwFilterType, rbwrrcAlpha);
}

int32 ADemodFetchAMMaximumModulationDepth(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* maximumModulationDepth, float64* maximumHalfPeakToPeak, float64* maximumRMS, float64* maximumPositivePeak, float64* maximumNegativePeak)
{
  return RFmxDemod_ADemodFetchAMMaximumModulationDepth(instrumentHandle, selectorString, timeout, maximumModulationDepth, maximumHalfPeakToPeak, maximumRMS, maximumPositivePeak, maximumNegativePeak);
}

int32 ADemodFetchAMMeanModulationDepth(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanModulationDepth, float64* meanHalfPeakToPeak, float64* meanRMS, float64* meanPositivePeak, float64* meanNegativePeak)
{
  return RFmxDemod_ADemodFetchAMMeanModulationDepth(instrumentHandle, selectorString, timeout, meanModulationDepth, meanHalfPeakToPeak, meanRMS, meanPositivePeak, meanNegativePeak);
}

int32 ADemodFetchCarrierMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanCarrierFrequencyError, float64* meanCarrierPower)
{
  return RFmxDemod_ADemodFetchCarrierMeasurement(instrumentHandle, selectorString, timeout, meanCarrierFrequencyError, meanCarrierPower);
}

int32 ADemodFetchDemodSignalTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 demodulatedSignal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_ADemodFetchDemodSignalTrace(instrumentHandle, selectorString, timeout, x0, dx, demodulatedSignal, arraySize, actualArraySize);
}

int32 ADemodFetchDemodSpectrumTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 demodulatedSpectrum[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_ADemodFetchDemodSpectrumTrace(instrumentHandle, selectorString, timeout, x0, dx, demodulatedSpectrum, arraySize, actualArraySize);
}

int32 ADemodFetchDistortions(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averageSINAD, float64* averageSNR, float64* averageTHD, float64* averageTHDWithNoise)
{
  return RFmxDemod_ADemodFetchDistortions(instrumentHandle, selectorString, timeout, averageSINAD, averageSNR, averageTHD, averageTHDWithNoise);
}

int32 ADemodFetchFMMaximumDeviation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* maximumDeviation, float64* maximumHalfPeakToPeak, float64* maximumRMS, float64* maximumPositivePeak, float64* maximumNegativePeak)
{
  return RFmxDemod_ADemodFetchFMMaximumDeviation(instrumentHandle, selectorString, timeout, maximumDeviation, maximumHalfPeakToPeak, maximumRMS, maximumPositivePeak, maximumNegativePeak);
}

int32 ADemodFetchFMMeanDeviation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanDeviation, float64* meanHalfPeakToPeak, float64* meanRMS, float64* meanPositivePeak, float64* meanNegativePeak)
{
  return RFmxDemod_ADemodFetchFMMeanDeviation(instrumentHandle, selectorString, timeout, meanDeviation, meanHalfPeakToPeak, meanRMS, meanPositivePeak, meanNegativePeak);
}

int32 ADemodFetchMeanModulationFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanModulationFrequency)
{
  return RFmxDemod_ADemodFetchMeanModulationFrequency(instrumentHandle, selectorString, timeout, meanModulationFrequency);
}

int32 ADemodFetchPMMaximumDeviation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* maximumDeviation, float64* maximumHalfPeakToPeak, float64* maximumRMS, float64* maximumPositivePeak, float64* maximumNegativePeak)
{
  return RFmxDemod_ADemodFetchPMMaximumDeviation(instrumentHandle, selectorString, timeout, maximumDeviation, maximumHalfPeakToPeak, maximumRMS, maximumPositivePeak, maximumNegativePeak);
}

int32 ADemodFetchPMMeanDeviation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanDeviation, float64* meanHalfPeakToPeak, float64* meanRMS, float64* meanPositivePeak, float64* meanNegativePeak)
{
  return RFmxDemod_ADemodFetchPMMeanDeviation(instrumentHandle, selectorString, timeout, meanDeviation, meanHalfPeakToPeak, meanRMS, meanPositivePeak, meanNegativePeak);
}

int32 ADemodReadAM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanModulationDepth, float64* meanCarrierPower)
{
  return RFmxDemod_ADemodReadAM(instrumentHandle, selectorString, timeout, meanModulationDepth, meanCarrierPower);
}

int32 ADemodReadFM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanDeviation, float64* meanCarrierFrequencyError)
{
  return RFmxDemod_ADemodReadFM(instrumentHandle, selectorString, timeout, meanDeviation, meanCarrierFrequencyError);
}

int32 ADemodReadPM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanDeviation, float64* meanCarrierFrequencyError)
{
  return RFmxDemod_ADemodReadPM(instrumentHandle, selectorString, timeout, meanDeviation, meanCarrierFrequencyError);
}

int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxDemod_AbortMeasurements(instrumentHandle, selectorString);
}

int32 AnalyzeIQ1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved)
{
  return RFmxDemod_AnalyzeIQ1Waveform(instrumentHandle, selectorString, resultName, x0, dx, iq, arraySize, reset, reserved);
}

int32 AutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 bandwidth, float64 measurementInterval, float64* referenceLevel)
{
  return RFmxDemod_AutoLevel(instrumentHandle, selectorString, bandwidth, measurementInterval, referenceLevel);
}

int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[])
{
  return RFmxDemod_BuildSignalString(signalName, resultName, selectorStringLength, selectorString);
}

int32 CfgDigitalEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger)
{
  return RFmxDemod_CfgDigitalEdgeTrigger(instrumentHandle, selectorString, digitalEdgeSource, digitalEdge, triggerDelay, enableTrigger);
}

int32 CfgExternalAttenuation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation)
{
  return RFmxDemod_CfgExternalAttenuation(instrumentHandle, selectorString, externalAttenuation);
}

int32 CfgFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency)
{
  return RFmxDemod_CfgFrequency(instrumentHandle, selectorString, centerFrequency);
}

int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency)
{
  return RFmxDemod_CfgFrequencyReference(instrumentHandle, channelName, frequencyReferenceSource, frequencyReferenceFrequency);
}

int32 CfgIQPowerEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], float64 iqPowerEdgeLevel, int32 iqPowerEdgeSlope, float64 triggerDelay, int32 triggerMinQuietTimeMode, float64 triggerMinQuietTimeDuration, int32 enableTrigger)
{
  return RFmxDemod_CfgIQPowerEdgeTrigger(instrumentHandle, selectorString, iqPowerEdgeSource, iqPowerEdgeLevel, iqPowerEdgeSlope, triggerDelay, triggerMinQuietTimeMode, triggerMinQuietTimeDuration, enableTrigger);
}

int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue)
{
  return RFmxDemod_CfgMechanicalAttenuation(instrumentHandle, channelName, mechanicalAttenuationAuto, mechanicalAttenuationValue);
}

int32 CfgRF(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation)
{
  return RFmxDemod_CfgRF(instrumentHandle, selectorString, centerFrequency, referenceLevel, externalAttenuation);
}

int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue)
{
  return RFmxDemod_CfgRFAttenuation(instrumentHandle, channelName, rfAttenuationAuto, rfAttenuationValue);
}

int32 CfgReferenceLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel)
{
  return RFmxDemod_CfgReferenceLevel(instrumentHandle, selectorString, referenceLevel);
}

int32 CfgSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger)
{
  return RFmxDemod_CfgSoftwareEdgeTrigger(instrumentHandle, selectorString, triggerDelay, enableTrigger);
}

int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* isDone)
{
  return RFmxDemod_CheckMeasurementStatus(instrumentHandle, selectorString, isDone);
}

int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxDemod_ClearAllNamedResults(instrumentHandle, selectorString);
}

int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxDemod_ClearNamedResult(instrumentHandle, selectorString);
}

int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[])
{
  return RFmxDemod_CloneSignalConfiguration(instrumentHandle, oldSignalName, newSignalName);
}

int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy)
{
  return RFmxDemod_Close(instrumentHandle, forceDestroy);
}

int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxDemod_Commit(instrumentHandle, selectorString);
}

int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[])
{
  return RFmxDemod_CreateSignalConfiguration(instrumentHandle, signalName);
}

int32 DDemodCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount)
{
  return RFmxDemod_DDemodCfgAveraging(instrumentHandle, selectorString, averagingEnabled, averagingCount);
}

int32 DDemodCfgEVMNormalizationReference(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 evmNormRef)
{
  return RFmxDemod_DDemodCfgEVMNormalizationReference(instrumentHandle, selectorString, evmNormRef);
}

int32 DDemodCfgEqualizer(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 equalizerMode, int32 equalizerFilterLength, float64 x0, float64 dx, NIComplexSingle equalizerInitialCoefficients[], int32 equalizerTrainingCount, float64 equalizerConvergenceFactor, int32 arraySize)
{
  return RFmxDemod_DDemodCfgEqualizer(instrumentHandle, selectorString, equalizerMode, equalizerFilterLength, x0, dx, equalizerInitialCoefficients, equalizerTrainingCount, equalizerConvergenceFactor, arraySize);
}

int32 DDemodCfgEqualizerInitialCoefficients(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 x0, float64 dx, NIComplexSingle equalizerInitialCoefficients[], int32 arraySize)
{
  return RFmxDemod_DDemodCfgEqualizerInitialCoefficients(instrumentHandle, selectorString, x0, dx, equalizerInitialCoefficients, arraySize);
}

int32 DDemodCfgFSKDeviation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 fskDeviation, int32 fskRefCompEnabled)
{
  return RFmxDemod_DDemodCfgFSKDeviation(instrumentHandle, selectorString, fskDeviation, fskRefCompEnabled);
}

int32 DDemodCfgM(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 m)
{
  return RFmxDemod_DDemodCfgM(instrumentHandle, selectorString, m);
}

int32 DDemodCfgMeasurementFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 measurementFilterType, float64 x0, float64 dx, float32 measurementFilterCustomCoefficients[], int32 arraySize)
{
  return RFmxDemod_DDemodCfgMeasurementFilter(instrumentHandle, selectorString, measurementFilterType, x0, dx, measurementFilterCustomCoefficients, arraySize);
}

int32 DDemodCfgMeasurementFilterCustomCoefficients(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 x0, float64 dx, float32 measurementFilterCustomCoefficients[], int32 arraySize)
{
  return RFmxDemod_DDemodCfgMeasurementFilterCustomCoefficients(instrumentHandle, selectorString, x0, dx, measurementFilterCustomCoefficients, arraySize);
}

int32 DDemodCfgModulationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 modulationType, int32 m, int32 differentialEnabled)
{
  return RFmxDemod_DDemodCfgModulationType(instrumentHandle, selectorString, modulationType, m, differentialEnabled);
}

int32 DDemodCfgNumberOfSymbols(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfSymbols)
{
  return RFmxDemod_DDemodCfgNumberOfSymbols(instrumentHandle, selectorString, numberOfSymbols);
}

int32 DDemodCfgPSKFormat(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 pskFormat)
{
  return RFmxDemod_DDemodCfgPSKFormat(instrumentHandle, selectorString, pskFormat);
}

int32 DDemodCfgPulseShapingFilter(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 pulseShapingFilterType, float64 pulseShapingFilterParameter, float64 x0, float64 dx, float32 pulseShapingFilterCustomCoefficients[], int32 arraySize)
{
  return RFmxDemod_DDemodCfgPulseShapingFilter(instrumentHandle, selectorString, pulseShapingFilterType, pulseShapingFilterParameter, x0, dx, pulseShapingFilterCustomCoefficients, arraySize);
}

int32 DDemodCfgPulseShapingFilterCustomCoefficients(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 x0, float64 dx, float32 pulseShapingFilterCustomCoefficients[], int32 arraySize)
{
  return RFmxDemod_DDemodCfgPulseShapingFilterCustomCoefficients(instrumentHandle, selectorString, x0, dx, pulseShapingFilterCustomCoefficients, arraySize);
}

int32 DDemodCfgSamplesPerSymbol(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 samplesPerSymbol)
{
  return RFmxDemod_DDemodCfgSamplesPerSymbol(instrumentHandle, selectorString, samplesPerSymbol);
}

int32 DDemodCfgSignalStructure(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 signalStructure)
{
  return RFmxDemod_DDemodCfgSignalStructure(instrumentHandle, selectorString, signalStructure);
}

int32 DDemodCfgSpectrumInverted(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 spectrumInverted)
{
  return RFmxDemod_DDemodCfgSpectrumInverted(instrumentHandle, selectorString, spectrumInverted);
}

int32 DDemodCfgSymbolMap(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 symbolMapType, NIComplexSingle symbolMap[], int32 arraySize)
{
  return RFmxDemod_DDemodCfgSymbolMap(instrumentHandle, selectorString, symbolMapType, symbolMap, arraySize);
}

int32 DDemodCfgSymbolRate(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 symbolRate)
{
  return RFmxDemod_DDemodCfgSymbolRate(instrumentHandle, selectorString, symbolRate);
}

int32 DDemodCfgSynchronization(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 synchronizationEnabled, int8 syncBits[], int32 measurementOffset, int32 arraySize)
{
  return RFmxDemod_DDemodCfgSynchronization(instrumentHandle, selectorString, synchronizationEnabled, syncBits, measurementOffset, arraySize);
}

int32 DDemodFetchCarrierMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanFrequencyOffset, float64* meanFrequencyDrift, float64* meanPhaseError)
{
  return RFmxDemod_DDemodFetchCarrierMeasurement(instrumentHandle, selectorString, timeout, meanFrequencyOffset, meanFrequencyDrift, meanPhaseError);
}

int32 DDemodFetchConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle constellationTrace[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchConstellationTrace(instrumentHandle, selectorString, timeout, constellationTrace, arraySize, actualArraySize);
}

int32 DDemodFetchDemodulatedBits(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int8 demodulatedBits[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchDemodulatedBits(instrumentHandle, selectorString, timeout, demodulatedBits, arraySize, actualArraySize);
}

int32 DDemodFetchEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanRMSEVM, float64* maximumRMSEVM, float64* meanModulationErrorRatio, float64* maximumPeakEVM, float64* meanPeakEVM)
{
  return RFmxDemod_DDemodFetchEVM(instrumentHandle, selectorString, timeout, meanRMSEVM, maximumRMSEVM, meanModulationErrorRatio, maximumPeakEVM, meanPeakEVM);
}

int32 DDemodFetchEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 evm[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchEVMTrace(instrumentHandle, selectorString, timeout, x0, dx, evm, arraySize, actualArraySize);
}

int32 DDemodFetchEqualizerCoefficients(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, NIComplexSingle equalizerCoefficients[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchEqualizerCoefficients(instrumentHandle, selectorString, timeout, x0, dx, equalizerCoefficients, arraySize, actualArraySize);
}

int32 DDemodFetchFSKDeviationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 fskError[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchFSKDeviationTrace(instrumentHandle, selectorString, timeout, x0, dx, fskError, arraySize, actualArraySize);
}

int32 DDemodFetchFSKResults(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanFSKDeviation, float64* meanRMSFSKError, float64* maximumPeakFSKError)
{
  return RFmxDemod_DDemodFetchFSKResults(instrumentHandle, selectorString, timeout, meanFSKDeviation, meanRMSFSKError, maximumPeakFSKError);
}

int32 DDemodFetchIQImpairments(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanIQGainImbalance, float64* meanQuadratureSkew, float64* meanIQOriginOffset)
{
  return RFmxDemod_DDemodFetchIQImpairments(instrumentHandle, selectorString, timeout, meanIQGainImbalance, meanQuadratureSkew, meanIQOriginOffset);
}

int32 DDemodFetchMagnitudeError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanMagnitudeError, float64* maximumMagnitudeError)
{
  return RFmxDemod_DDemodFetchMagnitudeError(instrumentHandle, selectorString, timeout, meanMagnitudeError, maximumMagnitudeError);
}

int32 DDemodFetchMagnitudeErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 magnitudeError[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchMagnitudeErrorTrace(instrumentHandle, selectorString, timeout, x0, dx, magnitudeError, arraySize, actualArraySize);
}

int32 DDemodFetchMeanAmplitudeDroop(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanAmplitudeDroop)
{
  return RFmxDemod_DDemodFetchMeanAmplitudeDroop(instrumentHandle, selectorString, timeout, meanAmplitudeDroop);
}

int32 DDemodFetchMeanIQOriginOffset(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32* meanIQOriginOffset)
{
  return RFmxDemod_DDemodFetchMeanIQOriginOffset(instrumentHandle, selectorString, timeout, meanIQOriginOffset);
}

int32 DDemodFetchMeanQuadratureSkew(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32* meanQuadratureSkew)
{
  return RFmxDemod_DDemodFetchMeanQuadratureSkew(instrumentHandle, selectorString, timeout, meanQuadratureSkew);
}

int32 DDemodFetchMeanRhoFactor(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanRhoFactor)
{
  return RFmxDemod_DDemodFetchMeanRhoFactor(instrumentHandle, selectorString, timeout, meanRhoFactor);
}

int32 DDemodFetchMeasurementWaveform(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, NIComplexSingle measurementWaveform[], int32 arraySize, int32* actualArraySize, int32* samplesPerSymbol, float64* symbolRate)
{
  return RFmxDemod_DDemodFetchMeasurementWaveform(instrumentHandle, selectorString, timeout, x0, dx, measurementWaveform, arraySize, actualArraySize, samplesPerSymbol, symbolRate);
}

int32 DDemodFetchOffsetConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle offsetConstellationTrace[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchOffsetConstellationTrace(instrumentHandle, selectorString, timeout, offsetConstellationTrace, arraySize, actualArraySize);
}

int32 DDemodFetchOffsetEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanRMSOffsetEVM, float64* maximumRMSOffsetEVM, float64* maximumPeakOffsetEVM, float64* meanPeakOffsetEVM)
{
  return RFmxDemod_DDemodFetchOffsetEVM(instrumentHandle, selectorString, timeout, meanRMSOffsetEVM, maximumRMSOffsetEVM, maximumPeakOffsetEVM, meanPeakOffsetEVM);
}

int32 DDemodFetchOffsetEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 offsetEVM[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchOffsetEVMTrace(instrumentHandle, selectorString, timeout, x0, dx, offsetEVM, arraySize, actualArraySize);
}

int32 DDemodFetchPhaseError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanPhaseError, float64* maximumPhaseError)
{
  return RFmxDemod_DDemodFetchPhaseError(instrumentHandle, selectorString, timeout, meanPhaseError, maximumPhaseError);
}

int32 DDemodFetchPhaseErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 phaseError[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchPhaseErrorTrace(instrumentHandle, selectorString, timeout, x0, dx, phaseError, arraySize, actualArraySize);
}

int32 DDemodFetchReferenceWaveform(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, NIComplexSingle referenceWaveform[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodFetchReferenceWaveform(instrumentHandle, selectorString, timeout, x0, dx, referenceWaveform, arraySize, actualArraySize);
}

int32 DDemodFetchSyncFound(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* syncFound)
{
  return RFmxDemod_DDemodFetchSyncFound(instrumentHandle, selectorString, timeout, syncFound);
}

int32 DDemodGetEqualizerInitialCoefficients(niRFmxInstrHandle instrumentHandle, char selectorString[], float64* x0, float64* dx, NIComplexSingle equalizerInitialCoefficients[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodGetEqualizerInitialCoefficients(instrumentHandle, selectorString, x0, dx, equalizerInitialCoefficients, arraySize, actualArraySize);
}

int32 DDemodGetSymbolMap(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexSingle symbolMap[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_DDemodGetSymbolMap(instrumentHandle, selectorString, symbolMap, arraySize, actualArraySize);
}

int32 DDemodRead(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanFrequencyOffset, float64* meanRMSEVM, float64* maximumPeakEVM, float64* meanModulationErrorRatio)
{
  return RFmxDemod_DDemodRead(instrumentHandle, selectorString, timeout, meanFrequencyOffset, meanRMSEVM, maximumPeakEVM, meanModulationErrorRatio);
}

int32 DDemodSetSymbolMap(niRFmxInstrHandle instrumentHandle, char selectorString[], NIComplexSingle attrVal[], int32 arraySize)
{
  return RFmxDemod_DDemodSetSymbolMap(instrumentHandle, selectorString, attrVal, arraySize);
}

int32 DeleteSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[])
{
  return RFmxDemod_DeleteSignalConfiguration(instrumentHandle, signalName);
}

int32 DisableTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxDemod_DisableTrigger(instrumentHandle, selectorString);
}

int32 GetAllNamedResultNames(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists)
{
  return RFmxDemod_GetAllNamedResultNames(instrumentHandle, selectorString, resultNames, resultNamesBufferSize, actualResultNamesSize, defaultResultExists);
}

int32 GetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal)
{
  return RFmxDemod_GetAttributeF32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeF32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal)
{
  return RFmxDemod_GetAttributeF64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeF64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal)
{
  return RFmxDemod_GetAttributeI16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal)
{
  return RFmxDemod_GetAttributeI32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeI32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal)
{
  return RFmxDemod_GetAttributeI64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeI64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal)
{
  return RFmxDemod_GetAttributeI8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeI8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeNIComplexDoubleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeNIComplexSingleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[])
{
  return RFmxDemod_GetAttributeString(instrumentHandle, selectorString, attributeID, arraySize, attrVal);
}

int32 GetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal)
{
  return RFmxDemod_GetAttributeU16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal)
{
  return RFmxDemod_GetAttributeU32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeU32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeU64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal)
{
  return RFmxDemod_GetAttributeU8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 GetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize)
{
  return RFmxDemod_GetAttributeU8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize, actualArraySize);
}

int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[])
{
  return RFmxDemod_GetError(instrumentHandle, errorCode, errorDescriptionBufferSize, errorDescription);
}

int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[])
{
  return RFmxDemod_GetErrorString(instrumentHandle, errorCode, errorDescriptionBufferSize, errorDescription);
}

int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession)
{
  return RFmxDemod_Initialize(resourceName, optionString, handleOut, isNewSession);
}

int32 InitializeFromNIRFSASession(uInt32 nirfsaSession, niRFmxInstrHandle* handleOut)
{
  return RFmxDemod_InitializeFromNIRFSASession(nirfsaSession, handleOut);
}

int32 Initiate(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[])
{
  return RFmxDemod_Initiate(instrumentHandle, selectorString, resultName);
}

int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID)
{
  return RFmxDemod_ResetAttribute(instrumentHandle, selectorString, attributeID);
}

int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[])
{
  return RFmxDemod_ResetToDefault(instrumentHandle, selectorString);
}

int32 SelectMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces)
{
  return RFmxDemod_SelectMeasurements(instrumentHandle, selectorString, measurements, enableAllTraces);
}

int32 SendSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle)
{
  return RFmxDemod_SendSoftwareEdgeTrigger(instrumentHandle);
}

int32 SetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal)
{
  return RFmxDemod_SetAttributeF32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeF32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal)
{
  return RFmxDemod_SetAttributeF64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeF64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal)
{
  return RFmxDemod_SetAttributeI16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal)
{
  return RFmxDemod_SetAttributeI32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeI32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal)
{
  return RFmxDemod_SetAttributeI64(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeI64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal)
{
  return RFmxDemod_SetAttributeI8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeI8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeNIComplexDoubleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeNIComplexSingleArray(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[])
{
  return RFmxDemod_SetAttributeString(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal)
{
  return RFmxDemod_SetAttributeU16(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal)
{
  return RFmxDemod_SetAttributeU32(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeU32Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeU64Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 SetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal)
{
  return RFmxDemod_SetAttributeU8(instrumentHandle, selectorString, attributeID, attrVal);
}

int32 SetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize)
{
  return RFmxDemod_SetAttributeU8Array(instrumentHandle, selectorString, attributeID, attrVal, arraySize);
}

int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout)
{
  return RFmxDemod_WaitForAcquisitionComplete(instrumentHandle, timeout);
}

int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout)
{
  return RFmxDemod_WaitForMeasurementComplete(instrumentHandle, selectorString, timeout);
}

}  // namespace nirfmxdemod_grpc
