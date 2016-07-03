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

// UnityEngine.Collider
struct Collider_t5_130;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleCollisionEvent.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_velocity()
extern "C" Vector3_t5_68  ParticleCollisionEvent_get_velocity_m5_1240 (ParticleCollisionEvent_t5_122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::get_collider()
extern "C" Collider_t5_130 * ParticleCollisionEvent_get_collider_m5_1241 (ParticleCollisionEvent_t5_122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::InstanceIDToCollider(System.Int32)
extern "C" Collider_t5_130 * ParticleCollisionEvent_InstanceIDToCollider_m5_1242 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
