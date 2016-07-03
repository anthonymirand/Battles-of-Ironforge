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

// UnityEngine.Mesh
struct Mesh_t5_29;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t5_101;
// UnityEngine.Texture
struct Texture_t5_38;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t5_325;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_MeshTopology.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"
#include "UnityEngine_UnityEngine_RenderBuffer.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Graphics_DrawMeshNow_m5_190 (Object_t * __this /* static, unused */, Mesh_t5_29 * ___mesh, Vector3_t5_68  ___position, Quaternion_t5_69  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C" void Graphics_DrawMeshNow_m5_191 (Object_t * __this /* static, unused */, Mesh_t5_29 * ___mesh, Matrix4x4_t5_70  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow1_m5_192 (Object_t * __this /* static, unused */, Mesh_t5_29 * ___mesh, Vector3_t5_68  ___position, Quaternion_t5_69  ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow1_m5_193 (Object_t * __this /* static, unused */, Mesh_t5_29 * ___mesh, Vector3_t5_68 * ___position, Quaternion_t5_69 * ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow2_m5_194 (Object_t * __this /* static, unused */, Mesh_t5_29 * ___mesh, Matrix4x4_t5_70  ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m5_195 (Object_t * __this /* static, unused */, Mesh_t5_29 * ___mesh, Matrix4x4_t5_70 * ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void Graphics_DrawProceduralIndirect_m5_196 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t5_101 * ___bufferWithArgs, int32_t ___argsOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m5_197 (Object_t * __this /* static, unused */, Rect_t5_37  ___screenRect, Texture_t5_38 * ___texture, Material_t5_40 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m5_198 (Object_t * __this /* static, unused */, Rect_t5_37  ___screenRect, Texture_t5_38 * ___texture, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t5_40 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m5_199 (Object_t * __this /* static, unused */, Rect_t5_37  ___screenRect, Texture_t5_38 * ___texture, Rect_t5_37  ___sourceRect, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t5_40 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m5_200 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t5_36 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m5_201 (Object_t * __this /* static, unused */, Texture_t5_38 * ___source, RenderTexture_t5_52 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m5_202 (Object_t * __this /* static, unused */, Texture_t5_38 * ___source, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m5_203 (Object_t * __this /* static, unused */, Texture_t5_38 * ___source, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m5_204 (Object_t * __this /* static, unused */, Texture_t5_38 * ___source, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_BlitMultiTap_m5_205 (Object_t * __this /* static, unused */, Texture_t5_38 * ___source, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___mat, Vector2U5BU5D_t5_325* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m5_206 (Object_t * __this /* static, unused */, Texture_t5_38 * ___source, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___mat, Vector2U5BU5D_t5_325* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C" void Graphics_Internal_SetNullRT_m5_207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRTSimple_m5_208 (Object_t * __this /* static, unused */, RenderBuffer_t5_254 * ___color, RenderBuffer_t5_254 * ___depth, int32_t ___mip, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_SetRandomWriteTarget_m5_209 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t5_101 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C" void Graphics_ClearRandomWriteTargets_m5_210 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_Internal_SetRandomWriteTargetBuffer_m5_211 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t5_101 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m5_212 (Object_t * __this /* static, unused */, RenderBuffer_t5_254  ___colorBuffer, RenderBuffer_t5_254  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m5_213 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___rt, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C" void Graphics_SetRenderTarget_m5_214 (Object_t * __this /* static, unused */, RenderTexture_t5_52 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
