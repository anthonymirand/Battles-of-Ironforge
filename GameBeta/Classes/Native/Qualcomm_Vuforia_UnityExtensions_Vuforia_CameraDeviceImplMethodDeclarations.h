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

// Vuforia.CameraDeviceImpl
struct CameraDeviceImpl_t6_75;
// Vuforia.WebCamImpl
struct WebCamImpl_t6_76;
// Vuforia.Image
struct Image_t6_79;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t1_1045;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Vuforia.WebCamImpl Vuforia.CameraDeviceImpl::get_WebCam()
extern "C" WebCamImpl_t6_76 * CameraDeviceImpl_get_WebCam_m6_449 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::get_CameraReady()
extern "C" bool CameraDeviceImpl_get_CameraReady_m6_450 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Init(Vuforia.CameraDevice/CameraDirection)
extern "C" bool CameraDeviceImpl_Init_m6_451 (CameraDeviceImpl_t6_75 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Deinit()
extern "C" bool CameraDeviceImpl_Deinit_m6_452 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Start()
extern "C" bool CameraDeviceImpl_Start_m6_453 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Stop()
extern "C" bool CameraDeviceImpl_Stop_m6_454 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode()
extern "C" VideoModeData_t6_28  CameraDeviceImpl_GetVideoMode_m6_455 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" VideoModeData_t6_28  CameraDeviceImpl_GetVideoMode_m6_456 (CameraDeviceImpl_t6_75 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" bool CameraDeviceImpl_SelectVideoMode_m6_457 (CameraDeviceImpl_t6_75 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C" bool CameraDeviceImpl_GetSelectedVideoMode_m6_458 (CameraDeviceImpl_t6_75 * __this, int32_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFlashTorchMode(System.Boolean)
extern "C" bool CameraDeviceImpl_SetFlashTorchMode_m6_459 (CameraDeviceImpl_t6_75 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" bool CameraDeviceImpl_SetFocusMode_m6_460 (CameraDeviceImpl_t6_75 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" bool CameraDeviceImpl_SetFrameFormat_m6_461 (CameraDeviceImpl_t6_75 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDeviceImpl::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C" Image_t6_79 * CameraDeviceImpl_GetCameraImage_m6_462 (CameraDeviceImpl_t6_75 * __this, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::GetCameraDirection()
extern "C" int32_t CameraDeviceImpl_GetCameraDirection_m6_463 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.CameraDeviceImpl::GetCameraFieldOfViewRads()
extern "C" Vector2_t5_67  CameraDeviceImpl_GetCameraFieldOfViewRads_m6_464 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::GetAllImages()
extern "C" Dictionary_2_t1_1045 * CameraDeviceImpl_GetAllImages_m6_465 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsDirty()
extern "C" bool CameraDeviceImpl_IsDirty_m6_466 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ResetDirtyFlag()
extern "C" void CameraDeviceImpl_ResetDirtyFlag_m6_467 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.ctor()
extern "C" void CameraDeviceImpl__ctor_m6_468 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ForceFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" void CameraDeviceImpl_ForceFrameFormat_m6_469 (CameraDeviceImpl_t6_75 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::InitCameraDevice(System.Int32)
extern "C" int32_t CameraDeviceImpl_InitCameraDevice_m6_470 (CameraDeviceImpl_t6_75 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::DeinitCameraDevice()
extern "C" int32_t CameraDeviceImpl_DeinitCameraDevice_m6_471 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StartCameraDevice()
extern "C" int32_t CameraDeviceImpl_StartCameraDevice_m6_472 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StopCameraDevice()
extern "C" int32_t CameraDeviceImpl_StopCameraDevice_m6_473 (CameraDeviceImpl_t6_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.cctor()
extern "C" void CameraDeviceImpl__cctor_m6_474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
