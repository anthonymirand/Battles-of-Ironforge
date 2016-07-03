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

// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t3_427;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.PhysicalAddress::.ctor(System.Byte[])
extern "C" void PhysicalAddress__ctor_m3_3016 (PhysicalAddress_t3_427 * __this, ByteU5BU5D_t1_72* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.PhysicalAddress::.cctor()
extern "C" void PhysicalAddress__cctor_m3_3017 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::ParseEthernet(System.String)
extern "C" PhysicalAddress_t3_427 * PhysicalAddress_ParseEthernet_m3_3018 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::Parse(System.String)
extern "C" PhysicalAddress_t3_427 * PhysicalAddress_Parse_m3_3019 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.PhysicalAddress::GetValue(System.Char)
extern "C" uint8_t PhysicalAddress_GetValue_m3_3020 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.PhysicalAddress::Equals(System.Object)
extern "C" bool PhysicalAddress_Equals_m3_3021 (PhysicalAddress_t3_427 * __this, Object_t * ___comparand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.PhysicalAddress::GetHashCode()
extern "C" int32_t PhysicalAddress_GetHashCode_m3_3022 (PhysicalAddress_t3_427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::GetAddressBytes()
extern "C" ByteU5BU5D_t1_72* PhysicalAddress_GetAddressBytes_m3_3023 (PhysicalAddress_t3_427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.PhysicalAddress::ToString()
extern "C" String_t* PhysicalAddress_ToString_m3_3024 (PhysicalAddress_t3_427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
