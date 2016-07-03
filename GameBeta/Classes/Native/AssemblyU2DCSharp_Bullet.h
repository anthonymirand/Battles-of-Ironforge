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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Bullet
struct  Bullet_t9_1  : public MonoBehaviour_t5_106
{
	// System.Single Bullet::speed
	float ___speed_2;
	// UnityEngine.Transform Bullet::target
	Transform_t5_83 * ___target_3;
	// System.String Bullet::teamColor
	String_t* ___teamColor_4;
	// System.Int32 Bullet::damage
	int32_t ___damage_5;
};
