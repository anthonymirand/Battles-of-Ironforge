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

// UnityEngine.Rigidbody
struct Rigidbody_t5_132;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RigidbodyConstraints.h"
#include "UnityEngine_UnityEngine_ForceMode.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" Vector3_t5_68  Rigidbody_get_velocity_m5_1297 (Rigidbody_t5_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m5_1298 (Rigidbody_t5_132 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_velocity_m5_1299 (Rigidbody_t5_132 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m5_1300 (Rigidbody_t5_132 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m5_1301 (Rigidbody_t5_132 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m5_1302 (Rigidbody_t5_132 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" float Rigidbody_get_drag_m5_1303 (Rigidbody_t5_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" void Rigidbody_set_drag_m5_1304 (Rigidbody_t5_132 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" float Rigidbody_get_angularDrag_m5_1305 (Rigidbody_t5_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" void Rigidbody_set_angularDrag_m5_1306 (Rigidbody_t5_132 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" bool Rigidbody_get_isKinematic_m5_1307 (Rigidbody_t5_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m5_1308 (Rigidbody_t5_132 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C" void Rigidbody_set_constraints_m5_1309 (Rigidbody_t5_132 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForce_m5_1310 (Rigidbody_t5_132 * __this, Vector3_t5_68  ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m5_1311 (Rigidbody_t5_132 * __this, Vector3_t5_68  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m5_1312 (Object_t * __this /* static, unused */, Rigidbody_t5_132 * ___self, Vector3_t5_68 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C" void Rigidbody_AddTorque_m5_1313 (Rigidbody_t5_132 * __this, Vector3_t5_68  ___torque, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddTorque_m5_1314 (Object_t * __this /* static, unused */, Rigidbody_t5_132 * ___self, Vector3_t5_68 * ___torque, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForceAtPosition_m5_1315 (Rigidbody_t5_132 * __this, Vector3_t5_68  ___force, Vector3_t5_68  ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Rigidbody_AddForceAtPosition_m5_1316 (Rigidbody_t5_132 * __this, Vector3_t5_68  ___force, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m5_1317 (Object_t * __this /* static, unused */, Rigidbody_t5_132 * ___self, Vector3_t5_68 * ___force, Vector3_t5_68 * ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddExplosionForce_m5_1318 (Rigidbody_t5_132 * __this, float ___explosionForce, Vector3_t5_68  ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddExplosionForce_m5_1319 (Object_t * __this /* static, unused */, Rigidbody_t5_132 * ___self, float ___explosionForce, Vector3_t5_68 * ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" Vector3_t5_68  Rigidbody_get_position_m5_1320 (Rigidbody_t5_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_position_m5_1321 (Rigidbody_t5_132 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C" void Rigidbody_Sleep_m5_1322 (Rigidbody_t5_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C" void Rigidbody_INTERNAL_CALL_Sleep_m5_1323 (Object_t * __this /* static, unused */, Rigidbody_t5_132 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C" void Rigidbody_set_maxAngularVelocity_m5_1324 (Rigidbody_t5_132 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
