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

// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t3_81;
// System.Object
struct Object_t;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t3_166;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RunWorkerCompletedEventHandler__ctor_m3_6543 (RunWorkerCompletedEventHandler_t3_81 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::Invoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C" void RunWorkerCompletedEventHandler_Invoke_m3_6544 (RunWorkerCompletedEventHandler_t3_81 * __this, Object_t * ___sender, RunWorkerCompletedEventArgs_t3_166 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RunWorkerCompletedEventHandler_t3_81(Il2CppObject* delegate, Object_t * ___sender, RunWorkerCompletedEventArgs_t3_166 * ___e);
// System.IAsyncResult System.ComponentModel.RunWorkerCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * RunWorkerCompletedEventHandler_BeginInvoke_m3_6545 (RunWorkerCompletedEventHandler_t3_81 * __this, Object_t * ___sender, RunWorkerCompletedEventArgs_t3_166 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RunWorkerCompletedEventHandler_EndInvoke_m3_6546 (RunWorkerCompletedEventHandler_t3_81 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
