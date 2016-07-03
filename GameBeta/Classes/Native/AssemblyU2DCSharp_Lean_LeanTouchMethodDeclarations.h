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

// Lean.LeanTouch
struct LeanTouch_t9_82;
// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.Camera
struct Camera_t5_100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Lean.LeanTouch::.ctor()
extern "C" void LeanTouch__ctor_m9_650 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::.cctor()
extern "C" void LeanTouch__cctor_m9_651 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanTouch::get_ScalingFactor()
extern "C" float LeanTouch_get_ScalingFactor_m9_652 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanTouch::get_ScaledDragDelta()
extern "C" Vector2_t5_67  LeanTouch_get_ScaledDragDelta_m9_653 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanTouch::get_ScaledSoloDragDelta()
extern "C" Vector2_t5_67  LeanTouch_get_ScaledSoloDragDelta_m9_654 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanTouch::get_ScaledMultiDragDelta()
extern "C" Vector2_t5_67  LeanTouch_get_ScaledMultiDragDelta_m9_655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanTouch::get_AnyMouseButtonSet()
extern "C" bool LeanTouch_get_AnyMouseButtonSet_m9_656 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanTouch::get_GuiInUse()
extern "C" bool LeanTouch_get_GuiInUse_m9_657 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanTouch::GetCenterOfFingers()
extern "C" Vector2_t5_67  LeanTouch_GetCenterOfFingers_m9_658 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanTouch::GetLastCenterOfFingers()
extern "C" Vector2_t5_67  LeanTouch_GetLastCenterOfFingers_m9_659 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanTouch::GetAverageFingerDistance(UnityEngine.Vector2)
extern "C" float LeanTouch_GetAverageFingerDistance_m9_660 (Object_t * __this /* static, unused */, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanTouch::GetLastAverageFingerDistance(UnityEngine.Vector2)
extern "C" float LeanTouch_GetLastAverageFingerDistance_m9_661 (Object_t * __this /* static, unused */, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::MoveObject(UnityEngine.Transform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void LeanTouch_MoveObject_m9_662 (Object_t * __this /* static, unused */, Transform_t5_83 * ___transform, Vector2_t5_67  ___deltaPosition, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.LeanTouch::MoveObject(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" Vector3_t5_68  LeanTouch_MoveObject_m9_663 (Object_t * __this /* static, unused */, Vector3_t5_68  ___worldPosition, Vector2_t5_67  ___deltaPosition, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::RotateObject(UnityEngine.Transform,System.Single,UnityEngine.Camera)
extern "C" void LeanTouch_RotateObject_m9_664 (Object_t * __this /* static, unused */, Transform_t5_83 * ___transform, float ___deltaRotation, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Lean.LeanTouch::RotateObject(UnityEngine.Quaternion,System.Single,UnityEngine.Camera)
extern "C" Quaternion_t5_69  LeanTouch_RotateObject_m9_665 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___worldRotation, float ___deltaRotation, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::ScaleObject(UnityEngine.Transform,System.Single)
extern "C" void LeanTouch_ScaleObject_m9_666 (Object_t * __this /* static, unused */, Transform_t5_83 * ___transform, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::ScaleObjectRelative(UnityEngine.Transform,System.Single,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void LeanTouch_ScaleObjectRelative_m9_667 (Object_t * __this /* static, unused */, Transform_t5_83 * ___transform, float ___scale, Vector2_t5_67  ___referencePoint, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::RotateObjectRelative(UnityEngine.Transform,System.Single,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void LeanTouch_RotateObjectRelative_m9_668 (Object_t * __this /* static, unused */, Transform_t5_83 * ___transform, float ___deltaRotation, Vector2_t5_67  ___referencePoint, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::OnEnable()
extern "C" void LeanTouch_OnEnable_m9_669 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::Update()
extern "C" void LeanTouch_Update_m9_670 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::OnGUI()
extern "C" void LeanTouch_OnGUI_m9_671 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::UpdateAllInputs()
extern "C" void LeanTouch_UpdateAllInputs_m9_672 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::UpdateFingers()
extern "C" void LeanTouch_UpdateFingers_m9_673 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::UpdateMultiTap()
extern "C" void LeanTouch_UpdateMultiTap_m9_674 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::UpdateGestures()
extern "C" void LeanTouch_UpdateGestures_m9_675 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::UpdateEvents()
extern "C" void LeanTouch_UpdateEvents_m9_676 (LeanTouch_t9_82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanTouch::AddFinger(System.Int32,UnityEngine.Vector2)
extern "C" void LeanTouch_AddFinger_m9_677 (LeanTouch_t9_82 * __this, int32_t ___index, Vector2_t5_67  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
