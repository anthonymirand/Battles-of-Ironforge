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

// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t3_98;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3_101;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReferenceConverter::.ctor(System.Type)
extern "C" void ReferenceConverter__ctor_m3_1099 (ReferenceConverter_t3_98 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool ReferenceConverter_CanConvertFrom_m3_1100 (ReferenceConverter_t3_98 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * ReferenceConverter_ConvertFrom_m3_1101 (ReferenceConverter_t3_98 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * ReferenceConverter_ConvertTo_m3_1102 (ReferenceConverter_t3_98 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.ReferenceConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t3_101 * ReferenceConverter_GetStandardValues_m3_1103 (ReferenceConverter_t3_98 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ReferenceConverter_GetStandardValuesExclusive_m3_1104 (ReferenceConverter_t3_98 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ReferenceConverter_GetStandardValuesSupported_m3_1105 (ReferenceConverter_t3_98 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::IsValueAllowed(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool ReferenceConverter_IsValueAllowed_m3_1106 (ReferenceConverter_t3_98 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
