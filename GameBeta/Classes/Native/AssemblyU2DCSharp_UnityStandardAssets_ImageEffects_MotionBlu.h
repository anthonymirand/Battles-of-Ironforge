#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_ImageEffe.h"

// UnityStandardAssets.ImageEffects.MotionBlur
struct  MotionBlur_t9_127  : public ImageEffectBase_t9_109
{
	// System.Single UnityStandardAssets.ImageEffects.MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean UnityStandardAssets.ImageEffects.MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.MotionBlur::accumTexture
	RenderTexture_t5_52 * ___accumTexture_6;
};
