#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.DataSetImpl
struct DataSetImpl_t6_38;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t6_37  : public TrackableImpl_t6_36
{
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t5_68  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t6_38 * ___mDataSet_3;
};
