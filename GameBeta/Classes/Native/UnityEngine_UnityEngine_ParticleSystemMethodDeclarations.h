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
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t5_331;
// UnityEngine.Transform
struct Transform_t5_83;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t1_1030;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" void ParticleSystem_set_enableEmission_m5_1225 (ParticleSystem_t5_121 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSpeed()
extern "C" float ParticleSystem_get_startSpeed_m5_1226 (ParticleSystem_t5_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C" void ParticleSystem_set_startSpeed_m5_1227 (ParticleSystem_t5_121 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern "C" float ParticleSystem_get_startSize_m5_1228 (ParticleSystem_t5_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" void ParticleSystem_set_startSize_m5_1229 (ParticleSystem_t5_121 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C" float ParticleSystem_get_startLifetime_m5_1230 (ParticleSystem_t5_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern "C" void ParticleSystem_set_startLifetime_m5_1231 (ParticleSystem_t5_121 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m5_1232 (ParticleSystem_t5_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Clear()
extern "C" void ParticleSystem_Internal_Clear_m5_1233 (ParticleSystem_t5_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m5_1234 (ParticleSystem_t5_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m5_1235 (ParticleSystem_t5_121 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C" void ParticleSystem_Clear_m5_1236 (ParticleSystem_t5_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C" void ParticleSystem_Clear_m5_1237 (ParticleSystem_t5_121 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t5_331* ParticleSystem_GetParticleSystems_m5_1238 (Object_t * __this /* static, unused */, ParticleSystem_t5_121 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m5_1239 (Object_t * __this /* static, unused */, Transform_t5_83 * ___transform, List_1_t1_1030 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
