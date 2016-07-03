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

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t9_85;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.Shader
struct Shader_t5_88;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C" void PostEffectsBase__ctor_m9_822 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t5_40 * PostEffectsBase_CheckShaderAndCreateMaterial_m9_823 (PostEffectsBase_t9_85 * __this, Shader_t5_88 * ___s, Material_t5_40 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t5_40 * PostEffectsBase_CreateMaterial_m9_824 (PostEffectsBase_t9_85 * __this, Shader_t5_88 * ___s, Material_t5_40 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
extern "C" void PostEffectsBase_OnEnable_m9_825 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
extern "C" bool PostEffectsBase_CheckSupport_m9_826 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
extern "C" bool PostEffectsBase_CheckResources_m9_827 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
extern "C" void PostEffectsBase_Start_m9_828 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m9_829 (PostEffectsBase_t9_85 * __this, bool ___needDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m9_830 (PostEffectsBase_t9_85 * __this, bool ___needDepth, bool ___needHdr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
extern "C" bool PostEffectsBase_Dx11Support_m9_831 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C" void PostEffectsBase_ReportAutoDisable_m9_832 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C" bool PostEffectsBase_CheckShader_m9_833 (PostEffectsBase_t9_85 * __this, Shader_t5_88 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
extern "C" void PostEffectsBase_NotSupported_m9_834 (PostEffectsBase_t9_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsBase_DrawBorder_m9_835 (PostEffectsBase_t9_85 * __this, RenderTexture_t5_52 * ___dest, Material_t5_40 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
