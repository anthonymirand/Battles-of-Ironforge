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

// GazeInputModule
struct GazeInputModule_t9_39;
// UnityEngine.GameObject
struct GameObject_t5_113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void GazeInputModule::.ctor()
extern "C" void GazeInputModule__ctor_m9_276 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C" bool GazeInputModule_ShouldActivateModule_m9_277 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C" void GazeInputModule_DeactivateModule_m9_278 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool GazeInputModule_IsPointerOverGameObject_m9_279 (GazeInputModule_t9_39 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C" void GazeInputModule_Process_m9_280 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C" void GazeInputModule_CastRayFromGaze_m9_281 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C" void GazeInputModule_UpdateCurrentObject_m9_282 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateReticle(UnityEngine.GameObject)
extern "C" void GazeInputModule_UpdateReticle_m9_283 (GazeInputModule_t9_39 * __this, GameObject_t5_113 * ___previousGazedObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleDrag()
extern "C" void GazeInputModule_HandleDrag_m9_284 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C" void GazeInputModule_HandlePendingClick_m9_285 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C" void GazeInputModule_HandleTrigger_m9_286 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C" Vector2_t5_67  GazeInputModule_NormalizedCartesianToSpherical_m9_287 (GazeInputModule_t9_39 * __this, Vector3_t5_68  ___cartCoords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GazeInputModule::GetCurrentGameObject()
extern "C" GameObject_t5_113 * GazeInputModule_GetCurrentGameObject_m9_288 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GazeInputModule::GetIntersectionPosition()
extern "C" Vector3_t5_68  GazeInputModule_GetIntersectionPosition_m9_289 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DisableGazePointer()
extern "C" void GazeInputModule_DisableGazePointer_m9_290 (GazeInputModule_t9_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
