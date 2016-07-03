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

// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t3_92;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_CollectionChangeAction.h"

// System.Void System.ComponentModel.CollectionChangeEventArgs::.ctor(System.ComponentModel.CollectionChangeAction,System.Object)
extern "C" void CollectionChangeEventArgs__ctor_m3_570 (CollectionChangeEventArgs_t3_92 * __this, int32_t ___action, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::get_Action()
extern "C" int32_t CollectionChangeEventArgs_get_Action_m3_571 (CollectionChangeEventArgs_t3_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CollectionChangeEventArgs::get_Element()
extern "C" Object_t * CollectionChangeEventArgs_get_Element_m3_572 (CollectionChangeEventArgs_t3_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
