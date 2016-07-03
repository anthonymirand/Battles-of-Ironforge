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

// UnityEngine.GUILayer
struct GUILayer_t5_49;
// UnityEngine.GUIElement
struct GUIElement_t5_47;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t5_47 * GUILayer_HitTest_m5_258 (GUILayer_t5_49 * __this, Vector3_t5_68  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t5_47 * GUILayer_INTERNAL_CALL_HitTest_m5_259 (Object_t * __this /* static, unused */, GUILayer_t5_49 * ___self, Vector3_t5_68 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
