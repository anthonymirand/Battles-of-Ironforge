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
// UnityEngine.Transform
struct Transform_t5_83;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// DistanceCheck
struct  DistanceCheck_t9_50  : public MonoBehaviour_t5_106
{
	// UnityEngine.GameObject DistanceCheck::self
	GameObject_t5_113 * ___self_2;
	// UnityEngine.GameObject DistanceCheck::other
	GameObject_t5_113 * ___other_3;
	// System.Int32 DistanceCheck::distance
	int32_t ___distance_4;
	// UnityEngine.ParticleSystem DistanceCheck::particles
	ParticleSystem_t5_121 * ___particles_5;
	// UnityEngine.GameObject DistanceCheck::bulletPrefab
	GameObject_t5_113 * ___bulletPrefab_6;
	// System.Single DistanceCheck::fireRate
	float ___fireRate_7;
	// UnityEngine.Transform DistanceCheck::moveSelf
	Transform_t5_83 * ___moveSelf_8;
};
