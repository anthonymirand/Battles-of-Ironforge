#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.Material
struct Material_t5_40;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_PostEffec.h"

// UnityStandardAssets.ImageEffects.CreaseShading
struct  CreaseShading_t9_112  : public PostEffectsBase_t9_85
{
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::intensity
	float ___intensity_5;
	// System.Int32 UnityStandardAssets.ImageEffects.CreaseShading::softness
	int32_t ___softness_6;
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::spread
	float ___spread_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::blurShader
	Shader_t5_88 * ___blurShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::blurMaterial
	Material_t5_40 * ___blurMaterial_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::depthFetchShader
	Shader_t5_88 * ___depthFetchShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::depthFetchMaterial
	Material_t5_40 * ___depthFetchMaterial_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyShader
	Shader_t5_88 * ___creaseApplyShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyMaterial
	Material_t5_40 * ___creaseApplyMaterial_13;
};
