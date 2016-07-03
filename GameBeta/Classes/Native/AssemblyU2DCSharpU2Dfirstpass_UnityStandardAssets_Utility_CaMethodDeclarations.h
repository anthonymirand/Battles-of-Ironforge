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

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t10_68;
// UnityEngine.Camera
struct Camera_t5_100;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void CameraRefocus__ctor_m10_300 (CameraRefocus_t10_68 * __this, Camera_t5_100 * ___camera, Transform_t5_83 * ___parent, Vector3_t5_68  ___origCameraPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C" void CameraRefocus_ChangeCamera_m10_301 (CameraRefocus_t10_68 * __this, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C" void CameraRefocus_ChangeParent_m10_302 (CameraRefocus_t10_68 * __this, Transform_t5_83 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C" void CameraRefocus_GetFocusPoint_m10_303 (CameraRefocus_t10_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C" void CameraRefocus_SetFocusPoint_m10_304 (CameraRefocus_t10_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
