#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5_113;
// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.Texture2D
struct Texture2D_t5_50;
// UnityEngine.Camera
struct Camera_t5_100;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_PostEffec.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_CameraMot.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct  CameraMotionBlur_t9_104  : public PostEffectsBase_t9_85
{
	// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter UnityStandardAssets.ImageEffects.CameraMotionBlur::filterType
	int32_t ___filterType_6;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::preview
	bool ___preview_7;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::previewScale
	Vector3_t5_68  ___previewScale_8;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::movementScale
	float ___movementScale_9;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::rotationScale
	float ___rotationScale_10;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::maxVelocity
	float ___maxVelocity_11;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::minVelocity
	float ___minVelocity_12;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityScale
	float ___velocityScale_13;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::softZDistance
	float ___softZDistance_14;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityDownsample
	int32_t ___velocityDownsample_15;
	// UnityEngine.LayerMask UnityStandardAssets.ImageEffects.CameraMotionBlur::excludeLayers
	LayerMask_t5_66  ___excludeLayers_16;
	// UnityEngine.GameObject UnityStandardAssets.ImageEffects.CameraMotionBlur::tmpCam
	GameObject_t5_113 * ___tmpCam_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::shader
	Shader_t5_88 * ___shader_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurShader
	Shader_t5_88 * ___dx11MotionBlurShader_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::replacementClear
	Shader_t5_88 * ___replacementClear_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::motionBlurMaterial
	Material_t5_40 * ___motionBlurMaterial_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurMaterial
	Material_t5_40 * ___dx11MotionBlurMaterial_22;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.CameraMotionBlur::noiseTexture
	Texture2D_t5_50 * ___noiseTexture_23;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::jitter
	float ___jitter_24;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocity
	bool ___showVelocity_25;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocityScale
	float ___showVelocityScale_26;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::currentViewProjMat
	Matrix4x4_t5_70  ___currentViewProjMat_27;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevViewProjMat
	Matrix4x4_t5_70  ___prevViewProjMat_28;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameCount
	int32_t ___prevFrameCount_29;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::wasActive
	bool ___wasActive_30;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameForward
	Vector3_t5_68  ___prevFrameForward_31;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameUp
	Vector3_t5_68  ___prevFrameUp_32;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFramePos
	Vector3_t5_68  ___prevFramePos_33;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::_camera
	Camera_t5_100 * ____camera_34;
};
struct CameraMotionBlur_t9_104_StaticFields{
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::MAX_RADIUS
	float ___MAX_RADIUS_5;
};
