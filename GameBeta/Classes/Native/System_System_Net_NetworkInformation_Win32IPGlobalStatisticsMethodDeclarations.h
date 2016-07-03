#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.NetworkInformation.Win32IPGlobalStatistics
struct Win32IPGlobalStatistics_t3_359;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IPSTATS.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalStatistics::.ctor(System.Net.NetworkInformation.Win32_MIB_IPSTATS)
extern "C" void Win32IPGlobalStatistics__ctor_m3_2673 (Win32IPGlobalStatistics_t3_359 * __this, Win32_MIB_IPSTATS_t3_360  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_DefaultTtl()
extern "C" int32_t Win32IPGlobalStatistics_get_DefaultTtl_m3_2674 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ForwardingEnabled()
extern "C" bool Win32IPGlobalStatistics_get_ForwardingEnabled_m3_2675 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_NumberOfInterfaces()
extern "C" int32_t Win32IPGlobalStatistics_get_NumberOfInterfaces_m3_2676 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_NumberOfIPAddresses()
extern "C" int32_t Win32IPGlobalStatistics_get_NumberOfIPAddresses_m3_2677 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_NumberOfRoutes()
extern "C" int32_t Win32IPGlobalStatistics_get_NumberOfRoutes_m3_2678 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketRequests()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketRequests_m3_2679 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketRoutingDiscards()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketRoutingDiscards_m3_2680 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketsDiscarded()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketsDiscarded_m3_2681 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketsWithNoRoute()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketsWithNoRoute_m3_2682 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketFragmentFailures()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketFragmentFailures_m3_2683 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketReassembliesRequired()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketReassembliesRequired_m3_2684 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketReassemblyFailures()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketReassemblyFailures_m3_2685 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketReassemblyTimeout()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketReassemblyTimeout_m3_2686 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketsFragmented()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketsFragmented_m3_2687 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketsReassembled()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketsReassembled_m3_2688 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPackets()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPackets_m3_2689 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsDelivered()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsDelivered_m3_2690 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsDiscarded()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsDiscarded_m3_2691 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsForwarded()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsForwarded_m3_2692 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsWithAddressErrors()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsWithAddressErrors_m3_2693 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsWithHeadersErrors()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsWithHeadersErrors_m3_2694 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsWithUnknownProtocol()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsWithUnknownProtocol_m3_2695 (Win32IPGlobalStatistics_t3_359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
