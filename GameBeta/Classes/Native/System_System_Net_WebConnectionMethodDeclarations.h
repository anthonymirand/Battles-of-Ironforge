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

// System.Net.WebConnection
struct WebConnection_t3_598;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3_634;
// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.Exception
struct Exception_t1_33;
// System.IO.Stream
struct Stream_t1_226;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3_0;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Object
struct Object_t;
// System.EventHandler
struct EventHandler_t1_275;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.EventArgs
struct EventArgs_t1_105;
// System.Net.NetworkCredential
struct NetworkCredential_t3_537;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.WebConnection::.ctor(System.Net.WebConnectionGroup,System.Net.ServicePoint)
extern "C" void WebConnection__ctor_m3_5066 (WebConnection_t3_598 * __this, WebConnectionGroup_t3_634 * ___group, ServicePoint_t3_4 * ___sPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::.cctor()
extern "C" void WebConnection__cctor_m3_5067 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CanReuse()
extern "C" bool WebConnection_CanReuse_m3_5068 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::LoggedThrow(System.Exception)
extern "C" void WebConnection_LoggedThrow_m3_5069 (WebConnection_t3_598 * __this, Exception_t1_33 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebConnection::DownloadPolicy(System.String,System.String)
extern "C" Stream_t1_226 * WebConnection_DownloadPolicy_m3_5070 (Object_t * __this /* static, unused */, String_t* ___url, String_t* ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::CheckUnityWebSecurity(System.Net.HttpWebRequest)
extern "C" void WebConnection_CheckUnityWebSecurity_m3_5071 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Connect(System.Net.HttpWebRequest)
extern "C" void WebConnection_Connect_m3_5072 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EnsureSSLStreamAvailable()
extern "C" void WebConnection_EnsureSSLStreamAvailable_m3_5073 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateTunnel(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&)
extern "C" bool WebConnection_CreateTunnel_m3_5074 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, Stream_t1_226 * ___stream, ByteU5BU5D_t1_72** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebConnection::ReadHeaders(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&,System.Int32&)
extern "C" WebHeaderCollection_t3_522 * WebConnection_ReadHeaders_m3_5075 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, Stream_t1_226 * ___stream, ByteU5BU5D_t1_72** ___retBuffer, int32_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateStream(System.Net.HttpWebRequest)
extern "C" bool WebConnection_CreateStream_m3_5076 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::HandleError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C" void WebConnection_HandleError_m3_5077 (WebConnection_t3_598 * __this, int32_t ___st, Exception_t1_33 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ReadDone(System.IAsyncResult)
extern "C" void WebConnection_ReadDone_m3_5078 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ExpectContent(System.Int32)
extern "C" bool WebConnection_ExpectContent_m3_5079 (Object_t * __this /* static, unused */, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::GetCertificates()
extern "C" void WebConnection_GetCertificates_m3_5080 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitRead(System.Object)
extern "C" void WebConnection_InitRead_m3_5081 (Object_t * __this /* static, unused */, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::GetResponse(System.Byte[],System.Int32)
extern "C" int32_t WebConnection_GetResponse_m3_5082 (WebConnection_t3_598 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitConnection(System.Object)
extern "C" void WebConnection_InitConnection_m3_5083 (WebConnection_t3_598 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.WebConnection::SendRequest(System.Net.HttpWebRequest)
extern "C" EventHandler_t1_275 * WebConnection_SendRequest_m3_5084 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::SendNext()
extern "C" void WebConnection_SendNext_m3_5085 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::NextRead()
extern "C" void WebConnection_NextRead_m3_5086 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
extern "C" bool WebConnection_ReadLine_m3_5087 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___buffer, int32_t* ___start, int32_t ___max, String_t** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginRead(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnection_BeginRead_m3_5088 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1_28 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EndRead(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C" int32_t WebConnection_EndRead_m3_5089 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EnsureRead(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnection_EnsureRead_m3_5090 (WebConnection_t3_598 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CompleteChunkedRead()
extern "C" bool WebConnection_CompleteChunkedRead_m3_5091 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginWrite(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnection_BeginWrite_m3_5092 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1_28 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EndWrite2(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C" void WebConnection_EndWrite2_m3_5093 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::EndWrite(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C" bool WebConnection_EndWrite_m3_5094 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::Read(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnection_Read_m3_5095 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::Write(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.String&)
extern "C" bool WebConnection_Write_m3_5096 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___request, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, String_t** ___err_msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Close(System.Boolean)
extern "C" void WebConnection_Close_m3_5097 (WebConnection_t3_598 * __this, bool ___sendNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Abort(System.Object,System.EventArgs)
extern "C" void WebConnection_Abort_m3_5098 (WebConnection_t3_598 * __this, Object_t * ___sender, EventArgs_t1_105 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ResetNtlm()
extern "C" void WebConnection_ResetNtlm_m3_5099 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Busy()
extern "C" bool WebConnection_get_Busy_m3_5100 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Connected()
extern "C" bool WebConnection_get_Connected_m3_5101 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_PriorityRequest(System.Net.HttpWebRequest)
extern "C" void WebConnection_set_PriorityRequest_m3_5102 (WebConnection_t3_598 * __this, HttpWebRequest_t3_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
extern "C" bool WebConnection_get_NtlmAuthenticated_m3_5103 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
extern "C" void WebConnection_set_NtlmAuthenticated_m3_5104 (WebConnection_t3_598 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
extern "C" NetworkCredential_t3_537 * WebConnection_get_NtlmCredential_m3_5105 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
extern "C" void WebConnection_set_NtlmCredential_m3_5106 (WebConnection_t3_598 * __this, NetworkCredential_t3_537 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
extern "C" bool WebConnection_get_UnsafeAuthenticatedConnectionSharing_m3_5107 (WebConnection_t3_598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
extern "C" void WebConnection_set_UnsafeAuthenticatedConnectionSharing_m3_5108 (WebConnection_t3_598 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
