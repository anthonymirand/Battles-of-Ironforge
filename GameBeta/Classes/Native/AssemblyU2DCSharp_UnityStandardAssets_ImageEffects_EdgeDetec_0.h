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
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_EdgeDetec.h"
#include "UnityEngine_UnityEngine_Color.h"

// UnityStandardAssets.ImageEffects.EdgeDetection
struct  EdgeDetection_t9_122  : public PostEffectsBase_t9_85
{
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::mode
	int32_t ___mode_5;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityDepth
	float ___sensitivityDepth_6;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityNormals
	float ___sensitivityNormals_7;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::lumThreshold
	float ___lumThreshold_8;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgeExp
	float ___edgeExp_9;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sampleDist
	float ___sampleDist_10;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnly
	float ___edgesOnly_11;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnlyBgColor
	Color_t5_58  ___edgesOnlyBgColor_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectShader
	Shader_t5_88 * ___edgeDetectShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectMaterial
	Material_t5_40 * ___edgeDetectMaterial_14;
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::oldMode
	int32_t ___oldMode_15;
};
