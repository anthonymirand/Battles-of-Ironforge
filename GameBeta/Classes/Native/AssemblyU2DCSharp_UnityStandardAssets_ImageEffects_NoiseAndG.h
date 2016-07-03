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
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_FilterMode.h"

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct  NoiseAndGrain_t9_128  : public PostEffectsBase_t9_85
{
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_5;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::generalIntensity
	float ___generalIntensity_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::blackIntensity
	float ___blackIntensity_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::midGrey
	float ___midGrey_9;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11Grain
	bool ___dx11Grain_10;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::softness
	float ___softness_11;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::monochrome
	bool ___monochrome_12;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::intensities
	Vector3_t5_68  ___intensities_13;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::tiling
	Vector3_t5_68  ___tiling_14;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_15;
	// UnityEngine.FilterMode UnityStandardAssets.ImageEffects.NoiseAndGrain::filterMode
	int32_t ___filterMode_16;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseTexture
	Texture2D_t5_50 * ___noiseTexture_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseShader
	Shader_t5_88 * ___noiseShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseMaterial
	Material_t5_40 * ___noiseMaterial_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseShader
	Shader_t5_88 * ___dx11NoiseShader_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseMaterial
	Material_t5_40 * ___dx11NoiseMaterial_21;
};
struct NoiseAndGrain_t9_128_StaticFields{
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_22;
};
