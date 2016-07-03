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

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t9_96;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
extern "C" void BloomAndFlares__ctor_m9_690 (BloomAndFlares_t9_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C" bool BloomAndFlares_CheckResources_m9_691 (BloomAndFlares_t9_96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_OnRenderImage_m9_692 (BloomAndFlares_t9_96 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_AddTo_m9_693 (BloomAndFlares_t9_96 * __this, float ___intensity_, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BlendFlares_m9_694 (BloomAndFlares_t9_96 * __this, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BrightFilter_m9_695 (BloomAndFlares_t9_96 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_Vignette_m9_696 (BloomAndFlares_t9_96 * __this, float ___amount, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
