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

// BaseVRDevice
struct BaseVRDevice_t9_24;
// CardboardProfile
struct CardboardProfile_t9_38;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_883;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// System.Uri
struct Uri_t3_3;
// Pose3D
struct Pose3D_t9_41;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BaseVRDevice_DisplayMetrics.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void BaseVRDevice::.ctor()
extern "C" void BaseVRDevice__ctor_m9_391 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::.cctor()
extern "C" void BaseVRDevice__cctor_m9_392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile BaseVRDevice::get_Profile()
extern "C" CardboardProfile_t9_38 * BaseVRDevice_get_Profile_m9_393 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::set_Profile(CardboardProfile)
extern "C" void BaseVRDevice_set_Profile_m9_394 (BaseVRDevice_t9_24 * __this, CardboardProfile_t9_38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice/DisplayMetrics BaseVRDevice::GetDisplayMetrics()
extern "C" DisplayMetrics_t9_47  BaseVRDevice_GetDisplayMetrics_m9_395 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseVRDevice_SupportsNativeDistortionCorrection_m9_396 (BaseVRDevice_t9_24 * __this, List_1_t1_883 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseVRDevice_SupportsNativeUILayer_m9_397 (BaseVRDevice_t9_24 * __this, List_1_t1_883 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsUnityRenderEvent()
extern "C" bool BaseVRDevice_SupportsUnityRenderEvent_m9_398 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen()
extern "C" RenderTexture_t5_52 * BaseVRDevice_CreateStereoScreen_m9_399 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool BaseVRDevice_SetDefaultDeviceProfile_m9_400 (BaseVRDevice_t9_24 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::ShowSettingsDialog()
extern "C" void BaseVRDevice_ShowSettingsDialog_m9_401 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D BaseVRDevice::GetHeadPose()
extern "C" Pose3D_t9_41 * BaseVRDevice_GetHeadPose_m9_402 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D BaseVRDevice::GetEyePose(Cardboard/Eye)
extern "C" Pose3D_t9_41 * BaseVRDevice_GetEyePose_m9_403 (BaseVRDevice_t9_24 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::GetProjection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t5_70  BaseVRDevice_GetProjection_m9_404 (BaseVRDevice_t9_24 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect BaseVRDevice::GetViewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t5_37  BaseVRDevice_GetViewport_m9_405 (BaseVRDevice_t9_24 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void BaseVRDevice_SetTouchCoordinates_m9_406 (BaseVRDevice_t9_24 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnPause(System.Boolean)
extern "C" void BaseVRDevice_OnPause_m9_407 (BaseVRDevice_t9_24 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnFocus(System.Boolean)
extern "C" void BaseVRDevice_OnFocus_m9_408 (BaseVRDevice_t9_24 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnLevelLoaded(System.Int32)
extern "C" void BaseVRDevice_OnLevelLoaded_m9_409 (BaseVRDevice_t9_24 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnApplicationQuit()
extern "C" void BaseVRDevice_OnApplicationQuit_m9_410 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::Destroy()
extern "C" void BaseVRDevice_Destroy_m9_411 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::ComputeEyesFromProfile()
extern "C" void BaseVRDevice_ComputeEyesFromProfile_m9_412 (BaseVRDevice_t9_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t5_70  BaseVRDevice_MakeProjection_m9_413 (Object_t * __this /* static, unused */, float ___l, float ___t, float ___r, float ___b, float ___n, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice BaseVRDevice::GetDevice()
extern "C" BaseVRDevice_t9_24 * BaseVRDevice_GetDevice_m9_414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
