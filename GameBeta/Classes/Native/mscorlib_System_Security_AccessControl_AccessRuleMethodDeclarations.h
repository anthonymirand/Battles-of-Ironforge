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

// System.Security.AccessControl.AccessRule
struct AccessRule_t1_559;
// System.Security.Principal.IdentityReference
struct IdentityReference_t1_563;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_AccessControl_InheritanceFlags.h"
#include "mscorlib_System_Security_AccessControl_PropagationFlags.h"
#include "mscorlib_System_Security_AccessControl_AccessControlType.h"

// System.Void System.Security.AccessControl.AccessRule::.ctor(System.Security.Principal.IdentityReference,System.Int32,System.Boolean,System.Security.AccessControl.InheritanceFlags,System.Security.AccessControl.PropagationFlags,System.Security.AccessControl.AccessControlType)
extern "C" void AccessRule__ctor_m1_3971 (AccessRule_t1_559 * __this, IdentityReference_t1_563 * ___identity, int32_t ___accessMask, bool ___isInherited, int32_t ___inheritanceFlags, int32_t ___propagationFlags, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
