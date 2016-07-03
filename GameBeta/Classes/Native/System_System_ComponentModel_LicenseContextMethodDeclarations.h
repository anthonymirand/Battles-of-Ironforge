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

// System.ComponentModel.LicenseContext
struct LicenseContext_t3_66;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1_277;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_LicenseUsageMode.h"

// System.Void System.ComponentModel.LicenseContext::.ctor()
extern "C" void LicenseContext__ctor_m3_848 (LicenseContext_t3_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.LicenseContext::GetSavedLicenseKey(System.Type,System.Reflection.Assembly)
extern "C" String_t* LicenseContext_GetSavedLicenseKey_m3_849 (LicenseContext_t3_66 * __this, Type_t * ___type, Assembly_t1_277 * ___resourceAssembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseContext::GetService(System.Type)
extern "C" Object_t * LicenseContext_GetService_m3_850 (LicenseContext_t3_66 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseContext::SetSavedLicenseKey(System.Type,System.String)
extern "C" void LicenseContext_SetSavedLicenseKey_m3_851 (LicenseContext_t3_66 * __this, Type_t * ___type, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseUsageMode System.ComponentModel.LicenseContext::get_UsageMode()
extern "C" int32_t LicenseContext_get_UsageMode_m3_852 (LicenseContext_t3_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
