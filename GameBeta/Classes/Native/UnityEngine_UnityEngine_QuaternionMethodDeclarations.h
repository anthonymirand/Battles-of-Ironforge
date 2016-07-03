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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m5_494 (Quaternion_t5_69 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t5_69  Quaternion_get_identity_m5_495 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m5_496 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___a, Quaternion_t5_69  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t5_69  Quaternion_AngleAxis_m5_497 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5_68  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t5_69  Quaternion_INTERNAL_CALL_AngleAxis_m5_498 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5_68 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
extern "C" void Quaternion_ToAngleAxis_m5_499 (Quaternion_t5_69 * __this, float* ___angle, Vector3_t5_68 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t5_69  Quaternion_LookRotation_m5_500 (Object_t * __this /* static, unused */, Vector3_t5_68  ___forward, Vector3_t5_68  ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" Quaternion_t5_69  Quaternion_LookRotation_m5_501 (Object_t * __this /* static, unused */, Vector3_t5_68  ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t5_69  Quaternion_INTERNAL_CALL_LookRotation_m5_502 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___forward, Vector3_t5_68 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t5_69  Quaternion_Slerp_m5_503 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___a, Quaternion_t5_69  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t5_69  Quaternion_INTERNAL_CALL_Slerp_m5_504 (Object_t * __this /* static, unused */, Quaternion_t5_69 * ___a, Quaternion_t5_69 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t5_69  Quaternion_Inverse_m5_505 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t5_69  Quaternion_INTERNAL_CALL_Inverse_m5_506 (Object_t * __this /* static, unused */, Quaternion_t5_69 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m5_507 (Quaternion_t5_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t5_68  Quaternion_get_eulerAngles_m5_508 (Quaternion_t5_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t5_69  Quaternion_Euler_m5_509 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t5_69  Quaternion_Euler_m5_510 (Object_t * __this /* static, unused */, Vector3_t5_68  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t5_68  Quaternion_Internal_ToEulerRad_m5_511 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t5_68  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5_512 (Object_t * __this /* static, unused */, Quaternion_t5_69 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t5_69  Quaternion_Internal_FromEulerRad_m5_513 (Object_t * __this /* static, unused */, Vector3_t5_68  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t5_69  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5_514 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
extern "C" void Quaternion_Internal_ToAxisAngleRad_m5_515 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___q, Vector3_t5_68 * ___axis, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToAxisAngleRad(UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)
extern "C" void Quaternion_INTERNAL_CALL_Internal_ToAxisAngleRad_m5_516 (Object_t * __this /* static, unused */, Quaternion_t5_69 * ___q, Vector3_t5_68 * ___axis, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m5_517 (Quaternion_t5_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m5_518 (Quaternion_t5_69 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t5_69  Quaternion_op_Multiply_m5_519 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___lhs, Quaternion_t5_69  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t5_68  Quaternion_op_Multiply_m5_520 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___rotation, Vector3_t5_68  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m5_521 (Object_t * __this /* static, unused */, Quaternion_t5_69  ___lhs, Quaternion_t5_69  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
