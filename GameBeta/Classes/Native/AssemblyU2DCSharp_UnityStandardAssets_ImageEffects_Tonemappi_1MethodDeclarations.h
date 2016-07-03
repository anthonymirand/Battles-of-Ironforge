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

// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_t9_146;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
extern "C" void Tonemapping__ctor_m9_870 (Tonemapping_t9_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
extern "C" bool Tonemapping_CheckResources_m9_871 (Tonemapping_t9_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
extern "C" float Tonemapping_UpdateCurve_m9_872 (Tonemapping_t9_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
extern "C" void Tonemapping_OnDisable_m9_873 (Tonemapping_t9_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
extern "C" bool Tonemapping_CreateInternalRenderTexture_m9_874 (Tonemapping_t9_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Tonemapping_OnRenderImage_m9_875 (Tonemapping_t9_146 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
