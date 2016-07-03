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

// Lean.LeanFinger
struct LeanFinger_t9_67;
// UnityEngine.Camera
struct Camera_t5_100;
// UnityEngine.Texture
struct Texture_t5_38;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Lean.LeanFinger::.ctor()
extern "C" void LeanFinger__ctor_m9_606 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanFinger::.cctor()
extern "C" void LeanFinger__cctor_m9_607 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanFinger::get_IsActive()
extern "C" bool LeanFinger_get_IsActive_m9_608 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::get_SnapshotDuration()
extern "C" float LeanFinger_get_SnapshotDuration_m9_609 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanFinger::get_IsOverGui()
extern "C" bool LeanFinger_get_IsOverGui_m9_610 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanFinger::get_HeldDown()
extern "C" bool LeanFinger_get_HeldDown_m9_611 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanFinger::get_HeldUp()
extern "C" bool LeanFinger_get_HeldUp_m9_612 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanFinger::get_Down()
extern "C" bool LeanFinger_get_Down_m9_613 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.LeanFinger::get_Up()
extern "C" bool LeanFinger_get_Up_m9_614 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::get_LastSnapshotDelta()
extern "C" Vector2_t5_67  LeanFinger_get_LastSnapshotDelta_m9_615 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::get_DeltaScreenPosition()
extern "C" Vector2_t5_67  LeanFinger_get_DeltaScreenPosition_m9_616 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::get_ScaledDeltaScreenPosition()
extern "C" Vector2_t5_67  LeanFinger_get_ScaledDeltaScreenPosition_m9_617 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::get_TotalDeltaScreenPosition()
extern "C" Vector2_t5_67  LeanFinger_get_TotalDeltaScreenPosition_m9_618 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::get_ScaledTotalDeltaScreenPosition()
extern "C" Vector2_t5_67  LeanFinger_get_ScaledTotalDeltaScreenPosition_m9_619 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::get_SwipeDelta()
extern "C" Vector2_t5_67  LeanFinger_get_SwipeDelta_m9_620 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::get_ScaledSwipeDelta()
extern "C" Vector2_t5_67  LeanFinger_get_ScaledSwipeDelta_m9_621 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::get_ScaledTotalDeltaMagnitude()
extern "C" float LeanFinger_get_ScaledTotalDeltaMagnitude_m9_622 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray Lean.LeanFinger::GetRay(UnityEngine.Camera)
extern "C" Ray_t5_73  LeanFinger_GetRay_m9_623 (LeanFinger_t9_67 * __this, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray Lean.LeanFinger::GetStartRay(UnityEngine.Camera)
extern "C" Ray_t5_73  LeanFinger_GetStartRay_m9_624 (LeanFinger_t9_67 * __this, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::GetSnapshotDelta(System.Single)
extern "C" Vector2_t5_67  LeanFinger_GetSnapshotDelta_m9_625 (LeanFinger_t9_67 * __this, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::GetScaledSnapshotDelta(System.Single)
extern "C" Vector2_t5_67  LeanFinger_GetScaledSnapshotDelta_m9_626 (LeanFinger_t9_67 * __this, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.LeanFinger::GetSnapshotScreenPosition(System.Single)
extern "C" Vector2_t5_67  LeanFinger_GetSnapshotScreenPosition_m9_627 (LeanFinger_t9_67 * __this, float ___targetAge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanFinger::GetSnapshot(System.Int32,System.Single&,UnityEngine.Vector2&)
extern "C" void LeanFinger_GetSnapshot_m9_628 (LeanFinger_t9_67 * __this, int32_t ___index, float* ___age, Vector2_t5_67 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetRadians(UnityEngine.Vector2)
extern "C" float LeanFinger_GetRadians_m9_629 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetDegrees(UnityEngine.Vector2)
extern "C" float LeanFinger_GetDegrees_m9_630 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetLastRadians(UnityEngine.Vector2)
extern "C" float LeanFinger_GetLastRadians_m9_631 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetLastDegrees(UnityEngine.Vector2)
extern "C" float LeanFinger_GetLastDegrees_m9_632 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetDeltaRadians(UnityEngine.Vector2)
extern "C" float LeanFinger_GetDeltaRadians_m9_633 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetDeltaRadians(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float LeanFinger_GetDeltaRadians_m9_634 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___lastReferencePoint, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetDeltaDegrees(UnityEngine.Vector2)
extern "C" float LeanFinger_GetDeltaDegrees_m9_635 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetDeltaDegrees(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float LeanFinger_GetDeltaDegrees_m9_636 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___lastReferencePoint, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetLastDistance(UnityEngine.Vector2)
extern "C" float LeanFinger_GetLastDistance_m9_637 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.LeanFinger::GetDistance(UnityEngine.Vector2)
extern "C" float LeanFinger_GetDistance_m9_638 (LeanFinger_t9_67 * __this, Vector2_t5_67  ___referencePoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.LeanFinger::GetWorldPosition(System.Single,UnityEngine.Camera)
extern "C" Vector3_t5_68  LeanFinger_GetWorldPosition_m9_639 (LeanFinger_t9_67 * __this, float ___distance, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.LeanFinger::GetLastWorldPosition(System.Single,UnityEngine.Camera)
extern "C" Vector3_t5_68  LeanFinger_GetLastWorldPosition_m9_640 (LeanFinger_t9_67 * __this, float ___distance, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.LeanFinger::GetDeltaWorldPosition(System.Single,UnityEngine.Camera)
extern "C" Vector3_t5_68  LeanFinger_GetDeltaWorldPosition_m9_641 (LeanFinger_t9_67 * __this, float ___distance, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.LeanFinger::GetDeltaWorldPosition(System.Single,System.Single,UnityEngine.Camera)
extern "C" Vector3_t5_68  LeanFinger_GetDeltaWorldPosition_m9_642 (LeanFinger_t9_67 * __this, float ___lastDistance, float ___distance, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanFinger::Show(UnityEngine.Texture)
extern "C" void LeanFinger_Show_m9_643 (LeanFinger_t9_67 * __this, Texture_t5_38 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanFinger::ClearSnapshots(System.Int32)
extern "C" void LeanFinger_ClearSnapshots_m9_644 (LeanFinger_t9_67 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.LeanFinger::RecordSnapshot()
extern "C" void LeanFinger_RecordSnapshot_m9_645 (LeanFinger_t9_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lean.LeanFinger::GetLowerSnapshotIndex(System.Single)
extern "C" int32_t LeanFinger_GetLowerSnapshotIndex_m9_646 (LeanFinger_t9_67 * __this, float ___targetAge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
