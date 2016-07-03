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

// System.ComponentModel.Design.ComponentChangingEventArgs
struct ComponentChangingEventArgs_t3_56;
// System.Object
struct Object_t;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3_55;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.ComponentChangingEventArgs::.ctor(System.Object,System.ComponentModel.MemberDescriptor)
extern "C" void ComponentChangingEventArgs__ctor_m3_370 (ComponentChangingEventArgs_t3_56 * __this, Object_t * ___component, MemberDescriptor_t3_55 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentChangingEventArgs::get_Component()
extern "C" Object_t * ComponentChangingEventArgs_get_Component_m3_371 (ComponentChangingEventArgs_t3_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.MemberDescriptor System.ComponentModel.Design.ComponentChangingEventArgs::get_Member()
extern "C" MemberDescriptor_t3_55 * ComponentChangingEventArgs_get_Member_m3_372 (ComponentChangingEventArgs_t3_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
