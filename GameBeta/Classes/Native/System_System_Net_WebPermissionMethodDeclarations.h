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

// System.Net.WebPermission
struct WebPermission_t3_639;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3_11;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.WebPermissionInfo
struct WebPermissionInfo_t3_638;
// System.Security.IPermission
struct IPermission_t1_671;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Security.SecurityElement
struct SecurityElement_t1_142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionState.h"
#include "System_System_Net_NetworkAccess.h"

// System.Void System.Net.WebPermission::.ctor()
extern "C" void WebPermission__ctor_m3_5227 (WebPermission_t3_639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void WebPermission__ctor_m3_5228 (WebPermission_t3_639 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::.ctor(System.Net.NetworkAccess,System.String)
extern "C" void WebPermission__ctor_m3_5229 (WebPermission_t3_639 * __this, int32_t ___access, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::.ctor(System.Net.NetworkAccess,System.Text.RegularExpressions.Regex)
extern "C" void WebPermission__ctor_m3_5230 (WebPermission_t3_639 * __this, int32_t ___access, Regex_t3_11 * ___uriRegex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebPermission::get_AcceptList()
extern "C" Object_t * WebPermission_get_AcceptList_m3_5231 (WebPermission_t3_639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebPermission::get_ConnectList()
extern "C" Object_t * WebPermission_get_ConnectList_m3_5232 (WebPermission_t3_639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::AddPermission(System.Net.NetworkAccess,System.String)
extern "C" void WebPermission_AddPermission_m3_5233 (WebPermission_t3_639 * __this, int32_t ___access, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::AddPermission(System.Net.NetworkAccess,System.Text.RegularExpressions.Regex)
extern "C" void WebPermission_AddPermission_m3_5234 (WebPermission_t3_639 * __this, int32_t ___access, Regex_t3_11 * ___uriRegex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::AddPermission(System.Net.NetworkAccess,System.Net.WebPermissionInfo)
extern "C" void WebPermission_AddPermission_m3_5235 (WebPermission_t3_639 * __this, int32_t ___access, WebPermissionInfo_t3_638 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Net.WebPermission::Copy()
extern "C" Object_t * WebPermission_Copy_m3_5236 (WebPermission_t3_639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Net.WebPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * WebPermission_Intersect_m3_5237 (WebPermission_t3_639 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebPermission::IntersectEmpty(System.Net.WebPermission)
extern "C" bool WebPermission_IntersectEmpty_m3_5238 (WebPermission_t3_639 * __this, WebPermission_t3_639 * ___permission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::Intersect(System.Collections.ArrayList,System.Collections.ArrayList,System.Collections.ArrayList)
extern "C" void WebPermission_Intersect_m3_5239 (WebPermission_t3_639 * __this, ArrayList_t1_114 * ___list1, ArrayList_t1_114 * ___list2, ArrayList_t1_114 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool WebPermission_IsSubsetOf_m3_5240 (WebPermission_t3_639 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebPermission::IsSubsetOf(System.Collections.ArrayList,System.Collections.ArrayList)
extern "C" bool WebPermission_IsSubsetOf_m3_5241 (WebPermission_t3_639 * __this, ArrayList_t1_114 * ___list1, ArrayList_t1_114 * ___list2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebPermission::IsUnrestricted()
extern "C" bool WebPermission_IsUnrestricted_m3_5242 (WebPermission_t3_639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Net.WebPermission::ToXml()
extern "C" SecurityElement_t1_142 * WebPermission_ToXml_m3_5243 (WebPermission_t3_639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::ToXml(System.Security.SecurityElement,System.String,System.Collections.IEnumerator)
extern "C" void WebPermission_ToXml_m3_5244 (WebPermission_t3_639 * __this, SecurityElement_t1_142 * ___root, String_t* ___childName, Object_t * ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::FromXml(System.Security.SecurityElement)
extern "C" void WebPermission_FromXml_m3_5245 (WebPermission_t3_639 * __this, SecurityElement_t1_142 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermission::FromXml(System.Collections.ArrayList,System.Net.NetworkAccess)
extern "C" void WebPermission_FromXml_m3_5246 (WebPermission_t3_639 * __this, ArrayList_t1_114 * ___endpoints, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Net.WebPermission::Union(System.Security.IPermission)
extern "C" Object_t * WebPermission_Union_m3_5247 (WebPermission_t3_639 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
