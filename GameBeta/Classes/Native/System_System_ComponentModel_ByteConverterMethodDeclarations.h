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

// System.ComponentModel.ByteConverter
struct ByteConverter_t3_87;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ByteConverter::.ctor()
extern "C" void ByteConverter__ctor_m3_535 (ByteConverter_t3_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ByteConverter::get_SupportHex()
extern "C" bool ByteConverter_get_SupportHex_m3_536 (ByteConverter_t3_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.ByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* ByteConverter_ConvertToString_m3_537 (ByteConverter_t3_87 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * ByteConverter_ConvertFromString_m3_538 (ByteConverter_t3_87 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * ByteConverter_ConvertFromString_m3_539 (ByteConverter_t3_87 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
