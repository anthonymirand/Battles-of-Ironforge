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

// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t9_27;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t5_113;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void CardboardHead/HeadUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HeadUpdatedDelegate__ctor_m9_227 (HeadUpdatedDelegate_t9_27 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::Invoke(UnityEngine.GameObject)
extern "C" void HeadUpdatedDelegate_Invoke_m9_228 (HeadUpdatedDelegate_t9_27 * __this, GameObject_t5_113 * ___head, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HeadUpdatedDelegate_t9_27(Il2CppObject* delegate, GameObject_t5_113 * ___head);
// System.IAsyncResult CardboardHead/HeadUpdatedDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * HeadUpdatedDelegate_BeginInvoke_m9_229 (HeadUpdatedDelegate_t9_27 * __this, GameObject_t5_113 * ___head, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HeadUpdatedDelegate_EndInvoke_m9_230 (HeadUpdatedDelegate_t9_27 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
