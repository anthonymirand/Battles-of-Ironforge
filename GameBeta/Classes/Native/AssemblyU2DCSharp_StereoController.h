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
// CardboardEye[]
struct CardboardEyeU5BU5D_t9_43;
// CardboardHead
struct CardboardHead_t9_28;
// UnityEngine.Camera
struct Camera_t5_100;
// System.Func`2<CardboardEye,CardboardHead>
struct Func_2_t4_23;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// StereoController
struct  StereoController_t9_23  : public MonoBehaviour_t5_106
{
	// System.Boolean StereoController::directRender
	bool ___directRender_2;
	// System.Boolean StereoController::keepStereoUpdated
	bool ___keepStereoUpdated_3;
	// System.Single StereoController::stereoMultiplier
	float ___stereoMultiplier_4;
	// System.Single StereoController::matchMonoFOV
	float ___matchMonoFOV_5;
	// System.Single StereoController::matchByZoom
	float ___matchByZoom_6;
	// UnityEngine.Transform StereoController::centerOfInterest
	Transform_t5_83 * ___centerOfInterest_7;
	// System.Single StereoController::radiusOfInterest
	float ___radiusOfInterest_8;
	// System.Boolean StereoController::checkStereoComfort
	bool ___checkStereoComfort_9;
	// System.Single StereoController::stereoAdjustSmoothing
	float ___stereoAdjustSmoothing_10;
	// System.Single StereoController::screenParallax
	float ___screenParallax_11;
	// System.Single StereoController::stereoPaddingX
	float ___stereoPaddingX_12;
	// System.Single StereoController::stereoPaddingY
	float ___stereoPaddingY_13;
	// System.Boolean StereoController::renderedStereo
	bool ___renderedStereo_14;
	// CardboardEye[] StereoController::eyes
	CardboardEyeU5BU5D_t9_43* ___eyes_15;
	// CardboardHead StereoController::head
	CardboardHead_t9_28 * ___head_16;
	// UnityEngine.Camera StereoController::<cam>k__BackingField
	Camera_t5_100 * ___U3CcamU3Ek__BackingField_17;
};
struct StereoController_t9_23_StaticFields{
	// System.Func`2<CardboardEye,CardboardHead> StereoController::<>f__am$cache10
	Func_2_t4_23 * ___U3CU3Ef__amU24cache10_18;
};
