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

// System.Net.WebPermissionInfo
struct WebPermissionInfo_t3_638;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3_11;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebPermissionInfoType.h"

// System.Void System.Net.WebPermissionInfo::.ctor(System.Net.WebPermissionInfoType,System.String)
extern "C" void WebPermissionInfo__ctor_m3_5224 (WebPermissionInfo_t3_638 * __this, int32_t ___type, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionInfo::.ctor(System.Text.RegularExpressions.Regex)
extern "C" void WebPermissionInfo__ctor_m3_5225 (WebPermissionInfo_t3_638 * __this, Regex_t3_11 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionInfo::get_Info()
extern "C" String_t* WebPermissionInfo_get_Info_m3_5226 (WebPermissionInfo_t3_638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
