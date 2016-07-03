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

// UnityStandardAssets.ImageEffects.Antialiasing
struct Antialiasing_t9_84;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.Antialiasing::.ctor()
extern "C" void Antialiasing__ctor_m9_678 (Antialiasing_t9_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::CurrentAAMaterial()
extern "C" Material_t5_40 * Antialiasing_CurrentAAMaterial_m9_679 (Antialiasing_t9_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::CheckResources()
extern "C" bool Antialiasing_CheckResources_m9_680 (Antialiasing_t9_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Antialiasing::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Antialiasing_OnRenderImage_m9_681 (Antialiasing_t9_84 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
