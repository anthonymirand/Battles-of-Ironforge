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

// System.Net.NetworkInformation.Win32NetworkInterface2
struct Win32NetworkInterface2_t3_423;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3_368;
struct Win32_IP_ADAPTER_ADDRESSES_t3_368_marshaled;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t3_827;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t3_375;
struct Win32_IP_ADAPTER_INFO_t3_375_marshaled;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO[]
struct Win32_IP_ADAPTER_INFOU5BU5D_t3_828;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3_829;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3_361;
// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t3_378;
// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t3_427;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceCompone.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceType.h"
#include "System_System_Net_NetworkInformation_OperationalStatus.h"

// System.Void System.Net.NetworkInformation.Win32NetworkInterface2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES)
extern "C" void Win32NetworkInterface2__ctor_m3_2996 (Win32NetworkInterface2_t3_423 * __this, Win32_IP_ADAPTER_ADDRESSES_t3_368 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersInfo(System.Byte[],System.Int32&)
extern "C" int32_t Win32NetworkInterface2_GetAdaptersInfo_m3_2997 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___info, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses(System.UInt32,System.UInt32,System.IntPtr,System.Byte[],System.Int32&)
extern "C" int32_t Win32NetworkInterface2_GetAdaptersAddresses_m3_2998 (Object_t * __this /* static, unused */, uint32_t ___family, uint32_t ___flags, IntPtr_t ___reserved, ByteU5BU5D_t1_72* ___info, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetIfEntry(System.Net.NetworkInformation.Win32_MIB_IFROW&)
extern "C" int32_t Win32NetworkInterface2_GetIfEntry_m3_2999 (Object_t * __this /* static, unused */, Win32_MIB_IFROW_t3_369 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.Win32NetworkInterface2::ImplGetAllNetworkInterfaces()
extern "C" NetworkInterfaceU5BU5D_t3_827* Win32NetworkInterface2_ImplGetAllNetworkInterfaces_m3_3000 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO System.Net.NetworkInformation.Win32NetworkInterface2::GetAdapterInfoByIndex(System.Int32)
extern "C" Win32_IP_ADAPTER_INFO_t3_375 * Win32NetworkInterface2_GetAdapterInfoByIndex_m3_3001 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO[] System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersInfo()
extern "C" Win32_IP_ADAPTER_INFOU5BU5D_t3_828* Win32NetworkInterface2_GetAdaptersInfo_m3_3002 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[] System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses()
extern "C" Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3_829* Win32NetworkInterface2_GetAdaptersAddresses_m3_3003 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::GetIPProperties()
extern "C" IPInterfaceProperties_t3_361 * Win32NetworkInterface2_GetIPProperties_m3_3004 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::GetIPv4Statistics()
extern "C" IPv4InterfaceStatistics_t3_378 * Win32NetworkInterface2_GetIPv4Statistics_m3_3005 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.Win32NetworkInterface2::GetPhysicalAddress()
extern "C" PhysicalAddress_t3_427 * Win32NetworkInterface2_GetPhysicalAddress_m3_3006 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface2::Supports(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern "C" bool Win32NetworkInterface2_Supports_m3_3007 (Win32NetworkInterface2_t3_423 * __this, int32_t ___networkInterfaceComponent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32NetworkInterface2::get_Description()
extern "C" String_t* Win32NetworkInterface2_get_Description_m3_3008 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32NetworkInterface2::get_Id()
extern "C" String_t* Win32NetworkInterface2_get_Id_m3_3009 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface2::get_IsReceiveOnly()
extern "C" bool Win32NetworkInterface2_get_IsReceiveOnly_m3_3010 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32NetworkInterface2::get_Name()
extern "C" String_t* Win32NetworkInterface2_get_Name_m3_3011 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32NetworkInterface2::get_NetworkInterfaceType()
extern "C" int32_t Win32NetworkInterface2_get_NetworkInterfaceType_m3_3012 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32NetworkInterface2::get_OperationalStatus()
extern "C" int32_t Win32NetworkInterface2_get_OperationalStatus_m3_3013 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32NetworkInterface2::get_Speed()
extern "C" int64_t Win32NetworkInterface2_get_Speed_m3_3014 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface2::get_SupportsMulticast()
extern "C" bool Win32NetworkInterface2_get_SupportsMulticast_m3_3015 (Win32NetworkInterface2_t3_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
