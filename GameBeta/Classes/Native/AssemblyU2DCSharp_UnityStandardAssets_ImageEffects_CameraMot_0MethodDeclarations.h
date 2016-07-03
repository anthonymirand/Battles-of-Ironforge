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

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct CameraMotionBlur_t9_104;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// UnityEngine.Camera
struct Camera_t5_100;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
extern "C" void CameraMotionBlur__ctor_m9_713 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern "C" void CameraMotionBlur__cctor_m9_714 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
extern "C" void CameraMotionBlur_CalculateViewProjection_m9_715 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
extern "C" void CameraMotionBlur_Start_m9_716 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern "C" void CameraMotionBlur_OnEnable_m9_717 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C" void CameraMotionBlur_OnDisable_m9_718 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C" bool CameraMotionBlur_CheckResources_m9_719 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void CameraMotionBlur_OnRenderImage_m9_720 (CameraMotionBlur_t9_104 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C" void CameraMotionBlur_Remember_m9_721 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
extern "C" Camera_t5_100 * CameraMotionBlur_GetTmpCam_m9_722 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C" void CameraMotionBlur_StartFrame_m9_723 (CameraMotionBlur_t9_104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C" int32_t CameraMotionBlur_divRoundUp_m9_724 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
