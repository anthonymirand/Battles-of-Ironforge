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

// UnityEngine.CharacterController
struct CharacterController_t5_129;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CollisionFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C" int32_t CharacterController_Move_m5_1360 (CharacterController_t5_129 * __this, Vector3_t5_68  ___motion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" int32_t CharacterController_INTERNAL_CALL_Move_m5_1361 (Object_t * __this /* static, unused */, CharacterController_t5_129 * ___self, Vector3_t5_68 * ___motion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern "C" bool CharacterController_get_isGrounded_m5_1362 (CharacterController_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C" Vector3_t5_68  CharacterController_get_velocity_m5_1363 (CharacterController_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void CharacterController_INTERNAL_get_velocity_m5_1364 (CharacterController_t5_129 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_radius()
extern "C" float CharacterController_get_radius_m5_1365 (CharacterController_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_height()
extern "C" float CharacterController_get_height_m5_1366 (CharacterController_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
