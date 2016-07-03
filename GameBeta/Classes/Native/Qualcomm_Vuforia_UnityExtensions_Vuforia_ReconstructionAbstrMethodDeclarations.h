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

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t6_44;
// Vuforia.Reconstruction
struct Reconstruction_t6_155;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t6_213;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t1_1063;
// System.Action`1<Vuforia.Prop>
struct Action_1_t1_1064;
// System.Action`1<Vuforia.Surface>
struct Action_1_t1_1065;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t6_156;
// Vuforia.Prop
struct Prop_t6_157;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t6_55;
// Vuforia.Surface
struct Surface_t6_56;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t1_1095;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t1_1096;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t6_209;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t6_210;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t6_211;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t6_53;
// UnityEngine.Mesh
struct Mesh_t5_29;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t1_1093;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t1_1094;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__7.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C" Object_t * ReconstructionAbstractBehaviour_get_Reconstruction_m6_1593 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Start()
extern "C" void ReconstructionAbstractBehaviour_Start_m6_1594 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C" void ReconstructionAbstractBehaviour_OnDrawGizmos_m6_1595 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m6_1596 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m6_1597 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m6_1598 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1063 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m6_1599 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1063 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m6_1600 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1064 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m6_1601 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1064 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m6_1602 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1064 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m6_1603 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1064 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m6_1604 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1064 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m6_1605 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1064 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m6_1606 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1065 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m6_1607 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1065 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m6_1608 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1065 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m6_1609 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1065 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m6_1610 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1065 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m6_1611 (ReconstructionAbstractBehaviour_t6_44 * __this, Action_1_t1_1065 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C" PropAbstractBehaviour_t6_156 * ReconstructionAbstractBehaviour_AssociateProp_m6_1612 (ReconstructionAbstractBehaviour_t6_44 * __this, PropAbstractBehaviour_t6_156 * ___templateBehaviour, Object_t * ___newProp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C" SurfaceAbstractBehaviour_t6_55 * ReconstructionAbstractBehaviour_AssociateSurface_m6_1613 (ReconstructionAbstractBehaviour_t6_44 * __this, SurfaceAbstractBehaviour_t6_55 * ___templateBehaviour, Object_t * ___newSurface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveProps_m6_1614 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m6_1615 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t * ___prop, PropAbstractBehaviour_t6_156 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveSurfaces_m6_1616 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m6_1617 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t * ___surface, SurfaceAbstractBehaviour_t6_55 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C" void ReconstructionAbstractBehaviour_Initialize_m6_1618 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C" void ReconstructionAbstractBehaviour_Deinitialize_m6_1619 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m6_1620 (ReconstructionAbstractBehaviour_t6_44 * __this, SmartTerrainRevisionDataU5BU5D_t6_209* ___smartTerrainRevisions, SurfaceDataU5BU5D_t6_210* ___updatedSurfaces, PropDataU5BU5D_t6_211* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C" void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m6_1621 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C" void ReconstructionAbstractBehaviour_ClearOnReset_m6_1622 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C" void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m6_1623 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C" PropAbstractBehaviour_t6_156 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m6_1624 (Object_t * __this /* static, unused */, PropAbstractBehaviour_t6_156 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m6_1625 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t * ___trackable, PropAbstractBehaviour_t6_156 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C" SurfaceAbstractBehaviour_t6_55 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m6_1626 (Object_t * __this /* static, unused */, SurfaceAbstractBehaviour_t6_55 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m6_1627 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t * ___trackable, SurfaceAbstractBehaviour_t6_55 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C" Object_t * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m6_1628 (ReconstructionAbstractBehaviour_t6_44 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m6_1629 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t* ___newSurfaces, Object_t* ___updatedSurfaces, Object_t* ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m6_1630 (ReconstructionAbstractBehaviour_t6_44 * __this, Object_t* ___newProps, Object_t* ___updatedProps, Object_t* ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.ReconstructionAbstractBehaviour::UpdateMesh(Vuforia.VuforiaManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean)
extern "C" Mesh_t5_29 * ReconstructionAbstractBehaviour_UpdateMesh_m6_1631 (Object_t * __this /* static, unused */, MeshData_t6_108  ___meshData, Mesh_t5_29 * ___oldMesh, bool ___setNormalsUpwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C" Int32U5BU5D_t1_161* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m6_1632 (Object_t * __this /* static, unused */, int32_t ___numBoundaries, IntPtr_t ___boundaryArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m6_1633 (ReconstructionAbstractBehaviour_t6_44 * __this, List_1_t1_1093 * ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m6_1634 (ReconstructionAbstractBehaviour_t6_44 * __this, List_1_t1_1094 * ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSurfaces_m6_1635 (ReconstructionAbstractBehaviour_t6_44 * __this, SmartTerrainRevisionDataU5BU5D_t6_209* ___smartTerrainRevisions, SurfaceDataU5BU5D_t6_210* ___updatedSurfaceData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateProps_m6_1636 (ReconstructionAbstractBehaviour_t6_44 * __this, SmartTerrainRevisionDataU5BU5D_t6_209* ___smartTerrainRevisions, PropDataU5BU5D_t6_211* ___updatedPropData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_InitializedInEditor()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_InitializedInEditor_m6_1637 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetInitializedInEditor_m6_1638 (ReconstructionAbstractBehaviour_t6_44 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtentEnabled(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtentEnabled_m6_1639 (ReconstructionAbstractBehaviour_t6_44 * __this, bool ___maxExtendEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtentEnabled()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtentEnabled_m6_1640 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtent(UnityEngine.Rect)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtent_m6_1641 (ReconstructionAbstractBehaviour_t6_44 * __this, Rect_t5_37  ___rectangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtent()
extern "C" Rect_t5_37  ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtent_m6_1642 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetAutomaticStart(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetAutomaticStart_m6_1643 (ReconstructionAbstractBehaviour_t6_44 * __this, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_AutomaticStart()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_AutomaticStart_m6_1644 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshUpdates(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshUpdates_m6_1645 (ReconstructionAbstractBehaviour_t6_44 * __this, bool ___navMeshUpdates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshUpdates()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshUpdates_m6_1646 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshPadding(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshPadding_m6_1647 (ReconstructionAbstractBehaviour_t6_44 * __this, float ___navMeshPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshPadding()
extern "C" float ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshPadding_m6_1648 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorMeshesByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorMeshesByFactor_m6_1649 (ReconstructionAbstractBehaviour_t6_44 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorPropPositionsByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorPropPositionsByFactor_m6_1650 (ReconstructionAbstractBehaviour_t6_44 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C" void ReconstructionAbstractBehaviour__ctor_m6_1651 (ReconstructionAbstractBehaviour_t6_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
