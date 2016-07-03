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

// System.Action`1<System.Int32>
struct Action_1_t1_1232;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m1_6430_gshared (Action_1_t1_1232 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m1_6430(__this, ___object, ___method, method) (( void (*) (Action_1_t1_1232 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1_6430_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C" void Action_1_Invoke_m1_6439_gshared (Action_1_t1_1232 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1_6439(__this, ___obj, method) (( void (*) (Action_1_t1_1232 *, int32_t, const MethodInfo*))Action_1_Invoke_m1_6439_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m1_21771_gshared (Action_1_t1_1232 * __this, int32_t ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1_21771(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1_1232 *, int32_t, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m1_21771_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m1_21772_gshared (Action_1_t1_1232 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1_21772(__this, ___result, method) (( void (*) (Action_1_t1_1232 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m1_21772_gshared)(__this, ___result, method)
