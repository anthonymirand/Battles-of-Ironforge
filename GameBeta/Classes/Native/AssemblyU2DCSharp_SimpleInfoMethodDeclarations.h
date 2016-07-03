#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SimpleInfo
struct SimpleInfo_t9_68;
// Lean.LeanFinger
struct LeanFinger_t9_67;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void SimpleInfo::.ctor()
extern "C" void SimpleInfo__ctor_m9_555 (SimpleInfo_t9_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnEnable()
extern "C" void SimpleInfo_OnEnable_m9_556 (SimpleInfo_t9_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnDisable()
extern "C" void SimpleInfo_OnDisable_m9_557 (SimpleInfo_t9_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerDown(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerDown_m9_558 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerSet(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerSet_m9_559 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerUp(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerUp_m9_560 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerDrag(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerDrag_m9_561 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerTap(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerTap_m9_562 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerSwipe(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerSwipe_m9_563 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerHeldDown(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerHeldDown_m9_564 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerHeld(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerHeld_m9_565 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnFingerHeldUp(Lean.LeanFinger)
extern "C" void SimpleInfo_OnFingerHeldUp_m9_566 (SimpleInfo_t9_68 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnMultiTap(System.Int32)
extern "C" void SimpleInfo_OnMultiTap_m9_567 (SimpleInfo_t9_68 * __this, int32_t ___fingerCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnDrag(UnityEngine.Vector2)
extern "C" void SimpleInfo_OnDrag_m9_568 (SimpleInfo_t9_68 * __this, Vector2_t5_67  ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnSoloDrag(UnityEngine.Vector2)
extern "C" void SimpleInfo_OnSoloDrag_m9_569 (SimpleInfo_t9_68 * __this, Vector2_t5_67  ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnMultiDrag(UnityEngine.Vector2)
extern "C" void SimpleInfo_OnMultiDrag_m9_570 (SimpleInfo_t9_68 * __this, Vector2_t5_67  ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnPinch(System.Single)
extern "C" void SimpleInfo_OnPinch_m9_571 (SimpleInfo_t9_68 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnTwistDegrees(System.Single)
extern "C" void SimpleInfo_OnTwistDegrees_m9_572 (SimpleInfo_t9_68 * __this, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleInfo::OnTwistRadians(System.Single)
extern "C" void SimpleInfo_OnTwistRadians_m9_573 (SimpleInfo_t9_68 * __this, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
