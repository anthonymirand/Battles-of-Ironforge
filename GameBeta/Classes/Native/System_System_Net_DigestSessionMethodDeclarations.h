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

// System.Net.DigestSession
struct DigestSession_t3_541;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3_0;
// System.Net.Authorization
struct Authorization_t3_516;
// System.Net.WebRequest
struct WebRequest_t3_8;
// System.Net.ICredentials
struct ICredentials_t3_561;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.DigestSession::.ctor()
extern "C" void DigestSession__ctor_m3_3971 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
extern "C" void DigestSession__cctor_m3_3972 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
extern "C" String_t* DigestSession_get_Algorithm_m3_3973 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
extern "C" String_t* DigestSession_get_Realm_m3_3974 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
extern "C" String_t* DigestSession_get_Nonce_m3_3975 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
extern "C" String_t* DigestSession_get_Opaque_m3_3976 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
extern "C" String_t* DigestSession_get_QOP_m3_3977 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
extern "C" String_t* DigestSession_get_CNonce_m3_3978 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
extern "C" bool DigestSession_Parse_m3_3979 (DigestSession_t3_541 * __this, String_t* ___challenge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
extern "C" String_t* DigestSession_HashToHexString_m3_3980 (DigestSession_t3_541 * __this, String_t* ___toBeHashed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
extern "C" String_t* DigestSession_HA1_m3_3981 (DigestSession_t3_541 * __this, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_HA2_m3_3982 (DigestSession_t3_541 * __this, HttpWebRequest_t3_0 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_Response_m3_3983 (DigestSession_t3_541 * __this, String_t* ___username, String_t* ___password, HttpWebRequest_t3_0 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3_516 * DigestSession_Authenticate_m3_3984 (DigestSession_t3_541 * __this, WebRequest_t3_8 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
extern "C" DateTime_t1_128  DigestSession_get_LastUse_m3_3985 (DigestSession_t3_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
