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

// System.Net.HttpListenerResponse
struct HttpListenerResponse_t3_586;
// System.Net.HttpListenerContext
struct HttpListenerContext_t3_527;
// System.Text.Encoding
struct Encoding_t1_227;
// System.String
struct String_t;
// System.Net.CookieCollection
struct CookieCollection_t3_531;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.IO.Stream
struct Stream_t1_226;
// System.Version
struct Version_t1_331;
// System.Net.Cookie
struct Cookie_t3_529;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IO.MemoryStream
struct MemoryStream_t1_250;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpListenerResponse::.ctor(System.Net.HttpListenerContext)
extern "C" void HttpListenerResponse__ctor_m3_4428 (HttpListenerResponse_t3_586 * __this, HttpListenerContext_t3_527 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::System.IDisposable.Dispose()
extern "C" void HttpListenerResponse_System_IDisposable_Dispose_m3_4429 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerResponse::get_ForceCloseChunked()
extern "C" bool HttpListenerResponse_get_ForceCloseChunked_m3_4430 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.HttpListenerResponse::get_ContentEncoding()
extern "C" Encoding_t1_227 * HttpListenerResponse_get_ContentEncoding_m3_4431 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_ContentEncoding(System.Text.Encoding)
extern "C" void HttpListenerResponse_set_ContentEncoding_m3_4432 (HttpListenerResponse_t3_586 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpListenerResponse::get_ContentLength64()
extern "C" int64_t HttpListenerResponse_get_ContentLength64_m3_4433 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_ContentLength64(System.Int64)
extern "C" void HttpListenerResponse_set_ContentLength64_m3_4434 (HttpListenerResponse_t3_586 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerResponse::get_ContentType()
extern "C" String_t* HttpListenerResponse_get_ContentType_m3_4435 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_ContentType(System.String)
extern "C" void HttpListenerResponse_set_ContentType_m3_4436 (HttpListenerResponse_t3_586 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.HttpListenerResponse::get_Cookies()
extern "C" CookieCollection_t3_531 * HttpListenerResponse_get_Cookies_m3_4437 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_Cookies(System.Net.CookieCollection)
extern "C" void HttpListenerResponse_set_Cookies_m3_4438 (HttpListenerResponse_t3_586 * __this, CookieCollection_t3_531 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::get_Headers()
extern "C" WebHeaderCollection_t3_522 * HttpListenerResponse_get_Headers_m3_4439 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_Headers(System.Net.WebHeaderCollection)
extern "C" void HttpListenerResponse_set_Headers_m3_4440 (HttpListenerResponse_t3_586 * __this, WebHeaderCollection_t3_522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerResponse::get_KeepAlive()
extern "C" bool HttpListenerResponse_get_KeepAlive_m3_4441 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_KeepAlive(System.Boolean)
extern "C" void HttpListenerResponse_set_KeepAlive_m3_4442 (HttpListenerResponse_t3_586 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpListenerResponse::get_OutputStream()
extern "C" Stream_t1_226 * HttpListenerResponse_get_OutputStream_m3_4443 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.HttpListenerResponse::get_ProtocolVersion()
extern "C" Version_t1_331 * HttpListenerResponse_get_ProtocolVersion_m3_4444 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_ProtocolVersion(System.Version)
extern "C" void HttpListenerResponse_set_ProtocolVersion_m3_4445 (HttpListenerResponse_t3_586 * __this, Version_t1_331 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerResponse::get_RedirectLocation()
extern "C" String_t* HttpListenerResponse_get_RedirectLocation_m3_4446 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_RedirectLocation(System.String)
extern "C" void HttpListenerResponse_set_RedirectLocation_m3_4447 (HttpListenerResponse_t3_586 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerResponse::get_SendChunked()
extern "C" bool HttpListenerResponse_get_SendChunked_m3_4448 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_SendChunked(System.Boolean)
extern "C" void HttpListenerResponse_set_SendChunked_m3_4449 (HttpListenerResponse_t3_586 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerResponse::get_StatusCode()
extern "C" int32_t HttpListenerResponse_get_StatusCode_m3_4450 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_StatusCode(System.Int32)
extern "C" void HttpListenerResponse_set_StatusCode_m3_4451 (HttpListenerResponse_t3_586 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerResponse::GetStatusDescription(System.Int32)
extern "C" String_t* HttpListenerResponse_GetStatusDescription_m3_4452 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerResponse::get_StatusDescription()
extern "C" String_t* HttpListenerResponse_get_StatusDescription_m3_4453 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_StatusDescription(System.String)
extern "C" void HttpListenerResponse_set_StatusDescription_m3_4454 (HttpListenerResponse_t3_586 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Abort()
extern "C" void HttpListenerResponse_Abort_m3_4455 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::AddHeader(System.String,System.String)
extern "C" void HttpListenerResponse_AddHeader_m3_4456 (HttpListenerResponse_t3_586 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::AppendCookie(System.Net.Cookie)
extern "C" void HttpListenerResponse_AppendCookie_m3_4457 (HttpListenerResponse_t3_586 * __this, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::AppendHeader(System.String,System.String)
extern "C" void HttpListenerResponse_AppendHeader_m3_4458 (HttpListenerResponse_t3_586 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Close(System.Boolean)
extern "C" void HttpListenerResponse_Close_m3_4459 (HttpListenerResponse_t3_586 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Close()
extern "C" void HttpListenerResponse_Close_m3_4460 (HttpListenerResponse_t3_586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Close(System.Byte[],System.Boolean)
extern "C" void HttpListenerResponse_Close_m3_4461 (HttpListenerResponse_t3_586 * __this, ByteU5BU5D_t1_72* ___responseEntity, bool ___willBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::CopyFrom(System.Net.HttpListenerResponse)
extern "C" void HttpListenerResponse_CopyFrom_m3_4462 (HttpListenerResponse_t3_586 * __this, HttpListenerResponse_t3_586 * ___templateResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Redirect(System.String)
extern "C" void HttpListenerResponse_Redirect_m3_4463 (HttpListenerResponse_t3_586 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerResponse::FindCookie(System.Net.Cookie)
extern "C" bool HttpListenerResponse_FindCookie_m3_4464 (HttpListenerResponse_t3_586 * __this, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::SendHeaders(System.Boolean,System.IO.MemoryStream)
extern "C" void HttpListenerResponse_SendHeaders_m3_4465 (HttpListenerResponse_t3_586 * __this, bool ___closing, MemoryStream_t1_250 * ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::SetCookie(System.Net.Cookie)
extern "C" void HttpListenerResponse_SetCookie_m3_4466 (HttpListenerResponse_t3_586 * __this, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
