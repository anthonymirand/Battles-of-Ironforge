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

// CardboardReticle
struct CardboardReticle_t9_44;
// UnityEngine.Camera
struct Camera_t5_100;
// UnityEngine.GameObject
struct GameObject_t5_113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CardboardReticle::.ctor()
extern "C" void CardboardReticle__ctor_m9_336 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Start()
extern "C" void CardboardReticle_Start_m9_337 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnEnable()
extern "C" void CardboardReticle_OnEnable_m9_338 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnDisable()
extern "C" void CardboardReticle_OnDisable_m9_339 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Update()
extern "C" void CardboardReticle_Update_m9_340 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeEnabled()
extern "C" void CardboardReticle_OnGazeEnabled_m9_341 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeDisabled()
extern "C" void CardboardReticle_OnGazeDisabled_m9_342 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStart(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C" void CardboardReticle_OnGazeStart_m9_343 (CardboardReticle_t9_44 * __this, Camera_t5_100 * ___camera, GameObject_t5_113 * ___targetObject, Vector3_t5_68  ___intersectionPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStay(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C" void CardboardReticle_OnGazeStay_m9_344 (CardboardReticle_t9_44 * __this, Camera_t5_100 * ___camera, GameObject_t5_113 * ___targetObject, Vector3_t5_68  ___intersectionPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeExit(UnityEngine.Camera,UnityEngine.GameObject)
extern "C" void CardboardReticle_OnGazeExit_m9_345 (CardboardReticle_t9_44 * __this, Camera_t5_100 * ___camera, GameObject_t5_113 * ___targetObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerStart(UnityEngine.Camera)
extern "C" void CardboardReticle_OnGazeTriggerStart_m9_346 (CardboardReticle_t9_44 * __this, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerEnd(UnityEngine.Camera)
extern "C" void CardboardReticle_OnGazeTriggerEnd_m9_347 (CardboardReticle_t9_44 * __this, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::CreateReticleVertices()
extern "C" void CardboardReticle_CreateReticleVertices_m9_348 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::UpdateDiameters()
extern "C" void CardboardReticle_UpdateDiameters_m9_349 (CardboardReticle_t9_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::SetGazeTarget(UnityEngine.Vector3)
extern "C" void CardboardReticle_SetGazeTarget_m9_350 (CardboardReticle_t9_44 * __this, Vector3_t5_68  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
