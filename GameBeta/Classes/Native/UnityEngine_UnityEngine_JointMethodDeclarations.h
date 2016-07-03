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

// UnityEngine.Joint
struct Joint_t5_138;
// UnityEngine.Rigidbody
struct Rigidbody_t5_132;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" Rigidbody_t5_132 * Joint_get_connectedBody_m5_1325 (Joint_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C" void Joint_set_connectedBody_m5_1326 (Joint_t5_138 * __this, Rigidbody_t5_132 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C" void Joint_set_anchor_m5_1327 (Joint_t5_138 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" void Joint_INTERNAL_set_anchor_m5_1328 (Joint_t5_138 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
