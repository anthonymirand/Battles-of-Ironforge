#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t5_100;
// UnityEngine.Material
struct Material_t5_40;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t1_1244;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityStandardAssets.Water.PlanarReflection
struct  PlanarReflection_t10_39  : public MonoBehaviour_t5_106
{
	// UnityEngine.LayerMask UnityStandardAssets.Water.PlanarReflection::reflectionMask
	LayerMask_t5_66  ___reflectionMask_2;
	// System.Boolean UnityStandardAssets.Water.PlanarReflection::reflectSkybox
	bool ___reflectSkybox_3;
	// UnityEngine.Color UnityStandardAssets.Water.PlanarReflection::clearColor
	Color_t5_58  ___clearColor_4;
	// System.String UnityStandardAssets.Water.PlanarReflection::reflectionSampler
	String_t* ___reflectionSampler_5;
	// System.Single UnityStandardAssets.Water.PlanarReflection::clipPlaneOffset
	float ___clipPlaneOffset_6;
	// UnityEngine.Vector3 UnityStandardAssets.Water.PlanarReflection::m_Oldpos
	Vector3_t5_68  ___m_Oldpos_7;
	// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::m_ReflectionCamera
	Camera_t5_100 * ___m_ReflectionCamera_8;
	// UnityEngine.Material UnityStandardAssets.Water.PlanarReflection::m_SharedMaterial
	Material_t5_40 * ___m_SharedMaterial_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> UnityStandardAssets.Water.PlanarReflection::m_HelperCameras
	Dictionary_2_t1_1244 * ___m_HelperCameras_10;
};
