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

// CardboardPostRender
struct CardboardPostRender_t9_29;
// UnityEngine.Camera
struct Camera_t5_100;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5_204;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t5_325;
// UnityEngine.Color[]
struct ColorU5BU5D_t5_326;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardPostRender::.ctor()
extern "C" void CardboardPostRender__ctor_m9_239 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::.cctor()
extern "C" void CardboardPostRender__cctor_m9_240 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardPostRender::get_cam()
extern "C" Camera_t5_100 * CardboardPostRender_get_cam_m9_241 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::set_cam(UnityEngine.Camera)
extern "C" void CardboardPostRender_set_cam_m9_242 (CardboardPostRender_t9_29 * __this, Camera_t5_100 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Reset()
extern "C" void CardboardPostRender_Reset_m9_243 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Awake()
extern "C" void CardboardPostRender_Awake_m9_244 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::OnRenderObject()
extern "C" void CardboardPostRender_OnRenderObject_m9_245 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::RebuildDistortionMesh()
extern "C" void CardboardPostRender_RebuildDistortionMesh_m9_246 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C" void CardboardPostRender_ComputeMeshPoints_m9_247 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, Vector3U5BU5D_t5_204** ___vertices, Vector2U5BU5D_t5_325** ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CardboardPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C" ColorU5BU5D_t5_326* CardboardPostRender_ComputeMeshColors_m9_248 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, Vector2U5BU5D_t5_325* ___tex, Int32U5BU5D_t1_161* ___indices, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] CardboardPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C" Int32U5BU5D_t1_161* CardboardPostRender_ComputeMeshIndices_m9_249 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawUILayer()
extern "C" void CardboardPostRender_DrawUILayer_m9_250 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeUIMatrix()
extern "C" void CardboardPostRender_ComputeUIMatrix_m9_251 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawSettingsButton()
extern "C" void CardboardPostRender_DrawSettingsButton_m9_252 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawAlignmentMarker()
extern "C" void CardboardPostRender_DrawAlignmentMarker_m9_253 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawVRBackButton()
extern "C" void CardboardPostRender_DrawVRBackButton_m9_254 (CardboardPostRender_t9_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
