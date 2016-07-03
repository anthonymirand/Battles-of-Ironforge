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

// Pose3D
struct Pose3D_t9_41;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void Pose3D::.ctor()
extern "C" void Pose3D__ctor_m9_291 (Pose3D_t9_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D__ctor_m9_292 (Pose3D_t9_41 * __this, Vector3_t5_68  ___position, Quaternion_t5_69  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern "C" void Pose3D__ctor_m9_293 (Pose3D_t9_41 * __this, Matrix4x4_t5_70  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.cctor()
extern "C" void Pose3D__cctor_m9_294 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C" Vector3_t5_68  Pose3D_get_Position_m9_295 (Pose3D_t9_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C" void Pose3D_set_Position_m9_296 (Pose3D_t9_41 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C" Quaternion_t5_69  Pose3D_get_Orientation_m9_297 (Pose3D_t9_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C" void Pose3D_set_Orientation_m9_298 (Pose3D_t9_41 * __this, Quaternion_t5_69  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C" Matrix4x4_t5_70  Pose3D_get_Matrix_m9_299 (Pose3D_t9_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C" void Pose3D_set_Matrix_m9_300 (Pose3D_t9_41 * __this, Matrix4x4_t5_70  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern "C" Matrix4x4_t5_70  Pose3D_get_RightHandedMatrix_m9_301 (Pose3D_t9_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D_Set_m9_302 (Pose3D_t9_41 * __this, Vector3_t5_68  ___position, Quaternion_t5_69  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C" void Pose3D_Set_m9_303 (Pose3D_t9_41 * __this, Matrix4x4_t5_70  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
