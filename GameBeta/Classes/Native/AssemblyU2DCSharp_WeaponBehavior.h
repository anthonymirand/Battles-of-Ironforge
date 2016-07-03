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
// UnityEngine.ParticleSystem
struct ParticleSystem_t5_121;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// WeaponBehavior
struct  WeaponBehavior_t9_201  : public MonoBehaviour_t5_106
{
	// System.Boolean WeaponBehavior::cannonisArmed
	bool ___cannonisArmed_2;
	// System.Boolean WeaponBehavior::catapultisArmed
	bool ___catapultisArmed_3;
	// System.Int32 WeaponBehavior::cannonArmDistance
	int32_t ___cannonArmDistance_4;
	// System.Int32 WeaponBehavior::catapultArmDistance
	int32_t ___catapultArmDistance_5;
	// UnityEngine.GameObject WeaponBehavior::catapultAmmo
	GameObject_t5_113 * ___catapultAmmo_6;
	// UnityEngine.GameObject WeaponBehavior::cannonAmmo
	GameObject_t5_113 * ___cannonAmmo_7;
	// System.Int32 WeaponBehavior::cannonDamage
	int32_t ___cannonDamage_8;
	// System.Int32 WeaponBehavior::catapultDamage
	int32_t ___catapultDamage_9;
	// UnityEngine.ParticleSystem WeaponBehavior::particles
	ParticleSystem_t5_121 * ___particles_10;
	// UnityEngine.GameObject WeaponBehavior::explosion
	GameObject_t5_113 * ___explosion_11;
	// System.Int32 WeaponBehavior::explosionDamageRadius
	int32_t ___explosionDamageRadius_12;
	// UnityEngine.GameObject WeaponBehavior::soundObject
	GameObject_t5_113 * ___soundObject_13;
};
