#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t1_1072;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t1_1073;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinderImpl_Ta.h"

// Vuforia.TargetFinderImpl
struct  TargetFinderImpl_t6_166  : public TargetFinder_t6_86
{
	// System.IntPtr Vuforia.TargetFinderImpl::mTargetFinderStatePtr
	IntPtr_t ___mTargetFinderStatePtr_0;
	// Vuforia.TargetFinderImpl/TargetFinderState Vuforia.TargetFinderImpl::mTargetFinderState
	TargetFinderState_t6_164  ___mTargetFinderState_1;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::mNewResults
	List_1_t1_1072 * ___mNewResults_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget> Vuforia.TargetFinderImpl::mImageTargets
	Dictionary_2_t1_1073 * ___mImageTargets_3;
};
