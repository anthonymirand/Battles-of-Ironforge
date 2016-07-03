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

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t1_827;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ParameterizedThreadStart__ctor_m1_5963 (ParameterizedThreadStart_t1_827 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern "C" void ParameterizedThreadStart_Invoke_m1_5964 (ParameterizedThreadStart_t1_827 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ParameterizedThreadStart_t1_827(Il2CppObject* delegate, Object_t * ___obj);
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * ParameterizedThreadStart_BeginInvoke_m1_5965 (ParameterizedThreadStart_t1_827 * __this, Object_t * ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ParameterizedThreadStart_EndInvoke_m1_5966 (ParameterizedThreadStart_t1_827 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
