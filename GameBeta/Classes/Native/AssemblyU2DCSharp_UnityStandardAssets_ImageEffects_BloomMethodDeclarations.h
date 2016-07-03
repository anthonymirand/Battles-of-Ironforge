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

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t9_91;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
extern "C" void Bloom__ctor_m9_682 (Bloom_t9_91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
extern "C" bool Bloom_CheckResources_m9_683 (Bloom_t9_91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_OnRenderImage_m9_684 (Bloom_t9_91 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_AddTo_m9_685 (Bloom_t9_91 * __this, float ___intensity_, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BlendFlares_m9_686 (Bloom_t9_91 * __this, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m9_687 (Bloom_t9_91 * __this, float ___thresh, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m9_688 (Bloom_t9_91 * __this, Color_t5_58  ___threshColor, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_Vignette_m9_689 (Bloom_t9_91 * __this, float ___amount, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
