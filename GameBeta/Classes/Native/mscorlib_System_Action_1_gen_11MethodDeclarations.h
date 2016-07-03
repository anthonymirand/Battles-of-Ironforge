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

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t1_1233;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Action`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m1_6431_gshared (Action_1_t1_1233 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m1_6431(__this, ___object, ___method, method) (( void (*) (Action_1_t1_1233 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1_6431_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
extern "C" void Action_1_Invoke_m1_6441_gshared (Action_1_t1_1233 * __this, Vector2_t5_67  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1_6441(__this, ___obj, method) (( void (*) (Action_1_t1_1233 *, Vector2_t5_67 , const MethodInfo*))Action_1_Invoke_m1_6441_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m1_21773_gshared (Action_1_t1_1233 * __this, Vector2_t5_67  ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1_21773(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1_1233 *, Vector2_t5_67 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m1_21773_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m1_21774_gshared (Action_1_t1_1233 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1_21774(__this, ___result, method) (( void (*) (Action_1_t1_1233 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m1_21774_gshared)(__this, ___result, method)
