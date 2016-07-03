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

// UnityEngine.Animation
struct Animation_t5_175;
// UnityEngine.AnimationState
struct AnimationState_t5_168;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PlayMode.h"

// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" AnimationState_t5_168 * Animation_get_Item_m5_1479 (Animation_t5_175 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m5_1480 (Animation_t5_175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m5_1481 (Animation_t5_175 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" bool Animation_Play_m5_1482 (Animation_t5_175 * __this, String_t* ___animation, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" bool Animation_Play_m5_1483 (Animation_t5_175 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m5_1484 (Animation_t5_175 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m5_1485 (Animation_t5_175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" AnimationState_t5_168 * Animation_GetState_m5_1486 (Animation_t5_175 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t5_168 * Animation_GetStateAtIndex_m5_1487 (Animation_t5_175 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m5_1488 (Animation_t5_175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
