#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t1_870;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t3_851;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "AssemblyU2DCSharp_BaseVRDevice.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// BaseCardboardDevice
struct  BaseCardboardDevice_t9_46  : public BaseVRDevice_t9_24
{
	// System.Single[] BaseCardboardDevice::headData
	SingleU5BU5D_t1_870* ___headData_24;
	// System.Single[] BaseCardboardDevice::viewData
	SingleU5BU5D_t1_870* ___viewData_25;
	// System.Single[] BaseCardboardDevice::profileData
	SingleU5BU5D_t1_870* ___profileData_26;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::headView
	Matrix4x4_t5_70  ___headView_27;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::leftEyeView
	Matrix4x4_t5_70  ___leftEyeView_28;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::rightEyeView
	Matrix4x4_t5_70  ___rightEyeView_29;
	// System.Collections.Generic.Queue`1<System.Int32> BaseCardboardDevice::eventQueue
	Queue_1_t3_851 * ___eventQueue_30;
	// System.Boolean BaseCardboardDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_31;
	// System.Boolean BaseCardboardDevice::debugDisableNativeDistortion
	bool ___debugDisableNativeDistortion_32;
	// System.Boolean BaseCardboardDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_33;
	// System.Int32[] BaseCardboardDevice::events
	Int32U5BU5D_t1_161* ___events_34;
};
