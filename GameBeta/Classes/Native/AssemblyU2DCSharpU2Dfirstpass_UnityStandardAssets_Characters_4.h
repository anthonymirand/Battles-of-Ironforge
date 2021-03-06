﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t5_100;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t10_8;
// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t10_2;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_t10_9;
// UnityEngine.Rigidbody
struct Rigidbody_t5_132;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t5_143;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct  RigidbodyFirstPersonController_t10_7  : public MonoBehaviour_t5_106
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::cam
	Camera_t5_100 * ___cam_2;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::movementSettings
	MovementSettings_t10_8 * ___movementSettings_3;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::mouseLook
	MouseLook_t10_2 * ___mouseLook_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::advancedSettings
	AdvancedSettings_t10_9 * ___advancedSettings_5;
	// UnityEngine.Rigidbody UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_RigidBody
	Rigidbody_t5_132 * ___m_RigidBody_6;
	// UnityEngine.CapsuleCollider UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Capsule
	CapsuleCollider_t5_143 * ___m_Capsule_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_YRotation
	float ___m_YRotation_8;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_GroundContactNormal
	Vector3_t5_68  ___m_GroundContactNormal_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jump
	bool ___m_Jump_10;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jumping
	bool ___m_Jumping_12;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_IsGrounded
	bool ___m_IsGrounded_13;
};
