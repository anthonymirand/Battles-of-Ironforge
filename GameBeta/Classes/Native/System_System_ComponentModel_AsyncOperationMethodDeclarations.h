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

// System.ComponentModel.AsyncOperation
struct AsyncOperation_t3_74;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1_713;
// System.Object
struct Object_t;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_828;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AsyncOperation::.ctor(System.Threading.SynchronizationContext,System.Object)
extern "C" void AsyncOperation__ctor_m3_459 (AsyncOperation_t3_74 * __this, SynchronizationContext_t1_713 * ___ctx, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3_460 (AsyncOperation_t3_74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::get_SynchronizationContext()
extern "C" SynchronizationContext_t1_713 * AsyncOperation_get_SynchronizationContext_m3_461 (AsyncOperation_t3_74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncOperation::get_UserSuppliedState()
extern "C" Object_t * AsyncOperation_get_UserSuppliedState_m3_462 (AsyncOperation_t3_74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::OperationCompleted()
extern "C" void AsyncOperation_OperationCompleted_m3_463 (AsyncOperation_t3_74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C" void AsyncOperation_Post_m3_464 (AsyncOperation_t3_74 * __this, SendOrPostCallback_t1_828 * ___d, Object_t * ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::PostOperationCompleted(System.Threading.SendOrPostCallback,System.Object)
extern "C" void AsyncOperation_PostOperationCompleted_m3_465 (AsyncOperation_t3_74 * __this, SendOrPostCallback_t1_828 * ___d, Object_t * ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
