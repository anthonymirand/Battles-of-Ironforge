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
// Vuforia.HideExcessAreaAbstractBehaviour[]
struct HideExcessAreaAbstractBehaviourU5BU5D_t6_13;
// System.Collections.Generic.List`1<Vuforia.HideExcessAreaAbstractBehaviour>
struct List_1_t1_1041;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rect.h"

// Vuforia.LegacyHideExcessAreaClipping
struct  LegacyHideExcessAreaClipping_t6_12  : public Object_t
{
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mGameObject
	GameObject_t5_113 * ___mGameObject_0;
	// UnityEngine.Shader Vuforia.LegacyHideExcessAreaClipping::mMatteShader
	Shader_t5_88 * ___mMatteShader_1;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mBgPlane
	GameObject_t5_113 * ___mBgPlane_2;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mLeftPlane
	GameObject_t5_113 * ___mLeftPlane_3;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mRightPlane
	GameObject_t5_113 * ___mRightPlane_4;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mTopPlane
	GameObject_t5_113 * ___mTopPlane_5;
	// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::mBottomPlane
	GameObject_t5_113 * ___mBottomPlane_6;
	// UnityEngine.Camera Vuforia.LegacyHideExcessAreaClipping::mCamera
	Camera_t5_100 * ___mCamera_7;
	// System.Boolean Vuforia.LegacyHideExcessAreaClipping::mSceneIsScaledDown
	bool ___mSceneIsScaledDown_8;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mBgPlaneLocalPos
	Vector3_t5_68  ___mBgPlaneLocalPos_9;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mBgPlaneLocalScale
	Vector3_t5_68  ___mBgPlaneLocalScale_10;
	// System.Single Vuforia.LegacyHideExcessAreaClipping::mCameraNearPlane
	float ___mCameraNearPlane_11;
	// UnityEngine.Rect Vuforia.LegacyHideExcessAreaClipping::mCameraPixelRect
	Rect_t5_37  ___mCameraPixelRect_12;
	// System.Single Vuforia.LegacyHideExcessAreaClipping::mCameraFieldOFView
	float ___mCameraFieldOFView_13;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.LegacyHideExcessAreaClipping::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t6_6 * ___mVuforiaBehaviour_14;
	// Vuforia.HideExcessAreaAbstractBehaviour[] Vuforia.LegacyHideExcessAreaClipping::mHideBehaviours
	HideExcessAreaAbstractBehaviourU5BU5D_t6_13* ___mHideBehaviours_15;
	// System.Collections.Generic.List`1<Vuforia.HideExcessAreaAbstractBehaviour> Vuforia.LegacyHideExcessAreaClipping::mDeactivatedHideBehaviours
	List_1_t1_1041 * ___mDeactivatedHideBehaviours_16;
	// System.Boolean Vuforia.LegacyHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_17;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mLeftPlaneCachedScale
	Vector3_t5_68  ___mLeftPlaneCachedScale_18;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mRightPlaneCachedScale
	Vector3_t5_68  ___mRightPlaneCachedScale_19;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mBottomPlaneCachedScale
	Vector3_t5_68  ___mBottomPlaneCachedScale_20;
	// UnityEngine.Vector3 Vuforia.LegacyHideExcessAreaClipping::mTopPlaneCachedScale
	Vector3_t5_68  ___mTopPlaneCachedScale_21;
};
