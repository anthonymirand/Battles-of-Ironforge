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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Specialized_BitVector32.h"
#include "System_System_Collections_Specialized_BitVector32_Section.h"

// System.Void System.Collections.Specialized.BitVector32::.ctor(System.Collections.Specialized.BitVector32)
extern "C" void BitVector32__ctor_m3_79 (BitVector32_t3_31 * __this, BitVector32_t3_31  ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.BitVector32::.ctor(System.Int32)
extern "C" void BitVector32__ctor_m3_80 (BitVector32_t3_31 * __this, int32_t ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::get_Data()
extern "C" int32_t BitVector32_get_Data_m3_81 (BitVector32_t3_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::get_Item(System.Collections.Specialized.BitVector32/Section)
extern "C" int32_t BitVector32_get_Item_m3_82 (BitVector32_t3_31 * __this, Section_t3_30  ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.BitVector32::set_Item(System.Collections.Specialized.BitVector32/Section,System.Int32)
extern "C" void BitVector32_set_Item_m3_83 (BitVector32_t3_31 * __this, Section_t3_30  ___section, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32::get_Item(System.Int32)
extern "C" bool BitVector32_get_Item_m3_84 (BitVector32_t3_31 * __this, int32_t ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.BitVector32::set_Item(System.Int32,System.Boolean)
extern "C" void BitVector32_set_Item_m3_85 (BitVector32_t3_31 * __this, int32_t ___mask, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::CreateMask()
extern "C" int32_t BitVector32_CreateMask_m3_86 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::CreateMask(System.Int32)
extern "C" int32_t BitVector32_CreateMask_m3_87 (Object_t * __this /* static, unused */, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.BitVector32/Section System.Collections.Specialized.BitVector32::CreateSection(System.Int16)
extern "C" Section_t3_30  BitVector32_CreateSection_m3_88 (Object_t * __this /* static, unused */, int16_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.BitVector32/Section System.Collections.Specialized.BitVector32::CreateSection(System.Int16,System.Collections.Specialized.BitVector32/Section)
extern "C" Section_t3_30  BitVector32_CreateSection_m3_89 (Object_t * __this /* static, unused */, int16_t ___maxValue, Section_t3_30  ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32::Equals(System.Object)
extern "C" bool BitVector32_Equals_m3_90 (BitVector32_t3_31 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::GetHashCode()
extern "C" int32_t BitVector32_GetHashCode_m3_91 (BitVector32_t3_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.BitVector32::ToString()
extern "C" String_t* BitVector32_ToString_m3_92 (BitVector32_t3_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.BitVector32::ToString(System.Collections.Specialized.BitVector32)
extern "C" String_t* BitVector32_ToString_m3_93 (Object_t * __this /* static, unused */, BitVector32_t3_31  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::HighestSetBit(System.Int32)
extern "C" int32_t BitVector32_HighestSetBit_m3_94 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
