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

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t1_259;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t1_33;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m1_2449 (StreamAsyncResult_t1_259 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m1_2450 (StreamAsyncResult_t1_259 * __this, Exception_t1_33 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m1_2451 (StreamAsyncResult_t1_259 * __this, Exception_t1_33 * ___e, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m1_2452 (StreamAsyncResult_t1_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_454 * StreamAsyncResult_get_AsyncWaitHandle_m1_2453 (StreamAsyncResult_t1_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_CompletedSynchronously()
extern "C" bool StreamAsyncResult_get_CompletedSynchronously_m1_2454 (StreamAsyncResult_t1_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern "C" bool StreamAsyncResult_get_IsCompleted_m1_2455 (StreamAsyncResult_t1_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t1_33 * StreamAsyncResult_get_Exception_m1_2456 (StreamAsyncResult_t1_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m1_2457 (StreamAsyncResult_t1_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m1_2458 (StreamAsyncResult_t1_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m1_2459 (StreamAsyncResult_t1_259 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
