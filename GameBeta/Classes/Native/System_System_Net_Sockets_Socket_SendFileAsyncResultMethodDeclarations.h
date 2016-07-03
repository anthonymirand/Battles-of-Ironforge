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

// System.Net.Sockets.Socket/SendFileAsyncResult
struct SendFileAsyncResult_t3_494;
// System.Net.Sockets.Socket/SendFileHandler
struct SendFileHandler_t3_495;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.Socket/SendFileAsyncResult::.ctor(System.Net.Sockets.Socket/SendFileHandler,System.IAsyncResult)
extern "C" void SendFileAsyncResult__ctor_m3_3405 (SendFileAsyncResult_t3_494 * __this, SendFileHandler_t3_495 * ___d, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SendFileAsyncResult::get_AsyncState()
extern "C" Object_t * SendFileAsyncResult_get_AsyncState_m3_3406 (SendFileAsyncResult_t3_494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SendFileAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_454 * SendFileAsyncResult_get_AsyncWaitHandle_m3_3407 (SendFileAsyncResult_t3_494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SendFileAsyncResult::get_CompletedSynchronously()
extern "C" bool SendFileAsyncResult_get_CompletedSynchronously_m3_3408 (SendFileAsyncResult_t3_494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SendFileAsyncResult::get_IsCompleted()
extern "C" bool SendFileAsyncResult_get_IsCompleted_m3_3409 (SendFileAsyncResult_t3_494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SendFileHandler System.Net.Sockets.Socket/SendFileAsyncResult::get_Delegate()
extern "C" SendFileHandler_t3_495 * SendFileAsyncResult_get_Delegate_m3_3410 (SendFileAsyncResult_t3_494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket/SendFileAsyncResult::get_Original()
extern "C" Object_t * SendFileAsyncResult_get_Original_m3_3411 (SendFileAsyncResult_t3_494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
