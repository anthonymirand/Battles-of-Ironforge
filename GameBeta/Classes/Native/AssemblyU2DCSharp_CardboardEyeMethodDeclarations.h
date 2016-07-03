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

// CardboardEye
struct CardboardEye_t9_25;
// StereoController
struct StereoController_t9_23;
// CardboardHead
struct CardboardHead_t9_28;
// UnityEngine.Camera
struct Camera_t5_100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void CardboardEye::.ctor()
extern "C" void CardboardEye__ctor_m9_214 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C" StereoController_t9_23 * CardboardEye_get_Controller_m9_215 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C" CardboardHead_t9_28 * CardboardEye_get_Head_m9_216 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardEye::get_cam()
extern "C" Camera_t5_100 * CardboardEye_get_cam_m9_217 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::set_cam(UnityEngine.Camera)
extern "C" void CardboardEye_set_cam_m9_218 (CardboardEye_t9_25 * __this, Camera_t5_100 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C" void CardboardEye_Awake_m9_219 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C" void CardboardEye_Start_m9_220 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&)
extern "C" void CardboardEye_FixProjection_m9_221 (CardboardEye_t9_25 * __this, Matrix4x4_t5_70 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardEye::FixViewport(UnityEngine.Rect)
extern "C" Rect_t5_37  CardboardEye_FixViewport_m9_222 (CardboardEye_t9_25 * __this, Rect_t5_37  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::UpdateStereoValues()
extern "C" void CardboardEye_UpdateStereoValues_m9_223 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::SetupStereo()
extern "C" void CardboardEye_SetupStereo_m9_224 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m9_225 (CardboardEye_t9_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m9_226 (CardboardEye_t9_25 * __this, StereoController_t9_23 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
