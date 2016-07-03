#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Trackable
struct Trackable_t6_20;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t1_1043;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t6_19  : public MonoBehaviour_t5_106
{
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_2;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t5_68  ___mPreviousScale_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_6;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	Object_t * ___mTrackable_7;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t1_1043 * ___mTrackableEventHandlers_8;
};
