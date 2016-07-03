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

// System.Security.AccessControl.NativeObjectSecurity
struct NativeObjectSecurity_t1_569;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_AccessControl_ResourceType.h"
#include "mscorlib_System_Security_AccessControl_AccessControlSections.h"

// System.Void System.Security.AccessControl.NativeObjectSecurity::.ctor(System.Boolean,System.Security.AccessControl.ResourceType)
extern "C" void NativeObjectSecurity__ctor_m1_3975 (NativeObjectSecurity_t1_569 * __this, bool ___isContainer, int32_t ___resourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.NativeObjectSecurity::.ctor(System.Boolean,System.Security.AccessControl.ResourceType,System.String,System.Security.AccessControl.AccessControlSections)
extern "C" void NativeObjectSecurity__ctor_m1_3976 (NativeObjectSecurity_t1_569 * __this, bool ___isContainer, int32_t ___resourceType, String_t* ___name, int32_t ___includeSections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
