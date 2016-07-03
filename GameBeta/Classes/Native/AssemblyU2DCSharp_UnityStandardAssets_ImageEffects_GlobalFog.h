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

// UnityStandardAssets.ImageEffects.GlobalFog
struct  GlobalFog_t9_124  : public PostEffectsBase_t9_85
{
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::distanceFog
	bool ___distanceFog_5;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::excludeFarPixels
	bool ___excludeFarPixels_6;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::useRadialDistance
	bool ___useRadialDistance_7;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::heightFog
	bool ___heightFog_8;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::height
	float ___height_9;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::heightDensity
	float ___heightDensity_10;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::startDistance
	float ___startDistance_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.GlobalFog::fogShader
	Shader_t5_88 * ___fogShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.GlobalFog::fogMaterial
	Material_t5_40 * ___fogMaterial_13;
};
