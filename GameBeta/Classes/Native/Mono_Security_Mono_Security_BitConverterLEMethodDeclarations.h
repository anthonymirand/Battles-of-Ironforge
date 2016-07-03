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

// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" ByteU5BU5D_t1_72* BitConverterLE_GetUIntBytes_m2_99 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t1_72* BitConverterLE_GetBytes_m2_100 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UIntFromBytes_m2_101 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t1_72* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
extern "C" int32_t BitConverterLE_ToInt32_m2_102 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.BitConverterLE::ToUInt32(System.Byte[],System.Int32)
extern "C" uint32_t BitConverterLE_ToUInt32_m2_103 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
