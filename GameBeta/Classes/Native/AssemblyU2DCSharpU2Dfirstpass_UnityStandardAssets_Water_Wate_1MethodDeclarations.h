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

// UnityStandardAssets.Water.Water
struct Water_t10_43;
// UnityEngine.Camera
struct Camera_t5_100;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_0.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityStandardAssets.Water.Water::.ctor()
extern "C" void Water__ctor_m10_224 (Water_t10_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnWillRenderObject()
extern "C" void Water_OnWillRenderObject_m10_225 (Water_t10_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnDisable()
extern "C" void Water_OnDisable_m10_226 (Water_t10_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::Update()
extern "C" void Water_Update_m10_227 (Water_t10_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern "C" void Water_UpdateCameraModes_m10_228 (Water_t10_43 * __this, Camera_t5_100 * ___src, Camera_t5_100 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern "C" void Water_CreateWaterObjects_m10_229 (Water_t10_43 * __this, Camera_t5_100 * ___currentCamera, Camera_t5_100 ** ___reflectionCamera, Camera_t5_100 ** ___refractionCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::GetWaterMode()
extern "C" int32_t Water_GetWaterMode_m10_230 (Water_t10_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::FindHardwareWaterSupport()
extern "C" int32_t Water_FindHardwareWaterSupport_m10_231 (Water_t10_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t5_72  Water_CameraSpacePlane_m10_232 (Water_t10_43 * __this, Camera_t5_100 * ___cam, Vector3_t5_68  ___pos, Vector3_t5_68  ___normal, float ___sideSign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C" void Water_CalculateReflectionMatrix_m10_233 (Object_t * __this /* static, unused */, Matrix4x4_t5_70 * ___reflectionMat, Vector4_t5_72  ___plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
