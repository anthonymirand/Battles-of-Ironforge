#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "AssemblyU2DCSharp_CardboardProfile_Lenses.h"
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOV.h"
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"

// CardboardProfile/Device
struct  Device_t9_35 
{
	// CardboardProfile/Lenses CardboardProfile/Device::lenses
	Lenses_t9_32  ___lenses_0;
	// CardboardProfile/MaxFOV CardboardProfile/Device::maxFOV
	MaxFOV_t9_33  ___maxFOV_1;
	// CardboardProfile/Distortion CardboardProfile/Device::distortion
	Distortion_t9_34  ___distortion_2;
	// CardboardProfile/Distortion CardboardProfile/Device::inverse
	Distortion_t9_34  ___inverse_3;
};
