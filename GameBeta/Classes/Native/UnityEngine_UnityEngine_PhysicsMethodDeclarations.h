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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t5_333;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5_334;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Ray.h"

// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C" Vector3_t5_68  Physics_get_gravity_m5_1267 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" void Physics_INTERNAL_get_gravity_m5_1268 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" bool Physics_Raycast_m5_1269 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Raycast_m5_1270 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m5_1271 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m5_1272 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Raycast_m5_1273 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m5_1274 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m5_1275 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" bool Physics_Raycast_m5_1276 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, RaycastHit_t5_144 * ___hitInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Raycast_m5_1277 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t5_333* Physics_RaycastAll_m5_1278 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t5_333* Physics_RaycastAll_m5_1279 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t5_333* Physics_RaycastAll_m5_1280 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" RaycastHitU5BU5D_t5_333* Physics_RaycastAll_m5_1281 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t5_333* Physics_INTERNAL_CALL_RaycastAll_m5_1282 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___origin, Vector3_t5_68 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C" ColliderU5BU5D_t5_334* Physics_OverlapSphere_m5_1283 (Object_t * __this /* static, unused */, Vector3_t5_68  ___position, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" ColliderU5BU5D_t5_334* Physics_INTERNAL_CALL_OverlapSphere_m5_1284 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___position, float ___radius, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_SphereCast_m5_1285 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, float ___radius, Vector3_t5_68  ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_SphereCast_m5_1286 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, float ___radius, Vector3_t5_68  ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single)
extern "C" bool Physics_SphereCast_m5_1287 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, float ___radius, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_SphereCast_m5_1288 (Object_t * __this /* static, unused */, Ray_t5_73  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_Raycast_m5_1289 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m5_1290 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___origin, Vector3_t5_68 * ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_CapsuleCast_m5_1291 (Object_t * __this /* static, unused */, Vector3_t5_68  ___point1, Vector3_t5_68  ___point2, float ___radius, Vector3_t5_68  ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m5_1292 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___point1, Vector3_t5_68 * ___point2, float ___radius, Vector3_t5_68 * ___direction, RaycastHit_t5_144 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_RaycastTest_m5_1293 (Object_t * __this /* static, unused */, Vector3_t5_68  ___origin, Vector3_t5_68  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_RaycastTest_m5_1294 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___origin, Vector3_t5_68 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
