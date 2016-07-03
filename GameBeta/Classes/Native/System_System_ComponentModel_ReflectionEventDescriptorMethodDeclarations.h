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

// System.ComponentModel.ReflectionEventDescriptor
struct ReflectionEventDescriptor_t3_161;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t3_124;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t1_22;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Reflection.EventInfo)
extern "C" void ReflectionEventDescriptor__ctor_m3_1107 (ReflectionEventDescriptor_t3_161 * __this, EventInfo_t * ___eventInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C" void ReflectionEventDescriptor__ctor_m3_1108 (ReflectionEventDescriptor_t3_161 * __this, Type_t * ___componentType, EventDescriptor_t3_124 * ___oldEventDescriptor, AttributeU5BU5D_t1_937* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void ReflectionEventDescriptor__ctor_m3_1109 (ReflectionEventDescriptor_t3_161 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_937* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::GetEventInfo()
extern "C" EventInfo_t * ReflectionEventDescriptor_GetEventInfo_m3_1110 (ReflectionEventDescriptor_t3_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::AddEventHandler(System.Object,System.Delegate)
extern "C" void ReflectionEventDescriptor_AddEventHandler_m3_1111 (ReflectionEventDescriptor_t3_161 * __this, Object_t * ___component, Delegate_t1_22 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::RemoveEventHandler(System.Object,System.Delegate)
extern "C" void ReflectionEventDescriptor_RemoveEventHandler_m3_1112 (ReflectionEventDescriptor_t3_161 * __this, Object_t * ___component, Delegate_t1_22 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_ComponentType()
extern "C" Type_t * ReflectionEventDescriptor_get_ComponentType_m3_1113 (ReflectionEventDescriptor_t3_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_EventType()
extern "C" Type_t * ReflectionEventDescriptor_get_EventType_m3_1114 (ReflectionEventDescriptor_t3_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionEventDescriptor::get_IsMulticast()
extern "C" bool ReflectionEventDescriptor_get_IsMulticast_m3_1115 (ReflectionEventDescriptor_t3_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
