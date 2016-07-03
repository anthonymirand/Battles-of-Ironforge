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

// System.ComponentModel.ComponentConverter
struct ComponentConverter_t3_97;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ComponentConverter::.ctor(System.Type)
extern "C" void ComponentConverter__ctor_m3_595 (ComponentConverter_t3_97 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * ComponentConverter_GetProperties_m3_596 (ComponentConverter_t3_97 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ComponentConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ComponentConverter_GetPropertiesSupported_m3_597 (ComponentConverter_t3_97 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
