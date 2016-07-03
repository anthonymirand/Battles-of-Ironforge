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

// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t3_184;
// System.Object
struct Object_t;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t3_163;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RefreshEventHandler__ctor_m3_6539 (RefreshEventHandler_t3_184 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern "C" void RefreshEventHandler_Invoke_m3_6540 (RefreshEventHandler_t3_184 * __this, RefreshEventArgs_t3_163 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RefreshEventHandler_t3_184(Il2CppObject* delegate, RefreshEventArgs_t3_163 * ___e);
// System.IAsyncResult System.ComponentModel.RefreshEventHandler::BeginInvoke(System.ComponentModel.RefreshEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * RefreshEventHandler_BeginInvoke_m3_6541 (RefreshEventHandler_t3_184 * __this, RefreshEventArgs_t3_163 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RefreshEventHandler_EndInvoke_m3_6542 (RefreshEventHandler_t3_184 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
