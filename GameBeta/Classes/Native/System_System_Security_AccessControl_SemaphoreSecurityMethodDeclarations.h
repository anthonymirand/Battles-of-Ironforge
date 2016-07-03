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

// System.Security.AccessControl.SemaphoreSecurity
struct SemaphoreSecurity_t3_650;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Security.AccessControl.AccessRule
struct AccessRule_t1_559;
// System.Security.Principal.IdentityReference
struct IdentityReference_t1_563;
// System.Security.AccessControl.SemaphoreAccessRule
struct SemaphoreAccessRule_t3_647;
// System.Security.AccessControl.SemaphoreAuditRule
struct SemaphoreAuditRule_t3_648;
// System.Security.AccessControl.AuditRule
struct AuditRule_t1_562;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_AccessControl_AccessControlSections.h"
#include "mscorlib_System_Security_AccessControl_InheritanceFlags.h"
#include "mscorlib_System_Security_AccessControl_PropagationFlags.h"
#include "mscorlib_System_Security_AccessControl_AccessControlType.h"
#include "mscorlib_System_Security_AccessControl_AuditFlags.h"

// System.Void System.Security.AccessControl.SemaphoreSecurity::.ctor()
extern "C" void SemaphoreSecurity__ctor_m3_5366 (SemaphoreSecurity_t3_650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::.ctor(System.String,System.Security.AccessControl.AccessControlSections)
extern "C" void SemaphoreSecurity__ctor_m3_5367 (SemaphoreSecurity_t3_650 * __this, String_t* ___name, int32_t ___includesections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.AccessControl.SemaphoreSecurity::get_AccessRightType()
extern "C" Type_t * SemaphoreSecurity_get_AccessRightType_m3_5368 (SemaphoreSecurity_t3_650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.AccessControl.SemaphoreSecurity::get_AccessRuleType()
extern "C" Type_t * SemaphoreSecurity_get_AccessRuleType_m3_5369 (SemaphoreSecurity_t3_650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.AccessControl.SemaphoreSecurity::get_AuditRuleType()
extern "C" Type_t * SemaphoreSecurity_get_AuditRuleType_m3_5370 (SemaphoreSecurity_t3_650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.AccessControl.AccessRule System.Security.AccessControl.SemaphoreSecurity::AccessRuleFactory(System.Security.Principal.IdentityReference,System.Int32,System.Boolean,System.Security.AccessControl.InheritanceFlags,System.Security.AccessControl.PropagationFlags,System.Security.AccessControl.AccessControlType)
extern "C" AccessRule_t1_559 * SemaphoreSecurity_AccessRuleFactory_m3_5371 (SemaphoreSecurity_t3_650 * __this, IdentityReference_t1_563 * ___identityReference, int32_t ___accessMask, bool ___isInherited, int32_t ___inheritanceFlags, int32_t ___propagationFlags, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::AddAccessRule(System.Security.AccessControl.SemaphoreAccessRule)
extern "C" void SemaphoreSecurity_AddAccessRule_m3_5372 (SemaphoreSecurity_t3_650 * __this, SemaphoreAccessRule_t3_647 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::AddAuditRule(System.Security.AccessControl.SemaphoreAuditRule)
extern "C" void SemaphoreSecurity_AddAuditRule_m3_5373 (SemaphoreSecurity_t3_650 * __this, SemaphoreAuditRule_t3_648 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.AccessControl.AuditRule System.Security.AccessControl.SemaphoreSecurity::AuditRuleFactory(System.Security.Principal.IdentityReference,System.Int32,System.Boolean,System.Security.AccessControl.InheritanceFlags,System.Security.AccessControl.PropagationFlags,System.Security.AccessControl.AuditFlags)
extern "C" AuditRule_t1_562 * SemaphoreSecurity_AuditRuleFactory_m3_5374 (SemaphoreSecurity_t3_650 * __this, IdentityReference_t1_563 * ___identityReference, int32_t ___accessMask, bool ___isInherited, int32_t ___inheritanceFlags, int32_t ___propagationFlags, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.AccessControl.SemaphoreSecurity::RemoveAccessRule(System.Security.AccessControl.SemaphoreAccessRule)
extern "C" bool SemaphoreSecurity_RemoveAccessRule_m3_5375 (SemaphoreSecurity_t3_650 * __this, SemaphoreAccessRule_t3_647 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::RemoveAccessRuleAll(System.Security.AccessControl.SemaphoreAccessRule)
extern "C" void SemaphoreSecurity_RemoveAccessRuleAll_m3_5376 (SemaphoreSecurity_t3_650 * __this, SemaphoreAccessRule_t3_647 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::RemoveAccessRuleSpecific(System.Security.AccessControl.SemaphoreAccessRule)
extern "C" void SemaphoreSecurity_RemoveAccessRuleSpecific_m3_5377 (SemaphoreSecurity_t3_650 * __this, SemaphoreAccessRule_t3_647 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.AccessControl.SemaphoreSecurity::RemoveAuditRule(System.Security.AccessControl.SemaphoreAuditRule)
extern "C" bool SemaphoreSecurity_RemoveAuditRule_m3_5378 (SemaphoreSecurity_t3_650 * __this, SemaphoreAuditRule_t3_648 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::RemoveAuditRuleAll(System.Security.AccessControl.SemaphoreAuditRule)
extern "C" void SemaphoreSecurity_RemoveAuditRuleAll_m3_5379 (SemaphoreSecurity_t3_650 * __this, SemaphoreAuditRule_t3_648 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::RemoveAuditRuleSpecific(System.Security.AccessControl.SemaphoreAuditRule)
extern "C" void SemaphoreSecurity_RemoveAuditRuleSpecific_m3_5380 (SemaphoreSecurity_t3_650 * __this, SemaphoreAuditRule_t3_648 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::ResetAccessRule(System.Security.AccessControl.SemaphoreAccessRule)
extern "C" void SemaphoreSecurity_ResetAccessRule_m3_5381 (SemaphoreSecurity_t3_650 * __this, SemaphoreAccessRule_t3_647 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::SetAccessRule(System.Security.AccessControl.SemaphoreAccessRule)
extern "C" void SemaphoreSecurity_SetAccessRule_m3_5382 (SemaphoreSecurity_t3_650 * __this, SemaphoreAccessRule_t3_647 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreSecurity::SetAuditRule(System.Security.AccessControl.SemaphoreAuditRule)
extern "C" void SemaphoreSecurity_SetAuditRule_m3_5383 (SemaphoreSecurity_t3_650 * __this, SemaphoreAuditRule_t3_648 * ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
