#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Eyewear
struct Eyewear_t6_49;
// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_t6_2;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_t6_7;

#include "mscorlib_System_Object.h"

// Vuforia.Eyewear
struct  Eyewear_t6_49  : public Object_t
{
	// Vuforia.EyewearCalibrationProfileManager Vuforia.Eyewear::mProfileManager
	EyewearCalibrationProfileManager_t6_2 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.Eyewear::mCalibrator
	EyewearUserCalibrator_t6_7 * ___mCalibrator_2;
};
struct Eyewear_t6_49_StaticFields{
	// Vuforia.Eyewear Vuforia.Eyewear::mInstance
	Eyewear_t6_49 * ___mInstance_0;
};
