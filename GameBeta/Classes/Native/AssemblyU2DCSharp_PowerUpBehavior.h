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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PowerUpBehavior
struct  PowerUpBehavior_t9_154  : public MonoBehaviour_t5_106
{
	// System.Int32 PowerUpBehavior::powerUpDistance
	int32_t ___powerUpDistance_2;
	// UnityEngine.GameObject PowerUpBehavior::poweredParticle_health
	GameObject_t5_113 * ___poweredParticle_health_3;
	// UnityEngine.GameObject PowerUpBehavior::poweredParticle_attack
	GameObject_t5_113 * ___poweredParticle_attack_4;
	// System.String PowerUpBehavior::teamColor
	String_t* ___teamColor_5;
};
