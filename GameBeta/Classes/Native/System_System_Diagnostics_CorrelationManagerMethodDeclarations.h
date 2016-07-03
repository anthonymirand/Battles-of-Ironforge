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

// System.Diagnostics.CorrelationManager
struct CorrelationManager_t3_198;
// System.Collections.Stack
struct Stack_t1_143;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Diagnostics.CorrelationManager::.ctor()
extern "C" void CorrelationManager__ctor_m3_1412 (CorrelationManager_t3_198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Diagnostics.CorrelationManager::get_ActivityId()
extern "C" Guid_t1_775  CorrelationManager_get_ActivityId_m3_1413 (CorrelationManager_t3_198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::set_ActivityId(System.Guid)
extern "C" void CorrelationManager_set_ActivityId_m3_1414 (CorrelationManager_t3_198 * __this, Guid_t1_775  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Stack System.Diagnostics.CorrelationManager::get_LogicalOperationStack()
extern "C" Stack_t1_143 * CorrelationManager_get_LogicalOperationStack_m3_1415 (CorrelationManager_t3_198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::StartLogicalOperation()
extern "C" void CorrelationManager_StartLogicalOperation_m3_1416 (CorrelationManager_t3_198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::StartLogicalOperation(System.Object)
extern "C" void CorrelationManager_StartLogicalOperation_m3_1417 (CorrelationManager_t3_198 * __this, Object_t * ___operationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::StopLogicalOperation()
extern "C" void CorrelationManager_StopLogicalOperation_m3_1418 (CorrelationManager_t3_198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
