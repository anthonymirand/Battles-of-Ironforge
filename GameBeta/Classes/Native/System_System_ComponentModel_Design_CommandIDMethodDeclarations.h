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

// System.ComponentModel.Design.CommandID
struct CommandID_t3_53;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.ComponentModel.Design.CommandID::.ctor(System.Guid,System.Int32)
extern "C" void CommandID__ctor_m3_359 (CommandID_t3_53 * __this, Guid_t1_775  ___menuGroup, int32_t ___commandID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.ComponentModel.Design.CommandID::get_Guid()
extern "C" Guid_t1_775  CommandID_get_Guid_m3_360 (CommandID_t3_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Design.CommandID::get_ID()
extern "C" int32_t CommandID_get_ID_m3_361 (CommandID_t3_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.CommandID::Equals(System.Object)
extern "C" bool CommandID_Equals_m3_362 (CommandID_t3_53 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Design.CommandID::GetHashCode()
extern "C" int32_t CommandID_GetHashCode_m3_363 (CommandID_t3_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.CommandID::ToString()
extern "C" String_t* CommandID_ToString_m3_364 (CommandID_t3_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
