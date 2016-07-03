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

// System.Net.WebPermissionAttribute
struct WebPermissionAttribute_t3_640;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t1_671;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_SecurityAction.h"

// System.Void System.Net.WebPermissionAttribute::.ctor(System.Security.Permissions.SecurityAction)
extern "C" void WebPermissionAttribute__ctor_m3_5248 (WebPermissionAttribute_t3_640 * __this, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_Accept()
extern "C" String_t* WebPermissionAttribute_get_Accept_m3_5249 (WebPermissionAttribute_t3_640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_Accept(System.String)
extern "C" void WebPermissionAttribute_set_Accept_m3_5250 (WebPermissionAttribute_t3_640 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_AcceptPattern()
extern "C" String_t* WebPermissionAttribute_get_AcceptPattern_m3_5251 (WebPermissionAttribute_t3_640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_AcceptPattern(System.String)
extern "C" void WebPermissionAttribute_set_AcceptPattern_m3_5252 (WebPermissionAttribute_t3_640 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_Connect()
extern "C" String_t* WebPermissionAttribute_get_Connect_m3_5253 (WebPermissionAttribute_t3_640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_Connect(System.String)
extern "C" void WebPermissionAttribute_set_Connect_m3_5254 (WebPermissionAttribute_t3_640 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_ConnectPattern()
extern "C" String_t* WebPermissionAttribute_get_ConnectPattern_m3_5255 (WebPermissionAttribute_t3_640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_ConnectPattern(System.String)
extern "C" void WebPermissionAttribute_set_ConnectPattern_m3_5256 (WebPermissionAttribute_t3_640 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Net.WebPermissionAttribute::CreatePermission()
extern "C" Object_t * WebPermissionAttribute_CreatePermission_m3_5257 (WebPermissionAttribute_t3_640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::AlreadySet(System.String,System.String)
extern "C" void WebPermissionAttribute_AlreadySet_m3_5258 (WebPermissionAttribute_t3_640 * __this, String_t* ___parameter, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
