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

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t3_187;
// System.ComponentModel.IComponent
struct IComponent_t3_58;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3_125;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C" void ComponentInfo__ctor_m3_1361 (ComponentInfo_t3_187 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C" AttributeCollection_t3_76 * ComponentInfo_GetAttributes_m3_1362 (ComponentInfo_t3_187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::GetEvents()
extern "C" EventDescriptorCollection_t3_125 * ComponentInfo_GetEvents_m3_1363 (ComponentInfo_t3_187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t3_158 * ComponentInfo_GetProperties_m3_1364 (ComponentInfo_t3_187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
