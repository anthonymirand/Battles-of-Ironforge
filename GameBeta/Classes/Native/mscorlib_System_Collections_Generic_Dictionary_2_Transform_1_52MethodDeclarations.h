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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>
struct Transform_1_t1_1988;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_17609_gshared (Transform_1_t1_1988 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_17609(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1988 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_17609_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m1_17610_gshared (Transform_1_t1_1988 * __this, int32_t ___key, TrackableResultData_t6_101  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_17610(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t1_1988 *, int32_t, TrackableResultData_t6_101 , const MethodInfo*))Transform_1_Invoke_m1_17610_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_17611_gshared (Transform_1_t1_1988 * __this, int32_t ___key, TrackableResultData_t6_101  ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_17611(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1988 *, int32_t, TrackableResultData_t6_101 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_17611_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m1_17612_gshared (Transform_1_t1_1988 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_17612(__this, ___result, method) (( int32_t (*) (Transform_1_t1_1988 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_17612_gshared)(__this, ___result, method)
