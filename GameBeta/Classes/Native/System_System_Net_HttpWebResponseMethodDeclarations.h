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

// System.Net.HttpWebResponse
struct HttpWebResponse_t3_596;
// System.Uri
struct Uri_t3_3;
// System.String
struct String_t;
// System.Net.WebConnectionData
struct WebConnectionData_t3_633;
// System.Net.CookieContainer
struct CookieContainer_t3_532;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Net.CookieCollection
struct CookieCollection_t3_531;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Exception
struct Exception_t1_33;
// System.Version
struct Version_t1_331;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Net_HttpStatusCode.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C" void HttpWebResponse__ctor_m3_4598 (HttpWebResponse_t3_596 * __this, Uri_t3_3 * ___uri, String_t* ___method, WebConnectionData_t3_633 * ___data, CookieContainer_t3_532 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse__ctor_m3_4599 (HttpWebResponse_t3_596 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3_4600 (HttpWebResponse_t3_596 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C" void HttpWebResponse_System_IDisposable_Dispose_m3_4601 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_CharacterSet()
extern "C" String_t* HttpWebResponse_get_CharacterSet_m3_4602 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_ContentEncoding()
extern "C" String_t* HttpWebResponse_get_ContentEncoding_m3_4603 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebResponse::get_ContentLength()
extern "C" int64_t HttpWebResponse_get_ContentLength_m3_4604 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_ContentType()
extern "C" String_t* HttpWebResponse_get_ContentType_m3_4605 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.HttpWebResponse::get_Cookies()
extern "C" CookieCollection_t3_531 * HttpWebResponse_get_Cookies_m3_4606 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::set_Cookies(System.Net.CookieCollection)
extern "C" void HttpWebResponse_set_Cookies_m3_4607 (HttpWebResponse_t3_596 * __this, CookieCollection_t3_531 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t3_522 * HttpWebResponse_get_Headers_m3_4608 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.HttpWebResponse::GetMustImplement()
extern "C" Exception_t1_33 * HttpWebResponse_GetMustImplement_m3_4609 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebResponse::get_IsMutuallyAuthenticated()
extern "C" bool HttpWebResponse_get_IsMutuallyAuthenticated_m3_4610 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::get_LastModified()
extern "C" DateTime_t1_128  HttpWebResponse_get_LastModified_m3_4611 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_Method()
extern "C" String_t* HttpWebResponse_get_Method_m3_4612 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.HttpWebResponse::get_ProtocolVersion()
extern "C" Version_t1_331 * HttpWebResponse_get_ProtocolVersion_m3_4613 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebResponse::get_ResponseUri()
extern "C" Uri_t3_3 * HttpWebResponse_get_ResponseUri_m3_4614 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_Server()
extern "C" String_t* HttpWebResponse_get_Server_m3_4615 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C" int32_t HttpWebResponse_get_StatusCode_m3_4616 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C" String_t* HttpWebResponse_get_StatusDescription_m3_4617 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::GetResponseHeader(System.String)
extern "C" String_t* HttpWebResponse_GetResponseHeader_m3_4618 (HttpWebResponse_t3_596 * __this, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C" void HttpWebResponse_ReadAll_m3_4619 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C" Stream_t1_226 * HttpWebResponse_GetResponseStream_m3_4620 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_GetObjectData_m3_4621 (HttpWebResponse_t3_596 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C" void HttpWebResponse_Close_m3_4622 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C" void HttpWebResponse_Dispose_m3_4623 (HttpWebResponse_t3_596 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C" void HttpWebResponse_CheckDisposed_m3_4624 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C" void HttpWebResponse_FillCookies_m3_4625 (HttpWebResponse_t3_596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C" void HttpWebResponse_SetCookie_m3_4626 (HttpWebResponse_t3_596 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C" void HttpWebResponse_SetCookie2_m3_4627 (HttpWebResponse_t3_596 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C" DateTime_t1_128  HttpWebResponse_TryParseCookieExpires_m3_4628 (HttpWebResponse_t3_596 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
