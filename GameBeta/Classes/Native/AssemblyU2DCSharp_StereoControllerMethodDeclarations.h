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

// StereoController
struct StereoController_t9_23;
// CardboardEye[]
struct CardboardEyeU5BU5D_t9_43;
// CardboardHead
struct CardboardHead_t9_28;
// UnityEngine.Camera
struct Camera_t5_100;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// CardboardEye
struct CardboardEye_t9_25;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void StereoController::.ctor()
extern "C" void StereoController__ctor_m9_314 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C" CardboardEyeU5BU5D_t9_43* StereoController_get_Eyes_m9_315 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C" CardboardHead_t9_28 * StereoController_get_Head_m9_316 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m9_317 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::UpdateStereoValues()
extern "C" void StereoController_UpdateStereoValues_m9_318 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_cam()
extern "C" Camera_t5_100 * StereoController_get_cam_m9_319 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_cam(UnityEngine.Camera)
extern "C" void StereoController_set_cam_m9_320 (StereoController_t9_23 * __this, Camera_t5_100 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m9_321 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C" void StereoController_AddStereoRig_m9_322 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C" void StereoController_CreateEye_m9_323 (StereoController_t9_23 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(Cardboard/Eye,System.Single,System.Single)
extern "C" Vector3_t5_68  StereoController_ComputeStereoEyePosition_m9_324 (StereoController_t9_23 * __this, int32_t ___eye, float ___proj11, float ___zScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C" void StereoController_OnEnable_m9_325 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C" void StereoController_OnDisable_m9_326 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C" void StereoController_OnPreCull_m9_327 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C" Object_t * StereoController_EndOfFrame_m9_328 (StereoController_t9_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m9_329 (StereoController_t9_23 * __this, CardboardEye_t9_25 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t9_28 * StereoController_U3Cget_HeadU3Em__1_m9_330 (Object_t * __this /* static, unused */, CardboardEye_t9_25 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<AddStereoRig>m__2(CardboardEye)
extern "C" bool StereoController_U3CAddStereoRigU3Em__2_m9_331 (StereoController_t9_23 * __this, CardboardEye_t9_25 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
