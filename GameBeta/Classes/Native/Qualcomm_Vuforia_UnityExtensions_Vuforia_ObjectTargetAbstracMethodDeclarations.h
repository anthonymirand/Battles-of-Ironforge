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

// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t6_23;
// Vuforia.ObjectTarget
struct ObjectTarget_t6_24;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t6_45;
// UnityEngine.Texture2D
struct Texture2D_t5_50;
// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.GameObject
struct GameObject_t5_113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C" void ObjectTargetAbstractBehaviour__ctor_m6_192 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C" Object_t * ObjectTargetAbstractBehaviour_get_ObjectTarget_m6_193 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C" void ObjectTargetAbstractBehaviour_OnDrawGizmos_m6_194 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m6_195 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m6_196 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m6_197 (ObjectTargetAbstractBehaviour_t6_23 * __this, Vector3_t5_68 * ___boundsMin, Vector3_t5_68 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m6_198 (ObjectTargetAbstractBehaviour_t6_23 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void ObjectTargetAbstractBehaviour_SetBoundingBox_m6_199 (ObjectTargetAbstractBehaviour_t6_23 * __this, Vector3_t5_68  ___minBBox, Vector3_t5_68  ___maxBBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C" Vector3_t5_68  ObjectTargetAbstractBehaviour_GetSize_m6_200 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetLength_m6_201 (ObjectTargetAbstractBehaviour_t6_23 * __this, float ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetWidth_m6_202 (ObjectTargetAbstractBehaviour_t6_23 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetHeight_m6_203 (ObjectTargetAbstractBehaviour_t6_23 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXY()
extern "C" float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXY_m6_204 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXZ()
extern "C" float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXZ_m6_205 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetAspectRatio_m6_206 (ObjectTargetAbstractBehaviour_t6_23 * __this, float ___aspectRatioXY, float ___aspectRatioXZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.InitializeObjectTarget(Vuforia.ObjectTarget)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_InitializeObjectTarget_m6_207 (ObjectTargetAbstractBehaviour_t6_23 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetShowBoundingBox(System.Boolean)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetShowBoundingBox_m6_208 (ObjectTargetAbstractBehaviour_t6_23 * __this, bool ___showBoundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_ShowBoundingBox()
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_ShowBoundingBox_m6_209 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_PreviewImage()
extern "C" Texture2D_t5_50 * ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_PreviewImage_m6_210 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetPreviewImage(UnityEngine.Texture2D)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetPreviewImage_m6_211 (ObjectTargetAbstractBehaviour_t6_23 * __this, Texture2D_t5_50 * ___previewImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m6_212 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m6_213 (ObjectTargetAbstractBehaviour_t6_23 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t5_83 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m6_214 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t5_113 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m6_215 (ObjectTargetAbstractBehaviour_t6_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
