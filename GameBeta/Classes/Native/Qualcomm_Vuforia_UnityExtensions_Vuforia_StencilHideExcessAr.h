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
// UnityEngine.Camera
struct Camera_t5_100;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t6_6;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.StencilHideExcessAreaClipping
struct  StencilHideExcessAreaClipping_t6_11  : public Object_t
{
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mGameObject
	GameObject_t5_113 * ___mGameObject_0;
	// UnityEngine.Shader Vuforia.StencilHideExcessAreaClipping::mMatteShader
	Shader_t5_88 * ___mMatteShader_1;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mClippingPlane
	GameObject_t5_113 * ___mClippingPlane_2;
	// UnityEngine.Camera Vuforia.StencilHideExcessAreaClipping::mCamera
	Camera_t5_100 * ___mCamera_3;
	// System.Boolean Vuforia.StencilHideExcessAreaClipping::mSceneIsScaledDown
	bool ___mSceneIsScaledDown_4;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraNearPlane
	float ___mCameraNearPlane_5;
	// UnityEngine.Rect Vuforia.StencilHideExcessAreaClipping::mCameraPixelRect
	Rect_t5_37  ___mCameraPixelRect_6;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraFieldOfView
	float ___mCameraFieldOfView_7;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.StencilHideExcessAreaClipping::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t6_6 * ___mVuforiaBehaviour_8;
	// System.Boolean Vuforia.StencilHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_9;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mBgPlane
	GameObject_t5_113 * ___mBgPlane_10;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalPos
	Vector3_t5_68  ___mBgPlaneLocalPos_11;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalScale
	Vector3_t5_68  ___mBgPlaneLocalScale_12;
};
