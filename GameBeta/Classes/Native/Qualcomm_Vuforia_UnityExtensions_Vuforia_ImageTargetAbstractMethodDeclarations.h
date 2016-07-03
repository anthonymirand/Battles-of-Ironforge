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

// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t6_178;
// Vuforia.ImageTarget
struct ImageTarget_t6_174;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t6_45;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t6_200;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t5_113;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour>
struct IEnumerable_1_t1_1100;
// Vuforia.VirtualButton
struct VirtualButton_t6_172;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"

// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::get_ImageTarget()
extern "C" Object_t * ImageTargetAbstractBehaviour_get_ImageTarget_m6_1768 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::.ctor()
extern "C" void ImageTargetAbstractBehaviour__ctor_m6_1769 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool ImageTargetAbstractBehaviour_CorrectScaleImpl_m6_1770 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void ImageTargetAbstractBehaviour_InternalUnregisterTrackable_m6_1771 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void ImageTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m6_1772 (ImageTargetAbstractBehaviour_t6_178 * __this, Vector3_t5_68 * ___boundsMin, Vector3_t5_68 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void ImageTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m6_1773 (ImageTargetAbstractBehaviour_t6_178 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" VirtualButtonAbstractBehaviour_t6_200 * ImageTargetAbstractBehaviour_CreateVirtualButton_m6_1774 (ImageTargetAbstractBehaviour_t6_178 * __this, String_t* ___vbName, Vector2_t5_67  ___position, Vector2_t5_67  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.GameObject)
extern "C" VirtualButtonAbstractBehaviour_t6_200 * ImageTargetAbstractBehaviour_CreateVirtualButton_m6_1775 (Object_t * __this /* static, unused */, String_t* ___vbName, Vector2_t5_67  ___localScale, GameObject_t5_113 * ___immediateParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::GetVirtualButtonBehaviours()
extern "C" Object_t* ImageTargetAbstractBehaviour_GetVirtualButtonBehaviours_m6_1776 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::DestroyVirtualButton(System.String)
extern "C" void ImageTargetAbstractBehaviour_DestroyVirtualButton_m6_1777 (ImageTargetAbstractBehaviour_t6_178 * __this, String_t* ___vbName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::GetSize()
extern "C" Vector2_t5_67  ImageTargetAbstractBehaviour_GetSize_m6_1778 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetWidth(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetWidth_m6_1779 (ImageTargetAbstractBehaviour_t6_178 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetHeight(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetHeight_m6_1780 (ImageTargetAbstractBehaviour_t6_178 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_AspectRatio()
extern "C" float ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_AspectRatio_m6_1781 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_ImageTargetType()
extern "C" int32_t ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_ImageTargetType_m6_1782 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetAspectRatio(System.Single)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetAspectRatio_m6_1783 (ImageTargetAbstractBehaviour_t6_178 * __this, float ___aspectRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetImageTargetType(Vuforia.ImageTargetType)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetImageTargetType_m6_1784 (ImageTargetAbstractBehaviour_t6_178 * __this, int32_t ___imageTargetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.InitializeImageTarget(Vuforia.ImageTarget)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_InitializeImageTarget_m6_1785 (ImageTargetAbstractBehaviour_t6_178 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.AssociateExistingVirtualButtonBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_AssociateExistingVirtualButtonBehaviour_m6_1786 (ImageTargetAbstractBehaviour_t6_178 * __this, VirtualButtonAbstractBehaviour_t6_200 * ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.CreateMissingVirtualButtonBehaviours()
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_CreateMissingVirtualButtonBehaviours_m6_1787 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.TryGetVirtualButtonBehaviourByID(System.Int32,Vuforia.VirtualButtonAbstractBehaviour&)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_TryGetVirtualButtonBehaviourByID_m6_1788 (ImageTargetAbstractBehaviour_t6_178 * __this, int32_t ___id, VirtualButtonAbstractBehaviour_t6_200 ** ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButtonFromNative(Vuforia.VirtualButton)
extern "C" void ImageTargetAbstractBehaviour_CreateVirtualButtonFromNative_m6_1789 (ImageTargetAbstractBehaviour_t6_178 * __this, VirtualButton_t6_172 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CreateNewVirtualButtonFromBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" bool ImageTargetAbstractBehaviour_CreateNewVirtualButtonFromBehaviour_m6_1790 (ImageTargetAbstractBehaviour_t6_178 * __this, VirtualButtonAbstractBehaviour_t6_200 * ___newVBB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m6_1791 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m6_1792 (ImageTargetAbstractBehaviour_t6_178 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t5_83 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m6_1793 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t5_113 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m6_1794 (ImageTargetAbstractBehaviour_t6_178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
