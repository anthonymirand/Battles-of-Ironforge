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

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3_177;
// System.Object
struct Object_t;
// System.IServiceProvider
struct IServiceProvider_t1_959;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3_103;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern "C" void TypeDescriptionProvider__ctor_m3_1246 (TypeDescriptionProvider_t3_177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C" void TypeDescriptionProvider__ctor_m3_1247 (TypeDescriptionProvider_t3_177 * __this, TypeDescriptionProvider_t3_177 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * TypeDescriptionProvider_CreateInstance_m3_1248 (TypeDescriptionProvider_t3_177 * __this, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t1_31* ___argTypes, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.TypeDescriptionProvider::GetCache(System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetCache_m3_1249 (TypeDescriptionProvider_t3_177 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetExtendedTypeDescriptor_m3_1250 (TypeDescriptionProvider_t3_177 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptionProvider::GetFullComponentName(System.Object)
extern "C" String_t* TypeDescriptionProvider_GetFullComponentName_m3_1251 (TypeDescriptionProvider_t3_177 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Object)
extern "C" Type_t * TypeDescriptionProvider_GetReflectionType_m3_1252 (TypeDescriptionProvider_t3_177 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type)
extern "C" Type_t * TypeDescriptionProvider_GetReflectionType_m3_1253 (TypeDescriptionProvider_t3_177 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern "C" Type_t * TypeDescriptionProvider_GetReflectionType_m3_1254 (TypeDescriptionProvider_t3_177 * __this, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetTypeDescriptor_m3_1255 (TypeDescriptionProvider_t3_177 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type)
extern "C" Object_t * TypeDescriptionProvider_GetTypeDescriptor_m3_1256 (TypeDescriptionProvider_t3_177 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetTypeDescriptor_m3_1257 (TypeDescriptionProvider_t3_177 * __this, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
