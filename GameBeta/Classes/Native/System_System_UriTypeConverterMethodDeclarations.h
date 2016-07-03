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

// System.UriTypeConverter
struct UriTypeConverter_t3_791;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;

#include "codegen/il2cpp-codegen.h"

// System.Void System.UriTypeConverter::.ctor()
extern "C" void UriTypeConverter__ctor_m3_6485 (UriTypeConverter_t3_791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C" bool UriTypeConverter_CanConvert_m3_6486 (UriTypeConverter_t3_791 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertFrom_m3_6487 (UriTypeConverter_t3_791 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertTo_m3_6488 (UriTypeConverter_t3_791 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * UriTypeConverter_ConvertFrom_m3_6489 (UriTypeConverter_t3_791 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * UriTypeConverter_ConvertTo_m3_6490 (UriTypeConverter_t3_791 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
