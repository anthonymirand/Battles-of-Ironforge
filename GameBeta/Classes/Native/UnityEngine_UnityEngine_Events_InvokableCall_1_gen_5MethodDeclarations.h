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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t5_415;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5_414;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m5_2524_gshared (InvokableCall_1_t5_415 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2524(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5_415 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m5_2524_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m5_2525_gshared (InvokableCall_1_t5_415 * __this, UnityAction_1_t5_414 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2525(__this, ___action, method) (( void (*) (InvokableCall_1_t5_415 *, UnityAction_1_t5_414 *, const MethodInfo*))InvokableCall_1__ctor_m5_2525_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m5_2526_gshared (InvokableCall_1_t5_415 * __this, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m5_2526(__this, ___args, method) (( void (*) (InvokableCall_1_t5_415 *, ObjectU5BU5D_t1_158*, const MethodInfo*))InvokableCall_1_Invoke_m5_2526_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m5_2527_gshared (InvokableCall_1_t5_415 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m5_2527(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5_415 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m5_2527_gshared)(__this, ___targetObj, ___method, method)
