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

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1_648;
// System.Security.IPermission
struct IPermission_t1_671;
// System.Security.SecurityElement
struct SecurityElement_t1_142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionState.h"
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void SecurityPermission__ctor_m1_4398 (SecurityPermission_t1_648 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission__ctor_m1_4399 (SecurityPermission_t1_648 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission_set_Flags_m1_4400 (SecurityPermission_t1_648 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C" bool SecurityPermission_IsUnrestricted_m1_4401 (SecurityPermission_t1_648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Copy()
extern "C" Object_t * SecurityPermission_Copy_m1_4402 (SecurityPermission_t1_648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * SecurityPermission_Intersect_m1_4403 (SecurityPermission_t1_648 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Union(System.Security.IPermission)
extern "C" Object_t * SecurityPermission_Union_m1_4404 (SecurityPermission_t1_648 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool SecurityPermission_IsSubsetOf_m1_4405 (SecurityPermission_t1_648 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::FromXml(System.Security.SecurityElement)
extern "C" void SecurityPermission_FromXml_m1_4406 (SecurityPermission_t1_648 * __this, SecurityElement_t1_142 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C" SecurityElement_t1_142 * SecurityPermission_ToXml_m1_4407 (SecurityPermission_t1_648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C" bool SecurityPermission_IsEmpty_m1_4408 (SecurityPermission_t1_648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C" SecurityPermission_t1_648 * SecurityPermission_Cast_m1_4409 (SecurityPermission_t1_648 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
