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

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t3_585;
// System.Net.HttpListenerContext
struct HttpListenerContext_t3_527;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Net.CookieCollection
struct CookieCollection_t3_531;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3_43;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.Version
struct Version_t1_331;
// System.Uri
struct Uri_t3_3;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3_6;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Net.HttpListenerRequest::.ctor(System.Net.HttpListenerContext)
extern "C" void HttpListenerRequest__ctor_m3_4391 (HttpListenerRequest_t3_585 * __this, HttpListenerContext_t3_527 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::.cctor()
extern "C" void HttpListenerRequest__cctor_m3_4392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::SetRequestLine(System.String)
extern "C" void HttpListenerRequest_SetRequestLine_m3_4393 (HttpListenerRequest_t3_585 * __this, String_t* ___req, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::CreateQueryString(System.String)
extern "C" void HttpListenerRequest_CreateQueryString_m3_4394 (HttpListenerRequest_t3_585 * __this, String_t* ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::FinishInitialization()
extern "C" void HttpListenerRequest_FinishInitialization_m3_4395 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::Unquote(System.String)
extern "C" String_t* HttpListenerRequest_Unquote_m3_4396 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::AddHeader(System.String)
extern "C" void HttpListenerRequest_AddHeader_m3_4397 (HttpListenerRequest_t3_585 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::FlushInput()
extern "C" bool HttpListenerRequest_FlushInput_m3_4398 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.HttpListenerRequest::get_AcceptTypes()
extern "C" StringU5BU5D_t1_206* HttpListenerRequest_get_AcceptTypes_m3_4399 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerRequest::get_ClientCertificateError()
extern "C" int32_t HttpListenerRequest_get_ClientCertificateError_m3_4400 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.HttpListenerRequest::get_ContentEncoding()
extern "C" Encoding_t1_227 * HttpListenerRequest_get_ContentEncoding_m3_4401 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpListenerRequest::get_ContentLength64()
extern "C" int64_t HttpListenerRequest_get_ContentLength64_m3_4402 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_ContentType()
extern "C" String_t* HttpListenerRequest_get_ContentType_m3_4403 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.HttpListenerRequest::get_Cookies()
extern "C" CookieCollection_t3_531 * HttpListenerRequest_get_Cookies_m3_4404 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_HasEntityBody()
extern "C" bool HttpListenerRequest_get_HasEntityBody_m3_4405 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_Headers()
extern "C" NameValueCollection_t3_43 * HttpListenerRequest_get_Headers_m3_4406 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_HttpMethod()
extern "C" String_t* HttpListenerRequest_get_HttpMethod_m3_4407 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpListenerRequest::get_InputStream()
extern "C" Stream_t1_226 * HttpListenerRequest_get_InputStream_m3_4408 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_IsAuthenticated()
extern "C" bool HttpListenerRequest_get_IsAuthenticated_m3_4409 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_IsLocal()
extern "C" bool HttpListenerRequest_get_IsLocal_m3_4410 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_IsSecureConnection()
extern "C" bool HttpListenerRequest_get_IsSecureConnection_m3_4411 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_KeepAlive()
extern "C" bool HttpListenerRequest_get_KeepAlive_m3_4412 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpListenerRequest::get_LocalEndPoint()
extern "C" IPEndPoint_t3_442 * HttpListenerRequest_get_LocalEndPoint_m3_4413 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.HttpListenerRequest::get_ProtocolVersion()
extern "C" Version_t1_331 * HttpListenerRequest_get_ProtocolVersion_m3_4414 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_QueryString()
extern "C" NameValueCollection_t3_43 * HttpListenerRequest_get_QueryString_m3_4415 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_RawUrl()
extern "C" String_t* HttpListenerRequest_get_RawUrl_m3_4416 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpListenerRequest::get_RemoteEndPoint()
extern "C" IPEndPoint_t3_442 * HttpListenerRequest_get_RemoteEndPoint_m3_4417 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Net.HttpListenerRequest::get_RequestTraceIdentifier()
extern "C" Guid_t1_775  HttpListenerRequest_get_RequestTraceIdentifier_m3_4418 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpListenerRequest::get_Url()
extern "C" Uri_t3_3 * HttpListenerRequest_get_Url_m3_4419 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpListenerRequest::get_UrlReferrer()
extern "C" Uri_t3_3 * HttpListenerRequest_get_UrlReferrer_m3_4420 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserAgent()
extern "C" String_t* HttpListenerRequest_get_UserAgent_m3_4421 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserHostAddress()
extern "C" String_t* HttpListenerRequest_get_UserHostAddress_m3_4422 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserHostName()
extern "C" String_t* HttpListenerRequest_get_UserHostName_m3_4423 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.HttpListenerRequest::get_UserLanguages()
extern "C" StringU5BU5D_t1_206* HttpListenerRequest_get_UserLanguages_m3_4424 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpListenerRequest::BeginGetClientCertificate(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpListenerRequest_BeginGetClientCertificate_m3_4425 (HttpListenerRequest_t3_585 * __this, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.HttpListenerRequest::EndGetClientCertificate(System.IAsyncResult)
extern "C" X509Certificate2_t3_6 * HttpListenerRequest_EndGetClientCertificate_m3_4426 (HttpListenerRequest_t3_585 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.HttpListenerRequest::GetClientCertificate()
extern "C" X509Certificate2_t3_6 * HttpListenerRequest_GetClientCertificate_m3_4427 (HttpListenerRequest_t3_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
