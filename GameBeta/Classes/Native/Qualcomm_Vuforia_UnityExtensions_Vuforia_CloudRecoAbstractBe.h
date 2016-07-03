#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t6_31;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_t1_1044;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// Vuforia.CloudRecoAbstractBehaviour
struct  CloudRecoAbstractBehaviour_t6_30  : public MonoBehaviour_t5_106
{
	// Vuforia.ObjectTracker Vuforia.CloudRecoAbstractBehaviour::mObjectTracker
	ObjectTracker_t6_31 * ___mObjectTracker_2;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_3;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mInitSuccess
	bool ___mInitSuccess_4;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCloudRecoStarted
	bool ___mCloudRecoStarted_5;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_6;
	// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler> Vuforia.CloudRecoAbstractBehaviour::mHandlers
	List_1_t1_1044 * ___mHandlers_7;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_8;
	// System.String Vuforia.CloudRecoAbstractBehaviour::AccessKey
	String_t* ___AccessKey_9;
	// System.String Vuforia.CloudRecoAbstractBehaviour::SecretKey
	String_t* ___SecretKey_10;
	// UnityEngine.Color Vuforia.CloudRecoAbstractBehaviour::ScanlineColor
	Color_t5_58  ___ScanlineColor_11;
	// UnityEngine.Color Vuforia.CloudRecoAbstractBehaviour::FeaturePointColor
	Color_t5_58  ___FeaturePointColor_12;
};
