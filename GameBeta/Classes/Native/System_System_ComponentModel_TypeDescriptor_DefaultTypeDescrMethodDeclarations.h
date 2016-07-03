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

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t3_181;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3_177;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptionProvider,System.Type,System.Object)
extern "C" void DefaultTypeDescriptor__ctor_m3_1271 (DefaultTypeDescriptor_t3_181 * __this, TypeDescriptionProvider_t3_177 * ___owner, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetAttributes()
extern "C" AttributeCollection_t3_76 * DefaultTypeDescriptor_GetAttributes_m3_1272 (DefaultTypeDescriptor_t3_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetClassName()
extern "C" String_t* DefaultTypeDescriptor_GetClassName_m3_1273 (DefaultTypeDescriptor_t3_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetDefaultProperty()
extern "C" PropertyDescriptor_t3_70 * DefaultTypeDescriptor_GetDefaultProperty_m3_1274 (DefaultTypeDescriptor_t3_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetProperties()
extern "C" PropertyDescriptorCollection_t3_158 * DefaultTypeDescriptor_GetProperties_m3_1275 (DefaultTypeDescriptor_t3_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
