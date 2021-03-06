﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StereoController
struct StereoController_t9_23;
// StereoRenderEffect
struct StereoRenderEffect_t9_26;
// UnityEngine.Camera
struct Camera_t5_100;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// CardboardEye
struct  CardboardEye_t9_25  : public MonoBehaviour_t5_106
{
	// Cardboard/Eye CardboardEye::eye
	int32_t ___eye_2;
	// UnityEngine.LayerMask CardboardEye::toggleCullingMask
	LayerMask_t5_66  ___toggleCullingMask_3;
	// StereoController CardboardEye::controller
	StereoController_t9_23 * ___controller_4;
	// StereoRenderEffect CardboardEye::stereoEffect
	StereoRenderEffect_t9_26 * ___stereoEffect_5;
	// UnityEngine.Camera CardboardEye::monoCamera
	Camera_t5_100 * ___monoCamera_6;
	// UnityEngine.Matrix4x4 CardboardEye::realProj
	Matrix4x4_t5_70  ___realProj_7;
	// System.Single CardboardEye::interpPosition
	float ___interpPosition_8;
	// UnityEngine.Camera CardboardEye::<cam>k__BackingField
	Camera_t5_100 * ___U3CcamU3Ek__BackingField_9;
};
