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

// Vuforia.EyewearCalibrationProfileManagerImpl
struct EyewearCalibrationProfileManagerImpl_t6_3;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Eyewear_EyeID.h"

// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C" int32_t EyewearCalibrationProfileManagerImpl_getMaxCount_m6_2 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C" int32_t EyewearCalibrationProfileManagerImpl_getUsedCount_m6_3 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C" bool EyewearCalibrationProfileManagerImpl_isProfileUsed_m6_4 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C" int32_t EyewearCalibrationProfileManagerImpl_getActiveProfile_m6_5 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C" bool EyewearCalibrationProfileManagerImpl_setActiveProfile_m6_6 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getProjectionMatrix(System.Int32,Vuforia.Eyewear/EyeID)
extern "C" Matrix4x4_t5_70  EyewearCalibrationProfileManagerImpl_getProjectionMatrix_m6_7 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProjectionMatrix(System.Int32,Vuforia.Eyewear/EyeID,UnityEngine.Matrix4x4)
extern "C" bool EyewearCalibrationProfileManagerImpl_setProjectionMatrix_m6_8 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t5_70  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.EyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C" String_t* EyewearCalibrationProfileManagerImpl_getProfileName_m6_9 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C" bool EyewearCalibrationProfileManagerImpl_setProfileName_m6_10 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, int32_t ___profileID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C" bool EyewearCalibrationProfileManagerImpl_clearProfile_m6_11 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearCalibrationProfileManagerImpl::.ctor()
extern "C" void EyewearCalibrationProfileManagerImpl__ctor_m6_12 (EyewearCalibrationProfileManagerImpl_t6_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
