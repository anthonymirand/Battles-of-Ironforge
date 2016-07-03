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

// System.ComponentModel.NullableConverter
struct NullableConverter_t3_154;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3_101;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3_83;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.NullableConverter::.ctor(System.Type)
extern "C" void NullableConverter__ctor_m3_985 (NullableConverter_t3_154 * __this, Type_t * ___nullableType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertFrom_m3_986 (NullableConverter_t3_154 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertTo_m3_987 (NullableConverter_t3_154 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * NullableConverter_ConvertFrom_m3_988 (NullableConverter_t3_154 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * NullableConverter_ConvertTo_m3_989 (NullableConverter_t3_154 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern "C" Object_t * NullableConverter_CreateInstance_m3_990 (NullableConverter_t3_154 * __this, Object_t * ___context, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetCreateInstanceSupported_m3_991 (NullableConverter_t3_154 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.NullableConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * NullableConverter_GetProperties_m3_992 (NullableConverter_t3_154 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetPropertiesSupported_m3_993 (NullableConverter_t3_154 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.NullableConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t3_101 * NullableConverter_GetStandardValues_m3_994 (NullableConverter_t3_154 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesExclusive_m3_995 (NullableConverter_t3_154 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesSupported_m3_996 (NullableConverter_t3_154 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool NullableConverter_IsValid_m3_997 (NullableConverter_t3_154 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.NullableConverter::get_NullableType()
extern "C" Type_t * NullableConverter_get_NullableType_m3_998 (NullableConverter_t3_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.NullableConverter::get_UnderlyingType()
extern "C" Type_t * NullableConverter_get_UnderlyingType_m3_999 (NullableConverter_t3_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::get_UnderlyingTypeConverter()
extern "C" TypeConverter_t3_83 * NullableConverter_get_UnderlyingTypeConverter_m3_1000 (NullableConverter_t3_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
