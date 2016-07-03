#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t7_36;
// ICardboardPointer
struct ICardboardPointer_t9_40;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// GazeInputModule
struct  GazeInputModule_t9_39  : public BaseInputModule_t7_4
{
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// System.Single GazeInputModule::clickTime
	float ___clickTime_7;
	// UnityEngine.Vector2 GazeInputModule::hotspot
	Vector2_t5_67  ___hotspot_8;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t7_36 * ___pointerData_9;
	// UnityEngine.Vector2 GazeInputModule::lastHeadPose
	Vector2_t5_67  ___lastHeadPose_10;
	// System.Boolean GazeInputModule::isActive
	bool ___isActive_12;
};
struct GazeInputModule_t9_39_StaticFields{
	// ICardboardPointer GazeInputModule::cardboardPointer
	Object_t * ___cardboardPointer_11;
};
