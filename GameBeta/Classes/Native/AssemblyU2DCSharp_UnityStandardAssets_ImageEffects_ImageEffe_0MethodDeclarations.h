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

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t9_126;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
extern "C" void ImageEffects__ctor_m9_803 (ImageEffects_t9_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void ImageEffects_RenderDistortion_m9_804 (Object_t * __this /* static, unused */, Material_t5_40 * ___material, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, float ___angle, Vector2_t5_67  ___center, Vector2_t5_67  ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_Blit_m9_805 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_BlitWithMaterial_m9_806 (Object_t * __this /* static, unused */, Material_t5_40 * ___material, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
