#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>
struct Dictionary_2_t1_1048;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTargetImpl.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"

// Vuforia.ImageTargetImpl
struct  ImageTargetImpl_t6_83  : public ObjectTargetImpl_t6_37
{
	// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::mImageTargetType
	int32_t ___mImageTargetType_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton> Vuforia.ImageTargetImpl::mVirtualButtons
	Dictionary_2_t1_1048 * ___mVirtualButtons_5;
};
