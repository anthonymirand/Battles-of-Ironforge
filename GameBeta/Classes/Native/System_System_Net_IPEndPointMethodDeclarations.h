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

// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Net.EndPoint
struct EndPoint_t3_491;
// System.Net.SocketAddress
struct SocketAddress_t3_612;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void IPEndPoint__ctor_m3_4668 (IPEndPoint_t3_442 * __this, IPAddress_t3_339 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C" void IPEndPoint__ctor_m3_4669 (IPEndPoint_t3_442 * __this, int64_t ___iaddr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C" IPAddress_t3_339 * IPEndPoint_get_Address_m3_4670 (IPEndPoint_t3_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C" void IPEndPoint_set_Address_m3_4671 (IPEndPoint_t3_442 * __this, IPAddress_t3_339 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C" int32_t IPEndPoint_get_AddressFamily_m3_4672 (IPEndPoint_t3_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C" int32_t IPEndPoint_get_Port_m3_4673 (IPEndPoint_t3_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C" void IPEndPoint_set_Port_m3_4674 (IPEndPoint_t3_442 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C" EndPoint_t3_491 * IPEndPoint_Create_m3_4675 (IPEndPoint_t3_442 * __this, SocketAddress_t3_612 * ___socketAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C" SocketAddress_t3_612 * IPEndPoint_Serialize_m3_4676 (IPEndPoint_t3_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C" String_t* IPEndPoint_ToString_m3_4677 (IPEndPoint_t3_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C" bool IPEndPoint_Equals_m3_4678 (IPEndPoint_t3_442 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C" int32_t IPEndPoint_GetHashCode_m3_4679 (IPEndPoint_t3_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
