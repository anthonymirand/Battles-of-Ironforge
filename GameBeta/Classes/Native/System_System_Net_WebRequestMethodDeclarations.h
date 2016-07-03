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

// System.Net.WebRequest
struct WebRequest_t3_8;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t3_296;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Net.IWebProxy
struct IWebProxy_t3_562;
// System.Uri
struct Uri_t3_3;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.WebResponse
struct WebResponse_t3_559;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t3_834;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Net_Security_AuthenticationLevel.h"
#include "mscorlib_System_Security_Principal_TokenImpersonationLevel.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C" void WebRequest__ctor_m3_5289 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest__ctor_m3_5290 (WebRequest_t3_8 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C" void WebRequest__cctor_m3_5291 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3_5292 (WebRequest_t3_8 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C" void WebRequest_AddDynamicPrefix_m3_5293 (Object_t * __this /* static, unused */, String_t* ___protocol, String_t* ___implementor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C" Exception_t1_33 * WebRequest_GetMustImplement_m3_5294 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.AuthenticationLevel System.Net.WebRequest::get_AuthenticationLevel()
extern "C" int32_t WebRequest_get_AuthenticationLevel_m3_5295 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_AuthenticationLevel(System.Net.Security.AuthenticationLevel)
extern "C" void WebRequest_set_AuthenticationLevel_m3_5296 (WebRequest_t3_8 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::get_CachePolicy()
extern "C" RequestCachePolicy_t3_296 * WebRequest_get_CachePolicy_m3_5297 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_CachePolicy(System.Net.Cache.RequestCachePolicy)
extern "C" void WebRequest_set_CachePolicy_m3_5298 (WebRequest_t3_8 * __this, RequestCachePolicy_t3_296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_ConnectionGroupName()
extern "C" String_t* WebRequest_get_ConnectionGroupName_m3_5299 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ConnectionGroupName(System.String)
extern "C" void WebRequest_set_ConnectionGroupName_m3_5300 (WebRequest_t3_8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C" int64_t WebRequest_get_ContentLength_m3_5301 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ContentLength(System.Int64)
extern "C" void WebRequest_set_ContentLength_m3_5302 (WebRequest_t3_8 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_ContentType()
extern "C" String_t* WebRequest_get_ContentType_m3_5303 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ContentType(System.String)
extern "C" void WebRequest_set_ContentType_m3_5304 (WebRequest_t3_8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C" Object_t * WebRequest_get_Credentials_m3_5305 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void WebRequest_set_Credentials_m3_5306 (WebRequest_t3_8 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::get_DefaultCachePolicy()
extern "C" RequestCachePolicy_t3_296 * WebRequest_get_DefaultCachePolicy_m3_5307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_DefaultCachePolicy(System.Net.Cache.RequestCachePolicy)
extern "C" void WebRequest_set_DefaultCachePolicy_m3_5308 (Object_t * __this /* static, unused */, RequestCachePolicy_t3_296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C" WebHeaderCollection_t3_522 * WebRequest_get_Headers_m3_5309 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Headers(System.Net.WebHeaderCollection)
extern "C" void WebRequest_set_Headers_m3_5310 (WebRequest_t3_8 * __this, WebHeaderCollection_t3_522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::get_ImpersonationLevel()
extern "C" int32_t WebRequest_get_ImpersonationLevel_m3_5311 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ImpersonationLevel(System.Security.Principal.TokenImpersonationLevel)
extern "C" void WebRequest_set_ImpersonationLevel_m3_5312 (WebRequest_t3_8 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C" String_t* WebRequest_get_Method_m3_5313 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Method(System.String)
extern "C" void WebRequest_set_Method_m3_5314 (WebRequest_t3_8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebRequest::get_PreAuthenticate()
extern "C" bool WebRequest_get_PreAuthenticate_m3_5315 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_PreAuthenticate(System.Boolean)
extern "C" void WebRequest_set_PreAuthenticate_m3_5316 (WebRequest_t3_8 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C" Object_t * WebRequest_get_Proxy_m3_5317 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Proxy(System.Net.IWebProxy)
extern "C" void WebRequest_set_Proxy_m3_5318 (WebRequest_t3_8 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C" Uri_t3_3 * WebRequest_get_RequestUri_m3_5319 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebRequest::get_Timeout()
extern "C" int32_t WebRequest_get_Timeout_m3_5320 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Timeout(System.Int32)
extern "C" void WebRequest_set_Timeout_m3_5321 (WebRequest_t3_8 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebRequest::get_UseDefaultCredentials()
extern "C" bool WebRequest_get_UseDefaultCredentials_m3_5322 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_UseDefaultCredentials(System.Boolean)
extern "C" void WebRequest_set_UseDefaultCredentials_m3_5323 (WebRequest_t3_8 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C" Object_t * WebRequest_get_DefaultWebProxy_m3_5324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_DefaultWebProxy(System.Net.IWebProxy)
extern "C" void WebRequest_set_DefaultWebProxy_m3_5325 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C" Object_t * WebRequest_GetDefaultWebProxy_m3_5326 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C" void WebRequest_Abort_m3_5327 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
extern "C" Object_t * WebRequest_BeginGetRequestStream_m3_5328 (WebRequest_t3_8 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * WebRequest_BeginGetResponse_m3_5329 (WebRequest_t3_8 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern "C" WebRequest_t3_8 * WebRequest_Create_m3_5330 (Object_t * __this /* static, unused */, String_t* ___requestUriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C" WebRequest_t3_8 * WebRequest_Create_m3_5331 (Object_t * __this /* static, unused */, Uri_t3_3 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::CreateDefault(System.Uri)
extern "C" WebRequest_t3_8 * WebRequest_CreateDefault_m3_5332 (Object_t * __this /* static, unused */, Uri_t3_3 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebRequest::EndGetRequestStream(System.IAsyncResult)
extern "C" Stream_t1_226 * WebRequest_EndGetRequestStream_m3_5333 (WebRequest_t3_8 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t3_559 * WebRequest_EndGetResponse_m3_5334 (WebRequest_t3_8 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebRequest::GetRequestStream()
extern "C" Stream_t1_226 * WebRequest_GetRequestStream_m3_5335 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C" WebResponse_t3_559 * WebRequest_GetResponse_m3_5336 (WebRequest_t3_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetSystemWebProxy()
extern "C" Object_t * WebRequest_GetSystemWebProxy_m3_5337 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_GetObjectData_m3_5338 (WebRequest_t3_8 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebRequest::RegisterPrefix(System.String,System.Net.IWebRequestCreate)
extern "C" bool WebRequest_RegisterPrefix_m3_5339 (Object_t * __this /* static, unused */, String_t* ___prefix, Object_t * ___creator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C" Object_t * WebRequest_GetCreator_m3_5340 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::ClearPrefixes()
extern "C" void WebRequest_ClearPrefixes_m3_5341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::RemovePrefix(System.String)
extern "C" void WebRequest_RemovePrefix_m3_5342 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.String)
extern "C" void WebRequest_AddPrefix_m3_5343 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C" void WebRequest_AddPrefix_m3_5344 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
