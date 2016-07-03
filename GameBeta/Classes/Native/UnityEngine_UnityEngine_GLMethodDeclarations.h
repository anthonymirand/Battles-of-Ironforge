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

// UnityEngine.Camera
struct Camera_t5_100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" void GL_Vertex3_m5_229 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
extern "C" void GL_Vertex_m5_230 (Object_t * __this /* static, unused */, Vector3_t5_68  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Vertex(UnityEngine.Vector3&)
extern "C" void GL_INTERNAL_CALL_Vertex_m5_231 (Object_t * __this /* static, unused */, Vector3_t5_68 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
extern "C" void GL_TexCoord2_m5_232 (Object_t * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
extern "C" void GL_MultiTexCoord2_m5_233 (Object_t * __this /* static, unused */, int32_t ___unit, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" void GL_Begin_m5_234 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C" void GL_End_m5_235 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C" void GL_LoadOrtho_m5_236 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrixArgs(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrixArgs_m5_237 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrix_m5_238 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
extern "C" void GL_LoadProjectionMatrix_m5_239 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void GL_INTERNAL_CALL_LoadProjectionMatrix_m5_240 (Object_t * __this /* static, unused */, Matrix4x4_t5_70 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadIdentity()
extern "C" void GL_LoadIdentity_m5_241 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C" void GL_MultMatrix_m5_242 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_MultMatrix(UnityEngine.Matrix4x4&)
extern "C" void GL_INTERNAL_CALL_MultMatrix_m5_243 (Object_t * __this /* static, unused */, Matrix4x4_t5_70 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C" void GL_PushMatrix_m5_244 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C" void GL_PopMatrix_m5_245 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" Matrix4x4_t5_70  GL_GetGPUProjectionMatrix_m5_246 (Object_t * __this /* static, unused */, Matrix4x4_t5_70  ___proj, bool ___renderIntoTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean)
extern "C" Matrix4x4_t5_70  GL_INTERNAL_CALL_GetGPUProjectionMatrix_m5_247 (Object_t * __this /* static, unused */, Matrix4x4_t5_70 * ___proj, bool ___renderIntoTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::set_invertCulling(System.Boolean)
extern "C" void GL_set_invertCulling_m5_248 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::SetRevertBackfacing(System.Boolean)
extern "C" void GL_SetRevertBackfacing_m5_249 (Object_t * __this /* static, unused */, bool ___revertBackFaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C" void GL_Clear_m5_250 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t5_58  ___backgroundColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Clear_m5_251 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t5_58  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Internal_Clear_m5_252 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t5_58  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C" void GL_INTERNAL_CALL_Internal_Clear_m5_253 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t5_58 * ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
extern "C" void GL_ClearWithSkybox_m5_254 (Object_t * __this /* static, unused */, bool ___clearDepth, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEvent(System.Int32)
extern "C" void GL_IssuePluginEvent_m5_255 (Object_t * __this /* static, unused */, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
