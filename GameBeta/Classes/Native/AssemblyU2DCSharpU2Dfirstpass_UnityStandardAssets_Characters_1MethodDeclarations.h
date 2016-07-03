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

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t10_2;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern "C" void MouseLook__ctor_m10_15 (MouseLook_t10_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_Init_m10_16 (MouseLook_t10_2 * __this, Transform_t5_83 * ___character, Transform_t5_83 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_LookRotation_m10_17 (MouseLook_t10_2 * __this, Transform_t5_83 * ___character, Transform_t5_83 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C" Quaternion_t5_69  MouseLook_ClampRotationAroundXAxis_m10_18 (MouseLook_t10_2 * __this, Quaternion_t5_69  ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
