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
// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t9_27;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CardboardHead
struct  CardboardHead_t9_28  : public MonoBehaviour_t5_106
{
	// System.Boolean CardboardHead::trackRotation
	bool ___trackRotation_2;
	// System.Boolean CardboardHead::trackPosition
	bool ___trackPosition_3;
	// UnityEngine.Transform CardboardHead::target
	Transform_t5_83 * ___target_4;
	// System.Boolean CardboardHead::updateEarly
	bool ___updateEarly_5;
	// System.Boolean CardboardHead::updated
	bool ___updated_6;
	// CardboardHead/HeadUpdatedDelegate CardboardHead::OnHeadUpdated
	HeadUpdatedDelegate_t9_27 * ___OnHeadUpdated_7;
};
