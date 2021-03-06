﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t5_152;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" bool NavMeshAgent_SetDestination_m5_1381 (NavMeshAgent_t5_152 * __this, Vector3_t5_68  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m5_1382 (Object_t * __this /* static, unused */, NavMeshAgent_t5_152 * ___self, Vector3_t5_68 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_desiredVelocity()
extern "C" Vector3_t5_68  NavMeshAgent_get_desiredVelocity_m5_1383 (NavMeshAgent_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C" void NavMeshAgent_INTERNAL_get_desiredVelocity_m5_1384 (NavMeshAgent_t5_152 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updatePosition(System.Boolean)
extern "C" void NavMeshAgent_set_updatePosition_m5_1385 (NavMeshAgent_t5_152 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C" void NavMeshAgent_set_updateRotation_m5_1386 (NavMeshAgent_t5_152 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
