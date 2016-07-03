#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.Texture2D
struct Texture2D_t5_50;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t5_101;
// UnityEngine.Camera
struct Camera_t5_100;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_PostEffec.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_DepthOfFi.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_DepthOfFi_0.h"

// UnityStandardAssets.ImageEffects.DepthOfField
struct  DepthOfField_t9_115  : public PostEffectsBase_t9_85
{
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::visualizeFocus
	bool ___visualizeFocus_5;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalLength
	float ___focalLength_6;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalSize
	float ___focalSize_7;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::aperture
	float ___aperture_8;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfField::focalTransform
	Transform_t5_83 * ___focalTransform_9;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::maxBlurSize
	float ___maxBlurSize_10;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::highResolution
	bool ___highResolution_11;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurType UnityStandardAssets.ImageEffects.DepthOfField::blurType
	int32_t ___blurType_12;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount UnityStandardAssets.ImageEffects.DepthOfField::blurSampleCount
	int32_t ___blurSampleCount_13;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::nearBlur
	bool ___nearBlur_14;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::foregroundOverlap
	float ___foregroundOverlap_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dofHdrShader
	Shader_t5_88 * ___dofHdrShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dofHdrMaterial
	Material_t5_40 * ___dofHdrMaterial_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehShader
	Shader_t5_88 * ___dx11BokehShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dx11bokehMaterial
	Material_t5_40 * ___dx11bokehMaterial_19;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehThreshold
	float ___dx11BokehThreshold_20;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_21;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehTexture
	Texture2D_t5_50 * ___dx11BokehTexture_22;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehScale
	float ___dx11BokehScale_23;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehIntensity
	float ___dx11BokehIntensity_24;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalDistance01
	float ___focalDistance01_25;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbDrawArgs
	ComputeBuffer_t5_101 * ___cbDrawArgs_26;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbPoints
	ComputeBuffer_t5_101 * ___cbPoints_27;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::internalBlurWidth
	float ___internalBlurWidth_28;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.DepthOfField::cachedCamera
	Camera_t5_100 * ___cachedCamera_29;
};
