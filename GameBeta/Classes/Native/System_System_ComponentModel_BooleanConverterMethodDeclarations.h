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

// System.ComponentModel.BooleanConverter
struct BooleanConverter_t3_85;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3_101;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.BooleanConverter::.ctor()
extern "C" void BooleanConverter__ctor_m3_523 (BooleanConverter_t3_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BooleanConverter_CanConvertFrom_m3_524 (BooleanConverter_t3_85 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BooleanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * BooleanConverter_ConvertFrom_m3_525 (BooleanConverter_t3_85 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.BooleanConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t3_101 * BooleanConverter_GetStandardValues_m3_526 (BooleanConverter_t3_85 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesExclusive_m3_527 (BooleanConverter_t3_85 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesSupported_m3_528 (BooleanConverter_t3_85 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
