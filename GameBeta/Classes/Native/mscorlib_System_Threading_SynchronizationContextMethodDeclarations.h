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

// System.Threading.SynchronizationContext
struct SynchronizationContext_t1_713;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_828;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" void SynchronizationContext__ctor_m1_4850 (SynchronizationContext_t1_713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C" SynchronizationContext_t1_713 * SynchronizationContext_get_Current_m1_4851 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::OperationCompleted()
extern "C" void SynchronizationContext_OperationCompleted_m1_4852 (SynchronizationContext_t1_713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::OperationStarted()
extern "C" void SynchronizationContext_OperationStarted_m1_4853 (SynchronizationContext_t1_713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C" void SynchronizationContext_Post_m1_4854 (SynchronizationContext_t1_713 * __this, SendOrPostCallback_t1_828 * ___d, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
extern "C" void SynchronizationContext_SetSynchronizationContext_m1_4855 (Object_t * __this /* static, unused */, SynchronizationContext_t1_713 * ___syncContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
