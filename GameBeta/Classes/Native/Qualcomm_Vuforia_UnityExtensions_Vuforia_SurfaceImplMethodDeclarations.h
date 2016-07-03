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

// Vuforia.SurfaceImpl
struct SurfaceImpl_t6_129;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t6_53;
// UnityEngine.Mesh
struct Mesh_t5_29;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SurfaceImpl__ctor_m6_664 (SurfaceImpl_t6_129 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C" void SurfaceImpl_SetID_m6_665 (SurfaceImpl_t6_129 * __this, int32_t ___trackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C" void SurfaceImpl_SetMesh_m6_666 (SurfaceImpl_t6_129 * __this, int32_t ___meshRev, Mesh_t5_29 * ___mesh, Mesh_t5_29 * ___navMesh, Int32U5BU5D_t1_161* ___meshBoundaries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C" void SurfaceImpl_SetBoundingBox_m6_667 (SurfaceImpl_t6_129 * __this, Rect_t5_37  ___boundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C" Mesh_t5_29 * SurfaceImpl_GetNavMesh_m6_668 (SurfaceImpl_t6_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C" Int32U5BU5D_t1_161* SurfaceImpl_GetMeshBoundaries_m6_669 (SurfaceImpl_t6_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C" Rect_t5_37  SurfaceImpl_get_BoundingBox_m6_670 (SurfaceImpl_t6_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C" float SurfaceImpl_GetArea_m6_671 (SurfaceImpl_t6_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
