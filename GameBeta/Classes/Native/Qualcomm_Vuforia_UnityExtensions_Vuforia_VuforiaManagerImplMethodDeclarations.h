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

// Vuforia.VuforiaManagerImpl
struct VuforiaManagerImpl_t6_115;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t6_119;
// UnityEngine.Transform
struct Transform_t5_83;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t6_159;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__11.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaManagerImpl_set_WorldCenterMode_m6_594 (VuforiaManagerImpl_t6_115 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C" int32_t VuforiaManagerImpl_get_WorldCenterMode_m6_595 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C" void VuforiaManagerImpl_set_WorldCenter_m6_596 (VuforiaManagerImpl_t6_115 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C" Object_t * VuforiaManagerImpl_get_WorldCenter_m6_597 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ARCameraTransform_m6_598 (VuforiaManagerImpl_t6_115 * __this, Transform_t5_83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C" Transform_t5_83 * VuforiaManagerImpl_get_ARCameraTransform_m6_599 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_CentralAnchorPoint_m6_600 (VuforiaManagerImpl_t6_115 * __this, Transform_t5_83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C" Transform_t5_83 * VuforiaManagerImpl_get_CentralAnchorPoint_m6_601 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ParentAnchorPoint_m6_602 (VuforiaManagerImpl_t6_115 * __this, Transform_t5_83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C" Transform_t5_83 * VuforiaManagerImpl_get_ParentAnchorPoint_m6_603 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C" bool VuforiaManagerImpl_get_Initialized_m6_604 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C" int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m6_605 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C" void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m6_606 (VuforiaManagerImpl_t6_115 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C" bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m6_607 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C" bool VuforiaManagerImpl_Init_m6_608 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C" void VuforiaManagerImpl_Deinit_m6_609 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C" bool VuforiaManagerImpl_Update_m6_610 (VuforiaManagerImpl_t6_115 * __this, int32_t ___counterRotation, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C" void VuforiaManagerImpl_StartRendering_m6_611 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C" void VuforiaManagerImpl_FinishRendering_m6_612 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C" void VuforiaManagerImpl_Pause_m6_613 (VuforiaManagerImpl_t6_115 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C" void VuforiaManagerImpl_SetStatesToDiscard_m6_614 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C" void VuforiaManagerImpl_InitializeTrackableContainer_m6_615 (VuforiaManagerImpl_t6_115 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateTrackers_m6_616 (VuforiaManagerImpl_t6_115 * __this, FrameState_t6_112  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C" void VuforiaManagerImpl_UpdateSmartTerrain_m6_617 (VuforiaManagerImpl_t6_115 * __this, FrameState_t6_112  ___frameState, StateManagerImpl_t6_159 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C" void VuforiaManagerImpl_UpdateTrackablesEditor_m6_618 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateWordTrackables_m6_619 (VuforiaManagerImpl_t6_115 * __this, FrameState_t6_112  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C" void VuforiaManagerImpl_UpdateImageContainer_m6_620 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C" void VuforiaManagerImpl_UpdateCameraFrame_m6_621 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C" void VuforiaManagerImpl_InjectCameraFrame_m6_622 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C" void VuforiaManagerImpl__ctor_m6_623 (VuforiaManagerImpl_t6_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
