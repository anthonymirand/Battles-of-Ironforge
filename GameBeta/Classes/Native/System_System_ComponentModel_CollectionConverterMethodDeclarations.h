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

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t3_72;
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

// System.Void System.ComponentModel.CollectionConverter::.ctor()
extern "C" void CollectionConverter__ctor_m3_573 (CollectionConverter_t3_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * CollectionConverter_ConvertTo_m3_574 (CollectionConverter_t3_72 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CollectionConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * CollectionConverter_GetProperties_m3_575 (CollectionConverter_t3_72 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CollectionConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CollectionConverter_GetPropertiesSupported_m3_576 (CollectionConverter_t3_72 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
