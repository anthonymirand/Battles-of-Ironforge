#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t10_21;

#include "mscorlib_System_Object.h"

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t10_20  : public Object_t
{
};
struct CrossPlatformInputManager_t10_20_StaticFields{
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_t10_21 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_t10_21 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_t10_21 * ___s_HardwareInput_2;
};
