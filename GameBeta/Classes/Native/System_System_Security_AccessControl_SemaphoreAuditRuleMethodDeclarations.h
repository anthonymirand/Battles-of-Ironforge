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

// System.Security.AccessControl.SemaphoreAuditRule
struct SemaphoreAuditRule_t3_648;
// System.Security.Principal.IdentityReference
struct IdentityReference_t1_563;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_AccessControl_SemaphoreRights.h"
#include "mscorlib_System_Security_AccessControl_AuditFlags.h"

// System.Void System.Security.AccessControl.SemaphoreAuditRule::.ctor(System.Security.Principal.IdentityReference,System.Security.AccessControl.SemaphoreRights,System.Security.AccessControl.AuditFlags)
extern "C" void SemaphoreAuditRule__ctor_m3_5364 (SemaphoreAuditRule_t3_648 * __this, IdentityReference_t1_563 * ___identity, int32_t ___semaphoreRights, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.AccessControl.SemaphoreRights System.Security.AccessControl.SemaphoreAuditRule::get_SemaphoreRights()
extern "C" int32_t SemaphoreAuditRule_get_SemaphoreRights_m3_5365 (SemaphoreAuditRule_t3_648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
