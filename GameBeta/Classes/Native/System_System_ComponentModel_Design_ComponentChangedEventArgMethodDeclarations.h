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

// System.ComponentModel.Design.ComponentChangedEventArgs
struct ComponentChangedEventArgs_t3_54;
// System.Object
struct Object_t;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3_55;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.ComponentChangedEventArgs::.ctor(System.Object,System.ComponentModel.MemberDescriptor,System.Object,System.Object)
extern "C" void ComponentChangedEventArgs__ctor_m3_365 (ComponentChangedEventArgs_t3_54 * __this, Object_t * ___component, MemberDescriptor_t3_55 * ___member, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::get_Component()
extern "C" Object_t * ComponentChangedEventArgs_get_Component_m3_366 (ComponentChangedEventArgs_t3_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.MemberDescriptor System.ComponentModel.Design.ComponentChangedEventArgs::get_Member()
extern "C" MemberDescriptor_t3_55 * ComponentChangedEventArgs_get_Member_m3_367 (ComponentChangedEventArgs_t3_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::get_NewValue()
extern "C" Object_t * ComponentChangedEventArgs_get_NewValue_m3_368 (ComponentChangedEventArgs_t3_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::get_OldValue()
extern "C" Object_t * ComponentChangedEventArgs_get_OldValue_m3_369 (ComponentChangedEventArgs_t3_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
