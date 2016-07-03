#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t5_88;
// Vuforia.IExcessAreaClipping
struct IExcessAreaClipping_t6_35;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t6_6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbstr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.HideExcessAreaAbstractBehaviour
struct  HideExcessAreaAbstractBehaviour_t6_34  : public MonoBehaviour_t5_106
{
	// UnityEngine.Shader Vuforia.HideExcessAreaAbstractBehaviour::matteShader
	Shader_t5_88 * ___matteShader_2;
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.HideExcessAreaAbstractBehaviour::clippingMode
	int32_t ___clippingMode_3;
	// Vuforia.IExcessAreaClipping Vuforia.HideExcessAreaAbstractBehaviour::mClippingImpl
	Object_t * ___mClippingImpl_4;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.HideExcessAreaAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t6_6 * ___mVuforiaBehaviour_5;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mPlaneOffset
	Vector3_t5_68  ___mPlaneOffset_6;
};
