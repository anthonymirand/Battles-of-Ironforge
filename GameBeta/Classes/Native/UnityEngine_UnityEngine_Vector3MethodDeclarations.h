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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m5_421 (Vector3_t5_68 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" void Vector3__ctor_m5_422 (Vector3_t5_68 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5_68  Vector3_Lerp_m5_423 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, Vector3_t5_68  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5_68  Vector3_Slerp_m5_424 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, Vector3_t5_68  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t5_68  Vector3_INTERNAL_CALL_Slerp_m5_425 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___a, Vector3_t5_68 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5_68  Vector3_MoveTowards_m5_426 (Object_t * __this /* static, unused */, Vector3_t5_68  ___current, Vector3_t5_68  ___target, float ___maxDistanceDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t5_68  Vector3_SmoothDamp_m5_427 (Object_t * __this /* static, unused */, Vector3_t5_68  ___current, Vector3_t5_68  ___target, Vector3_t5_68 * ___currentVelocity, float ___smoothTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
extern "C" Vector3_t5_68  Vector3_SmoothDamp_m5_428 (Object_t * __this /* static, unused */, Vector3_t5_68  ___current, Vector3_t5_68  ___target, Vector3_t5_68 * ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C" float Vector3_get_Item_m5_429 (Vector3_t5_68 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C" void Vector3_set_Item_m5_430 (Vector3_t5_68 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_Scale_m5_431 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, Vector3_t5_68  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_Cross_m5_432 (Object_t * __this /* static, unused */, Vector3_t5_68  ___lhs, Vector3_t5_68  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" int32_t Vector3_GetHashCode_m5_433 (Vector3_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" bool Vector3_Equals_m5_434 (Vector3_t5_68 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_Normalize_m5_435 (Object_t * __this /* static, unused */, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C" void Vector3_Normalize_m5_436 (Vector3_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t5_68  Vector3_get_normalized_m5_437 (Vector3_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C" String_t* Vector3_ToString_m5_438 (Vector3_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
extern "C" String_t* Vector3_ToString_m5_439 (Vector3_t5_68 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m5_440 (Object_t * __this /* static, unused */, Vector3_t5_68  ___lhs, Vector3_t5_68  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_Project_m5_441 (Object_t * __this /* static, unused */, Vector3_t5_68  ___vector, Vector3_t5_68  ___onNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_ProjectOnPlane_m5_442 (Object_t * __this /* static, unused */, Vector3_t5_68  ___vector, Vector3_t5_68  ___planeNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Angle_m5_443 (Object_t * __this /* static, unused */, Vector3_t5_68  ___from, Vector3_t5_68  ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Distance_m5_444 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, Vector3_t5_68  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5_68  Vector3_ClampMagnitude_m5_445 (Object_t * __this /* static, unused */, Vector3_t5_68  ___vector, float ___maxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" float Vector3_Magnitude_m5_446 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" float Vector3_get_magnitude_m5_447 (Vector3_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m5_448 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" float Vector3_get_sqrMagnitude_m5_449 (Vector3_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_Min_m5_450 (Object_t * __this /* static, unused */, Vector3_t5_68  ___lhs, Vector3_t5_68  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_Max_m5_451 (Object_t * __this /* static, unused */, Vector3_t5_68  ___lhs, Vector3_t5_68  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t5_68  Vector3_get_zero_m5_452 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t5_68  Vector3_get_one_m5_453 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t5_68  Vector3_get_forward_m5_454 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t5_68  Vector3_get_back_m5_455 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" Vector3_t5_68  Vector3_get_up_m5_456 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" Vector3_t5_68  Vector3_get_down_m5_457 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" Vector3_t5_68  Vector3_get_left_m5_458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" Vector3_t5_68  Vector3_get_right_m5_459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_op_Addition_m5_460 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, Vector3_t5_68  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_op_Subtraction_m5_461 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, Vector3_t5_68  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_op_UnaryNegation_m5_462 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5_68  Vector3_op_Multiply_m5_463 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Vector3_op_Multiply_m5_464 (Object_t * __this /* static, unused */, float ___d, Vector3_t5_68  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5_68  Vector3_op_Division_m5_465 (Object_t * __this /* static, unused */, Vector3_t5_68  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m5_466 (Object_t * __this /* static, unused */, Vector3_t5_68  ___lhs, Vector3_t5_68  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Inequality_m5_467 (Object_t * __this /* static, unused */, Vector3_t5_68  ___lhs, Vector3_t5_68  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
