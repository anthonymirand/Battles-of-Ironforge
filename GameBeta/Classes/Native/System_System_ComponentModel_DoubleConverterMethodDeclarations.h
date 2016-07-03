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

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t3_118;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.DoubleConverter::.ctor()
extern "C" void DoubleConverter__ctor_m3_719 (DoubleConverter_t3_118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DoubleConverter::get_SupportHex()
extern "C" bool DoubleConverter_get_SupportHex_m3_720 (DoubleConverter_t3_118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DoubleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* DoubleConverter_ConvertToString_m3_721 (DoubleConverter_t3_118 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DoubleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * DoubleConverter_ConvertFromString_m3_722 (DoubleConverter_t3_118 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
