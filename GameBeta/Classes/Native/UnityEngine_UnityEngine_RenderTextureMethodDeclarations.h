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

// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
#include "UnityEngine_UnityEngine_RenderBuffer.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture__ctor_m5_305 (RenderTexture_t5_52 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void RenderTexture__ctor_m5_306 (RenderTexture_t5_52 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C" void RenderTexture_Internal_CreateRenderTexture_m5_307 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C" RenderTexture_t5_52 * RenderTexture_GetTemporary_m5_308 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" RenderTexture_t5_52 * RenderTexture_GetTemporary_m5_309 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
extern "C" RenderTexture_t5_52 * RenderTexture_GetTemporary_m5_310 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
extern "C" RenderTexture_t5_52 * RenderTexture_GetTemporary_m5_311 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" void RenderTexture_ReleaseTemporary_m5_312 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___temp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetWidth_m5_313 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetWidth_m5_314 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m5_315 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetHeight_m5_316 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C" void RenderTexture_Internal_SetSRGBReadWrite_m5_317 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___mono, bool ___sRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C" int32_t RenderTexture_get_width_m5_318 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C" void RenderTexture_set_width_m5_319 (RenderTexture_t5_52 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C" int32_t RenderTexture_get_height_m5_320 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C" void RenderTexture_set_height_m5_321 (RenderTexture_t5_52 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C" void RenderTexture_set_depth_m5_322 (RenderTexture_t5_52 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
extern "C" void RenderTexture_set_isPowerOfTwo_m5_323 (RenderTexture_t5_52 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C" int32_t RenderTexture_get_format_m5_324 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture_set_format_m5_325 (RenderTexture_t5_52 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
extern "C" void RenderTexture_set_antiAliasing_m5_326 (RenderTexture_t5_52 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::Create()
extern "C" bool RenderTexture_Create_m5_327 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::INTERNAL_CALL_Create(UnityEngine.RenderTexture)
extern "C" bool RenderTexture_INTERNAL_CALL_Create_m5_328 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Release()
extern "C" void RenderTexture_Release_m5_329 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_Release(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_Release_m5_330 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::IsCreated()
extern "C" bool RenderTexture_IsCreated_m5_331 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::INTERNAL_CALL_IsCreated(UnityEngine.RenderTexture)
extern "C" bool RenderTexture_INTERNAL_CALL_IsCreated_m5_332 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::DiscardContents()
extern "C" void RenderTexture_DiscardContents_m5_333 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_DiscardContents_m5_334 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
extern "C" void RenderTexture_MarkRestoreExpected_m5_335 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m5_336 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_colorBuffer()
extern "C" RenderBuffer_t5_254  RenderTexture_get_colorBuffer_m5_337 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_depthBuffer()
extern "C" RenderBuffer_t5_254  RenderTexture_get_depthBuffer_m5_338 (RenderTexture_t5_52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)
extern "C" void RenderTexture_GetColorBuffer_m5_339 (RenderTexture_t5_52 * __this, RenderBuffer_t5_254 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)
extern "C" void RenderTexture_GetDepthBuffer_m5_340 (RenderTexture_t5_52 * __this, RenderBuffer_t5_254 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
extern "C" RenderTexture_t5_52 * RenderTexture_get_active_m5_341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C" void RenderTexture_set_active_m5_342 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
