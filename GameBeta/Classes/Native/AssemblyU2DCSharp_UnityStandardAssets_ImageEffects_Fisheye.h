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

// UnityStandardAssets.ImageEffects.Fisheye
struct  Fisheye_t9_123  : public PostEffectsBase_t9_85
{
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthX
	float ___strengthX_5;
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthY
	float ___strengthY_6;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Fisheye::fishEyeShader
	Shader_t5_88 * ___fishEyeShader_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Fisheye::fisheyeMaterial
	Material_t5_40 * ___fisheyeMaterial_8;
};
