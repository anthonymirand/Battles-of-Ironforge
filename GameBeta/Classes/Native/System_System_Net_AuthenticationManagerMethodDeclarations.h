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

// System.Net.AuthenticationManager
struct AuthenticationManager_t3_513;
// System.Net.ICredentialPolicy
struct ICredentialPolicy_t3_514;
// System.Exception
struct Exception_t1_33;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.Authorization
struct Authorization_t3_516;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t3_8;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3_517;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.AuthenticationManager::.ctor()
extern "C" void AuthenticationManager__ctor_m3_3776 (AuthenticationManager_t3_513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::.cctor()
extern "C" void AuthenticationManager__cctor_m3_3777 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C" void AuthenticationManager_EnsureModules_m3_3778 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentialPolicy System.Net.AuthenticationManager::get_CredentialPolicy()
extern "C" Object_t * AuthenticationManager_get_CredentialPolicy_m3_3779 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::set_CredentialPolicy(System.Net.ICredentialPolicy)
extern "C" void AuthenticationManager_set_CredentialPolicy_m3_3780 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.AuthenticationManager::GetMustImplement()
extern "C" Exception_t1_33 * AuthenticationManager_GetMustImplement_m3_3781 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.AuthenticationManager::get_CustomTargetNameDictionary()
extern "C" StringDictionary_t3_49 * AuthenticationManager_get_CustomTargetNameDictionary_m3_3782 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.AuthenticationManager::get_RegisteredModules()
extern "C" Object_t * AuthenticationManager_get_RegisteredModules_m3_3783 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Clear()
extern "C" void AuthenticationManager_Clear_m3_3784 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3_516 * AuthenticationManager_Authenticate_m3_3785 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t3_8 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3_516 * AuthenticationManager_DoAuthenticate_m3_3786 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t3_8 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3_516 * AuthenticationManager_PreAuthenticate_m3_3787 (Object_t * __this /* static, unused */, WebRequest_t3_8 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Register(System.Net.IAuthenticationModule)
extern "C" void AuthenticationManager_Register_m3_3788 (Object_t * __this /* static, unused */, Object_t * ___authenticationModule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Unregister(System.Net.IAuthenticationModule)
extern "C" void AuthenticationManager_Unregister_m3_3789 (Object_t * __this /* static, unused */, Object_t * ___authenticationModule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Unregister(System.String)
extern "C" void AuthenticationManager_Unregister_m3_3790 (Object_t * __this /* static, unused */, String_t* ___authenticationScheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::DoUnregister(System.String,System.Boolean)
extern "C" void AuthenticationManager_DoUnregister_m3_3791 (Object_t * __this /* static, unused */, String_t* ___authenticationScheme, bool ___throwEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
