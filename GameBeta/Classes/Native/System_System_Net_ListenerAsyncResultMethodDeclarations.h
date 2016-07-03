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

// System.Net.ListenerAsyncResult
struct ListenerAsyncResult_t3_601;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Net.HttpListenerContext
struct HttpListenerContext_t3_527;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ListenerAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void ListenerAsyncResult__ctor_m3_4711 (ListenerAsyncResult_t3_601 * __this, AsyncCallback_t1_28 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.String)
extern "C" void ListenerAsyncResult_Complete_m3_4712 (ListenerAsyncResult_t3_601 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::InvokeCallback(System.Object)
extern "C" void ListenerAsyncResult_InvokeCallback_m3_4713 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext)
extern "C" void ListenerAsyncResult_Complete_m3_4714 (ListenerAsyncResult_t3_601 * __this, HttpListenerContext_t3_527 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext,System.Boolean)
extern "C" void ListenerAsyncResult_Complete_m3_4715 (ListenerAsyncResult_t3_601 * __this, HttpListenerContext_t3_527 * ___context, bool ___synch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.ListenerAsyncResult::GetContext()
extern "C" HttpListenerContext_t3_527 * ListenerAsyncResult_GetContext_m3_4716 (ListenerAsyncResult_t3_601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.ListenerAsyncResult::get_AsyncState()
extern "C" Object_t * ListenerAsyncResult_get_AsyncState_m3_4717 (ListenerAsyncResult_t3_601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.ListenerAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_454 * ListenerAsyncResult_get_AsyncWaitHandle_m3_4718 (ListenerAsyncResult_t3_601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerAsyncResult::get_CompletedSynchronously()
extern "C" bool ListenerAsyncResult_get_CompletedSynchronously_m3_4719 (ListenerAsyncResult_t3_601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerAsyncResult::get_IsCompleted()
extern "C" bool ListenerAsyncResult_get_IsCompleted_m3_4720 (ListenerAsyncResult_t3_601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
