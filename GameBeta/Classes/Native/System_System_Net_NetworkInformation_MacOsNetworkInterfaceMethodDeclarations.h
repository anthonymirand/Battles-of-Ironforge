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

// System.Net.NetworkInformation.MacOsNetworkInterface
struct MacOsNetworkInterface_t3_383;
// System.String
struct String_t;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t3_827;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3_361;
// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t3_378;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_OperationalStatus.h"

// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::.ctor(System.String)
extern "C" void MacOsNetworkInterface__ctor_m3_2988 (MacOsNetworkInterface_t3_383 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MacOsNetworkInterface::getifaddrs(System.IntPtr&)
extern "C" int32_t MacOsNetworkInterface_getifaddrs_m3_2989 (Object_t * __this /* static, unused */, IntPtr_t* ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::freeifaddrs(System.IntPtr)
extern "C" void MacOsNetworkInterface_freeifaddrs_m3_2990 (Object_t * __this /* static, unused */, IntPtr_t ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.MacOsNetworkInterface::ImplGetAllNetworkInterfaces()
extern "C" NetworkInterfaceU5BU5D_t3_827* MacOsNetworkInterface_ImplGetAllNetworkInterfaces_m3_2991 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.MacOsNetworkInterface::GetIPProperties()
extern "C" IPInterfaceProperties_t3_361 * MacOsNetworkInterface_GetIPProperties_m3_2992 (MacOsNetworkInterface_t3_383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.MacOsNetworkInterface::GetIPv4Statistics()
extern "C" IPv4InterfaceStatistics_t3_378 * MacOsNetworkInterface_GetIPv4Statistics_m3_2993 (MacOsNetworkInterface_t3_383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.MacOsNetworkInterface::get_OperationalStatus()
extern "C" int32_t MacOsNetworkInterface_get_OperationalStatus_m3_2994 (MacOsNetworkInterface_t3_383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.MacOsNetworkInterface::get_SupportsMulticast()
extern "C" bool MacOsNetworkInterface_get_SupportsMulticast_m3_2995 (MacOsNetworkInterface_t3_383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
