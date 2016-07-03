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
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t6_6;
// UnityEngine.Mesh
struct Mesh_t5_29;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.BackgroundPlaneAbstractBehaviour
struct  BackgroundPlaneAbstractBehaviour_t6_4  : public MonoBehaviour_t5_106
{
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.BackgroundPlaneAbstractBehaviour::mTextureInfo
	VideoTextureInfo_t6_5  ___mTextureInfo_2;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewWidth
	int32_t ___mViewWidth_3;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewHeight
	int32_t ___mViewHeight_4;
	// System.Boolean Vuforia.BackgroundPlaneAbstractBehaviour::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_5;
	// UnityEngine.Camera Vuforia.BackgroundPlaneAbstractBehaviour::mCamera
	Camera_t5_100 * ___mCamera_6;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.BackgroundPlaneAbstractBehaviour::mQBehaviour
	VuforiaAbstractBehaviour_t6_6 * ___mQBehaviour_7;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::defaultNumDivisions
	int32_t ___defaultNumDivisions_9;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneAbstractBehaviour::mMesh
	Mesh_t5_29 * ___mMesh_10;
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_11;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneAbstractBehaviour::mBackgroundOffset
	Vector3_t5_68  ___mBackgroundOffset_12;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.BackgroundPlaneAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t6_6 * ___mVuforiaBehaviour_13;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mNumDivisions
	int32_t ___mNumDivisions_14;
};
struct BackgroundPlaneAbstractBehaviour_t6_4_StaticFields{
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::maxDisplacement
	float ___maxDisplacement_8;
};
