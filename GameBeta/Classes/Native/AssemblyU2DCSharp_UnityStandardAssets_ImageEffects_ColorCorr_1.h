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
// UnityEngine.Texture3D
struct Texture3D_t5_51;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_PostEffec.h"

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct  ColorCorrectionLookup_t9_107  : public PostEffectsBase_t9_85
{
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionLookup::shader
	Shader_t5_88 * ___shader_5;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionLookup::material
	Material_t5_40 * ___material_6;
	// UnityEngine.Texture3D UnityStandardAssets.ImageEffects.ColorCorrectionLookup::converted3DLut
	Texture3D_t5_51 * ___converted3DLut_7;
	// System.String UnityStandardAssets.ImageEffects.ColorCorrectionLookup::basedOnTempTex
	String_t* ___basedOnTempTex_8;
};
