#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t10_13;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::.ctor()
extern "C" void ThirdPersonCharacter__ctor_m10_50 (ThirdPersonCharacter_t10_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Start()
extern "C" void ThirdPersonCharacter_Start_m10_51 (ThirdPersonCharacter_t10_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_Move_m10_52 (ThirdPersonCharacter_t10_13 * __this, Vector3_t5_68  ___move, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C" void ThirdPersonCharacter_ScaleCapsuleForCrouching_m10_53 (ThirdPersonCharacter_t10_13 * __this, bool ___crouch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C" void ThirdPersonCharacter_PreventStandingInLowHeadroom_m10_54 (ThirdPersonCharacter_t10_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C" void ThirdPersonCharacter_UpdateAnimator_m10_55 (ThirdPersonCharacter_t10_13 * __this, Vector3_t5_68  ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
extern "C" void ThirdPersonCharacter_HandleAirborneMovement_m10_56 (ThirdPersonCharacter_t10_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_HandleGroundedMovement_m10_57 (ThirdPersonCharacter_t10_13 * __this, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C" void ThirdPersonCharacter_ApplyExtraTurnRotation_m10_58 (ThirdPersonCharacter_t10_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
extern "C" void ThirdPersonCharacter_OnAnimatorMove_m10_59 (ThirdPersonCharacter_t10_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
extern "C" void ThirdPersonCharacter_CheckGroundStatus_m10_60 (ThirdPersonCharacter_t10_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
