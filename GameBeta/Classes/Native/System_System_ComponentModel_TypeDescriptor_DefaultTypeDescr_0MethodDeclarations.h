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

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider
struct DefaultTypeDescriptionProvider_t3_182;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3_103;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider::.ctor()
extern "C" void DefaultTypeDescriptionProvider__ctor_m3_1276 (DefaultTypeDescriptionProvider_t3_182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C" Object_t * DefaultTypeDescriptionProvider_GetExtendedTypeDescriptor_m3_1277 (DefaultTypeDescriptionProvider_t3_182 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C" Object_t * DefaultTypeDescriptionProvider_GetTypeDescriptor_m3_1278 (DefaultTypeDescriptionProvider_t3_182 * __this, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
