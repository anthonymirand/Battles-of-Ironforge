﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t7_139;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMode.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScreenMatchMode.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit.h"

// System.Void UnityEngine.UI.CanvasScaler::.ctor()
extern "C" void CanvasScaler__ctor_m7_1185 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::get_uiScaleMode()
extern "C" int32_t CanvasScaler_get_uiScaleMode_m7_1186 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_uiScaleMode(UnityEngine.UI.CanvasScaler/ScaleMode)
extern "C" void CanvasScaler_set_uiScaleMode_m7_1187 (CanvasScaler_t7_139 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_referencePixelsPerUnit()
extern "C" float CanvasScaler_get_referencePixelsPerUnit_m7_1188 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referencePixelsPerUnit(System.Single)
extern "C" void CanvasScaler_set_referencePixelsPerUnit_m7_1189 (CanvasScaler_t7_139 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_scaleFactor()
extern "C" float CanvasScaler_get_scaleFactor_m7_1190 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_scaleFactor(System.Single)
extern "C" void CanvasScaler_set_scaleFactor_m7_1191 (CanvasScaler_t7_139 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
extern "C" Vector2_t5_67  CanvasScaler_get_referenceResolution_m7_1192 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
extern "C" void CanvasScaler_set_referenceResolution_m7_1193 (CanvasScaler_t7_139 * __this, Vector2_t5_67  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::get_screenMatchMode()
extern "C" int32_t CanvasScaler_get_screenMatchMode_m7_1194 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_screenMatchMode(UnityEngine.UI.CanvasScaler/ScreenMatchMode)
extern "C" void CanvasScaler_set_screenMatchMode_m7_1195 (CanvasScaler_t7_139 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_matchWidthOrHeight()
extern "C" float CanvasScaler_get_matchWidthOrHeight_m7_1196 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_matchWidthOrHeight(System.Single)
extern "C" void CanvasScaler_set_matchWidthOrHeight_m7_1197 (CanvasScaler_t7_139 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::get_physicalUnit()
extern "C" int32_t CanvasScaler_get_physicalUnit_m7_1198 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_physicalUnit(UnityEngine.UI.CanvasScaler/Unit)
extern "C" void CanvasScaler_set_physicalUnit_m7_1199 (CanvasScaler_t7_139 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_fallbackScreenDPI()
extern "C" float CanvasScaler_get_fallbackScreenDPI_m7_1200 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_fallbackScreenDPI(System.Single)
extern "C" void CanvasScaler_set_fallbackScreenDPI_m7_1201 (CanvasScaler_t7_139 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_defaultSpriteDPI()
extern "C" float CanvasScaler_get_defaultSpriteDPI_m7_1202 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_defaultSpriteDPI(System.Single)
extern "C" void CanvasScaler_set_defaultSpriteDPI_m7_1203 (CanvasScaler_t7_139 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_dynamicPixelsPerUnit()
extern "C" float CanvasScaler_get_dynamicPixelsPerUnit_m7_1204 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_dynamicPixelsPerUnit(System.Single)
extern "C" void CanvasScaler_set_dynamicPixelsPerUnit_m7_1205 (CanvasScaler_t7_139 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnEnable()
extern "C" void CanvasScaler_OnEnable_m7_1206 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnDisable()
extern "C" void CanvasScaler_OnDisable_m7_1207 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Update()
extern "C" void CanvasScaler_Update_m7_1208 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Handle()
extern "C" void CanvasScaler_Handle_m7_1209 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleWorldCanvas()
extern "C" void CanvasScaler_HandleWorldCanvas_m7_1210 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPixelSize()
extern "C" void CanvasScaler_HandleConstantPixelSize_m7_1211 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleScaleWithScreenSize()
extern "C" void CanvasScaler_HandleScaleWithScreenSize_m7_1212 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPhysicalSize()
extern "C" void CanvasScaler_HandleConstantPhysicalSize_m7_1213 (CanvasScaler_t7_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetScaleFactor(System.Single)
extern "C" void CanvasScaler_SetScaleFactor_m7_1214 (CanvasScaler_t7_139 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetReferencePixelsPerUnit(System.Single)
extern "C" void CanvasScaler_SetReferencePixelsPerUnit_m7_1215 (CanvasScaler_t7_139 * __this, float ___referencePixelsPerUnit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
