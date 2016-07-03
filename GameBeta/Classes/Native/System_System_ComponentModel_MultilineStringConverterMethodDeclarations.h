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

// System.ComponentModel.MultilineStringConverter
struct MultilineStringConverter_t3_152;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.MultilineStringConverter::.ctor()
extern "C" void MultilineStringConverter__ctor_m3_975 (MultilineStringConverter_t3_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MultilineStringConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * MultilineStringConverter_ConvertTo_m3_976 (MultilineStringConverter_t3_152 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.MultilineStringConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * MultilineStringConverter_GetProperties_m3_977 (MultilineStringConverter_t3_152 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MultilineStringConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool MultilineStringConverter_GetPropertiesSupported_m3_978 (MultilineStringConverter_t3_152 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
