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

// Vuforia.WebCamImpl
struct WebCamImpl_t6_76;
// UnityEngine.Camera[]
struct CameraU5BU5D_t5_283;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t5_327;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamImpl_get_DidUpdateThisFrame_m6_1743 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C" bool WebCamImpl_get_IsPlaying_m6_1744 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C" int32_t WebCamImpl_get_ActualWidth_m6_1745 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C" int32_t WebCamImpl_get_ActualHeight_m6_1746 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C" bool WebCamImpl_get_IsTextureSizeAvailable_m6_1747 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C" void WebCamImpl_set_IsTextureSizeAvailable_m6_1748 (WebCamImpl_t6_76 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C" bool WebCamImpl_get_FlipHorizontally_m6_1749 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C" Vec2I_t6_123  WebCamImpl_get_ResampledTextureSize_m6_1750 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C" void WebCamImpl_ComputeResampledTextureSize_m6_1751 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C" void WebCamImpl__ctor_m6_1752 (WebCamImpl_t6_76 * __this, CameraU5BU5D_t5_283* ___arCameras, int32_t ___renderTextureLayer, String_t* ___webcamDeviceName, bool ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C" void WebCamImpl_StartCamera_m6_1753 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C" void WebCamImpl_StopCamera_m6_1754 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C" void WebCamImpl_ResetPlaying_m6_1755 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C" Color32U5BU5D_t5_327* WebCamImpl_GetPixels32AndBufferFrame_m6_1756 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C" void WebCamImpl_RenderFrame_m6_1757 (WebCamImpl_t6_76 * __this, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C" VideoModeData_t6_28  WebCamImpl_GetVideoMode_m6_1758 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t6_5  WebCamImpl_GetVideoTextureInfo_m6_1759 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C" bool WebCamImpl_IsRendererDirty_m6_1760 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C" void WebCamImpl_OnDestroy_m6_1761 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C" void WebCamImpl_Update_m6_1762 (WebCamImpl_t6_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
