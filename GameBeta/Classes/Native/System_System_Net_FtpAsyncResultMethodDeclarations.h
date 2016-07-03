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

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t3_564;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;
// System.Exception
struct Exception_t1_33;
// System.Net.FtpWebResponse
struct FtpWebResponse_t3_565;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m3_4133 (FtpAsyncResult_t3_564 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m3_4134 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_454 * FtpAsyncResult_get_AsyncWaitHandle_m3_4135 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_CompletedSynchronously()
extern "C" bool FtpAsyncResult_get_CompletedSynchronously_m3_4136 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m3_4137 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m3_4138 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t1_33 * FtpAsyncResult_get_Exception_m3_4139 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t3_565 * FtpAsyncResult_get_Response_m3_4140 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Response(System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_set_Response_m3_4141 (FtpAsyncResult_t3_564 * __this, FtpWebResponse_t3_565 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpAsyncResult::get_Stream()
extern "C" Stream_t1_226 * FtpAsyncResult_get_Stream_m3_4142 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m3_4143 (FtpAsyncResult_t3_564 * __this, Stream_t1_226 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::WaitUntilComplete()
extern "C" void FtpAsyncResult_WaitUntilComplete_m3_4144 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m3_4145 (FtpAsyncResult_t3_564 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m3_4146 (FtpAsyncResult_t3_564 * __this, bool ___synch, Exception_t1_33 * ___exc, FtpWebResponse_t3_565 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m3_4147 (FtpAsyncResult_t3_564 * __this, bool ___synch, FtpWebResponse_t3_565 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m3_4148 (FtpAsyncResult_t3_564 * __this, bool ___synch, Exception_t1_33 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m3_4149 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::Reset()
extern "C" void FtpAsyncResult_Reset_m3_4150 (FtpAsyncResult_t3_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
