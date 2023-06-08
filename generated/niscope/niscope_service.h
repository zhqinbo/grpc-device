
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-SCOPE Metadata
//---------------------------------------------------------------------
#ifndef NISCOPE_GRPC_SERVICE_H
#define NISCOPE_GRPC_SERVICE_H

#include <niscope.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "niscope_library_interface.h"

namespace niscope_grpc {

struct NiScopeFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiScopeFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiScopeService final : public NiScope::Service {
public:
  using LibrarySharedPtr = std::shared_ptr<NiScopeLibraryInterface>;
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiScopeService(
    LibrarySharedPtr library,
    ResourceRepositorySharedPtr resource_repository,
    const NiScopeFeatureToggles& feature_toggles = {});
  virtual ~NiScopeService();

  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status AcquisitionStatus(::grpc::ServerContext* context, const AcquisitionStatusRequest* request, AcquisitionStatusResponse* response) override;
  ::grpc::Status ActualMeasWfmSize(::grpc::ServerContext* context, const ActualMeasWfmSizeRequest* request, ActualMeasWfmSizeResponse* response) override;
  ::grpc::Status ActualNumWfms(::grpc::ServerContext* context, const ActualNumWfmsRequest* request, ActualNumWfmsResponse* response) override;
  ::grpc::Status ActualRecordLength(::grpc::ServerContext* context, const ActualRecordLengthRequest* request, ActualRecordLengthResponse* response) override;
  ::grpc::Status AddWaveformProcessing(::grpc::ServerContext* context, const AddWaveformProcessingRequest* request, AddWaveformProcessingResponse* response) override;
  ::grpc::Status AdjustSampleClockRelativeDelay(::grpc::ServerContext* context, const AdjustSampleClockRelativeDelayRequest* request, AdjustSampleClockRelativeDelayResponse* response) override;
  ::grpc::Status AutoSetup(::grpc::ServerContext* context, const AutoSetupRequest* request, AutoSetupResponse* response) override;
  ::grpc::Status CableSenseSignalStart(::grpc::ServerContext* context, const CableSenseSignalStartRequest* request, CableSenseSignalStartResponse* response) override;
  ::grpc::Status CableSenseSignalStop(::grpc::ServerContext* context, const CableSenseSignalStopRequest* request, CableSenseSignalStopResponse* response) override;
  ::grpc::Status CalFetchDate(::grpc::ServerContext* context, const CalFetchDateRequest* request, CalFetchDateResponse* response) override;
  ::grpc::Status CalFetchTemperature(::grpc::ServerContext* context, const CalFetchTemperatureRequest* request, CalFetchTemperatureResponse* response) override;
  ::grpc::Status CalSelfCalibrate(::grpc::ServerContext* context, const CalSelfCalibrateRequest* request, CalSelfCalibrateResponse* response) override;
  ::grpc::Status CheckAttributeViBoolean(::grpc::ServerContext* context, const CheckAttributeViBooleanRequest* request, CheckAttributeViBooleanResponse* response) override;
  ::grpc::Status CheckAttributeViInt32(::grpc::ServerContext* context, const CheckAttributeViInt32Request* request, CheckAttributeViInt32Response* response) override;
  ::grpc::Status CheckAttributeViInt64(::grpc::ServerContext* context, const CheckAttributeViInt64Request* request, CheckAttributeViInt64Response* response) override;
  ::grpc::Status CheckAttributeViReal64(::grpc::ServerContext* context, const CheckAttributeViReal64Request* request, CheckAttributeViReal64Response* response) override;
  ::grpc::Status CheckAttributeViSession(::grpc::ServerContext* context, const CheckAttributeViSessionRequest* request, CheckAttributeViSessionResponse* response) override;
  ::grpc::Status CheckAttributeViString(::grpc::ServerContext* context, const CheckAttributeViStringRequest* request, CheckAttributeViStringResponse* response) override;
  ::grpc::Status ClearWaveformMeasurementStats(::grpc::ServerContext* context, const ClearWaveformMeasurementStatsRequest* request, ClearWaveformMeasurementStatsResponse* response) override;
  ::grpc::Status ClearWaveformProcessing(::grpc::ServerContext* context, const ClearWaveformProcessingRequest* request, ClearWaveformProcessingResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status ConfigureAcquisition(::grpc::ServerContext* context, const ConfigureAcquisitionRequest* request, ConfigureAcquisitionResponse* response) override;
  ::grpc::Status ConfigureChanCharacteristics(::grpc::ServerContext* context, const ConfigureChanCharacteristicsRequest* request, ConfigureChanCharacteristicsResponse* response) override;
  ::grpc::Status ConfigureClock(::grpc::ServerContext* context, const ConfigureClockRequest* request, ConfigureClockResponse* response) override;
  ::grpc::Status ConfigureEqualizationFilterCoefficients(::grpc::ServerContext* context, const ConfigureEqualizationFilterCoefficientsRequest* request, ConfigureEqualizationFilterCoefficientsResponse* response) override;
  ::grpc::Status ConfigureHorizontalTiming(::grpc::ServerContext* context, const ConfigureHorizontalTimingRequest* request, ConfigureHorizontalTimingResponse* response) override;
  ::grpc::Status ConfigureTriggerDigital(::grpc::ServerContext* context, const ConfigureTriggerDigitalRequest* request, ConfigureTriggerDigitalResponse* response) override;
  ::grpc::Status ConfigureTriggerEdge(::grpc::ServerContext* context, const ConfigureTriggerEdgeRequest* request, ConfigureTriggerEdgeResponse* response) override;
  ::grpc::Status ConfigureTriggerGlitch(::grpc::ServerContext* context, const ConfigureTriggerGlitchRequest* request, ConfigureTriggerGlitchResponse* response) override;
  ::grpc::Status ConfigureTriggerHysteresis(::grpc::ServerContext* context, const ConfigureTriggerHysteresisRequest* request, ConfigureTriggerHysteresisResponse* response) override;
  ::grpc::Status ConfigureTriggerImmediate(::grpc::ServerContext* context, const ConfigureTriggerImmediateRequest* request, ConfigureTriggerImmediateResponse* response) override;
  ::grpc::Status ConfigureTriggerRunt(::grpc::ServerContext* context, const ConfigureTriggerRuntRequest* request, ConfigureTriggerRuntResponse* response) override;
  ::grpc::Status ConfigureTriggerSoftware(::grpc::ServerContext* context, const ConfigureTriggerSoftwareRequest* request, ConfigureTriggerSoftwareResponse* response) override;
  ::grpc::Status ConfigureTriggerVideo(::grpc::ServerContext* context, const ConfigureTriggerVideoRequest* request, ConfigureTriggerVideoResponse* response) override;
  ::grpc::Status ConfigureTriggerWidth(::grpc::ServerContext* context, const ConfigureTriggerWidthRequest* request, ConfigureTriggerWidthResponse* response) override;
  ::grpc::Status ConfigureTriggerWindow(::grpc::ServerContext* context, const ConfigureTriggerWindowRequest* request, ConfigureTriggerWindowResponse* response) override;
  ::grpc::Status ConfigureVertical(::grpc::ServerContext* context, const ConfigureVerticalRequest* request, ConfigureVerticalResponse* response) override;
  ::grpc::Status Disable(::grpc::ServerContext* context, const DisableRequest* request, DisableResponse* response) override;
  ::grpc::Status ErrorHandler(::grpc::ServerContext* context, const ErrorHandlerRequest* request, ErrorHandlerResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationFile(::grpc::ServerContext* context, const ExportAttributeConfigurationFileRequest* request, ExportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status Fetch(::grpc::ServerContext* context, const FetchRequest* request, FetchResponse* response) override;
  ::grpc::Status FetchArrayMeasurement(::grpc::ServerContext* context, const FetchArrayMeasurementRequest* request, FetchArrayMeasurementResponse* response) override;
  ::grpc::Status FetchBinary16(::grpc::ServerContext* context, const FetchBinary16Request* request, FetchBinary16Response* response) override;
  ::grpc::Status FetchBinary32(::grpc::ServerContext* context, const FetchBinary32Request* request, FetchBinary32Response* response) override;
  ::grpc::Status FetchBinary8(::grpc::ServerContext* context, const FetchBinary8Request* request, FetchBinary8Response* response) override;
  ::grpc::Status FetchComplex(::grpc::ServerContext* context, const FetchComplexRequest* request, FetchComplexResponse* response) override;
  ::grpc::Status FetchComplexBinary16(::grpc::ServerContext* context, const FetchComplexBinary16Request* request, FetchComplexBinary16Response* response) override;
  ::grpc::Status FetchMeasurement(::grpc::ServerContext* context, const FetchMeasurementRequest* request, FetchMeasurementResponse* response) override;
  ::grpc::Status FetchMeasurementStats(::grpc::ServerContext* context, const FetchMeasurementStatsRequest* request, FetchMeasurementStatsResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetChannelName(::grpc::ServerContext* context, const GetChannelNameRequest* request, GetChannelNameResponse* response) override;
  ::grpc::Status GetChannelNameFromString(::grpc::ServerContext* context, const GetChannelNameFromStringRequest* request, GetChannelNameFromStringResponse* response) override;
  ::grpc::Status GetEqualizationFilterCoefficients(::grpc::ServerContext* context, const GetEqualizationFilterCoefficientsRequest* request, GetEqualizationFilterCoefficientsResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetErrorMessage(::grpc::ServerContext* context, const GetErrorMessageRequest* request, GetErrorMessageResponse* response) override;
  ::grpc::Status GetFrequencyResponse(::grpc::ServerContext* context, const GetFrequencyResponseRequest* request, GetFrequencyResponseResponse* response) override;
  ::grpc::Status GetNormalizationCoefficients(::grpc::ServerContext* context, const GetNormalizationCoefficientsRequest* request, GetNormalizationCoefficientsResponse* response) override;
  ::grpc::Status GetScalingCoefficients(::grpc::ServerContext* context, const GetScalingCoefficientsRequest* request, GetScalingCoefficientsResponse* response) override;
  ::grpc::Status GetStreamEndpointHandle(::grpc::ServerContext* context, const GetStreamEndpointHandleRequest* request, GetStreamEndpointHandleResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationFile(::grpc::ServerContext* context, const ImportAttributeConfigurationFileRequest* request, ImportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status InitiateAcquisition(::grpc::ServerContext* context, const InitiateAcquisitionRequest* request, InitiateAcquisitionResponse* response) override;
  ::grpc::Status ProbeCompensationSignalStart(::grpc::ServerContext* context, const ProbeCompensationSignalStartRequest* request, ProbeCompensationSignalStartResponse* response) override;
  ::grpc::Status ProbeCompensationSignalStop(::grpc::ServerContext* context, const ProbeCompensationSignalStopRequest* request, ProbeCompensationSignalStopResponse* response) override;
  ::grpc::Status Read(::grpc::ServerContext* context, const ReadRequest* request, ReadResponse* response) override;
  ::grpc::Status ReadMeasurement(::grpc::ServerContext* context, const ReadMeasurementRequest* request, ReadMeasurementResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status RevisionQuery(::grpc::ServerContext* context, const RevisionQueryRequest* request, RevisionQueryResponse* response) override;
  ::grpc::Status SampleMode(::grpc::ServerContext* context, const SampleModeRequest* request, SampleModeResponse* response) override;
  ::grpc::Status SampleRate(::grpc::ServerContext* context, const SampleRateRequest* request, SampleRateResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status SendSoftwareTriggerEdge(::grpc::ServerContext* context, const SendSoftwareTriggerEdgeRequest* request, SendSoftwareTriggerEdgeResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt64(::grpc::ServerContext* context, const SetAttributeViInt64Request* request, SetAttributeViInt64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
private:
  LibrarySharedPtr library_;
  ResourceRepositorySharedPtr session_repository_;
  ::grpc::Status ConvertApiErrorStatusForViSession(::grpc::ServerContextBase* context, int32_t status, ViSession vi);
  std::map<std::int32_t, std::string> clockingterminalvalues_input_map_ { {1, "VAL_NO_SOURCE"},{2, "VAL_RTSI_CLOCK"},{3, "VAL_EXTERNAL"},{4, "VAL_PFI_0"},{5, "VAL_PFI_1"},{6, "VAL_PFI_2"},{7, "VAL_CLK_IN"},{8, "VAL_CLK_OUT"},{9, "VAL_INTERNAL10MHZ_OSC"},{10, "VAL_PXI_CLK"},{11, "VAL_PXI_CLK10"},{12, "VAL_PXI_CLK100"},{13, "VAL_PXIE_DSTAR_A"},{14, "VAL_AUX_0_CLK_IN"},{15, "VAL_AUX_0_CLK_OUT"},{16, "VAL_ONBOARD_CONFIGURABLE_RATE_CLK"}, };
  std::map<std::string, std::int32_t> clockingterminalvalues_output_map_ { {"VAL_NO_SOURCE", 1},{"VAL_RTSI_CLOCK", 2},{"VAL_EXTERNAL", 3},{"VAL_PFI_0", 4},{"VAL_PFI_1", 5},{"VAL_PFI_2", 6},{"VAL_CLK_IN", 7},{"VAL_CLK_OUT", 8},{"VAL_INTERNAL10MHZ_OSC", 9},{"VAL_PXI_CLK", 10},{"VAL_PXI_CLK10", 11},{"VAL_PXI_CLK100", 12},{"VAL_PXIE_DSTAR_A", 13},{"VAL_AUX_0_CLK_IN", 14},{"VAL_AUX_0_CLK_OUT", 15},{"VAL_ONBOARD_CONFIGURABLE_RATE_CLK", 16}, };
  std::map<std::int32_t, double> niscopereal64attributevaluesmapped_input_map_ { {1, 50.0f},{2, 75.0f},{3, 1000000.0f},{4, 0.0f},{5, -1.0f},{6, 20000000.0f},{7, 100000000.0f},{8, 20000000.0f},{9, 100000000.0f}, };
  std::map<double, std::int32_t> niscopereal64attributevaluesmapped_output_map_ { {50.0f, 1},{75.0f, 2},{1000000.0f, 3},{0.0f, 4},{-1.0f, 5},{20000000.0f, 6},{100000000.0f, 7},{20000000.0f, 8},{100000000.0f, 9}, };
  std::map<std::int32_t, std::string> niscopestringattributevaluesmapped_input_map_ { {1, "VAL_CLK_IN"},{2, "VAL_NO_SOURCE"},{3, "VAL_PXI_STAR"},{4, "VAL_PXIE_DSTAR_A"},{5, "VAL_AUX_0_CLK_IN"},{6, "VAL_ONBOARD_CONFIGURABLE_RATE_CLK"},{7, "VAL_IMMEDIATE"},{8, "VAL_EXTERNAL"},{9, "VAL_SW_TRIG_FUNC"},{10, "VAL_TTL0"},{11, "VAL_TTL1"},{12, "VAL_TTL2"},{13, "VAL_TTL3"},{14, "VAL_TTL4"},{15, "VAL_TTL5"},{16, "VAL_TTL6"},{17, "VAL_TTL7"},{18, "VAL_ECL0"},{19, "VAL_ECL1"},{20, "VAL_PXI_STAR"},{21, "VAL_RTSI_0"},{22, "VAL_RTSI_1"},{23, "VAL_RTSI_2"},{24, "VAL_RTSI_3"},{25, "VAL_RTSI_4"},{26, "VAL_RTSI_5"},{27, "VAL_RTSI_6"},{28, "VAL_RTSI_7"},{29, "VAL_PFI_0"},{30, "VAL_PFI_1"},{31, "VAL_PFI_2"},{32, "VAL_PFI_3"},{33, "VAL_PFI_4"},{34, "VAL_PFI_5"},{35, "VAL_PFI_6"},{36, "VAL_PFI_7"},{37, "VAL_AUX_0_PFI_0"},{38, "VAL_AUX_0_PFI_1"},{39, "VAL_AUX_0_PFI_3"},{40, "VAL_AUX_0_PFI_4"},{41, "VAL_AUX_0_PFI_5"},{42, "VAL_AUX_0_PFI_6"},{43, "VAL_AUX_0_PFI_7"},{44, "VAL_AUX_0_PFI_2"}, };
  std::map<std::string, std::int32_t> niscopestringattributevaluesmapped_output_map_ { {"VAL_CLK_IN", 1},{"VAL_NO_SOURCE", 2},{"VAL_PXI_STAR", 3},{"VAL_PXIE_DSTAR_A", 4},{"VAL_AUX_0_CLK_IN", 5},{"VAL_ONBOARD_CONFIGURABLE_RATE_CLK", 6},{"VAL_IMMEDIATE", 7},{"VAL_EXTERNAL", 8},{"VAL_SW_TRIG_FUNC", 9},{"VAL_TTL0", 10},{"VAL_TTL1", 11},{"VAL_TTL2", 12},{"VAL_TTL3", 13},{"VAL_TTL4", 14},{"VAL_TTL5", 15},{"VAL_TTL6", 16},{"VAL_TTL7", 17},{"VAL_ECL0", 18},{"VAL_ECL1", 19},{"VAL_PXI_STAR", 20},{"VAL_RTSI_0", 21},{"VAL_RTSI_1", 22},{"VAL_RTSI_2", 23},{"VAL_RTSI_3", 24},{"VAL_RTSI_4", 25},{"VAL_RTSI_5", 26},{"VAL_RTSI_6", 27},{"VAL_RTSI_7", 28},{"VAL_PFI_0", 29},{"VAL_PFI_1", 30},{"VAL_PFI_2", 31},{"VAL_PFI_3", 32},{"VAL_PFI_4", 33},{"VAL_PFI_5", 34},{"VAL_PFI_6", 35},{"VAL_PFI_7", 36},{"VAL_AUX_0_PFI_0", 37},{"VAL_AUX_0_PFI_1", 38},{"VAL_AUX_0_PFI_3", 39},{"VAL_AUX_0_PFI_4", 40},{"VAL_AUX_0_PFI_5", 41},{"VAL_AUX_0_PFI_6", 42},{"VAL_AUX_0_PFI_7", 43},{"VAL_AUX_0_PFI_2", 44}, };

  NiScopeFeatureToggles feature_toggles_;
};

} // namespace niscope_grpc

namespace nidevice_grpc {
namespace converters {
template <>
void convert_to_grpc(const niScope_coefficientInfo& input, niscope_grpc::CoefficientInfo* output);
template <>
void convert_to_grpc(const niScope_wfmInfo& input, niscope_grpc::WaveformInfo* output);
} // namespace converters
} // namespace nidevice_grpc

#endif  // NISCOPE_GRPC_SERVICE_H
