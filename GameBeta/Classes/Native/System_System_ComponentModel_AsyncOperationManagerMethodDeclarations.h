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
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t3_74;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AsyncOperationManager::.cctor()
extern "C" void AsyncOperationManager__cctor_m3_466 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperationManager::get_SynchronizationContext()
extern "C" SynchronizationContext_t1_713 * AsyncOperationManager_get_SynchronizationContext_m3_467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperationManager::set_SynchronizationContext(System.Threading.SynchronizationContext)
extern "C" void AsyncOperationManager_set_SynchronizationContext_m3_468 (Object_t * __this /* static, unused */, SynchronizationContext_t1_713 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AsyncOperation System.ComponentModel.AsyncOperationManager::CreateOperation(System.Object)
extern "C" AsyncOperation_t3_74 * AsyncOperationManager_CreateOperation_m3_469 (Object_t * __this /* static, unused */, Object_t * ___userSuppliedState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
