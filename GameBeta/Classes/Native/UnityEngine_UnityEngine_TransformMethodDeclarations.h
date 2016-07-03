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

// UnityEngine.Transform
struct Transform_t5_83;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Space.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t5_68  Transform_get_position_m5_1110 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m5_1111 (Transform_t5_83 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m5_1112 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m5_1113 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t5_68  Transform_get_localPosition_m5_1114 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m5_1115 (Transform_t5_83 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m5_1116 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m5_1117 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t5_68  Transform_get_eulerAngles_m5_1118 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_eulerAngles_m5_1119 (Transform_t5_83 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_localEulerAngles_m5_1120 (Transform_t5_83 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localEulerAngles_m5_1121 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" Vector3_t5_68  Transform_get_right_m5_1122 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" Vector3_t5_68  Transform_get_up_m5_1123 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t5_68  Transform_get_forward_m5_1124 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t5_69  Transform_get_rotation_m5_1125 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m5_1126 (Transform_t5_83 * __this, Quaternion_t5_69  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m5_1127 (Transform_t5_83 * __this, Quaternion_t5_69 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m5_1128 (Transform_t5_83 * __this, Quaternion_t5_69 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t5_69  Transform_get_localRotation_m5_1129 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m5_1130 (Transform_t5_83 * __this, Quaternion_t5_69  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m5_1131 (Transform_t5_83 * __this, Quaternion_t5_69 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m5_1132 (Transform_t5_83 * __this, Quaternion_t5_69 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t5_68  Transform_get_localScale_m5_1133 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m5_1134 (Transform_t5_83 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m5_1135 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m5_1136 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t5_83 * Transform_get_parent_m5_1137 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" void Transform_set_parent_m5_1138 (Transform_t5_83 * __this, Transform_t5_83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t5_83 * Transform_get_parentInternal_m5_1139 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m5_1140 (Transform_t5_83 * __this, Transform_t5_83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m5_1141 (Transform_t5_83 * __this, Transform_t5_83 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m5_1142 (Transform_t5_83 * __this, Transform_t5_83 * ___parent, bool ___worldPositionStays, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t5_70  Transform_get_worldToLocalMatrix_m5_1143 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m5_1144 (Transform_t5_83 * __this, Matrix4x4_t5_70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" Matrix4x4_t5_70  Transform_get_localToWorldMatrix_m5_1145 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m5_1146 (Transform_t5_83 * __this, Matrix4x4_t5_70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Translate_m5_1147 (Transform_t5_83 * __this, Vector3_t5_68  ___translation, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m5_1148 (Transform_t5_83 * __this, Vector3_t5_68  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C" void Transform_Rotate_m5_1149 (Transform_t5_83 * __this, float ___xAngle, float ___yAngle, float ___zAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C" void Transform_Rotate_m5_1150 (Transform_t5_83 * __this, float ___xAngle, float ___yAngle, float ___zAngle, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAroundInternal_m5_1151 (Transform_t5_83 * __this, Vector3_t5_68  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
extern "C" void Transform_INTERNAL_CALL_RotateAroundInternal_m5_1152 (Object_t * __this /* static, unused */, Transform_t5_83 * ___self, Vector3_t5_68 * ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAround_m5_1153 (Transform_t5_83 * __this, Vector3_t5_68  ___point, Vector3_t5_68  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C" void Transform_LookAt_m5_1154 (Transform_t5_83 * __this, Transform_t5_83 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m5_1155 (Transform_t5_83 * __this, Transform_t5_83 * ___target, Vector3_t5_68  ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m5_1156 (Transform_t5_83 * __this, Vector3_t5_68  ___worldPosition, Vector3_t5_68  ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" void Transform_LookAt_m5_1157 (Transform_t5_83 * __this, Vector3_t5_68  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m5_1158 (Object_t * __this /* static, unused */, Transform_t5_83 * ___self, Vector3_t5_68 * ___worldPosition, Vector3_t5_68 * ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Transform_TransformDirection_m5_1159 (Transform_t5_83 * __this, Vector3_t5_68  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Transform_INTERNAL_CALL_TransformDirection_m5_1160 (Object_t * __this /* static, unused */, Transform_t5_83 * ___self, Vector3_t5_68 * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Transform_InverseTransformDirection_m5_1161 (Transform_t5_83 * __this, Vector3_t5_68  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Transform_INTERNAL_CALL_InverseTransformDirection_m5_1162 (Object_t * __this /* static, unused */, Transform_t5_83 * ___self, Vector3_t5_68 * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Transform_TransformPoint_m5_1163 (Transform_t5_83 * __this, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Transform_INTERNAL_CALL_TransformPoint_m5_1164 (Object_t * __this /* static, unused */, Transform_t5_83 * ___self, Vector3_t5_68 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
extern "C" Vector3_t5_68  Transform_TransformPoint_m5_1165 (Transform_t5_83 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Transform_InverseTransformPoint_m5_1166 (Transform_t5_83 * __this, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Transform_INTERNAL_CALL_InverseTransformPoint_m5_1167 (Object_t * __this /* static, unused */, Transform_t5_83 * ___self, Vector3_t5_68 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" Transform_t5_83 * Transform_get_root_m5_1168 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m5_1169 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" void Transform_DetachChildren_m5_1170 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m5_1171 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t5_83 * Transform_Find_m5_1172 (Transform_t5_83 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" Vector3_t5_68  Transform_get_lossyScale_m5_1173 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m5_1174 (Transform_t5_83 * __this, Vector3_t5_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m5_1175 (Transform_t5_83 * __this, Transform_t5_83 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern "C" Transform_t5_83 * Transform_FindChild_m5_1176 (Transform_t5_83 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m5_1177 (Transform_t5_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t5_83 * Transform_GetChild_m5_1178 (Transform_t5_83 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
