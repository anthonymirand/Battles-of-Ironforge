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

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_828;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C" void SendOrPostCallback__ctor_m1_5967 (SendOrPostCallback_t1_828 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C" void SendOrPostCallback_Invoke_m1_5968 (SendOrPostCallback_t1_828 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SendOrPostCallback_t1_828(Il2CppObject* delegate, Object_t * ___state);
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SendOrPostCallback_BeginInvoke_m1_5969 (SendOrPostCallback_t1_828 * __this, Object_t * ___state, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern "C" void SendOrPostCallback_EndInvoke_m1_5970 (SendOrPostCallback_t1_828 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
