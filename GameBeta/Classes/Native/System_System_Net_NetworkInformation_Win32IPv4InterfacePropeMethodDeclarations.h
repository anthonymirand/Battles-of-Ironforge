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

// System.Net.NetworkInformation.Win32IPv4InterfaceProperties
struct Win32IPv4InterfaceProperties_t3_374;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t3_375;
struct Win32_IP_ADAPTER_INFO_t3_375_marshaled;
// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t3_376;
struct Win32_IP_PER_ADAPTER_INFO_t3_376_marshaled;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Void System.Net.NetworkInformation.Win32IPv4InterfaceProperties::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO,System.Net.NetworkInformation.Win32_MIB_IFROW)
extern "C" void Win32IPv4InterfaceProperties__ctor_m3_2742 (Win32IPv4InterfaceProperties_t3_374 * __this, Win32_IP_ADAPTER_INFO_t3_375 * ___ainfo, Win32_MIB_IFROW_t3_369  ___mib, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPv4InterfaceProperties::GetPerAdapterInfo(System.Int32,System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO,System.Int32&)
extern "C" int32_t Win32IPv4InterfaceProperties_GetPerAdapterInfo_m3_2743 (Object_t * __this /* static, unused */, int32_t ___IfIndex, Win32_IP_PER_ADAPTER_INFO_t3_376 * ___pPerAdapterInfo, int32_t* ___pOutBufLen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_Index()
extern "C" int32_t Win32IPv4InterfaceProperties_get_Index_m3_2744 (Win32IPv4InterfaceProperties_t3_374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsAutomaticPrivateAddressingActive()
extern "C" bool Win32IPv4InterfaceProperties_get_IsAutomaticPrivateAddressingActive_m3_2745 (Win32IPv4InterfaceProperties_t3_374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsAutomaticPrivateAddressingEnabled()
extern "C" bool Win32IPv4InterfaceProperties_get_IsAutomaticPrivateAddressingEnabled_m3_2746 (Win32IPv4InterfaceProperties_t3_374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsDhcpEnabled()
extern "C" bool Win32IPv4InterfaceProperties_get_IsDhcpEnabled_m3_2747 (Win32IPv4InterfaceProperties_t3_374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsForwardingEnabled()
extern "C" bool Win32IPv4InterfaceProperties_get_IsForwardingEnabled_m3_2748 (Win32IPv4InterfaceProperties_t3_374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_Mtu()
extern "C" int32_t Win32IPv4InterfaceProperties_get_Mtu_m3_2749 (Win32IPv4InterfaceProperties_t3_374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_UsesWins()
extern "C" bool Win32IPv4InterfaceProperties_get_UsesWins_m3_2750 (Win32IPv4InterfaceProperties_t3_374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
