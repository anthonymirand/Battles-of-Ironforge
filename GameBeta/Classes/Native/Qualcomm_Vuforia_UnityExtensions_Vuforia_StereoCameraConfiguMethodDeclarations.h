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

// Vuforia.StereoCameraConfiguration
struct StereoCameraConfiguration_t6_15;
// UnityEngine.Camera
struct Camera_t5_100;
// System.Action
struct Action_t4_12;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t6_201;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void Vuforia.StereoCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera,System.Boolean,System.Boolean,System.Single,Vuforia.CameraDevice/CameraDeviceMode,System.Action,System.Int32)
extern "C" void StereoCameraConfiguration__ctor_m6_97 (StereoCameraConfiguration_t6_15 * __this, Camera_t5_100 * ___leftCamera, Camera_t5_100 * ___rightCamera, bool ___autoStereoSkewing, bool ___integratedWithOtherSDK, float ___cameraOffset, int32_t ___cameraDeviceMode, Action_t4_12 * ___onVideoBackgroundConfigChanged, int32_t ___eyewearUserCalibrationProfileId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::Init()
extern "C" void StereoCameraConfiguration_Init_m6_98 (StereoCameraConfiguration_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ConfigureVideoBackground()
extern "C" void StereoCameraConfiguration_ConfigureVideoBackground_m6_99 (StereoCameraConfiguration_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void StereoCameraConfiguration_UpdatePlayModeParameters_m6_100 (StereoCameraConfiguration_t6_15 * __this, WebCamAbstractBehaviour_t6_201 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void StereoCameraConfiguration_UpdateProjection_m6_101 (StereoCameraConfiguration_t6_15 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.StereoCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t StereoCameraConfiguration_CheckForSurfaceChanges_m6_102 (StereoCameraConfiguration_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void StereoCameraConfiguration_UpdateStereoDepth_m6_103 (StereoCameraConfiguration_t6_15 * __this, Transform_t5_83 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoCameraConfiguration::IsStereo()
extern "C" bool StereoCameraConfiguration_IsStereo_m6_104 (StereoCameraConfiguration_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void StereoCameraConfiguration_ApplyCorrectedProjectionMatrix_m6_105 (StereoCameraConfiguration_t6_15 * __this, Matrix4x4_t5_70  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C" void StereoCameraConfiguration_ResolveVideoBackgroundBehaviours_m6_106 (StereoCameraConfiguration_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoCameraConfiguration::CameraParameterChanged()
extern "C" bool StereoCameraConfiguration_CameraParameterChanged_m6_107 (StereoCameraConfiguration_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ExtractCameraClippingPlanes(UnityEngine.Matrix4x4,System.Single&,System.Single&)
extern "C" void StereoCameraConfiguration_ExtractCameraClippingPlanes_m6_108 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___inverseProjMatrix, float* ___near, float* ___far, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.StereoCameraConfiguration::ExtractCameraFoV(UnityEngine.Matrix4x4)
extern "C" float StereoCameraConfiguration_ExtractCameraFoV_m6_109 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___inverseProjMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StereoCameraConfiguration::HomogenizedVec3(UnityEngine.Vector4)
extern "C" Vector3_t5_68  StereoCameraConfiguration_HomogenizedVec3_m6_110 (Object_t * __this /* static, unused */, Vector4_t5_72  ___vec4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void StereoCameraConfiguration_SetSkewFrustum_m6_111 (StereoCameraConfiguration_t6_15 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.StereoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t StereoCameraConfiguration_get_EyewearUserCalibrationProfileId_m6_112 (StereoCameraConfiguration_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void StereoCameraConfiguration_set_EyewearUserCalibrationProfileId_m6_113 (StereoCameraConfiguration_t6_15 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::.cctor()
extern "C" void StereoCameraConfiguration__cctor_m6_114 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
