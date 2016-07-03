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

// System.AppDomain
struct AppDomain_t1_674;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1_733;
// System.String
struct String_t;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t1_879;
// System.Reflection.Assembly
struct Assembly_t1_277;
// System.Security.Policy.Evidence
struct Evidence_t1_318;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1_434;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_add_UnhandledException_m1_4956 (AppDomain_t1_674 * __this, UnhandledExceptionEventHandler_t1_733 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_remove_UnhandledException_m1_4957 (AppDomain_t1_674 * __this, UnhandledExceptionEventHandler_t1_733 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m1_4958 (AppDomain_t1_674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1_674 * AppDomain_getCurDomain_m1_4959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1_674 * AppDomain_get_CurrentDomain_m1_4960 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies(System.Boolean)
extern "C" AssemblyU5BU5D_t1_879* AppDomain_GetAssemblies_m1_4961 (AppDomain_t1_674 * __this, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
extern "C" AssemblyU5BU5D_t1_879* AppDomain_GetAssemblies_m1_4962 (AppDomain_t1_674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1_277 * AppDomain_LoadAssembly_m1_4963 (AppDomain_t1_674 * __this, String_t* ___assemblyRef, Evidence_t1_318 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1_277 * AppDomain_Load_m1_4964 (AppDomain_t1_674 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1_277 * AppDomain_Load_m1_4965 (AppDomain_t1_674 * __this, String_t* ___assemblyString, Evidence_t1_318 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1_434 * AppDomain_InternalSetContext_m1_4966 (Object_t * __this /* static, unused */, Context_t1_434 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1_434 * AppDomain_InternalGetContext_m1_4967 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1_434 * AppDomain_InternalGetDefaultContext_m1_4968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m1_4969 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m1_4970 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m1_4971 (AppDomain_t1_674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t1_277 * AppDomain_DoTypeResolve_m1_4972 (AppDomain_t1_674 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
