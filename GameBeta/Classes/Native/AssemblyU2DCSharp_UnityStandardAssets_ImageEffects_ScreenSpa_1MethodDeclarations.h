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

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t9_136;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
extern "C" void ScreenSpaceAmbientOcclusion__ctor_m9_854 (ScreenSpaceAmbientOcclusion_t9_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
extern "C" Material_t5_40 * ScreenSpaceAmbientOcclusion_CreateMaterial_m9_855 (Object_t * __this /* static, unused */, Shader_t5_88 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
extern "C" void ScreenSpaceAmbientOcclusion_DestroyMaterial_m9_856 (Object_t * __this /* static, unused */, Material_t5_40 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
extern "C" void ScreenSpaceAmbientOcclusion_OnDisable_m9_857 (ScreenSpaceAmbientOcclusion_t9_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
extern "C" void ScreenSpaceAmbientOcclusion_Start_m9_858 (ScreenSpaceAmbientOcclusion_t9_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
extern "C" void ScreenSpaceAmbientOcclusion_OnEnable_m9_859 (ScreenSpaceAmbientOcclusion_t9_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
extern "C" void ScreenSpaceAmbientOcclusion_CreateMaterials_m9_860 (ScreenSpaceAmbientOcclusion_t9_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ScreenSpaceAmbientOcclusion_OnRenderImage_m9_861 (ScreenSpaceAmbientOcclusion_t9_136 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
