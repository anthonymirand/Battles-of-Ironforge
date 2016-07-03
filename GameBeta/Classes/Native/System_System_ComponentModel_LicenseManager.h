#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.LicenseContext
struct LicenseContext_t3_66;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// System.ComponentModel.LicenseManager
struct  LicenseManager_t3_139  : public Object_t
{
};
struct LicenseManager_t3_139_StaticFields{
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t3_66 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	Object_t * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	Object_t * ___lockObject_2;
};
