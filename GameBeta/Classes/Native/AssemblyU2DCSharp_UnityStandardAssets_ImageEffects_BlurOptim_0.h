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
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_BlurOptim.h"

// UnityStandardAssets.ImageEffects.BlurOptimized
struct  BlurOptimized_t9_102  : public PostEffectsBase_t9_85
{
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::downsample
	int32_t ___downsample_5;
	// System.Single UnityStandardAssets.ImageEffects.BlurOptimized::blurSize
	float ___blurSize_6;
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::blurIterations
	int32_t ___blurIterations_7;
	// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType UnityStandardAssets.ImageEffects.BlurOptimized::blurType
	int32_t ___blurType_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BlurOptimized::blurShader
	Shader_t5_88 * ___blurShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BlurOptimized::blurMaterial
	Material_t5_40 * ___blurMaterial_10;
};
