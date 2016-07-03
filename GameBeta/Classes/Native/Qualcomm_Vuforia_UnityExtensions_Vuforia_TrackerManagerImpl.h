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
// Vuforia.MarkerTracker
struct MarkerTracker_t6_88;
// Vuforia.TextTracker
struct TextTracker_t6_134;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t6_132;
// Vuforia.StateManager
struct StateManager_t6_158;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackerManager.h"

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t6_170  : public TrackerManager_t6_169
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t6_31 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t6_88 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t6_134 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t6_132 * ___mSmartTerrainTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t6_158 * ___mStateManager_5;
};
