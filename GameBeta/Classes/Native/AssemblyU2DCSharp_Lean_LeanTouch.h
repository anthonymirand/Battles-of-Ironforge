#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lean.LeanTouch
struct LeanTouch_t9_82;
// System.Collections.Generic.List`1<Lean.LeanFinger>
struct List_1_t1_1230;
// System.Action`1<Lean.LeanFinger>
struct Action_1_t1_1231;
// System.Action`1<System.Int32>
struct Action_1_t1_1232;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t1_1233;
// System.Action`1<System.Single>
struct Action_1_t1_1234;
// UnityEngine.Texture2D
struct Texture2D_t5_50;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// Lean.LeanTouch
struct  LeanTouch_t9_82  : public MonoBehaviour_t5_106
{
	// System.Single Lean.LeanTouch::TapThreshold
	float ___TapThreshold_27;
	// System.Single Lean.LeanTouch::SwipeThreshold
	float ___SwipeThreshold_28;
	// System.Single Lean.LeanTouch::HeldThreshold
	float ___HeldThreshold_29;
	// System.Int32 Lean.LeanTouch::ReferenceDpi
	int32_t ___ReferenceDpi_30;
	// System.Boolean Lean.LeanTouch::RecordFingers
	bool ___RecordFingers_31;
	// System.Single Lean.LeanTouch::RecordThreshold
	float ___RecordThreshold_32;
	// System.Single Lean.LeanTouch::RecordLimit
	float ___RecordLimit_33;
	// System.Boolean Lean.LeanTouch::SimulateMultiFingers
	bool ___SimulateMultiFingers_34;
	// UnityEngine.KeyCode Lean.LeanTouch::PinchTwistKey
	int32_t ___PinchTwistKey_35;
	// UnityEngine.KeyCode Lean.LeanTouch::MultiDragKey
	int32_t ___MultiDragKey_36;
	// UnityEngine.Texture2D Lean.LeanTouch::FingerTexture
	Texture2D_t5_50 * ___FingerTexture_37;
	// System.Int32 Lean.LeanTouch::lastFingerCount
	int32_t ___lastFingerCount_39;
	// System.Single Lean.LeanTouch::multiFingerTime
	float ___multiFingerTime_40;
	// System.Int32 Lean.LeanTouch::multiFingerCount
	int32_t ___multiFingerCount_41;
};
struct LeanTouch_t9_82_StaticFields{
	// Lean.LeanTouch Lean.LeanTouch::Instance
	LeanTouch_t9_82 * ___Instance_2;
	// System.Collections.Generic.List`1<Lean.LeanFinger> Lean.LeanTouch::Fingers
	List_1_t1_1230 * ___Fingers_3;
	// System.Collections.Generic.List`1<Lean.LeanFinger> Lean.LeanTouch::InactiveFingers
	List_1_t1_1230 * ___InactiveFingers_4;
	// UnityEngine.Vector2 Lean.LeanTouch::DragDelta
	Vector2_t5_67  ___DragDelta_5;
	// UnityEngine.Vector2 Lean.LeanTouch::SoloDragDelta
	Vector2_t5_67  ___SoloDragDelta_6;
	// UnityEngine.Vector2 Lean.LeanTouch::MultiDragDelta
	Vector2_t5_67  ___MultiDragDelta_7;
	// System.Single Lean.LeanTouch::TwistDegrees
	float ___TwistDegrees_8;
	// System.Single Lean.LeanTouch::TwistRadians
	float ___TwistRadians_9;
	// System.Single Lean.LeanTouch::PinchScale
	float ___PinchScale_10;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerDown
	Action_1_t1_1231 * ___OnFingerDown_11;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerSet
	Action_1_t1_1231 * ___OnFingerSet_12;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerUp
	Action_1_t1_1231 * ___OnFingerUp_13;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerDrag
	Action_1_t1_1231 * ___OnFingerDrag_14;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerTap
	Action_1_t1_1231 * ___OnFingerTap_15;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerSwipe
	Action_1_t1_1231 * ___OnFingerSwipe_16;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerHeldDown
	Action_1_t1_1231 * ___OnFingerHeldDown_17;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerHeldSet
	Action_1_t1_1231 * ___OnFingerHeldSet_18;
	// System.Action`1<Lean.LeanFinger> Lean.LeanTouch::OnFingerHeldUp
	Action_1_t1_1231 * ___OnFingerHeldUp_19;
	// System.Action`1<System.Int32> Lean.LeanTouch::OnMultiTap
	Action_1_t1_1232 * ___OnMultiTap_20;
	// System.Action`1<UnityEngine.Vector2> Lean.LeanTouch::OnDrag
	Action_1_t1_1233 * ___OnDrag_21;
	// System.Action`1<UnityEngine.Vector2> Lean.LeanTouch::OnSoloDrag
	Action_1_t1_1233 * ___OnSoloDrag_22;
	// System.Action`1<UnityEngine.Vector2> Lean.LeanTouch::OnMultiDrag
	Action_1_t1_1233 * ___OnMultiDrag_23;
	// System.Action`1<System.Single> Lean.LeanTouch::OnPinch
	Action_1_t1_1234 * ___OnPinch_24;
	// System.Action`1<System.Single> Lean.LeanTouch::OnTwistDegrees
	Action_1_t1_1234 * ___OnTwistDegrees_25;
	// System.Action`1<System.Single> Lean.LeanTouch::OnTwistRadians
	Action_1_t1_1234 * ___OnTwistRadians_26;
	// System.Int32 Lean.LeanTouch::highestMouseButton
	int32_t ___highestMouseButton_38;
};
