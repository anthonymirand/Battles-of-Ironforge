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

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t3_52;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor__ctor_m3_352 (InstanceDescriptor_t3_52 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern "C" void InstanceDescriptor__ctor_m3_353 (InstanceDescriptor_t3_52 * __this, MemberInfo_t * ___member, Object_t * ___arguments, bool ___isComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::ValidateMember(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor_ValidateMember_m3_354 (InstanceDescriptor_t3_52 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::get_Arguments()
extern "C" Object_t * InstanceDescriptor_get_Arguments_m3_355 (InstanceDescriptor_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::get_IsComplete()
extern "C" bool InstanceDescriptor_get_IsComplete_m3_356 (InstanceDescriptor_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::get_MemberInfo()
extern "C" MemberInfo_t * InstanceDescriptor_get_MemberInfo_m3_357 (InstanceDescriptor_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern "C" Object_t * InstanceDescriptor_Invoke_m3_358 (InstanceDescriptor_t3_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
