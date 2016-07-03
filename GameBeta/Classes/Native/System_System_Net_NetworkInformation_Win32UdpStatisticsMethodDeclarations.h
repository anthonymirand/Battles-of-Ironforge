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

// System.Net.NetworkInformation.Win32UdpStatistics
struct Win32UdpStatistics_t3_450;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_UDPSTATS.h"

// System.Void System.Net.NetworkInformation.Win32UdpStatistics::.ctor(System.Net.NetworkInformation.Win32_MIB_UDPSTATS)
extern "C" void Win32UdpStatistics__ctor_m3_3129 (Win32UdpStatistics_t3_450 * __this, Win32_MIB_UDPSTATS_t3_451  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_DatagramsReceived()
extern "C" int64_t Win32UdpStatistics_get_DatagramsReceived_m3_3130 (Win32UdpStatistics_t3_450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_DatagramsSent()
extern "C" int64_t Win32UdpStatistics_get_DatagramsSent_m3_3131 (Win32UdpStatistics_t3_450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_IncomingDatagramsDiscarded()
extern "C" int64_t Win32UdpStatistics_get_IncomingDatagramsDiscarded_m3_3132 (Win32UdpStatistics_t3_450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_IncomingDatagramsWithErrors()
extern "C" int64_t Win32UdpStatistics_get_IncomingDatagramsWithErrors_m3_3133 (Win32UdpStatistics_t3_450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32UdpStatistics::get_UdpListeners()
extern "C" int32_t Win32UdpStatistics_get_UdpListeners_m3_3134 (Win32UdpStatistics_t3_450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
