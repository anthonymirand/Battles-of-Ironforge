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

// System.ComponentModel.Info
struct Info_t3_186;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3_125;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t3_124;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.ComponentModel.IComponent
struct IComponent_t3_58;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C" void Info__ctor_m3_1354 (Info_t3_186 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C" Type_t * Info_get_InfoType_m3_1355 (Info_t3_186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.Info::GetEvents(System.Attribute[])
extern "C" EventDescriptorCollection_t3_125 * Info_GetEvents_m3_1356 (Info_t3_186 * __this, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * Info_GetProperties_m3_1357 (Info_t3_186 * __this, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.Info::GetDefaultEvent()
extern "C" EventDescriptor_t3_124 * Info_GetDefaultEvent_m3_1358 (Info_t3_186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::GetDefaultProperty()
extern "C" PropertyDescriptor_t3_70 * Info_GetDefaultProperty_m3_1359 (Info_t3_186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C" AttributeCollection_t3_76 * Info_GetAttributes_m3_1360 (Info_t3_186 * __this, Object_t * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
