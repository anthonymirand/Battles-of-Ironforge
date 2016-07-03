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

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_t9_107;
// UnityEngine.Texture2D
struct Texture2D_t5_50;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
extern "C" void ColorCorrectionLookup__ctor_m9_732 (ColorCorrectionLookup_t9_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
extern "C" bool ColorCorrectionLookup_CheckResources_m9_733 (ColorCorrectionLookup_t9_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
extern "C" void ColorCorrectionLookup_OnDisable_m9_734 (ColorCorrectionLookup_t9_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
extern "C" void ColorCorrectionLookup_OnDestroy_m9_735 (ColorCorrectionLookup_t9_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
extern "C" void ColorCorrectionLookup_SetIdentityLut_m9_736 (ColorCorrectionLookup_t9_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
extern "C" bool ColorCorrectionLookup_ValidDimensions_m9_737 (ColorCorrectionLookup_t9_107 * __this, Texture2D_t5_50 * ___tex2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
extern "C" void ColorCorrectionLookup_Convert_m9_738 (ColorCorrectionLookup_t9_107 * __this, Texture2D_t5_50 * ___temp2DTex, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ColorCorrectionLookup_OnRenderImage_m9_739 (ColorCorrectionLookup_t9_107 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
