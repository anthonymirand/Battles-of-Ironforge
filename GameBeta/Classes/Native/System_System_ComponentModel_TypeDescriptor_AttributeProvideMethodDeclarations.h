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

// System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor
struct AttributeTypeDescriptor_t3_178;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3_103;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor,System.Attribute[])
extern "C" void AttributeTypeDescriptor__ctor_m3_1258 (AttributeTypeDescriptor_t3_178 * __this, Object_t * ___parent, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor::GetAttributes()
extern "C" AttributeCollection_t3_76 * AttributeTypeDescriptor_GetAttributes_m3_1259 (AttributeTypeDescriptor_t3_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
