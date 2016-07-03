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

// System.ComponentModel.SingleConverter
struct SingleConverter_t3_168;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.SingleConverter::.ctor()
extern "C" void SingleConverter__ctor_m3_1151 (SingleConverter_t3_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.SingleConverter::get_SupportHex()
extern "C" bool SingleConverter_get_SupportHex_m3_1152 (SingleConverter_t3_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SingleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* SingleConverter_ConvertToString_m3_1153 (SingleConverter_t3_168 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SingleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * SingleConverter_ConvertFromString_m3_1154 (SingleConverter_t3_168 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
