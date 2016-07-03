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

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t9_128;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.Texture2D
struct Texture2D_t5_50;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
extern "C" void NoiseAndGrain__ctor_m9_811 (NoiseAndGrain_t9_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
extern "C" void NoiseAndGrain__cctor_m9_812 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
extern "C" bool NoiseAndGrain_CheckResources_m9_813 (NoiseAndGrain_t9_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void NoiseAndGrain_OnRenderImage_m9_814 (NoiseAndGrain_t9_128 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C" void NoiseAndGrain_DrawNoiseQuadGrid_m9_815 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___fxMaterial, Texture2D_t5_50 * ___noise, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
