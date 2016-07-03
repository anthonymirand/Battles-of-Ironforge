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

// System.Net.BasicClient
struct BasicClient_t3_518;
// System.Net.Authorization
struct Authorization_t3_516;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t3_8;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m3_3805 (BasicClient_t3_518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3_516 * BasicClient_Authenticate_m3_3806 (BasicClient_t3_518 * __this, String_t* ___challenge, WebRequest_t3_8 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t1_72* BasicClient_GetBytes_m3_3807 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3_516 * BasicClient_InternalAuthenticate_m3_3808 (Object_t * __this /* static, unused */, WebRequest_t3_8 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3_516 * BasicClient_PreAuthenticate_m3_3809 (BasicClient_t3_518 * __this, WebRequest_t3_8 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m3_3810 (BasicClient_t3_518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.BasicClient::get_CanPreAuthenticate()
extern "C" bool BasicClient_get_CanPreAuthenticate_m3_3811 (BasicClient_t3_518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
