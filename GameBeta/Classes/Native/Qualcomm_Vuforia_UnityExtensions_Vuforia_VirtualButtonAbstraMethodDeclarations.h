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

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t6_200;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t6_172;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t6_219;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t6_178;
// UnityEngine.GameObject
struct GameObject_t5_113;
// UnityEngine.Renderer
struct Renderer_t5_33;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C" String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m6_2002 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C" bool VirtualButtonAbstractBehaviour_get_Pressed_m6_2003 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C" bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m6_2004 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C" bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m6_2005 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m6_2006 (VirtualButtonAbstractBehaviour_t6_200 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C" VirtualButton_t6_172 * VirtualButtonAbstractBehaviour_get_VirtualButton_m6_2007 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C" void VirtualButtonAbstractBehaviour__ctor_m6_2008 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" void VirtualButtonAbstractBehaviour_RegisterEventHandler_m6_2009 (VirtualButtonAbstractBehaviour_t6_200 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m6_2010 (VirtualButtonAbstractBehaviour_t6_200 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m6_2011 (VirtualButtonAbstractBehaviour_t6_200 * __this, Vector2_t5_67 * ___topLeft, Vector2_t5_67 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m6_2012 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m6_2013 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateEnabled_m6_2014 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C" bool VirtualButtonAbstractBehaviour_UpdatePose_m6_2015 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m6_2016 (VirtualButtonAbstractBehaviour_t6_200 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C" ImageTargetAbstractBehaviour_t6_178 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m6_2017 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetVirtualButtonName(System.String)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetVirtualButtonName_m6_2018 (VirtualButtonAbstractBehaviour_t6_200 * __this, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_SensitivitySetting()
extern "C" int32_t VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_SensitivitySetting_m6_2019 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetSensitivitySetting(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetSensitivitySetting_m6_2020 (VirtualButtonAbstractBehaviour_t6_200 * __this, int32_t ___sensibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousTransform()
extern "C" Matrix4x4_t5_70  VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousTransform_m6_2021 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousTransform(UnityEngine.Matrix4x4)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousTransform_m6_2022 (VirtualButtonAbstractBehaviour_t6_200 * __this, Matrix4x4_t5_70  ___transformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousParent()
extern "C" GameObject_t5_113 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousParent_m6_2023 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousParent(UnityEngine.GameObject)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousParent_m6_2024 (VirtualButtonAbstractBehaviour_t6_200 * __this, GameObject_t5_113 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.InitializeVirtualButton(Vuforia.VirtualButton)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_InitializeVirtualButton_m6_2025 (VirtualButtonAbstractBehaviour_t6_200 * __this, VirtualButton_t6_172 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPosAndScaleFromButtonArea_m6_2026 (VirtualButtonAbstractBehaviour_t6_200 * __this, Vector2_t5_67  ___topLeft, Vector2_t5_67  ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.GetRenderer()
extern "C" Renderer_t5_33 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_GetRenderer_m6_2027 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C" void VirtualButtonAbstractBehaviour_LateUpdate_m6_2028 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C" void VirtualButtonAbstractBehaviour_OnDisable_m6_2029 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C" void VirtualButtonAbstractBehaviour_OnDestroy_m6_2030 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" bool VirtualButtonAbstractBehaviour_Equals_m6_2031 (Object_t * __this /* static, unused */, Vector2_t5_67  ___vec1, Vector2_t5_67  ___vec2, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_enabled()
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_enabled_m6_2032 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.set_enabled(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_set_enabled_m6_2033 (VirtualButtonAbstractBehaviour_t6_200 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_transform()
extern "C" Transform_t5_83 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_transform_m6_2034 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_gameObject()
extern "C" GameObject_t5_113 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_gameObject_m6_2035 (VirtualButtonAbstractBehaviour_t6_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
