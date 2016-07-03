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

// System.Net.Authorization
struct Authorization_t3_516;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3_517;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Authorization::.ctor(System.String)
extern "C" void Authorization__ctor_m3_3792 (Authorization_t3_516 * __this, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
extern "C" void Authorization__ctor_m3_3793 (Authorization_t3_516 * __this, String_t* ___token, bool ___complete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean,System.String)
extern "C" void Authorization__ctor_m3_3794 (Authorization_t3_516 * __this, String_t* ___token, bool ___complete, String_t* ___connectionGroupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Authorization::get_Message()
extern "C" String_t* Authorization_get_Message_m3_3795 (Authorization_t3_516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C" bool Authorization_get_Complete_m3_3796 (Authorization_t3_516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Authorization::get_ConnectionGroupId()
extern "C" String_t* Authorization_get_ConnectionGroupId_m3_3797 (Authorization_t3_516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.Authorization::get_ProtectionRealm()
extern "C" StringU5BU5D_t1_206* Authorization_get_ProtectionRealm_m3_3798 (Authorization_t3_516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_ProtectionRealm(System.String[])
extern "C" void Authorization_set_ProtectionRealm_m3_3799 (Authorization_t3_516 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C" Object_t * Authorization_get_Module_m3_3800 (Authorization_t3_516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C" void Authorization_set_Module_m3_3801 (Authorization_t3_516 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Authorization::GetMustImplement()
extern "C" Exception_t1_33 * Authorization_GetMustImplement_m3_3802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_MutuallyAuthenticated()
extern "C" bool Authorization_get_MutuallyAuthenticated_m3_3803 (Authorization_t3_516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_MutuallyAuthenticated(System.Boolean)
extern "C" void Authorization_set_MutuallyAuthenticated_m3_3804 (Authorization_t3_516 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
