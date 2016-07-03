#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Lean.LeanFinger/Snapshot>
struct List_1_t1_1229;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1_1191;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Lean.LeanFinger
struct  LeanFinger_t9_67  : public Object_t
{
	// System.Int32 Lean.LeanFinger::Index
	int32_t ___Index_0;
	// System.Single Lean.LeanFinger::Age
	float ___Age_1;
	// System.Boolean Lean.LeanFinger::Set
	bool ___Set_2;
	// System.Boolean Lean.LeanFinger::HeldSet
	bool ___HeldSet_3;
	// System.Boolean Lean.LeanFinger::Tap
	bool ___Tap_4;
	// System.Int32 Lean.LeanFinger::TapCount
	int32_t ___TapCount_5;
	// UnityEngine.Vector2 Lean.LeanFinger::StartScreenPosition
	Vector2_t5_67  ___StartScreenPosition_6;
	// UnityEngine.Vector2 Lean.LeanFinger::LastScreenPosition
	Vector2_t5_67  ___LastScreenPosition_7;
	// System.Single Lean.LeanFinger::TotalDeltaMagnitude
	float ___TotalDeltaMagnitude_8;
	// System.Boolean Lean.LeanFinger::LastSet
	bool ___LastSet_9;
	// System.Boolean Lean.LeanFinger::LastHeldSet
	bool ___LastHeldSet_10;
	// UnityEngine.Vector2 Lean.LeanFinger::ScreenPosition
	Vector2_t5_67  ___ScreenPosition_11;
	// System.Boolean Lean.LeanFinger::StartedOverGui
	bool ___StartedOverGui_12;
	// System.Collections.Generic.List`1<Lean.LeanFinger/Snapshot> Lean.LeanFinger::Snapshots
	List_1_t1_1229 * ___Snapshots_13;
};
struct LeanFinger_t9_67_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Lean.LeanFinger::tempRaycastResults
	List_1_t1_1191 * ___tempRaycastResults_14;
	// System.Collections.Generic.List`1<Lean.LeanFinger/Snapshot> Lean.LeanFinger::tempSnapshots
	List_1_t1_1229 * ___tempSnapshots_15;
};
