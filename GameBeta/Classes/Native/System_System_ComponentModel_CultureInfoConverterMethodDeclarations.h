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

// System.ComponentModel.CultureInfoConverter
struct CultureInfoConverter_t3_100;
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

// System.Void System.ComponentModel.CultureInfoConverter::.ctor()
extern "C" void CultureInfoConverter__ctor_m3_600 (CultureInfoConverter_t3_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool CultureInfoConverter_CanConvertFrom_m3_601 (CultureInfoConverter_t3_100 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool CultureInfoConverter_CanConvertTo_m3_602 (CultureInfoConverter_t3_100 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CultureInfoConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * CultureInfoConverter_ConvertFrom_m3_603 (CultureInfoConverter_t3_100 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CultureInfoConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * CultureInfoConverter_ConvertTo_m3_604 (CultureInfoConverter_t3_100 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t3_101 * CultureInfoConverter_GetStandardValues_m3_605 (CultureInfoConverter_t3_100 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CultureInfoConverter_GetStandardValuesExclusive_m3_606 (CultureInfoConverter_t3_100 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CultureInfoConverter_GetStandardValuesSupported_m3_607 (CultureInfoConverter_t3_100 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
