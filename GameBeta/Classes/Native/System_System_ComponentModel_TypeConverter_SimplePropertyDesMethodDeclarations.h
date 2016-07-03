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

// System.ComponentModel.TypeConverter/SimplePropertyDescriptor
struct SimplePropertyDescriptor_t3_174;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type)
extern "C" void SimplePropertyDescriptor__ctor_m3_1191 (SimplePropertyDescriptor_t3_174 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___propertyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void SimplePropertyDescriptor__ctor_m3_1192 (SimplePropertyDescriptor_t3_174 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___propertyType, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_ComponentType()
extern "C" Type_t * SimplePropertyDescriptor_get_ComponentType_m3_1193 (SimplePropertyDescriptor_t3_174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_PropertyType()
extern "C" Type_t * SimplePropertyDescriptor_get_PropertyType_m3_1194 (SimplePropertyDescriptor_t3_174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_IsReadOnly()
extern "C" bool SimplePropertyDescriptor_get_IsReadOnly_m3_1195 (SimplePropertyDescriptor_t3_174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C" bool SimplePropertyDescriptor_ShouldSerializeValue_m3_1196 (SimplePropertyDescriptor_t3_174 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::CanResetValue(System.Object)
extern "C" bool SimplePropertyDescriptor_CanResetValue_m3_1197 (SimplePropertyDescriptor_t3_174 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ResetValue(System.Object)
extern "C" void SimplePropertyDescriptor_ResetValue_m3_1198 (SimplePropertyDescriptor_t3_174 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
