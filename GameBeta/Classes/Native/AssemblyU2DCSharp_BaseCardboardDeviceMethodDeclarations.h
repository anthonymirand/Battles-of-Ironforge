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

// BaseCardboardDevice
struct BaseCardboardDevice_t9_46;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_883;
// System.Uri
struct Uri_t3_3;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// System.Single[]
struct SingleU5BU5D_t1_870;
// BaseCardboardDevice/VREventCallback
struct VREventCallback_t9_45;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void BaseCardboardDevice::.ctor()
extern "C" void BaseCardboardDevice__ctor_m9_355 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseCardboardDevice_SupportsNativeDistortionCorrection_m9_356 (BaseCardboardDevice_t9_46 * __this, List_1_t1_883 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetDistortionCorrectionEnabled_m9_357 (BaseCardboardDevice_t9_46 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelScale(System.Single)
extern "C" void BaseCardboardDevice_SetNeckModelScale_m9_358 (BaseCardboardDevice_t9_46 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m9_359 (BaseCardboardDevice_t9_46 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m9_360 (BaseCardboardDevice_t9_46 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool BaseCardboardDevice_SetDefaultDeviceProfile_m9_361 (BaseCardboardDevice_t9_46 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Init()
extern "C" void BaseCardboardDevice_Init_m9_362 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetStereoScreen(UnityEngine.RenderTexture)
extern "C" void BaseCardboardDevice_SetStereoScreen_m9_363 (BaseCardboardDevice_t9_46 * __this, RenderTexture_t5_52 * ___stereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateState()
extern "C" void BaseCardboardDevice_UpdateState_m9_364 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateScreenData()
extern "C" void BaseCardboardDevice_UpdateScreenData_m9_365 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Recenter()
extern "C" void BaseCardboardDevice_Recenter_m9_366 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::PostRender()
extern "C" void BaseCardboardDevice_PostRender_m9_367 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnPause(System.Boolean)
extern "C" void BaseCardboardDevice_OnPause_m9_368 (BaseCardboardDevice_t9_46 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnApplicationQuit()
extern "C" void BaseCardboardDevice_OnApplicationQuit_m9_369 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateView()
extern "C" void BaseCardboardDevice_UpdateView_m9_370 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateProfile()
extern "C" void BaseCardboardDevice_UpdateProfile_m9_371 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseCardboardDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C" int32_t BaseCardboardDevice_ExtractMatrix_m9_372 (Object_t * __this /* static, unused */, Matrix4x4_t5_70 * ___mat, SingleU5BU5D_t1_870* ___data, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ProcessEvents()
extern "C" void BaseCardboardDevice_ProcessEvents_m9_373 (BaseCardboardDevice_t9_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnVREvent(System.Int32)
extern "C" void BaseCardboardDevice_OnVREvent_m9_374 (Object_t * __this /* static, unused */, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Start(System.Int32,System.Int32,System.Single,System.Single)
extern "C" void BaseCardboardDevice_Start_m9_375 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, float ___xdpi, float ___ydpi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetEventCallback(BaseCardboardDevice/VREventCallback)
extern "C" void BaseCardboardDevice_SetEventCallback_m9_376 (Object_t * __this /* static, unused */, VREventCallback_t9_45 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetTextureId(System.Int32)
extern "C" void BaseCardboardDevice_SetTextureId_m9_377 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultProfile(System.Byte[],System.Int32)
extern "C" bool BaseCardboardDevice_SetDefaultProfile_m9_378 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___uri, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetUnityVersion(System.Byte[],System.Int32)
extern "C" void BaseCardboardDevice_SetUnityVersion_m9_379 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___version_str, int32_t ___version_length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableDistortionCorrection(System.Boolean)
extern "C" void BaseCardboardDevice_EnableDistortionCorrection_m9_380 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C" void BaseCardboardDevice_EnableAutoDriftCorrection_m9_381 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C" void BaseCardboardDevice_EnableElectronicDisplayStabilization_m9_382 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelFactor(System.Single)
extern "C" void BaseCardboardDevice_SetNeckModelFactor_m9_383 (Object_t * __this /* static, unused */, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ResetHeadTracker()
extern "C" void BaseCardboardDevice_ResetHeadTracker_m9_384 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetProfile(System.Single[])
extern "C" void BaseCardboardDevice_GetProfile_m9_385 (Object_t * __this /* static, unused */, SingleU5BU5D_t1_870* ___profile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetHeadPose(System.Single[])
extern "C" void BaseCardboardDevice_GetHeadPose_m9_386 (Object_t * __this /* static, unused */, SingleU5BU5D_t1_870* ___pose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetViewParameters(System.Single[])
extern "C" void BaseCardboardDevice_GetViewParameters_m9_387 (Object_t * __this /* static, unused */, SingleU5BU5D_t1_870* ___viewParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Pause()
extern "C" void BaseCardboardDevice_Pause_m9_388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Resume()
extern "C" void BaseCardboardDevice_Resume_m9_389 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Stop()
extern "C" void BaseCardboardDevice_Stop_m9_390 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
