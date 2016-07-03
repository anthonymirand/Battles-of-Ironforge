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
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t10_4;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t10_5;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t10_7;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct  HeadBob_t10_6  : public MonoBehaviour_t5_106
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.HeadBob::Camera
	Camera_t5_100 * ___Camera_2;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_t10_4 * ___motionBob_3;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t10_5 * ___jumpAndLandingBob_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnityStandardAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t10_7 * ___rigidbodyFirstPersonController_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_7;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.HeadBob::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_8;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.HeadBob::m_OriginalCameraPosition
	Vector3_t5_68  ___m_OriginalCameraPosition_9;
};
