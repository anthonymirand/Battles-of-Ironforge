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
// UnityEngine.Texture2D
struct Texture2D_t5_50;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_ScreenSpa_0.h"

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct  ScreenSpaceAmbientOcclusion_t9_136  : public MonoBehaviour_t5_106
{
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Radius
	float ___m_Radius_2;
	// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SampleCount
	int32_t ___m_SampleCount_3;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionIntensity
	float ___m_OcclusionIntensity_4;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Blur
	int32_t ___m_Blur_5;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Downsampling
	int32_t ___m_Downsampling_6;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_7;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_MinZ
	float ___m_MinZ_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOShader
	Shader_t5_88 * ___m_SSAOShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOMaterial
	Material_t5_40 * ___m_SSAOMaterial_10;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_RandomTexture
	Texture2D_t5_50 * ___m_RandomTexture_11;
	// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Supported
	bool ___m_Supported_12;
};
