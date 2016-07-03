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

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t6_69;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t6_172;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t1_1082;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl__ctor_m6_429 (CloudRecoImageTargetImpl_t6_69 * __this, String_t* ___name, int32_t ___id, Vector3_t5_68  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C" int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m6_430 (CloudRecoImageTargetImpl_t6_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C" Vector3_t5_68  CloudRecoImageTargetImpl_GetSize_m6_431 (CloudRecoImageTargetImpl_t6_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl_SetSize_m6_432 (CloudRecoImageTargetImpl_t6_69 * __this, Vector3_t5_68  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t6_172 * CloudRecoImageTargetImpl_CreateVirtualButton_m6_433 (CloudRecoImageTargetImpl_t6_69 * __this, String_t* ___name, RectangleData_t6_62  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t6_172 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m6_434 (CloudRecoImageTargetImpl_t6_69 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* CloudRecoImageTargetImpl_GetVirtualButtons_m6_435 (CloudRecoImageTargetImpl_t6_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool CloudRecoImageTargetImpl_DestroyVirtualButton_m6_436 (CloudRecoImageTargetImpl_t6_69 * __this, VirtualButton_t6_172 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StartExtendedTracking_m6_437 (CloudRecoImageTargetImpl_t6_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StopExtendedTracking_m6_438 (CloudRecoImageTargetImpl_t6_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
