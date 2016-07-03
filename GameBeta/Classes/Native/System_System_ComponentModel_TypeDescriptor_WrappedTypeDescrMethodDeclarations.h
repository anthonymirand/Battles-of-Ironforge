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

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct WrappedTypeDescriptionProvider_t3_180;
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

// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C" void WrappedTypeDescriptionProvider__ctor_m3_1262 (WrappedTypeDescriptionProvider_t3_180 * __this, TypeDescriptionProvider_t3_177 * ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::get_Wrapped()
extern "C" TypeDescriptionProvider_t3_177 * WrappedTypeDescriptionProvider_get_Wrapped_m3_1263 (WrappedTypeDescriptionProvider_t3_180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::set_Wrapped(System.ComponentModel.TypeDescriptionProvider)
extern "C" void WrappedTypeDescriptionProvider_set_Wrapped_m3_1264 (WrappedTypeDescriptionProvider_t3_180 * __this, TypeDescriptionProvider_t3_177 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * WrappedTypeDescriptionProvider_CreateInstance_m3_1265 (WrappedTypeDescriptionProvider_t3_180 * __this, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t1_31* ___argTypes, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetCache(System.Object)
extern "C" Object_t * WrappedTypeDescriptionProvider_GetCache_m3_1266 (WrappedTypeDescriptionProvider_t3_180 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C" Object_t * WrappedTypeDescriptionProvider_GetExtendedTypeDescriptor_m3_1267 (WrappedTypeDescriptionProvider_t3_180 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetFullComponentName(System.Object)
extern "C" String_t* WrappedTypeDescriptionProvider_GetFullComponentName_m3_1268 (WrappedTypeDescriptionProvider_t3_180 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern "C" Type_t * WrappedTypeDescriptionProvider_GetReflectionType_m3_1269 (WrappedTypeDescriptionProvider_t3_180 * __this, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C" Object_t * WrappedTypeDescriptionProvider_GetTypeDescriptor_m3_1270 (WrappedTypeDescriptionProvider_t3_180 * __this, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
