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

// System.Net.NetworkInformation.MibIPGlobalProperties
struct MibIPGlobalProperties_t3_350;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Exception
struct Exception_t1_33;
// System.Net.IPEndPoint[]
struct IPEndPointU5BU5D_t3_824;
// System.Collections.Generic.List`1<System.String[]>
struct List_1_t1_964;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.Net.NetworkInformation.TcpConnectionInformation[]
struct TcpConnectionInformationU5BU5D_t3_825;
// System.Net.NetworkInformation.IcmpV4Statistics
struct IcmpV4Statistics_t3_386;
// System.Net.NetworkInformation.IcmpV6Statistics
struct IcmpV6Statistics_t3_391;
// System.Net.NetworkInformation.IPGlobalStatistics
struct IPGlobalStatistics_t3_357;
// System.Net.NetworkInformation.TcpStatistics
struct TcpStatistics_t3_444;
// System.Net.NetworkInformation.UdpStatistics
struct UdpStatistics_t3_448;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_NetBiosNodeType.h"

// System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.ctor(System.String)
extern "C" void MibIPGlobalProperties__ctor_m3_2582 (MibIPGlobalProperties_t3_350 * __this, String_t* ___procDir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.cctor()
extern "C" void MibIPGlobalProperties__cctor_m3_2583 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MibIPGlobalProperties::gethostname(System.Byte[],System.Int32)
extern "C" int32_t MibIPGlobalProperties_gethostname_m3_2584 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___name, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MibIPGlobalProperties::getdomainname(System.Byte[],System.Int32)
extern "C" int32_t MibIPGlobalProperties_getdomainname_m3_2585 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___name, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIPGlobalProperties::GetProperties4(System.String)
extern "C" StringDictionary_t3_49 * MibIPGlobalProperties_GetProperties4_m3_2586 (MibIPGlobalProperties_t3_350 * __this, String_t* ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIPGlobalProperties::GetProperties6(System.String)
extern "C" StringDictionary_t3_49 * MibIPGlobalProperties_GetProperties6_m3_2587 (MibIPGlobalProperties_t3_350 * __this, String_t* ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.NetworkInformation.MibIPGlobalProperties::CreateException(System.String,System.String)
extern "C" Exception_t1_33 * MibIPGlobalProperties_CreateException_m3_2588 (MibIPGlobalProperties_t3_350 * __this, String_t* ___file, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint[] System.Net.NetworkInformation.MibIPGlobalProperties::GetLocalAddresses(System.Collections.Generic.List`1<System.String[]>)
extern "C" IPEndPointU5BU5D_t3_824* MibIPGlobalProperties_GetLocalAddresses_m3_2589 (MibIPGlobalProperties_t3_350 * __this, List_1_t1_964 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.MibIPGlobalProperties::ToEndpoint(System.String)
extern "C" IPEndPoint_t3_442 * MibIPGlobalProperties_ToEndpoint_m3_2590 (MibIPGlobalProperties_t3_350 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.MibIPGlobalProperties::GetRows(System.String,System.Collections.Generic.List`1<System.String[]>)
extern "C" void MibIPGlobalProperties_GetRows_m3_2591 (MibIPGlobalProperties_t3_350 * __this, String_t* ___file, List_1_t1_964 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpConnectionInformation[] System.Net.NetworkInformation.MibIPGlobalProperties::GetActiveTcpConnections()
extern "C" TcpConnectionInformationU5BU5D_t3_825* MibIPGlobalProperties_GetActiveTcpConnections_m3_2592 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint[] System.Net.NetworkInformation.MibIPGlobalProperties::GetActiveTcpListeners()
extern "C" IPEndPointU5BU5D_t3_824* MibIPGlobalProperties_GetActiveTcpListeners_m3_2593 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint[] System.Net.NetworkInformation.MibIPGlobalProperties::GetActiveUdpListeners()
extern "C" IPEndPointU5BU5D_t3_824* MibIPGlobalProperties_GetActiveUdpListeners_m3_2594 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IcmpV4Statistics System.Net.NetworkInformation.MibIPGlobalProperties::GetIcmpV4Statistics()
extern "C" IcmpV4Statistics_t3_386 * MibIPGlobalProperties_GetIcmpV4Statistics_m3_2595 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IcmpV6Statistics System.Net.NetworkInformation.MibIPGlobalProperties::GetIcmpV6Statistics()
extern "C" IcmpV6Statistics_t3_391 * MibIPGlobalProperties_GetIcmpV6Statistics_m3_2596 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPGlobalStatistics System.Net.NetworkInformation.MibIPGlobalProperties::GetIPv4GlobalStatistics()
extern "C" IPGlobalStatistics_t3_357 * MibIPGlobalProperties_GetIPv4GlobalStatistics_m3_2597 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPGlobalStatistics System.Net.NetworkInformation.MibIPGlobalProperties::GetIPv6GlobalStatistics()
extern "C" IPGlobalStatistics_t3_357 * MibIPGlobalProperties_GetIPv6GlobalStatistics_m3_2598 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpStatistics System.Net.NetworkInformation.MibIPGlobalProperties::GetTcpIPv4Statistics()
extern "C" TcpStatistics_t3_444 * MibIPGlobalProperties_GetTcpIPv4Statistics_m3_2599 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpStatistics System.Net.NetworkInformation.MibIPGlobalProperties::GetTcpIPv6Statistics()
extern "C" TcpStatistics_t3_444 * MibIPGlobalProperties_GetTcpIPv6Statistics_m3_2600 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UdpStatistics System.Net.NetworkInformation.MibIPGlobalProperties::GetUdpIPv4Statistics()
extern "C" UdpStatistics_t3_448 * MibIPGlobalProperties_GetUdpIPv4Statistics_m3_2601 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UdpStatistics System.Net.NetworkInformation.MibIPGlobalProperties::GetUdpIPv6Statistics()
extern "C" UdpStatistics_t3_448 * MibIPGlobalProperties_GetUdpIPv6Statistics_m3_2602 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.MibIPGlobalProperties::get_DhcpScopeName()
extern "C" String_t* MibIPGlobalProperties_get_DhcpScopeName_m3_2603 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.MibIPGlobalProperties::get_DomainName()
extern "C" String_t* MibIPGlobalProperties_get_DomainName_m3_2604 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.MibIPGlobalProperties::get_HostName()
extern "C" String_t* MibIPGlobalProperties_get_HostName_m3_2605 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.MibIPGlobalProperties::get_IsWinsProxy()
extern "C" bool MibIPGlobalProperties_get_IsWinsProxy_m3_2606 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.MibIPGlobalProperties::get_NodeType()
extern "C" int32_t MibIPGlobalProperties_get_NodeType_m3_2607 (MibIPGlobalProperties_t3_350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
