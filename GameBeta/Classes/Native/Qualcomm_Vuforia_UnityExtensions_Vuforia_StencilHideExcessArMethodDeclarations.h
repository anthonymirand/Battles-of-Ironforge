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

// Vuforia.StencilHideExcessAreaClipping
struct StencilHideExcessAreaClipping_t6_11;
// UnityEngine.GameObject
struct GameObject_t5_113;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t5_88;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C" GameObject_t5_113 * StencilHideExcessAreaClipping_CreateQuad_m6_52 (StencilHideExcessAreaClipping_t6_11 * __this, GameObject_t5_113 * ___parent, String_t* ___name, Vector3_t5_68  ___position, Quaternion_t5_69  ___rotation, Vector3_t5_68  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnVuforiaStarted()
extern "C" void StencilHideExcessAreaClipping_OnVuforiaStarted_m6_53 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::HasCalculationDataChanged()
extern "C" bool StencilHideExcessAreaClipping_HasCalculationDataChanged_m6_54 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C" void StencilHideExcessAreaClipping__ctor_m6_55 (StencilHideExcessAreaClipping_t6_11 * __this, GameObject_t5_113 * ___gameObject, Shader_t5_88 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C" void StencilHideExcessAreaClipping_SetPlanesRenderingActive_m6_56 (StencilHideExcessAreaClipping_t6_11 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C" bool StencilHideExcessAreaClipping_IsPlanesRenderingActive_m6_57 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPreCull()
extern "C" void StencilHideExcessAreaClipping_OnPreCull_m6_58 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPostRender()
extern "C" void StencilHideExcessAreaClipping_OnPostRender_m6_59 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Start()
extern "C" void StencilHideExcessAreaClipping_Start_m6_60 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDisable()
extern "C" void StencilHideExcessAreaClipping_OnDisable_m6_61 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnEnable()
extern "C" void StencilHideExcessAreaClipping_OnEnable_m6_62 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDestroy()
extern "C" void StencilHideExcessAreaClipping_OnDestroy_m6_63 (StencilHideExcessAreaClipping_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C" void StencilHideExcessAreaClipping_Update_m6_64 (StencilHideExcessAreaClipping_t6_11 * __this, Vector3_t5_68  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
