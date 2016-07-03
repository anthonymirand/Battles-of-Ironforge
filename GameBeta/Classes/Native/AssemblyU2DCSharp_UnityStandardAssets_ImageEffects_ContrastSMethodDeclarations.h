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

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t9_111;
// UnityEngine.Material
struct Material_t5_40;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// UnityEngine.Texture
struct Texture_t5_38;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C" void ContrastStretch__ctor_m9_745 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C" Material_t5_40 * ContrastStretch_get_materialLum_m9_746 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C" Material_t5_40 * ContrastStretch_get_materialReduce_m9_747 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C" Material_t5_40 * ContrastStretch_get_materialAdapt_m9_748 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C" Material_t5_40 * ContrastStretch_get_materialApply_m9_749 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C" void ContrastStretch_Start_m9_750 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C" void ContrastStretch_OnEnable_m9_751 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C" void ContrastStretch_OnDisable_m9_752 (ContrastStretch_t9_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ContrastStretch_OnRenderImage_m9_753 (ContrastStretch_t9_111 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C" void ContrastStretch_CalculateAdaptation_m9_754 (ContrastStretch_t9_111 * __this, Texture_t5_38 * ___curTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
