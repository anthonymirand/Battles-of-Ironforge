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

// System.ComponentModel.UInt16Converter
struct UInt16Converter_t3_190;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.UInt16Converter::.ctor()
extern "C" void UInt16Converter__ctor_m3_1377 (UInt16Converter_t3_190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.UInt16Converter::get_SupportHex()
extern "C" bool UInt16Converter_get_SupportHex_m3_1378 (UInt16Converter_t3_190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* UInt16Converter_ConvertToString_m3_1379 (UInt16Converter_t3_190 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * UInt16Converter_ConvertFromString_m3_1380 (UInt16Converter_t3_190 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * UInt16Converter_ConvertFromString_m3_1381 (UInt16Converter_t3_190 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
