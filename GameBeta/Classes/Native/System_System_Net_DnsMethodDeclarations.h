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

// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Net.IPHostEntry
struct IPHostEntry_t3_544;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3_492;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Dns::.cctor()
extern "C" void Dns__cctor_m3_4014 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostByName(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostByName_m3_4015 (Object_t * __this /* static, unused */, String_t* ___hostName, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginResolve(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginResolve_m3_4016 (Object_t * __this /* static, unused */, String_t* ___hostName, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostAddresses(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostAddresses_m3_4017 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostEntry(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostEntry_m3_4018 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostEntry(System.Net.IPAddress,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostEntry_m3_4019 (Object_t * __this /* static, unused */, IPAddress_t3_339 * ___address, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::EndGetHostByName(System.IAsyncResult)
extern "C" IPHostEntry_t3_544 * Dns_EndGetHostByName_m3_4020 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::EndResolve(System.IAsyncResult)
extern "C" IPHostEntry_t3_544 * Dns_EndResolve_m3_4021 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::EndGetHostAddresses(System.IAsyncResult)
extern "C" IPAddressU5BU5D_t3_492* Dns_EndGetHostAddresses_m3_4022 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::EndGetHostEntry(System.IAsyncResult)
extern "C" IPHostEntry_t3_544 * Dns_EndGetHostEntry_m3_4023 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByName_internal_m3_4024 (Object_t * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t1_206** ___h_aliases, StringU5BU5D_t1_206** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByAddr_internal_m3_4025 (Object_t * __this /* static, unused */, String_t* ___addr, String_t** ___h_name, StringU5BU5D_t1_206** ___h_aliases, StringU5BU5D_t1_206** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern "C" bool Dns_GetHostName_internal_m3_4026 (Object_t * __this /* static, unused */, String_t** ___h_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C" IPHostEntry_t3_544 * Dns_hostent_to_IPHostEntry_m3_4027 (Object_t * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t1_206* ___h_aliases, StringU5BU5D_t1_206* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddress(System.Net.IPAddress)
extern "C" IPHostEntry_t3_544 * Dns_GetHostByAddress_m3_4028 (Object_t * __this /* static, unused */, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddress(System.String)
extern "C" IPHostEntry_t3_544 * Dns_GetHostByAddress_m3_4029 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C" IPHostEntry_t3_544 * Dns_GetHostByAddressFromString_m3_4030 (Object_t * __this /* static, unused */, String_t* ___address, bool ___parse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C" IPHostEntry_t3_544 * Dns_GetHostEntry_m3_4031 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C" IPHostEntry_t3_544 * Dns_GetHostEntry_m3_4032 (Object_t * __this /* static, unused */, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C" IPAddressU5BU5D_t3_492* Dns_GetHostAddresses_m3_4033 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C" IPHostEntry_t3_544 * Dns_GetHostByName_m3_4034 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Dns::GetHostName()
extern "C" String_t* Dns_GetHostName_m3_4035 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::Resolve(System.String)
extern "C" IPHostEntry_t3_544 * Dns_Resolve_m3_4036 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
