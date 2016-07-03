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

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct Win32IPInterfaceProperties2_t3_367;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3_368;
struct Win32_IP_ADAPTER_ADDRESSES_t3_368_marshaled;
// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t3_363;
// System.Net.NetworkInformation.IPv6InterfaceProperties
struct IPv6InterfaceProperties_t3_384;
// System.Net.NetworkInformation.IPAddressInformationCollection
struct IPAddressInformationCollection_t3_347;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t3_343;
// System.String
struct String_t;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct GatewayIPAddressInformationCollection_t3_340;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct MulticastIPAddressInformationCollection_t3_413;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t3_456;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Void System.Net.NetworkInformation.Win32IPInterfaceProperties2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES,System.Net.NetworkInformation.Win32_MIB_IFROW,System.Net.NetworkInformation.Win32_MIB_IFROW)
extern "C" void Win32IPInterfaceProperties2__ctor_m3_2716 (Win32IPInterfaceProperties2_t3_367 * __this, Win32_IP_ADAPTER_ADDRESSES_t3_368 * ___addr, Win32_MIB_IFROW_t3_369  ___mib4, Win32_MIB_IFROW_t3_369  ___mib6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.Win32IPInterfaceProperties2::GetIPv4Properties()
extern "C" IPv4InterfaceProperties_t3_363 * Win32IPInterfaceProperties2_GetIPv4Properties_m3_2717 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv6InterfaceProperties System.Net.NetworkInformation.Win32IPInterfaceProperties2::GetIPv6Properties()
extern "C" IPv6InterfaceProperties_t3_384 * Win32IPInterfaceProperties2_GetIPv6Properties_m3_2718 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_AnycastAddresses()
extern "C" IPAddressInformationCollection_t3_347 * Win32IPInterfaceProperties2_get_AnycastAddresses_m3_2719 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_DhcpServerAddresses()
extern "C" IPAddressCollection_t3_343 * Win32IPInterfaceProperties2_get_DhcpServerAddresses_m3_2720 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_DnsAddresses()
extern "C" IPAddressCollection_t3_343 * Win32IPInterfaceProperties2_get_DnsAddresses_m3_2721 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_DnsSuffix()
extern "C" String_t* Win32IPInterfaceProperties2_get_DnsSuffix_m3_2722 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_GatewayAddresses()
extern "C" GatewayIPAddressInformationCollection_t3_340 * Win32IPInterfaceProperties2_get_GatewayAddresses_m3_2723 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_IsDnsEnabled()
extern "C" bool Win32IPInterfaceProperties2_get_IsDnsEnabled_m3_2724 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_IsDynamicDnsEnabled()
extern "C" bool Win32IPInterfaceProperties2_get_IsDynamicDnsEnabled_m3_2725 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_MulticastAddresses()
extern "C" MulticastIPAddressInformationCollection_t3_413 * Win32IPInterfaceProperties2_get_MulticastAddresses_m3_2726 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_UnicastAddresses()
extern "C" UnicastIPAddressInformationCollection_t3_456 * Win32IPInterfaceProperties2_get_UnicastAddresses_m3_2727 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_WinsServersAddresses()
extern "C" IPAddressCollection_t3_343 * Win32IPInterfaceProperties2_get_WinsServersAddresses_m3_2728 (Win32IPInterfaceProperties2_t3_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
