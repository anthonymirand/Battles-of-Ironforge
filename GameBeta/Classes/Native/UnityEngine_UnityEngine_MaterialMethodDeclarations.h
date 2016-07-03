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

// UnityEngine.Material
struct Material_t5_40;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.Texture
struct Texture_t5_38;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t5_101;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.Material::.ctor(System.String)
extern "C" void Material__ctor_m5_749 (Material_t5_40 * __this, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" void Material__ctor_m5_750 (Material_t5_40 * __this, Shader_t5_88 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m5_751 (Material_t5_40 * __this, Material_t5_40 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C" Shader_t5_88 * Material_get_shader_m5_752 (Material_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
extern "C" void Material_set_shader_m5_753 (Material_t5_40 * __this, Shader_t5_88 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m5_754 (Material_t5_40 * __this, Color_t5_58  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t5_38 * Material_get_mainTexture_m5_755 (Material_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" void Material_set_mainTexture_m5_756 (Material_t5_40 * __this, Texture_t5_38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureOffset_m5_757 (Material_t5_40 * __this, Vector2_t5_67  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureScale_m5_758 (Material_t5_40 * __this, Vector2_t5_67  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m5_759 (Material_t5_40 * __this, String_t* ___propertyName, Color_t5_58  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m5_760 (Material_t5_40 * __this, int32_t ___nameID, Color_t5_58  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m5_761 (Object_t * __this /* static, unused */, Material_t5_40 * ___self, int32_t ___nameID, Color_t5_58 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t5_58  Material_GetColor_m5_762 (Material_t5_40 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t5_58  Material_GetColor_m5_763 (Material_t5_40 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C" void Material_SetVector_m5_764 (Material_t5_40 * __this, String_t* ___propertyName, Vector4_t5_72  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
extern "C" Vector4_t5_72  Material_GetVector_m5_765 (Material_t5_40 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" void Material_SetTexture_m5_766 (Material_t5_40 * __this, String_t* ___propertyName, Texture_t5_38 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m5_767 (Material_t5_40 * __this, int32_t ___nameID, Texture_t5_38 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t5_38 * Material_GetTexture_m5_768 (Material_t5_40 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t5_38 * Material_GetTexture_m5_769 (Material_t5_40 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureOffset_m5_770 (Material_t5_40 * __this, String_t* ___propertyName, Vector2_t5_67  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureOffset_m5_771 (Object_t * __this /* static, unused */, Material_t5_40 * ___self, String_t* ___propertyName, Vector2_t5_67 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureScale_m5_772 (Material_t5_40 * __this, String_t* ___propertyName, Vector2_t5_67  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureScale_m5_773 (Object_t * __this /* static, unused */, Material_t5_40 * ___self, String_t* ___propertyName, Vector2_t5_67 * ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern "C" void Material_SetMatrix_m5_774 (Material_t5_40 * __this, String_t* ___propertyName, Matrix4x4_t5_70  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Material_SetMatrix_m5_775 (Material_t5_40 * __this, int32_t ___nameID, Matrix4x4_t5_70  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Material_INTERNAL_CALL_SetMatrix_m5_776 (Object_t * __this /* static, unused */, Material_t5_40 * ___self, int32_t ___nameID, Matrix4x4_t5_70 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m5_777 (Material_t5_40 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m5_778 (Material_t5_40 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.String)
extern "C" float Material_GetFloat_m5_779 (Material_t5_40 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
extern "C" float Material_GetFloat_m5_780 (Material_t5_40 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m5_781 (Material_t5_40 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
extern "C" void Material_SetBuffer_m5_782 (Material_t5_40 * __this, String_t* ___propertyName, ComputeBuffer_t5_101 * ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m5_783 (Material_t5_40 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m5_784 (Material_t5_40 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)
extern "C" String_t* Material_GetTag_m5_785 (Material_t5_40 * __this, String_t* ___tag, bool ___searchFallbacks, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean)
extern "C" String_t* Material_GetTag_m5_786 (Material_t5_40 * __this, String_t* ___tag, bool ___searchFallbacks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_passCount()
extern "C" int32_t Material_get_passCount_m5_787 (Material_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" bool Material_SetPass_m5_788 (Material_t5_40 * __this, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithString(UnityEngine.Material,System.String)
extern "C" void Material_Internal_CreateWithString_m5_789 (Object_t * __this /* static, unused */, Material_t5_40 * ___mono, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m5_790 (Object_t * __this /* static, unused */, Material_t5_40 * ___mono, Shader_t5_88 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m5_791 (Object_t * __this /* static, unused */, Material_t5_40 * ___mono, Material_t5_40 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
