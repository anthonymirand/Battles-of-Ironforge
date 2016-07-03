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

// CrossbowCheck
struct  CrossbowCheck_t9_49  : public MonoBehaviour_t5_106
{
	// UnityEngine.GameObject CrossbowCheck::self
	GameObject_t5_113 * ___self_2;
	// UnityEngine.GameObject CrossbowCheck::other
	GameObject_t5_113 * ___other_3;
	// System.Int32 CrossbowCheck::distance
	int32_t ___distance_4;
	// UnityEngine.ParticleSystem CrossbowCheck::particles
	ParticleSystem_t5_121 * ___particles_5;
	// UnityEngine.GameObject CrossbowCheck::bulletPrefab
	GameObject_t5_113 * ___bulletPrefab_6;
	// System.Single CrossbowCheck::fireRate
	float ___fireRate_7;
	// UnityEngine.Transform CrossbowCheck::moveSelf
	Transform_t5_83 * ___moveSelf_8;
	// System.Single CrossbowCheck::delay
	float ___delay_9;
};
