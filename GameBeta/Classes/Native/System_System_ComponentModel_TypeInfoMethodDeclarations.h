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

// System.ComponentModel.TypeInfo
struct TypeInfo_t3_188;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3_125;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m3_1365 (TypeInfo_t3_188 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C" AttributeCollection_t3_76 * TypeInfo_GetAttributes_m3_1366 (TypeInfo_t3_188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeInfo::GetEvents()
extern "C" EventDescriptorCollection_t3_125 * TypeInfo_GetEvents_m3_1367 (TypeInfo_t3_188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t3_158 * TypeInfo_GetProperties_m3_1368 (TypeInfo_t3_188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
