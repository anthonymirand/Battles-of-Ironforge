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

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t3_490;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Collections.Queue
struct Queue_t1_183;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t3_496;
// System.Net.Sockets.Socket/Worker
struct Worker_t3_493;
// System.Exception
struct Exception_t1_33;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket_SocketOperation.h"
#include "System_System_Net_Sockets_SocketError.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C" void SocketAsyncResult__ctor_m3_3370 (SocketAsyncResult_t3_490 * __this, Socket_t3_483 * ___sock, Object_t * ___state, AsyncCallback_t1_28 * ___callback, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C" void SocketAsyncResult_CheckIfThrowDelayedException_m3_3371 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C" void SocketAsyncResult_CompleteAllOnDispose_m3_3372 (SocketAsyncResult_t3_490 * __this, Queue_t1_183 * ___queue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C" void SocketAsyncResult_CompleteDisposed_m3_3373 (SocketAsyncResult_t3_490 * __this, Object_t * ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C" void SocketAsyncResult_Complete_m3_3374 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C" SocketAsyncCall_t3_496 * SocketAsyncResult_GetDelegate_m3_3375 (SocketAsyncResult_t3_490 * __this, Worker_t3_493 * ___worker, int32_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Boolean)
extern "C" void SocketAsyncResult_Complete_m3_3376 (SocketAsyncResult_t3_490 * __this, bool ___synch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C" void SocketAsyncResult_Complete_m3_3377 (SocketAsyncResult_t3_490 * __this, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception,System.Boolean)
extern "C" void SocketAsyncResult_Complete_m3_3378 (SocketAsyncResult_t3_490 * __this, Exception_t1_33 * ___e, bool ___synch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C" void SocketAsyncResult_Complete_m3_3379 (SocketAsyncResult_t3_490 * __this, Exception_t1_33 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern "C" void SocketAsyncResult_Complete_m3_3380 (SocketAsyncResult_t3_490 * __this, Socket_t3_483 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
extern "C" void SocketAsyncResult_Complete_m3_3381 (SocketAsyncResult_t3_490 * __this, Socket_t3_483 * ___s, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C" Object_t * SocketAsyncResult_get_AsyncState_m3_3382 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_454 * SocketAsyncResult_get_AsyncWaitHandle_m3_3383 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_AsyncWaitHandle(System.Threading.WaitHandle)
extern "C" void SocketAsyncResult_set_AsyncWaitHandle_m3_3384 (SocketAsyncResult_t3_490 * __this, WaitHandle_t1_454 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_CompletedSynchronously()
extern "C" bool SocketAsyncResult_get_CompletedSynchronously_m3_3385 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C" bool SocketAsyncResult_get_IsCompleted_m3_3386 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C" void SocketAsyncResult_set_IsCompleted_m3_3387 (SocketAsyncResult_t3_490 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::get_Socket()
extern "C" Socket_t3_483 * SocketAsyncResult_get_Socket_m3_3388 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C" int32_t SocketAsyncResult_get_Total_m3_3389 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C" void SocketAsyncResult_set_Total_m3_3390 (SocketAsyncResult_t3_490 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C" int32_t SocketAsyncResult_get_ErrorCode_m3_3391 (SocketAsyncResult_t3_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
