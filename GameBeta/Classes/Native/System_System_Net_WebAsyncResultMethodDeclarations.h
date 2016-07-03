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

// System.Net.WebAsyncResult
struct WebAsyncResult_t3_597;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3_0;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Exception
struct Exception_t1_33;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.HttpWebResponse
struct HttpWebResponse_t3_596;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;
// System.IAsyncResult
struct IAsyncResult_t1_27;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m3_4902 (WebAsyncResult_t3_597 * __this, AsyncCallback_t1_28 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m3_4903 (WebAsyncResult_t3_597 * __this, HttpWebRequest_t3_0 * ___request, AsyncCallback_t1_28 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C" void WebAsyncResult__ctor_m3_4904 (WebAsyncResult_t3_597 * __this, AsyncCallback_t1_28 * ___cb, Object_t * ___state, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void WebAsyncResult_SetCompleted_m3_4905 (WebAsyncResult_t3_597 * __this, bool ___synch, Exception_t1_33 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C" void WebAsyncResult_Reset_m3_4906 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C" void WebAsyncResult_SetCompleted_m3_4907 (WebAsyncResult_t3_597 * __this, bool ___synch, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C" void WebAsyncResult_SetCompleted_m3_4908 (WebAsyncResult_t3_597 * __this, bool ___synch, Stream_t1_226 * ___writeStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C" void WebAsyncResult_SetCompleted_m3_4909 (WebAsyncResult_t3_597 * __this, bool ___synch, HttpWebResponse_t3_596 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C" void WebAsyncResult_DoCallback_m3_4910 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C" void WebAsyncResult_WaitUntilComplete_m3_4911 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool WebAsyncResult_WaitUntilComplete_m3_4912 (WebAsyncResult_t3_597 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C" Object_t * WebAsyncResult_get_AsyncState_m3_4913 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_454 * WebAsyncResult_get_AsyncWaitHandle_m3_4914 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_CompletedSynchronously()
extern "C" bool WebAsyncResult_get_CompletedSynchronously_m3_4915 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C" bool WebAsyncResult_get_IsCompleted_m3_4916 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C" bool WebAsyncResult_get_GotException_m3_4917 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C" Exception_t1_33 * WebAsyncResult_get_Exception_m3_4918 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C" int32_t WebAsyncResult_get_NBytes_m3_4919 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C" void WebAsyncResult_set_NBytes_m3_4920 (WebAsyncResult_t3_597 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C" Object_t * WebAsyncResult_get_InnerAsyncResult_m3_4921 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C" void WebAsyncResult_set_InnerAsyncResult_m3_4922 (WebAsyncResult_t3_597 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebAsyncResult::get_WriteStream()
extern "C" Stream_t1_226 * WebAsyncResult_get_WriteStream_m3_4923 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C" HttpWebResponse_t3_596 * WebAsyncResult_get_Response_m3_4924 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t1_72* WebAsyncResult_get_Buffer_m3_4925 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C" int32_t WebAsyncResult_get_Offset_m3_4926 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C" int32_t WebAsyncResult_get_Size_m3_4927 (WebAsyncResult_t3_597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
