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

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t6_14;
// UnityEngine.Camera
struct Camera_t5_100;
// System.Action
struct Action_t4_12;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t6_201;
// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.GameObject
struct GameObject_t5_113;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera,Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C" void MonoCameraConfiguration__ctor_m6_78 (MonoCameraConfiguration_t6_14 * __this, Camera_t5_100 * ___leftCamera, int32_t ___cameraDeviceMode, int32_t ___mirrorVideoBackground, Action_t4_12 * ___onVideoBackgroundConfigChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::Init()
extern "C" void MonoCameraConfiguration_Init_m6_79 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C" void MonoCameraConfiguration_ConfigureVideoBackground_m6_80 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void MonoCameraConfiguration_UpdatePlayModeParameters_m6_81 (MonoCameraConfiguration_t6_14 * __this, WebCamAbstractBehaviour_t6_201 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void MonoCameraConfiguration_UpdateProjection_m6_82 (MonoCameraConfiguration_t6_14 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t MonoCameraConfiguration_CheckForSurfaceChanges_m6_83 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void MonoCameraConfiguration_UpdateStereoDepth_m6_84 (MonoCameraConfiguration_t6_14 * __this, Transform_t5_83 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C" bool MonoCameraConfiguration_IsStereo_m6_85 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C" void MonoCameraConfiguration_ResetBackgroundPlane_m6_86 (MonoCameraConfiguration_t6_14 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::get_VideoBackgroundMirrored()
extern "C" int32_t MonoCameraConfiguration_get_VideoBackgroundMirrored_m6_87 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m6_88 (MonoCameraConfiguration_t6_14 * __this, Matrix4x4_t5_70  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void MonoCameraConfiguration_SetSkewFrustum_m6_89 (MonoCameraConfiguration_t6_14 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.MonoCameraConfiguration::get_ViewportRect()
extern "C" Rect_t5_37  MonoCameraConfiguration_get_ViewportRect_m6_90 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void MonoCameraConfiguration_EnableObjectRenderer_m6_91 (MonoCameraConfiguration_t6_14 * __this, GameObject_t5_113 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C" void MonoCameraConfiguration_ApplyMatrix_m6_92 (MonoCameraConfiguration_t6_14 * __this, Camera_t5_100 * ___cam, Matrix4x4_t5_70  ___inputMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C" void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m6_93 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C" bool MonoCameraConfiguration_CameraParameterChanged_m6_94 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MonoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t MonoCameraConfiguration_get_EyewearUserCalibrationProfileId_m6_95 (MonoCameraConfiguration_t6_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void MonoCameraConfiguration_set_EyewearUserCalibrationProfileId_m6_96 (MonoCameraConfiguration_t6_14 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
