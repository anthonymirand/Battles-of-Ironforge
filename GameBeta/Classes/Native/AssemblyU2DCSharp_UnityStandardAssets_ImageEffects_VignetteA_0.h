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
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_VignetteA.h"

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t9_150  : public PostEffectsBase_t9_85
{
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_5;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_6;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_7;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_t5_88 * ___vignetteShader_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_t5_88 * ___separableBlurShader_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_t5_88 * ___chromAberrationShader_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t5_40 * ___m_VignetteMaterial_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t5_40 * ___m_SeparableBlurMaterial_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t5_40 * ___m_ChromAberrationMaterial_18;
};
