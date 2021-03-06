﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t5_83;
// MutablePose3D
struct MutablePose3D_t9_11;

#include "mscorlib_System_Object.h"

// CardboardAudio
struct  CardboardAudio_t9_10  : public Object_t
{
};
struct CardboardAudio_t9_10_StaticFields{
	// System.Int32 CardboardAudio::sampleRate
	int32_t ___sampleRate_15;
	// System.Int32 CardboardAudio::numChannels
	int32_t ___numChannels_16;
	// System.Int32 CardboardAudio::framesPerBuffer
	int32_t ___framesPerBuffer_17;
	// System.Boolean CardboardAudio::initialized
	bool ___initialized_18;
	// UnityEngine.Transform CardboardAudio::listenerTransform
	Transform_t5_83 * ___listenerTransform_19;
	// MutablePose3D CardboardAudio::pose
	MutablePose3D_t9_11 * ___pose_20;
	// System.Single CardboardAudio::worldScaleInverse
	float ___worldScaleInverse_21;
};
