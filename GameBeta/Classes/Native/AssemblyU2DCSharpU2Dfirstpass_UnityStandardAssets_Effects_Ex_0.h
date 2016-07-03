#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t5_368;
// UnityEngine.Transform
struct Transform_t5_83;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UnityStandardAssets.Effects.ExplosionFireAndDebris
struct  ExplosionFireAndDebris_t10_48  : public MonoBehaviour_t5_106
{
	// UnityEngine.Transform[] UnityStandardAssets.Effects.ExplosionFireAndDebris::debrisPrefabs
	TransformU5BU5D_t5_368* ___debrisPrefabs_2;
	// UnityEngine.Transform UnityStandardAssets.Effects.ExplosionFireAndDebris::firePrefab
	Transform_t5_83 * ___firePrefab_3;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numDebrisPieces
	int32_t ___numDebrisPieces_4;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numFires
	int32_t ___numFires_5;
};
