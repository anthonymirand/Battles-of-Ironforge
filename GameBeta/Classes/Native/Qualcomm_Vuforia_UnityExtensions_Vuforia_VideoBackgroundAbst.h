#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t6_6;
// UnityEngine.Camera
struct Camera_t5_100;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t6_4;
// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>
struct HashSet_1_t4_18;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.VideoBackgroundAbstractBehaviour
struct  VideoBackgroundAbstractBehaviour_t6_198  : public MonoBehaviour_t5_106
{
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mClearBuffers
	int32_t ___mClearBuffers_2;
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mSkipStateUpdates
	int32_t ___mSkipStateUpdates_3;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.VideoBackgroundAbstractBehaviour::mVuforiaAbstractBehaviour
	VuforiaAbstractBehaviour_t6_6 * ___mVuforiaAbstractBehaviour_4;
	// UnityEngine.Camera Vuforia.VideoBackgroundAbstractBehaviour::mCamera
	Camera_t5_100 * ___mCamera_5;
	// Vuforia.BackgroundPlaneAbstractBehaviour Vuforia.VideoBackgroundAbstractBehaviour::mBackgroundBehaviour
	BackgroundPlaneAbstractBehaviour_t6_4 * ___mBackgroundBehaviour_6;
	// System.Single Vuforia.VideoBackgroundAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer> Vuforia.VideoBackgroundAbstractBehaviour::mDisabledMeshRenderers
	HashSet_1_t4_18 * ___mDisabledMeshRenderers_10;
};
struct VideoBackgroundAbstractBehaviour_t6_198_StaticFields{
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mFrameCounter
	int32_t ___mFrameCounter_8;
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mPostRenderCounter
	int32_t ___mPostRenderCounter_9;
};
