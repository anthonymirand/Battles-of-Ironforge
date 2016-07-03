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

// UnityEngine.Collider
struct Collider_t5_130;
// UnityEngine.Rigidbody
struct Rigidbody_t5_132;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" void RaycastHit_CalculateRaycastTexCoord_m5_1351 (Object_t * __this /* static, unused */, Vector2_t5_67 * ___output, Collider_t5_130 * ___col, Vector2_t5_67  ___uv, Vector3_t5_68  ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m5_1352 (Object_t * __this /* static, unused */, Vector2_t5_67 * ___output, Collider_t5_130 * ___col, Vector2_t5_67 * ___uv, Vector3_t5_68 * ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t5_68  RaycastHit_get_point_m5_1353 (RaycastHit_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t5_68  RaycastHit_get_normal_m5_1354 (RaycastHit_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m5_1355 (RaycastHit_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern "C" Vector2_t5_67  RaycastHit_get_textureCoord_m5_1356 (RaycastHit_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t5_130 * RaycastHit_get_collider_m5_1357 (RaycastHit_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t5_132 * RaycastHit_get_rigidbody_m5_1358 (RaycastHit_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t5_83 * RaycastHit_get_transform_m5_1359 (RaycastHit_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
