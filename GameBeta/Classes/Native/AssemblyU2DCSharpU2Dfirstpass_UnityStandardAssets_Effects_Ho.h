#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t5_331;
// UnityEngine.Renderer
struct Renderer_t5_33;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UnityStandardAssets.Effects.Hose
struct  Hose_t10_56  : public MonoBehaviour_t5_106
{
	// System.Single UnityStandardAssets.Effects.Hose::maxPower
	float ___maxPower_2;
	// System.Single UnityStandardAssets.Effects.Hose::minPower
	float ___minPower_3;
	// System.Single UnityStandardAssets.Effects.Hose::changeSpeed
	float ___changeSpeed_4;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Effects.Hose::hoseWaterSystems
	ParticleSystemU5BU5D_t5_331* ___hoseWaterSystems_5;
	// UnityEngine.Renderer UnityStandardAssets.Effects.Hose::systemRenderer
	Renderer_t5_33 * ___systemRenderer_6;
	// System.Single UnityStandardAssets.Effects.Hose::m_Power
	float ___m_Power_7;
};
