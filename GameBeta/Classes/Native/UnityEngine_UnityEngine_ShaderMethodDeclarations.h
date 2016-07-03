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

// UnityEngine.Shader
struct Shader_t5_88;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" Shader_t5_88 * Shader_Find_m5_734 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Shader::get_isSupported()
extern "C" bool Shader_get_isSupported_m5_735 (Shader_t5_88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern "C" void Shader_EnableKeyword_m5_736 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern "C" void Shader_DisableKeyword_m5_737 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
extern "C" void Shader_set_maximumLOD_m5_738 (Shader_t5_88 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.String,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m5_739 (Object_t * __this /* static, unused */, String_t* ___propertyName, Color_t5_58  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.Int32,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m5_740 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t5_58  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalColor(System.Int32,UnityEngine.Color&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalColor_m5_741 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t5_58 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C" void Shader_SetGlobalVector_m5_742 (Object_t * __this /* static, unused */, String_t* ___propertyName, Vector4_t5_72  ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.String,System.Single)
extern "C" void Shader_SetGlobalFloat_m5_743 (Object_t * __this /* static, unused */, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.Int32,System.Single)
extern "C" void Shader_SetGlobalFloat_m5_744 (Object_t * __this /* static, unused */, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.String,UnityEngine.Matrix4x4)
extern "C" void Shader_SetGlobalMatrix_m5_745 (Object_t * __this /* static, unused */, String_t* ___propertyName, Matrix4x4_t5_70  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Shader_SetGlobalMatrix_m5_746 (Object_t * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t5_70  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalMatrix_m5_747 (Object_t * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t5_70 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m5_748 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
