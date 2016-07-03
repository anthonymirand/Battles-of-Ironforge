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
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_Bloom_Twe.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_Bloom_Blo.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_Bloom_HDR.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_Bloom_Blo_0.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_Bloom_Len.h"

// UnityStandardAssets.ImageEffects.Bloom
struct  Bloom_t9_91  : public PostEffectsBase_t9_85
{
	// UnityStandardAssets.ImageEffects.Bloom/TweakMode UnityStandardAssets.ImageEffects.Bloom::tweakMode
	int32_t ___tweakMode_5;
	// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode UnityStandardAssets.ImageEffects.Bloom::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode UnityStandardAssets.ImageEffects.Bloom::hdr
	int32_t ___hdr_7;
	// System.Boolean UnityStandardAssets.ImageEffects.Bloom::doHdr
	bool ___doHdr_8;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::sepBlurSpread
	float ___sepBlurSpread_9;
	// UnityStandardAssets.ImageEffects.Bloom/BloomQuality UnityStandardAssets.ImageEffects.Bloom::quality
	int32_t ___quality_10;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomThreshold
	float ___bloomThreshold_12;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::bloomThresholdColor
	Color_t5_58  ___bloomThresholdColor_13;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_14;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::flareRotation
	float ___flareRotation_16;
	// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle UnityStandardAssets.ImageEffects.Bloom::lensflareMode
	int32_t ___lensflareMode_17;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::hollyStretchWidth
	float ___hollyStretchWidth_18;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareIntensity
	float ___lensflareIntensity_19;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareThreshold
	float ___lensflareThreshold_20;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensFlareSaturation
	float ___lensFlareSaturation_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorA
	Color_t5_58  ___flareColorA_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorB
	Color_t5_58  ___flareColorB_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorC
	Color_t5_58  ___flareColorC_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorD
	Color_t5_58  ___flareColorD_25;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Bloom::lensFlareVignetteMask
	Texture2D_t5_50 * ___lensFlareVignetteMask_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::lensFlareShader
	Shader_t5_88 * ___lensFlareShader_27;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::lensFlareMaterial
	Material_t5_40 * ___lensFlareMaterial_28;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::screenBlendShader
	Shader_t5_88 * ___screenBlendShader_29;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::screenBlend
	Material_t5_40 * ___screenBlend_30;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresShader
	Shader_t5_88 * ___blurAndFlaresShader_31;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresMaterial
	Material_t5_40 * ___blurAndFlaresMaterial_32;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::brightPassFilterShader
	Shader_t5_88 * ___brightPassFilterShader_33;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::brightPassFilterMaterial
	Material_t5_40 * ___brightPassFilterMaterial_34;
};
