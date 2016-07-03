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

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct ProcessWorkerEventHandler_t3_77;
// System.Object
struct Object_t;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t3_74;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_828;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Threading_SendOrPostCallback.h"

// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProcessWorkerEventHandler__ctor_m3_488 (ProcessWorkerEventHandler_t3_77 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::Invoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C" void ProcessWorkerEventHandler_Invoke_m3_489 (ProcessWorkerEventHandler_t3_77 * __this, Object_t * ___argument, AsyncOperation_t3_74 * ___async, SendOrPostCallback_t1_828 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProcessWorkerEventHandler_t3_77(Il2CppObject* delegate, Object_t * ___argument, AsyncOperation_t3_74 * ___async, SendOrPostCallback_t1_828 * ___callback);
// System.IAsyncResult System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback,System.AsyncCallback,System.Object)
extern "C" Object_t * ProcessWorkerEventHandler_BeginInvoke_m3_490 (ProcessWorkerEventHandler_t3_77 * __this, Object_t * ___argument, AsyncOperation_t3_74 * ___async, SendOrPostCallback_t1_828 * ___callback, AsyncCallback_t1_28 * ____callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProcessWorkerEventHandler_EndInvoke_m3_491 (ProcessWorkerEventHandler_t3_77 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
