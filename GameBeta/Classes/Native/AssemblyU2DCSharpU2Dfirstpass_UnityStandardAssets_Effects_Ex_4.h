﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t5_83;
// UnityStandardAssets.Utility.ObjectResetter
struct ObjectResetter_t10_53;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UnityStandardAssets.Effects.Explosive
struct  Explosive_t10_52  : public MonoBehaviour_t5_106
{
	// UnityEngine.Transform UnityStandardAssets.Effects.Explosive::explosionPrefab
	Transform_t5_83 * ___explosionPrefab_2;
	// System.Single UnityStandardAssets.Effects.Explosive::detonationImpactVelocity
	float ___detonationImpactVelocity_3;
	// System.Single UnityStandardAssets.Effects.Explosive::sizeMultiplier
	float ___sizeMultiplier_4;
	// System.Boolean UnityStandardAssets.Effects.Explosive::reset
	bool ___reset_5;
	// System.Single UnityStandardAssets.Effects.Explosive::resetTimeDelay
	float ___resetTimeDelay_6;
	// System.Boolean UnityStandardAssets.Effects.Explosive::m_Exploded
	bool ___m_Exploded_7;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Effects.Explosive::m_ObjectResetter
	ObjectResetter_t10_53 * ___m_ObjectResetter_8;
};
