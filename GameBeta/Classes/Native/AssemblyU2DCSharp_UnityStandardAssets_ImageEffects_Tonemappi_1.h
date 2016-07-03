#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t5_172;
struct AnimationCurve_t5_172_marshaled;
// UnityEngine.Texture2D
struct Texture2D_t5_50;
// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_PostEffec.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_Tonemappi.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_Tonemappi_0.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"

// UnityStandardAssets.ImageEffects.Tonemapping
struct  Tonemapping_t9_146  : public PostEffectsBase_t9_85
{
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_5;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_t5_172 * ___remapCurve_7;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_t5_50 * ___curveTex_8;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_9;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_t5_88 * ___tonemapper_13;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t5_40 * ___tonemapMaterial_15;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_t5_52 * ___rt_16;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_17;
};
