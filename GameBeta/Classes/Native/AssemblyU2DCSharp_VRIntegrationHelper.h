#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t5_100;
// Vuforia.HideExcessAreaAbstractBehaviour
struct HideExcessAreaAbstractBehaviour_t6_34;
// UnityEngine.Transform
struct Transform_t5_83;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// VRIntegrationHelper
struct  VRIntegrationHelper_t9_190  : public MonoBehaviour_t5_106
{
	// System.Boolean VRIntegrationHelper::IsLeft
	bool ___IsLeft_12;
	// UnityEngine.Transform VRIntegrationHelper::TrackableParent
	Transform_t5_83 * ___TrackableParent_13;
};
struct VRIntegrationHelper_t9_190_StaticFields{
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mLeftCameraMatrixOriginal
	Matrix4x4_t5_70  ___mLeftCameraMatrixOriginal_2;
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mRightCameraMatrixOriginal
	Matrix4x4_t5_70  ___mRightCameraMatrixOriginal_3;
	// UnityEngine.Camera VRIntegrationHelper::mLeftCamera
	Camera_t5_100 * ___mLeftCamera_4;
	// UnityEngine.Camera VRIntegrationHelper::mRightCamera
	Camera_t5_100 * ___mRightCamera_5;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mLeftExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t6_34 * ___mLeftExcessAreaBehaviour_6;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mRightExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t6_34 * ___mRightExcessAreaBehaviour_7;
	// UnityEngine.Rect VRIntegrationHelper::mLeftCameraPixelRect
	Rect_t5_37  ___mLeftCameraPixelRect_8;
	// UnityEngine.Rect VRIntegrationHelper::mRightCameraPixelRect
	Rect_t5_37  ___mRightCameraPixelRect_9;
	// System.Boolean VRIntegrationHelper::mLeftCameraDataAcquired
	bool ___mLeftCameraDataAcquired_10;
	// System.Boolean VRIntegrationHelper::mRightCameraDataAcquired
	bool ___mRightCameraDataAcquired_11;
};
