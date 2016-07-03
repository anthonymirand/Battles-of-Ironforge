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

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct UnixIPInterfaceProperties_t3_362;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t3_364;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_950;
// System.Net.NetworkInformation.IPv6InterfaceProperties
struct IPv6InterfaceProperties_t3_384;
// System.String
struct String_t;
// System.Net.NetworkInformation.IPAddressInformationCollection
struct IPAddressInformationCollection_t3_347;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t3_343;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct GatewayIPAddressInformationCollection_t3_340;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct MulticastIPAddressInformationCollection_t3_413;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t3_456;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.ctor(System.Net.NetworkInformation.UnixNetworkInterface,System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C" void UnixIPInterfaceProperties__ctor_m3_2697 (UnixIPInterfaceProperties_t3_362 * __this, UnixNetworkInterface_t3_364 * ___iface, List_1_t1_950 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.cctor()
extern "C" void UnixIPInterfaceProperties__cctor_m3_2698 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv6InterfaceProperties System.Net.NetworkInformation.UnixIPInterfaceProperties::GetIPv6Properties()
extern "C" IPv6InterfaceProperties_t3_384 * UnixIPInterfaceProperties_GetIPv6Properties_m3_2699 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::ParseRouteInfo(System.String)
extern "C" void UnixIPInterfaceProperties_ParseRouteInfo_m3_2700 (UnixIPInterfaceProperties_t3_362 * __this, String_t* ___iface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::ParseResolvConf()
extern "C" void UnixIPInterfaceProperties_ParseResolvConf_m3_2701 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_AnycastAddresses()
extern "C" IPAddressInformationCollection_t3_347 * UnixIPInterfaceProperties_get_AnycastAddresses_m3_2702 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_DhcpServerAddresses()
extern "C" IPAddressCollection_t3_343 * UnixIPInterfaceProperties_get_DhcpServerAddresses_m3_2703 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_DnsAddresses()
extern "C" IPAddressCollection_t3_343 * UnixIPInterfaceProperties_get_DnsAddresses_m3_2704 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::get_DnsSuffix()
extern "C" String_t* UnixIPInterfaceProperties_get_DnsSuffix_m3_2705 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_GatewayAddresses()
extern "C" GatewayIPAddressInformationCollection_t3_340 * UnixIPInterfaceProperties_get_GatewayAddresses_m3_2706 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnixIPInterfaceProperties::get_IsDnsEnabled()
extern "C" bool UnixIPInterfaceProperties_get_IsDnsEnabled_m3_2707 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnixIPInterfaceProperties::get_IsDynamicDnsEnabled()
extern "C" bool UnixIPInterfaceProperties_get_IsDynamicDnsEnabled_m3_2708 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_MulticastAddresses()
extern "C" MulticastIPAddressInformationCollection_t3_413 * UnixIPInterfaceProperties_get_MulticastAddresses_m3_2709 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_UnicastAddresses()
extern "C" UnicastIPAddressInformationCollection_t3_456 * UnixIPInterfaceProperties_get_UnicastAddresses_m3_2710 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_WinsServersAddresses()
extern "C" IPAddressCollection_t3_343 * UnixIPInterfaceProperties_get_WinsServersAddresses_m3_2711 (UnixIPInterfaceProperties_t3_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
