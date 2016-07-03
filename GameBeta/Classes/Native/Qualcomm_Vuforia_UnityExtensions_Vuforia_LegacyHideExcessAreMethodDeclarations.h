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

// Vuforia.LegacyHideExcessAreaClipping
struct LegacyHideExcessAreaClipping_t6_12;
// UnityEngine.GameObject
struct GameObject_t5_113;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t5_88;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C" GameObject_t5_113 * LegacyHideExcessAreaClipping_CreateQuad_m6_65 (LegacyHideExcessAreaClipping_t6_12 * __this, GameObject_t5_113 * ___parent, String_t* ___name, Vector3_t5_68  ___position, Quaternion_t5_69  ___rotation, Vector3_t5_68  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnVuforiaStarted()
extern "C" void LegacyHideExcessAreaClipping_OnVuforiaStarted_m6_66 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::HasCalculationDataChanged()
extern "C" bool LegacyHideExcessAreaClipping_HasCalculationDataChanged_m6_67 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C" void LegacyHideExcessAreaClipping__ctor_m6_68 (LegacyHideExcessAreaClipping_t6_12 * __this, GameObject_t5_113 * ___gameObject, Shader_t5_88 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C" void LegacyHideExcessAreaClipping_SetPlanesRenderingActive_m6_69 (LegacyHideExcessAreaClipping_t6_12 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C" bool LegacyHideExcessAreaClipping_IsPlanesRenderingActive_m6_70 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPreCull()
extern "C" void LegacyHideExcessAreaClipping_OnPreCull_m6_71 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPostRender()
extern "C" void LegacyHideExcessAreaClipping_OnPostRender_m6_72 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Start()
extern "C" void LegacyHideExcessAreaClipping_Start_m6_73 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDisable()
extern "C" void LegacyHideExcessAreaClipping_OnDisable_m6_74 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnEnable()
extern "C" void LegacyHideExcessAreaClipping_OnEnable_m6_75 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDestroy()
extern "C" void LegacyHideExcessAreaClipping_OnDestroy_m6_76 (LegacyHideExcessAreaClipping_t6_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C" void LegacyHideExcessAreaClipping_Update_m6_77 (LegacyHideExcessAreaClipping_t6_12 * __this, Vector3_t5_68  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
