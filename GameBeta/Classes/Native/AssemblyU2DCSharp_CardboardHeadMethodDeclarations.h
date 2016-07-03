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

// CardboardHead
struct CardboardHead_t9_28;
// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t9_27;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void CardboardHead::.ctor()
extern "C" void CardboardHead__ctor_m9_231 (CardboardHead_t9_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::add_OnHeadUpdated(CardboardHead/HeadUpdatedDelegate)
extern "C" void CardboardHead_add_OnHeadUpdated_m9_232 (CardboardHead_t9_28 * __this, HeadUpdatedDelegate_t9_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::remove_OnHeadUpdated(CardboardHead/HeadUpdatedDelegate)
extern "C" void CardboardHead_remove_OnHeadUpdated_m9_233 (CardboardHead_t9_28 * __this, HeadUpdatedDelegate_t9_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray CardboardHead::get_Gaze()
extern "C" Ray_t5_73  CardboardHead_get_Gaze_m9_234 (CardboardHead_t9_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::Awake()
extern "C" void CardboardHead_Awake_m9_235 (CardboardHead_t9_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::Update()
extern "C" void CardboardHead_Update_m9_236 (CardboardHead_t9_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::LateUpdate()
extern "C" void CardboardHead_LateUpdate_m9_237 (CardboardHead_t9_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::UpdateHead()
extern "C" void CardboardHead_UpdateHead_m9_238 (CardboardHead_t9_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
