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

// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t9_115;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
extern "C" void DepthOfField__ctor_m9_758 (DepthOfField_t9_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
extern "C" bool DepthOfField_CheckResources_m9_759 (DepthOfField_t9_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
extern "C" void DepthOfField_OnEnable_m9_760 (DepthOfField_t9_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
extern "C" void DepthOfField_OnDisable_m9_761 (DepthOfField_t9_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
extern "C" void DepthOfField_ReleaseComputeResources_m9_762 (DepthOfField_t9_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
extern "C" void DepthOfField_CreateComputeResources_m9_763 (DepthOfField_t9_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
extern "C" float DepthOfField_FocalDistance01_m9_764 (DepthOfField_t9_115 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
extern "C" void DepthOfField_WriteCoc_m9_765 (DepthOfField_t9_115 * __this, RenderTexture_t5_52 * ___fromTo, bool ___fgDilate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField_OnRenderImage_m9_766 (DepthOfField_t9_115 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
