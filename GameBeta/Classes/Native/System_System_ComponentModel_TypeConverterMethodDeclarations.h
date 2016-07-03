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

// System.ComponentModel.TypeConverter
struct TypeConverter_t3_83;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3_101;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C" void TypeConverter__ctor_m3_1199 (TypeConverter_t3_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C" bool TypeConverter_CanConvertFrom_m3_1200 (TypeConverter_t3_83 * __this, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TypeConverter_CanConvertFrom_m3_1201 (TypeConverter_t3_83 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern "C" bool TypeConverter_CanConvertTo_m3_1202 (TypeConverter_t3_83 * __this, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TypeConverter_CanConvertTo_m3_1203 (TypeConverter_t3_83 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C" Object_t * TypeConverter_ConvertFrom_m3_1204 (TypeConverter_t3_83 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * TypeConverter_ConvertFrom_m3_1205 (TypeConverter_t3_83 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m3_1206 (TypeConverter_t3_83 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m3_1207 (TypeConverter_t3_83 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m3_1208 (TypeConverter_t3_83 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m3_1209 (TypeConverter_t3_83 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m3_1210 (TypeConverter_t3_83 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
extern "C" Object_t * TypeConverter_ConvertTo_m3_1211 (TypeConverter_t3_83 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * TypeConverter_ConvertTo_m3_1212 (TypeConverter_t3_83 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C" String_t* TypeConverter_ConvertToInvariantString_m3_1213 (TypeConverter_t3_83 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" String_t* TypeConverter_ConvertToInvariantString_m3_1214 (TypeConverter_t3_83 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m3_1215 (TypeConverter_t3_83 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m3_1216 (TypeConverter_t3_83 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m3_1217 (TypeConverter_t3_83 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern "C" Exception_t1_33 * TypeConverter_GetConvertFromException_m3_1218 (TypeConverter_t3_83 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern "C" Exception_t1_33 * TypeConverter_GetConvertToException_m3_1219 (TypeConverter_t3_83 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.Collections.IDictionary)
extern "C" Object_t * TypeConverter_CreateInstance_m3_1220 (TypeConverter_t3_83 * __this, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern "C" Object_t * TypeConverter_CreateInstance_m3_1221 (TypeConverter_t3_83 * __this, Object_t * ___context, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported()
extern "C" bool TypeConverter_GetCreateInstanceSupported_m3_1222 (TypeConverter_t3_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetCreateInstanceSupported_m3_1223 (TypeConverter_t3_83 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.Object)
extern "C" PropertyDescriptorCollection_t3_158 * TypeConverter_GetProperties_m3_1224 (TypeConverter_t3_83 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" PropertyDescriptorCollection_t3_158 * TypeConverter_GetProperties_m3_1225 (TypeConverter_t3_83 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * TypeConverter_GetProperties_m3_1226 (TypeConverter_t3_83 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported()
extern "C" bool TypeConverter_GetPropertiesSupported_m3_1227 (TypeConverter_t3_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetPropertiesSupported_m3_1228 (TypeConverter_t3_83 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.TypeConverter::GetStandardValues()
extern "C" Object_t * TypeConverter_GetStandardValues_m3_1229 (TypeConverter_t3_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t3_101 * TypeConverter_GetStandardValues_m3_1230 (TypeConverter_t3_83 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive()
extern "C" bool TypeConverter_GetStandardValuesExclusive_m3_1231 (TypeConverter_t3_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesExclusive_m3_1232 (TypeConverter_t3_83 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported()
extern "C" bool TypeConverter_GetStandardValuesSupported_m3_1233 (TypeConverter_t3_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesSupported_m3_1234 (TypeConverter_t3_83 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.Object)
extern "C" bool TypeConverter_IsValid_m3_1235 (TypeConverter_t3_83 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool TypeConverter_IsValid_m3_1236 (TypeConverter_t3_83 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::SortProperties(System.ComponentModel.PropertyDescriptorCollection,System.String[])
extern "C" PropertyDescriptorCollection_t3_158 * TypeConverter_SortProperties_m3_1237 (TypeConverter_t3_83 * __this, PropertyDescriptorCollection_t3_158 * ___props, StringU5BU5D_t1_206* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
