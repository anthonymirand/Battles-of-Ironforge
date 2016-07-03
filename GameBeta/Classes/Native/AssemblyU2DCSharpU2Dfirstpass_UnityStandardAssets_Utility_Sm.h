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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UnityStandardAssets.Utility.SmoothFollow
struct  SmoothFollow_t10_86  : public MonoBehaviour_t5_106
{
	// UnityEngine.Transform UnityStandardAssets.Utility.SmoothFollow::target
	Transform_t5_83 * ___target_2;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::distance
	float ___distance_3;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::height
	float ___height_4;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::rotationDamping
	float ___rotationDamping_5;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::heightDamping
	float ___heightDamping_6;
};
