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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t5_360;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t5_366;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_303;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_2269_gshared (UnityEvent_1_t5_360 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_2269(__this, method) (( void (*) (UnityEvent_1_t5_360 *, const MethodInfo*))UnityEvent_1__ctor_m5_2269_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_2251_gshared (UnityEvent_1_t5_360 * __this, UnityAction_1_t5_366 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_2251(__this, ___call, method) (( void (*) (UnityEvent_1_t5_360 *, UnityAction_1_t5_366 *, const MethodInfo*))UnityEvent_1_AddListener_m5_2251_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_2502_gshared (UnityEvent_1_t5_360 * __this, UnityAction_1_t5_366 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_2502(__this, ___call, method) (( void (*) (UnityEvent_1_t5_360 *, UnityAction_1_t5_366 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_2502_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_2503_gshared (UnityEvent_1_t5_360 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_2503(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_360 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_2503_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_303 * UnityEvent_1_GetDelegate_m5_2504_gshared (UnityEvent_1_t5_360 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2504(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_303 * (*) (UnityEvent_1_t5_360 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2504_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_303 * UnityEvent_1_GetDelegate_m5_2505_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_366 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2505(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_303 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_366 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2505_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_2271_gshared (UnityEvent_1_t5_360 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_2271(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_360 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m5_2271_gshared)(__this, ___arg0, method)
