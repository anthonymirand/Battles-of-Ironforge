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

// UnityEngine.ParticleSystem
struct ParticleSystem_t5_121;
// UnityEngine.GameObject
struct GameObject_t5_113;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t5_332;

#include "codegen/il2cpp-codegen.h"

// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)
extern "C" int32_t ParticlePhysicsExtensions_GetSafeCollisionEventSize_m5_1245 (Object_t * __this /* static, unused */, ParticleSystem_t5_121 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])
extern "C" int32_t ParticlePhysicsExtensions_GetCollisionEvents_m5_1246 (Object_t * __this /* static, unused */, ParticleSystem_t5_121 * ___ps, GameObject_t5_113 * ___go, ParticleCollisionEventU5BU5D_t5_332* ___collisionEvents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
