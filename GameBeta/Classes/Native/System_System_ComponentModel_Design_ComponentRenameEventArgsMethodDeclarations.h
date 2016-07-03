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

// System.ComponentModel.Design.ComponentRenameEventArgs
struct ComponentRenameEventArgs_t3_59;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.ComponentRenameEventArgs::.ctor(System.Object,System.String,System.String)
extern "C" void ComponentRenameEventArgs__ctor_m3_375 (ComponentRenameEventArgs_t3_59 * __this, Object_t * ___component, String_t* ___oldName, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentRenameEventArgs::get_Component()
extern "C" Object_t * ComponentRenameEventArgs_get_Component_m3_376 (ComponentRenameEventArgs_t3_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.ComponentRenameEventArgs::get_NewName()
extern "C" String_t* ComponentRenameEventArgs_get_NewName_m3_377 (ComponentRenameEventArgs_t3_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.ComponentRenameEventArgs::get_OldName()
extern "C" String_t* ComponentRenameEventArgs_get_OldName_m3_378 (ComponentRenameEventArgs_t3_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
