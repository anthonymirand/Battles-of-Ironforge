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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t6_83;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t6_60;
// Vuforia.VirtualButton
struct VirtualButton_t6_172;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t1_1082;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C" void ImageTargetImpl__ctor_m6_523 (ImageTargetImpl_t6_83 * __this, String_t* ___name, int32_t ___id, int32_t ___imageTargetType, DataSet_t6_60 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C" int32_t ImageTargetImpl_get_ImageTargetType_m6_524 (ImageTargetImpl_t6_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t6_172 * ImageTargetImpl_CreateVirtualButton_m6_525 (ImageTargetImpl_t6_83 * __this, String_t* ___name, RectangleData_t6_62  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t6_172 * ImageTargetImpl_GetVirtualButtonByName_m6_526 (ImageTargetImpl_t6_83 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* ImageTargetImpl_GetVirtualButtons_m6_527 (ImageTargetImpl_t6_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_DestroyVirtualButton_m6_528 (ImageTargetImpl_t6_83 * __this, VirtualButton_t6_172 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t6_172 * ImageTargetImpl_CreateNewVirtualButtonInNative_m6_529 (ImageTargetImpl_t6_83 * __this, String_t* ___name, RectangleData_t6_62  ___rectangleData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_UnregisterVirtualButtonInNative_m6_530 (ImageTargetImpl_t6_83 * __this, VirtualButton_t6_172 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C" void ImageTargetImpl_CreateVirtualButtonsFromNative_m6_531 (ImageTargetImpl_t6_83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
