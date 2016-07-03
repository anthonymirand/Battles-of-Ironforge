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

// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.UInt16[]
struct UInt16U5BU5D_t1_613;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
extern "C" void IPAddress__ctor_m3_4634 (IPAddress_t3_339 * __this, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.Byte[])
extern "C" void IPAddress__ctor_m3_4635 (IPAddress_t3_339 * __this, ByteU5BU5D_t1_72* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
extern "C" void IPAddress__ctor_m3_4636 (IPAddress_t3_339 * __this, ByteU5BU5D_t1_72* ___address, int64_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
extern "C" void IPAddress__ctor_m3_4637 (IPAddress_t3_339 * __this, UInt16U5BU5D_t1_613* ___address, int64_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
extern "C" void IPAddress__cctor_m3_4638 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
extern "C" int16_t IPAddress_SwapShort_m3_4639 (Object_t * __this /* static, unused */, int16_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::SwapInt(System.Int32)
extern "C" int32_t IPAddress_SwapInt_m3_4640 (Object_t * __this /* static, unused */, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::SwapLong(System.Int64)
extern "C" int64_t IPAddress_SwapLong_m3_4641 (Object_t * __this /* static, unused */, int64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
extern "C" int16_t IPAddress_HostToNetworkOrder_m3_4642 (Object_t * __this /* static, unused */, int16_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::HostToNetworkOrder(System.Int32)
extern "C" int32_t IPAddress_HostToNetworkOrder_m3_4643 (Object_t * __this /* static, unused */, int32_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::HostToNetworkOrder(System.Int64)
extern "C" int64_t IPAddress_HostToNetworkOrder_m3_4644 (Object_t * __this /* static, unused */, int64_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
extern "C" int16_t IPAddress_NetworkToHostOrder_m3_4645 (Object_t * __this /* static, unused */, int16_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::NetworkToHostOrder(System.Int32)
extern "C" int32_t IPAddress_NetworkToHostOrder_m3_4646 (Object_t * __this /* static, unused */, int32_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::NetworkToHostOrder(System.Int64)
extern "C" int64_t IPAddress_NetworkToHostOrder_m3_4647 (Object_t * __this /* static, unused */, int64_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C" IPAddress_t3_339 * IPAddress_Parse_m3_4648 (Object_t * __this /* static, unused */, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C" bool IPAddress_TryParse_m3_4649 (Object_t * __this /* static, unused */, String_t* ___ipString, IPAddress_t3_339 ** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
extern "C" IPAddress_t3_339 * IPAddress_ParseIPV4_m3_4650 (Object_t * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
extern "C" IPAddress_t3_339 * IPAddress_ParseIPV6_m3_4651 (Object_t * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_Address()
extern "C" int64_t IPAddress_get_Address_m3_4652 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::set_Address(System.Int64)
extern "C" void IPAddress_set_Address_m3_4653 (IPAddress_t3_339 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
extern "C" int64_t IPAddress_get_InternalIPv4Address_m3_4654 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::get_IsIPv6LinkLocal()
extern "C" bool IPAddress_get_IsIPv6LinkLocal_m3_4655 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::get_IsIPv6SiteLocal()
extern "C" bool IPAddress_get_IsIPv6SiteLocal_m3_4656 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::get_IsIPv6Multicast()
extern "C" bool IPAddress_get_IsIPv6Multicast_m3_4657 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
extern "C" int64_t IPAddress_get_ScopeId_m3_4658 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::set_ScopeId(System.Int64)
extern "C" void IPAddress_set_ScopeId_m3_4659 (IPAddress_t3_339 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern "C" ByteU5BU5D_t1_72* IPAddress_GetAddressBytes_m3_4660 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C" int32_t IPAddress_get_AddressFamily_m3_4661 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern "C" bool IPAddress_IsLoopback_m3_4662 (Object_t * __this /* static, unused */, IPAddress_t3_339 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
extern "C" String_t* IPAddress_ToString_m3_4663 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
extern "C" String_t* IPAddress_ToString_m3_4664 (Object_t * __this /* static, unused */, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
extern "C" bool IPAddress_Equals_m3_4665 (IPAddress_t3_339 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
extern "C" int32_t IPAddress_GetHashCode_m3_4666 (IPAddress_t3_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t IPAddress_Hash_m3_4667 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
