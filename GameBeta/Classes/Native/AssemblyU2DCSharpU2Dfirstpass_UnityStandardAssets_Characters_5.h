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
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t5_152;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t10_13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
struct  AICharacterControl_t10_12  : public MonoBehaviour_t5_106
{
	// UnityEngine.Transform UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::target
	Transform_t5_83 * ___target_2;
	// UnityEngine.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<agent>k__BackingField
	NavMeshAgent_t5_152 * ___U3CagentU3Ek__BackingField_3;
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<character>k__BackingField
	ThirdPersonCharacter_t10_13 * ___U3CcharacterU3Ek__BackingField_4;
};
