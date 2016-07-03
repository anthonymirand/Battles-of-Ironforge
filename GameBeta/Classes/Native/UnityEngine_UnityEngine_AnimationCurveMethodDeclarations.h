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

// UnityEngine.AnimationCurve
struct AnimationCurve_t5_172;
struct AnimationCurve_t5_172_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t5_337;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5_1464 (AnimationCurve_t5_172 * __this, KeyframeU5BU5D_t5_337* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5_1465 (AnimationCurve_t5_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5_1466 (AnimationCurve_t5_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5_1467 (AnimationCurve_t5_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m5_1468 (AnimationCurve_t5_172 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t5_337* AnimationCurve_get_keys_m5_1469 (AnimationCurve_t5_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t5_171  AnimationCurve_get_Item_m5_1470 (AnimationCurve_t5_172 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m5_1471 (AnimationCurve_t5_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t5_171  AnimationCurve_GetKey_Internal_m5_1472 (AnimationCurve_t5_172 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t5_337* AnimationCurve_GetKeys_m5_1473 (AnimationCurve_t5_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5_1474 (AnimationCurve_t5_172 * __this, KeyframeU5BU5D_t5_337* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t5_172_marshal(const AnimationCurve_t5_172& unmarshaled, AnimationCurve_t5_172_marshaled& marshaled);
extern "C" void AnimationCurve_t5_172_marshal_back(const AnimationCurve_t5_172_marshaled& marshaled, AnimationCurve_t5_172& unmarshaled);
extern "C" void AnimationCurve_t5_172_marshal_cleanup(AnimationCurve_t5_172_marshaled& marshaled);
