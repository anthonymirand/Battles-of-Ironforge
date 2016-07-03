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

// System.String
struct String_t;
// System.OperatingSystem
struct OperatingSystem_t1_767;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID.h"
#include "mscorlib_System_Environment_SpecialFolder.h"

// System.String System.Environment::get_CurrentDirectory()
extern "C" String_t* Environment_get_CurrentDirectory_m1_5458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C" bool Environment_get_SocketSecurityEnabled_m1_5459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_UnityWebSecurityEnabled()
extern "C" bool Environment_get_UnityWebSecurityEnabled_m1_5460 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_MachineName()
extern "C" String_t* Environment_get_MachineName_m1_5461 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C" String_t* Environment_get_NewLine_m1_5462 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
extern "C" int32_t Environment_get_Platform_m1_5463 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
extern "C" String_t* Environment_GetOSVersionString_m1_5464 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
extern "C" OperatingSystem_t1_767 * Environment_get_OSVersion_m1_5465 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_StackTrace()
extern "C" String_t* Environment_get_StackTrace_m1_5466 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
extern "C" int32_t Environment_get_TickCount_m1_5467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C" String_t* Environment_internalGetEnvironmentVariable_m1_5468 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C" String_t* Environment_GetEnvironmentVariable_m1_5469 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Environment::GetEnvironmentVariables()
extern "C" Object_t * Environment_GetEnvironmentVariables_m1_5470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C" String_t* Environment_GetWindowsFolderPath_m1_5471 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C" String_t* Environment_GetFolderPath_m1_5472 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern "C" String_t* Environment_ReadXdgUserDir_m1_5473 (Object_t * __this /* static, unused */, String_t* ___config_dir, String_t* ___home_dir, String_t* ___key, String_t* ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern "C" String_t* Environment_InternalGetFolderPath_m1_5474 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C" bool Environment_get_IsRunningOnWindows_m1_5475 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Environment::GetEnvironmentVariableNames()
extern "C" StringU5BU5D_t1_206* Environment_GetEnvironmentVariableNames_m1_5476 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetMachineConfigPath()
extern "C" String_t* Environment_GetMachineConfigPath_m1_5477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
extern "C" String_t* Environment_internalGetHome_m1_5478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
