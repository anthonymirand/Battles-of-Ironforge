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

// System.Net.NetworkInformation.MibUdpStatistics
struct MibUdpStatistics_t3_449;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.MibUdpStatistics::.ctor(System.Collections.Specialized.StringDictionary)
extern "C" void MibUdpStatistics__ctor_m3_3122 (MibUdpStatistics_t3_449 * __this, StringDictionary_t3_49 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::Get(System.String)
extern "C" int64_t MibUdpStatistics_Get_m3_3123 (MibUdpStatistics_t3_449 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_DatagramsReceived()
extern "C" int64_t MibUdpStatistics_get_DatagramsReceived_m3_3124 (MibUdpStatistics_t3_449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_DatagramsSent()
extern "C" int64_t MibUdpStatistics_get_DatagramsSent_m3_3125 (MibUdpStatistics_t3_449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_IncomingDatagramsDiscarded()
extern "C" int64_t MibUdpStatistics_get_IncomingDatagramsDiscarded_m3_3126 (MibUdpStatistics_t3_449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_IncomingDatagramsWithErrors()
extern "C" int64_t MibUdpStatistics_get_IncomingDatagramsWithErrors_m3_3127 (MibUdpStatistics_t3_449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MibUdpStatistics::get_UdpListeners()
extern "C" int32_t MibUdpStatistics_get_UdpListeners_m3_3128 (MibUdpStatistics_t3_449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
