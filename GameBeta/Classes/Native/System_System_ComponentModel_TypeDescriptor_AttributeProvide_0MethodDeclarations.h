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

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct AttributeProvider_t3_179;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3_177;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3_103;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor/AttributeProvider::.ctor(System.Attribute[],System.ComponentModel.TypeDescriptionProvider)
extern "C" void AttributeProvider__ctor_m3_1260 (AttributeProvider_t3_179 * __this, AttributeU5BU5D_t1_937* ___attributes, TypeDescriptionProvider_t3_177 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/AttributeProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C" Object_t * AttributeProvider_GetTypeDescriptor_m3_1261 (AttributeProvider_t3_179 * __this, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
