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

// Vuforia.NullCameraConfiguration
struct NullCameraConfiguration_t6_16;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t6_201;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.NullCameraConfiguration::Init()
extern "C" void NullCameraConfiguration_Init_m6_115 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ConfigureVideoBackground()
extern "C" void NullCameraConfiguration_ConfigureVideoBackground_m6_116 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void NullCameraConfiguration_UpdatePlayModeParameters_m6_117 (NullCameraConfiguration_t6_16 * __this, WebCamAbstractBehaviour_t6_201 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void NullCameraConfiguration_UpdateProjection_m6_118 (NullCameraConfiguration_t6_16 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.NullCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t NullCameraConfiguration_CheckForSurfaceChanges_m6_119 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void NullCameraConfiguration_UpdateStereoDepth_m6_120 (NullCameraConfiguration_t6_16 * __this, Transform_t5_83 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::IsStereo()
extern "C" bool NullCameraConfiguration_IsStereo_m6_121 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C" void NullCameraConfiguration_ResetBackgroundPlane_m6_122 (NullCameraConfiguration_t6_16 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.NullCameraConfiguration::get_VideoBackgroundMirrored()
extern "C" int32_t NullCameraConfiguration_get_VideoBackgroundMirrored_m6_123 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_VideoBackgroundMirrored(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C" void NullCameraConfiguration_set_VideoBackgroundMirrored_m6_124 (NullCameraConfiguration_t6_16 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void NullCameraConfiguration_ApplyCorrectedProjectionMatrix_m6_125 (NullCameraConfiguration_t6_16 * __this, Matrix4x4_t5_70  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void NullCameraConfiguration_SetSkewFrustum_m6_126 (NullCameraConfiguration_t6_16 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.NullCameraConfiguration::get_ViewportRect()
extern "C" Rect_t5_37  NullCameraConfiguration_get_ViewportRect_m6_127 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.NullCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t NullCameraConfiguration_get_EyewearUserCalibrationProfileId_m6_128 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void NullCameraConfiguration_set_EyewearUserCalibrationProfileId_m6_129 (NullCameraConfiguration_t6_16 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::.ctor()
extern "C" void NullCameraConfiguration__ctor_m6_130 (NullCameraConfiguration_t6_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
