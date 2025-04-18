// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service.proto

#include "service.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace bess {
namespace pb {
}  // namespace pb
}  // namespace bess
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_service_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_service_2eproto = nullptr;
const ::uint32_t TableStruct_service_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;
const char descriptor_table_protodef_service_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\rservice.proto\022\007bess.pb\032\016bess_msg.proto"
    "2\324\033\n\013BESSControl\022\?\n\nGetVersion\022\025.bess.pb"
    ".EmptyRequest\032\030.bess.pb.VersionResponse\""
    "\000\022;\n\010ResetAll\022\025.bess.pb.EmptyRequest\032\026.b"
    "ess.pb.EmptyResponse\"\000\022;\n\010KillBess\022\025.bes"
    "s.pb.EmptyRequest\032\026.bess.pb.EmptyRespons"
    "e\"\000\022F\n\014ImportPlugin\022\034.bess.pb.ImportPlug"
    "inRequest\032\026.bess.pb.EmptyResponse\"\000\022F\n\014U"
    "nloadPlugin\022\034.bess.pb.UnloadPluginReques"
    "t\032\026.bess.pb.EmptyResponse\"\000\022D\n\013ListPlugi"
    "ns\022\025.bess.pb.EmptyRequest\032\034.bess.pb.List"
    "PluginsResponse\"\000\022;\n\010PauseAll\022\025.bess.pb."
    "EmptyRequest\032\026.bess.pb.EmptyResponse\"\000\022D"
    "\n\013PauseWorker\022\033.bess.pb.PauseWorkerReque"
    "st\032\026.bess.pb.EmptyResponse\"\000\022F\n\014ResumeWo"
    "rker\022\034.bess.pb.ResumeWorkerRequest\032\026.bes"
    "s.pb.EmptyResponse\"\000\022<\n\tResumeAll\022\025.bess"
    ".pb.EmptyRequest\032\026.bess.pb.EmptyResponse"
    "\"\000\022\?\n\014ResetWorkers\022\025.bess.pb.EmptyReques"
    "t\032\026.bess.pb.EmptyResponse\"\000\022D\n\013ListWorke"
    "rs\022\025.bess.pb.EmptyRequest\032\034.bess.pb.List"
    "WorkersResponse\"\000\022@\n\tAddWorker\022\031.bess.pb"
    ".AddWorkerRequest\032\026.bess.pb.EmptyRespons"
    "e\"\000\022H\n\rDestroyWorker\022\035.bess.pb.DestroyWo"
    "rkerRequest\032\026.bess.pb.EmptyResponse\"\000\022;\n"
    "\010ResetTcs\022\025.bess.pb.EmptyRequest\032\026.bess."
    "pb.EmptyResponse\"\000\022>\n\007ListTcs\022\027.bess.pb."
    "ListTcsRequest\032\030.bess.pb.ListTcsResponse"
    "\"\000\022b\n\032CheckSchedulingConstraints\022\025.bess."
    "pb.EmptyRequest\032+.bess.pb.CheckSchedulin"
    "gConstraintsResponse\"\000\0228\n\005AddTc\022\025.bess.p"
    "b.AddTcRequest\032\026.bess.pb.EmptyResponse\"\000"
    "\022J\n\016UpdateTcParams\022\036.bess.pb.UpdateTcPar"
    "amsRequest\032\026.bess.pb.EmptyResponse\"\000\022J\n\016"
    "UpdateTcParent\022\036.bess.pb.UpdateTcParentR"
    "equest\032\026.bess.pb.EmptyResponse\"\000\022G\n\nGetT"
    "cStats\022\032.bess.pb.GetTcStatsRequest\032\033.bes"
    "s.pb.GetTcStatsResponse\"\000\022D\n\013ListDrivers"
    "\022\025.bess.pb.EmptyRequest\032\034.bess.pb.ListDr"
    "iversResponse\"\000\022P\n\rGetDriverInfo\022\035.bess."
    "pb.GetDriverInfoRequest\032\036.bess.pb.GetDri"
    "verInfoResponse\"\000\022=\n\nResetPorts\022\025.bess.p"
    "b.EmptyRequest\032\026.bess.pb.EmptyResponse\"\000"
    "\022@\n\tListPorts\022\025.bess.pb.EmptyRequest\032\032.b"
    "ess.pb.ListPortsResponse\"\000\022G\n\nCreatePort"
    "\022\032.bess.pb.CreatePortRequest\032\033.bess.pb.C"
    "reatePortResponse\"\000\022D\n\013DestroyPort\022\033.bes"
    "s.pb.DestroyPortRequest\032\026.bess.pb.EmptyR"
    "esponse\"\000\022F\n\013SetPortConf\022\033.bess.pb.SetPo"
    "rtConfRequest\032\030.bess.pb.CommandResponse\""
    "\000\022J\n\013GetPortConf\022\033.bess.pb.GetPortConfRe"
    "quest\032\034.bess.pb.GetPortConfResponse\"\000\022M\n"
    "\014GetPortStats\022\034.bess.pb.GetPortStatsRequ"
    "est\032\035.bess.pb.GetPortStatsResponse\"\000\022P\n\r"
    "GetLinkStatus\022\035.bess.pb.GetLinkStatusReq"
    "uest\032\036.bess.pb.GetLinkStatusResponse\"\000\022B"
    "\n\nListMclass\022\025.bess.pb.EmptyRequest\032\033.be"
    "ss.pb.ListMclassResponse\"\000\022P\n\rGetMclassI"
    "nfo\022\035.bess.pb.GetMclassInfoRequest\032\036.bes"
    "s.pb.GetMclassInfoResponse\"\000\022\?\n\014ResetMod"
    "ules\022\025.bess.pb.EmptyRequest\032\026.bess.pb.Em"
    "ptyResponse\"\000\022D\n\013ListModules\022\025.bess.pb.E"
    "mptyRequest\032\034.bess.pb.ListModulesRespons"
    "e\"\000\022M\n\014CreateModule\022\034.bess.pb.CreateModu"
    "leRequest\032\035.bess.pb.CreateModuleResponse"
    "\"\000\022H\n\rDestroyModule\022\035.bess.pb.DestroyMod"
    "uleRequest\032\026.bess.pb.EmptyResponse\"\000\022P\n\r"
    "GetModuleInfo\022\035.bess.pb.GetModuleInfoReq"
    "uest\032\036.bess.pb.GetModuleInfoResponse\"\000\022J"
    "\n\016ConnectModules\022\036.bess.pb.ConnectModule"
    "sRequest\032\026.bess.pb.EmptyResponse\"\000\022P\n\021Di"
    "sconnectModules\022!.bess.pb.DisconnectModu"
    "lesRequest\032\026.bess.pb.EmptyResponse\"\000\022J\n\013"
    "DumpMempool\022\033.bess.pb.DumpMempoolRequest"
    "\032\034.bess.pb.DumpMempoolResponse\"\000\022D\n\rModu"
    "leCommand\022\027.bess.pb.CommandRequest\032\030.bes"
    "s.pb.CommandResponse\"\000\022P\n\021ListGateHookCl"
    "ass\022\025.bess.pb.EmptyRequest\032\".bess.pb.Lis"
    "tGateHookClassResponse\"\000\022e\n\024GetGateHookC"
    "lassInfo\022$.bess.pb.GetGateHookClassInfoR"
    "equest\032%.bess.pb.GetGateHookClassInfoRes"
    "ponse\"\000\022\\\n\021ConfigureGateHook\022!.bess.pb.C"
    "onfigureGateHookRequest\032\".bess.pb.Config"
    "ureGateHookResponse\"\000\022H\n\rListGateHooks\022\025"
    ".bess.pb.EmptyRequest\032\036.bess.pb.ListGate"
    "HooksResponse\"\000\022N\n\017GateHookCommand\022\037.bes"
    "s.pb.GateHookCommandRequest\032\030.bess.pb.Co"
    "mmandResponse\"\000\022V\n\023ConfigureResumeHook\022#"
    ".bess.pb.ConfigureResumeHookRequest\032\030.be"
    "ss.pb.CommandResponse\"\000b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_service_2eproto_deps[1] =
    {
        &::descriptor_table_bess_5fmsg_2eproto,
};
static ::absl::once_flag descriptor_table_service_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_service_2eproto = {
    false,
    false,
    3591,
    descriptor_table_protodef_service_2eproto,
    "service.proto",
    &descriptor_table_service_2eproto_once,
    descriptor_table_service_2eproto_deps,
    1,
    0,
    schemas,
    file_default_instances,
    TableStruct_service_2eproto::offsets,
    nullptr,
    file_level_enum_descriptors_service_2eproto,
    file_level_service_descriptors_service_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_service_2eproto_getter() {
  return &descriptor_table_service_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_service_2eproto(&descriptor_table_service_2eproto);
namespace bess {
namespace pb {
// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
}  // namespace bess
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
