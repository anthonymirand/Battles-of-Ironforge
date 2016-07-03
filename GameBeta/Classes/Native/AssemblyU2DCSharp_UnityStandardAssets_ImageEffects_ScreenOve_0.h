#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t5_50;
// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.Material
struct Material_t5_40;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_PostEffec.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_ScreenOve.h"

// UnityStandardAssets.ImageEffects.ScreenOverlay
struct  ScreenOverlay_t9_133  : public PostEffectsBase_t9_85
{
	// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode UnityStandardAssets.ImageEffects.ScreenOverlay::blendMode
	int32_t ___blendMode_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenOverlay::intensity
	float ___intensity_6;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenOverlay::texture
	Texture2D_t5_50 * ___texture_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenOverlay::overlayShader
	Shader_t5_88 * ___overlayShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenOverlay::overlayMaterial
	Material_t5_40 * ___overlayMaterial_9;
};
