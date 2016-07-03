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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t6_159;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t1_1097;
// Vuforia.WordManager
struct WordManager_t6_143;
// Vuforia.Trackable
struct Trackable_t6_20;
// Vuforia.DataSet
struct DataSet_t6_60;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t6_19;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t6_178;
// Vuforia.ImageTarget
struct ImageTarget_t6_174;
// UnityEngine.GameObject
struct GameObject_t5_113;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t6_179;
// Vuforia.Marker
struct Marker_t6_180;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t3_849;
// UnityEngine.Transform
struct Transform_t5_83;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t6_116;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t6_117;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t6_118;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t6_214;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t6_182;
// Vuforia.MultiTarget
struct MultiTarget_t6_183;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t6_57;
// Vuforia.CylinderTarget
struct CylinderTarget_t6_58;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t6_23;
// Vuforia.ObjectTarget
struct ObjectTarget_t6_24;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m6_1669 (StateManagerImpl_t6_159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetTrackableBehaviours_m6_1670 (StateManagerImpl_t6_159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C" WordManager_t6_143 * StateManagerImpl_GetWordManager_m6_1671 (StateManagerImpl_t6_159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m6_1672 (StateManagerImpl_t6_159 * __this, Object_t * ___trackable, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C" void StateManagerImpl_AssociateMarkerBehaviours_m6_1673 (StateManagerImpl_t6_159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m6_1674 (StateManagerImpl_t6_159 * __this, DataSet_t6_60 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C" void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m6_1675 (StateManagerImpl_t6_159 * __this, TrackableBehaviour_t6_19 * ___trackableBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C" void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m6_1676 (StateManagerImpl_t6_159 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C" void StateManagerImpl_RemoveDestroyedTrackables_m6_1677 (StateManagerImpl_t6_159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C" void StateManagerImpl_ClearTrackableBehaviours_m6_1678 (StateManagerImpl_t6_159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t6_178 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m6_1679 (StateManagerImpl_t6_159 * __this, Object_t * ___trackable, GameObject_t5_113 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C" ImageTargetAbstractBehaviour_t6_178 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m6_1680 (StateManagerImpl_t6_159 * __this, Object_t * ___trackable, GameObject_t5_113 * ___gameObject, DataSet_t6_60 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C" MarkerAbstractBehaviour_t6_179 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m6_1681 (StateManagerImpl_t6_159 * __this, Object_t * ___trackable, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C" MarkerAbstractBehaviour_t6_179 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m6_1682 (StateManagerImpl_t6_159 * __this, Object_t * ___trackable, GameObject_t5_113 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C" void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m6_1683 (StateManagerImpl_t6_159 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_EnableTrackableBehavioursForTrackable_m6_1684 (StateManagerImpl_t6_159 * __this, Object_t * ___trackable, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C" void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m6_1685 (StateManagerImpl_t6_159 * __this, LinkedList_1_t3_849 ** ___trackableIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C" void StateManagerImpl_UpdateCameraPose_m6_1686 (StateManagerImpl_t6_159 * __this, Transform_t5_83 * ___cameraTransform, Transform_t5_83 * ___parentTransformToUpdate, TrackableResultDataU5BU5D_t6_116* ___trackableResultDataArray, int32_t ___originTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C" void StateManagerImpl_UpdateTrackablePoses_m6_1687 (StateManagerImpl_t6_159 * __this, Transform_t5_83 * ___arCameraTransform, TrackableResultDataU5BU5D_t6_116* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C" void StateManagerImpl_UpdateVirtualButtons_m6_1688 (StateManagerImpl_t6_159 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C" void StateManagerImpl_UpdateWords_m6_1689 (StateManagerImpl_t6_159 * __this, Transform_t5_83 * ___arCameraTransform, WordDataU5BU5D_t6_117* ___wordData, WordResultDataU5BU5D_t6_118* ___wordResultData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateVirtualButtonBehaviours_m6_1690 (StateManagerImpl_t6_159 * __this, VirtualButtonAbstractBehaviourU5BU5D_t6_214* ___vbBehaviours, DataSet_t6_60 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C" void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m6_1691 (StateManagerImpl_t6_159 * __this, DataSet_t6_60 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C" ImageTargetAbstractBehaviour_t6_178 * StateManagerImpl_CreateImageTargetBehaviour_m6_1692 (StateManagerImpl_t6_159 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C" MultiTargetAbstractBehaviour_t6_182 * StateManagerImpl_CreateMultiTargetBehaviour_m6_1693 (StateManagerImpl_t6_159 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C" CylinderTargetAbstractBehaviour_t6_57 * StateManagerImpl_CreateCylinderTargetBehaviour_m6_1694 (StateManagerImpl_t6_159 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C" ObjectTargetAbstractBehaviour_t6_23 * StateManagerImpl_CreateObjectTargetBehaviour_m6_1695 (StateManagerImpl_t6_159 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C" void StateManagerImpl_InitializeMarkerBehaviour_m6_1696 (StateManagerImpl_t6_159 * __this, MarkerAbstractBehaviour_t6_179 * ___markerBehaviour, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionCamera_m6_1697 (StateManagerImpl_t6_159 * __this, TrackableBehaviour_t6_19 * ___trackableBehaviour, Transform_t5_83 * ___cameraTransform, Transform_t5_83 * ___parentTransformToUpdate, PoseData_t6_100  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Vector3_t5_68  StateManagerImpl_ExtractTranslationFromMatrix_m6_1698 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Quaternion_t5_69  StateManagerImpl_ExtractRotationFromMatrix_m6_1699 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionTrackable_m6_1700 (StateManagerImpl_t6_159 * __this, TrackableBehaviour_t6_19 * ___trackableBehaviour, Transform_t5_83 * ___arCameraTransform, PoseData_t6_100  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C" void StateManagerImpl__ctor_m6_1701 (StateManagerImpl_t6_159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
