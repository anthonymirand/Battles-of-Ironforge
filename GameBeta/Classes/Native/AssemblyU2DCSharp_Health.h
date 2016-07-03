#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t5_162;
// UnityEngine.TextMesh
struct TextMesh_t5_189;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Health
struct  Health_t9_65  : public MonoBehaviour_t5_106
{
	// System.Int32 Health::health
	int32_t ___health_2;
	// System.Boolean Health::boosted
	bool ___boosted_3;
	// UnityEngine.AudioSource Health::backgroundMusic
	AudioSource_t5_162 * ___backgroundMusic_4;
	// UnityEngine.AudioSource Health::playOnKill
	AudioSource_t5_162 * ___playOnKill_5;
	// UnityEngine.TextMesh Health::dragonWatchStatus
	TextMesh_t5_189 * ___dragonWatchStatus_6;
};
