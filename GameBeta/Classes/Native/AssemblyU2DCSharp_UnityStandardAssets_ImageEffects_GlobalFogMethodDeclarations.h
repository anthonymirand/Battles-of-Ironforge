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

// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t9_124;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// UnityEngine.Material
struct Material_t5_40;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
extern "C" void GlobalFog__ctor_m9_793 (GlobalFog_t9_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
extern "C" bool GlobalFog_CheckResources_m9_794 (GlobalFog_t9_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlobalFog_OnRenderImage_m9_795 (GlobalFog_t9_124 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void GlobalFog_CustomGraphicsBlit_m9_796 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___fxMaterial, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
