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

// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_t10_39;
// UnityEngine.Camera
struct Camera_t5_100;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Water.PlanarReflection::.ctor()
extern "C" void PlanarReflection__ctor_m10_205 (PlanarReflection_t10_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::Start()
extern "C" void PlanarReflection_Start_m10_206 (PlanarReflection_t10_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
extern "C" Camera_t5_100 * PlanarReflection_CreateReflectionCameraFor_m10_207 (PlanarReflection_t10_39 * __this, Camera_t5_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
extern "C" void PlanarReflection_SetStandardCameraParameter_m10_208 (PlanarReflection_t10_39 * __this, Camera_t5_100 * ___cam, LayerMask_t5_66  ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.Water.PlanarReflection::CreateTextureFor(UnityEngine.Camera)
extern "C" RenderTexture_t5_52 * PlanarReflection_CreateTextureFor_m10_209 (PlanarReflection_t10_39 * __this, Camera_t5_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
extern "C" void PlanarReflection_RenderHelpCameras_m10_210 (PlanarReflection_t10_39 * __this, Camera_t5_100 * ___currentCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::LateUpdate()
extern "C" void PlanarReflection_LateUpdate_m10_211 (PlanarReflection_t10_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C" void PlanarReflection_WaterTileBeingRendered_m10_212 (PlanarReflection_t10_39 * __this, Transform_t5_83 * ___tr, Camera_t5_100 * ___currentCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnEnable()
extern "C" void PlanarReflection_OnEnable_m10_213 (PlanarReflection_t10_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnDisable()
extern "C" void PlanarReflection_OnDisable_m10_214 (PlanarReflection_t10_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
extern "C" void PlanarReflection_RenderReflectionFor_m10_215 (PlanarReflection_t10_39 * __this, Camera_t5_100 * ___cam, Camera_t5_100 * ___reflectCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
extern "C" void PlanarReflection_SaneCameraSettings_m10_216 (PlanarReflection_t10_39 * __this, Camera_t5_100 * ___helperCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t5_70  PlanarReflection_CalculateObliqueMatrix_m10_217 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___projection, Vector4_t5_72  ___clipPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t5_70  PlanarReflection_CalculateReflectionMatrix_m10_218 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___reflectionMat, Vector4_t5_72  ___plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Water.PlanarReflection::Sgn(System.Single)
extern "C" float PlanarReflection_Sgn_m10_219 (Object_t * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t5_72  PlanarReflection_CameraSpacePlane_m10_220 (PlanarReflection_t10_39 * __this, Camera_t5_100 * ___cam, Vector3_t5_68  ___pos, Vector3_t5_68  ___normal, float ___sideSign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
