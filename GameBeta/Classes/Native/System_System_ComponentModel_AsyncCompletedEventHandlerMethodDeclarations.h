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

// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_t3_621;
// System.Object
struct Object_t;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t3_73;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.AsyncCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AsyncCompletedEventHandler__ctor_m3_6515 (AsyncCompletedEventHandler_t3_621 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventHandler::Invoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs)
extern "C" void AsyncCompletedEventHandler_Invoke_m3_6516 (AsyncCompletedEventHandler_t3_621 * __this, Object_t * ___sender, AsyncCompletedEventArgs_t3_73 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AsyncCompletedEventHandler_t3_621(Il2CppObject* delegate, Object_t * ___sender, AsyncCompletedEventArgs_t3_73 * ___e);
// System.IAsyncResult System.ComponentModel.AsyncCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * AsyncCompletedEventHandler_BeginInvoke_m3_6517 (AsyncCompletedEventHandler_t3_621 * __this, Object_t * ___sender, AsyncCompletedEventArgs_t3_73 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AsyncCompletedEventHandler_EndInvoke_m3_6518 (AsyncCompletedEventHandler_t3_621 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
