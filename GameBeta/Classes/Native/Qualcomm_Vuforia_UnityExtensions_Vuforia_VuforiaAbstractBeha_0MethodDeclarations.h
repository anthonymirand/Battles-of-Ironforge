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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t6_6;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t6_19;
// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.Camera
struct Camera_t5_100;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1_1078;
// System.Action
struct Action_t4_12;
// System.Action`1<System.Boolean>
struct Action_1_t1_1007;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t6_215;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t6_216;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t6_40;
// UnityEngine.GameObject
struct GameObject_t5_113;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"

// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SkewFrustum()
extern "C" bool VuforiaAbstractBehaviour_get_SkewFrustum_m6_1825 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaAbstractBehaviour::get_CameraOffset()
extern "C" float VuforiaAbstractBehaviour_get_CameraOffset_m6_1826 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_set_CameraOffset_m6_1827 (VuforiaAbstractBehaviour_t6_6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C" int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m6_1828 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C" TrackableBehaviour_t6_19 * VuforiaAbstractBehaviour_get_WorldCenter_m6_1829 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_CentralAnchorPoint()
extern "C" Transform_t5_83 * VuforiaAbstractBehaviour_get_CentralAnchorPoint_m6_1830 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_ParentAnchorPoint()
extern "C" Transform_t5_83 * VuforiaAbstractBehaviour_get_ParentAnchorPoint_m6_1831 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C" int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m6_1832 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C" int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m6_1833 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C" bool VuforiaAbstractBehaviour_get_HasStarted_m6_1834 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_IsStereoRendering()
extern "C" bool VuforiaAbstractBehaviour_get_IsStereoRendering_m6_1835 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_PrimaryCamera()
extern "C" Camera_t5_100 * VuforiaAbstractBehaviour_get_PrimaryCamera_m6_1836 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_PrimaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_PrimaryCamera_m6_1837 (VuforiaAbstractBehaviour_t6_6 * __this, Camera_t5_100 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_SecondaryCamera()
extern "C" Camera_t5_100 * VuforiaAbstractBehaviour_get_SecondaryCamera_m6_1838 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SecondaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_SecondaryCamera_m6_1839 (VuforiaAbstractBehaviour_t6_6 * __this, Camera_t5_100 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C" String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m6_1840 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::get_EyewearUserCalibrationProfileId()
extern "C" int32_t VuforiaAbstractBehaviour_get_EyewearUserCalibrationProfileId_m6_1841 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void VuforiaAbstractBehaviour_set_EyewearUserCalibrationProfileId_m6_1842 (VuforiaAbstractBehaviour_t6_6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SynchronizePoseUpdates()
extern "C" bool VuforiaAbstractBehaviour_get_SynchronizePoseUpdates_m6_1843 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SynchronizePoseUpdates(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_set_SynchronizePoseUpdates_m6_1844 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetSkewFrustum(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_SetSkewFrustum_m6_1845 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m6_1846 (VuforiaAbstractBehaviour_t6_6 * __this, Action_1_t1_1078 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m6_1847 (VuforiaAbstractBehaviour_t6_6 * __this, Action_1_t1_1078 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m6_1848 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m6_1849 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m6_1850 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m6_1851 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m6_1852 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m6_1853 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m6_1854 (VuforiaAbstractBehaviour_t6_6 * __this, Action_1_t1_1007 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m6_1855 (VuforiaAbstractBehaviour_t6_6 * __this, Action_1_t1_1007 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m6_1856 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m6_1857 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m6_1858 (VuforiaAbstractBehaviour_t6_6 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m6_1859 (VuforiaAbstractBehaviour_t6_6 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m6_1860 (VuforiaAbstractBehaviour_t6_6 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m6_1861 (VuforiaAbstractBehaviour_t6_6 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenterMode_m6_1862 (VuforiaAbstractBehaviour_t6_6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenter_m6_1863 (VuforiaAbstractBehaviour_t6_6 * __this, TrackableBehaviour_t6_19 * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetCentralAnchorPoint_m6_1864 (VuforiaAbstractBehaviour_t6_6 * __this, Transform_t5_83 * ___anchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetParentAnchorPoint_m6_1865 (VuforiaAbstractBehaviour_t6_6 * __this, Transform_t5_83 * ___parentAnchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_SetCameraOffset_m6_1866 (VuforiaAbstractBehaviour_t6_6 * __this, float ___Offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C" void VuforiaAbstractBehaviour_SetAppLicenseKey_m6_1867 (VuforiaAbstractBehaviour_t6_6 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetPresent(System.String)
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetPresent_m6_1868 (VuforiaAbstractBehaviour_t6_6 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetNotPresent()
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetNotPresent_m6_1869 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetViewportRectangle()
extern "C" Rect_t5_37  VuforiaAbstractBehaviour_GetViewportRectangle_m6_1870 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C" int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m6_1871 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState()
extern "C" void VuforiaAbstractBehaviour_UpdateState_m6_1872 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateState_m6_1873 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m6_1874 (VuforiaAbstractBehaviour_t6_6 * __this, Matrix4x4_t5_70  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C" void VuforiaAbstractBehaviour_ConfigureVideoBackground_m6_1875 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ResetBackgroundPlane_m6_1876 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m6_1877 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m6_1878 (VuforiaAbstractBehaviour_t6_6 * __this, Action_t4_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m6_1879 (Object_t * __this /* static, unused */, Camera_t5_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m6_1880 (Object_t * __this /* static, unused */, Camera_t5_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C" void VuforiaAbstractBehaviour_Start_m6_1881 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C" void VuforiaAbstractBehaviour_OnEnable_m6_1882 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Update()
extern "C" void VuforiaAbstractBehaviour_Update_m6_1883 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_OnApplicationPause_m6_1884 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C" void VuforiaAbstractBehaviour_OnDisable_m6_1885 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C" void VuforiaAbstractBehaviour_OnDestroy_m6_1886 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C" void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m6_1887 (VuforiaAbstractBehaviour_t6_6 * __this, Object_t * ___implementation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateStatePrivate_m6_1888 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C" bool VuforiaAbstractBehaviour_StartVuforia_m6_1889 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C" bool VuforiaAbstractBehaviour_StopVuforia_m6_1890 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C" void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m6_1891 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C" void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m6_1892 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureView()
extern "C" void VuforiaAbstractBehaviour_ConfigureView_m6_1893 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_EnableObjectRenderer_m6_1894 (VuforiaAbstractBehaviour_t6_6 * __this, GameObject_t5_113 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDeviceMode_m6_1895 (VuforiaAbstractBehaviour_t6_6 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousImageTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousImageTargets_m6_1896 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousImageTargets_m6_1897 (VuforiaAbstractBehaviour_t6_6 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousObjectTargets_m6_1898 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousObjectTargets_m6_1899 (VuforiaAbstractBehaviour_t6_6 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetDelayedLoadingObjectTargets()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetDelayedLoadingObjectTargets_m6_1900 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUseDelayedLoadingObjectTargets_m6_1901 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___useDelayedLoading, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetCameraDirection()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetCameraDirection_m6_1902 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDirection_m6_1903 (VuforiaAbstractBehaviour_t6_6 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMirrorVideoBackground()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMirrorVideoBackground_m6_1904 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMirrorVideoBackground(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMirrorVideoBackground_m6_1905 (VuforiaAbstractBehaviour_t6_6 * __this, int32_t ___reflection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetUsingHeadset()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetUsingHeadset_m6_1906 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUsingHeadset(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUsingHeadset_m6_1907 (VuforiaAbstractBehaviour_t6_6 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetHeadsetID()
extern "C" String_t* VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetHeadsetID_m6_1908 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetHeadsetID(System.String)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetHeadsetID_m6_1909 (VuforiaAbstractBehaviour_t6_6 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C" void VuforiaAbstractBehaviour__ctor_m6_1910 (VuforiaAbstractBehaviour_t6_6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
