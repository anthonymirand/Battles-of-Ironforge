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

// System.Net.EndPointManager
struct EndPointManager_t3_554;
// System.Net.HttpListener
struct HttpListener_t3_581;
// System.String
struct String_t;
// System.Net.EndPointListener
struct EndPointListener_t3_553;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.EndPointManager::.ctor()
extern "C" void EndPointManager__ctor_m3_4062 (EndPointManager_t3_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::.cctor()
extern "C" void EndPointManager__cctor_m3_4063 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddListener(System.Net.HttpListener)
extern "C" void EndPointManager_AddListener_m3_4064 (Object_t * __this /* static, unused */, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddPrefix(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_AddPrefix_m3_4065 (Object_t * __this /* static, unused */, String_t* ___prefix, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddPrefixInternal(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_AddPrefixInternal_m3_4066 (Object_t * __this /* static, unused */, String_t* ___p, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPointListener System.Net.EndPointManager::GetEPListener(System.Net.IPAddress,System.Int32,System.Net.HttpListener,System.Boolean)
extern "C" EndPointListener_t3_553 * EndPointManager_GetEPListener_m3_4067 (Object_t * __this /* static, unused */, IPAddress_t3_339 * ___addr, int32_t ___port, HttpListener_t3_581 * ___listener, bool ___secure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemoveEndPoint(System.Net.EndPointListener,System.Net.IPEndPoint)
extern "C" void EndPointManager_RemoveEndPoint_m3_4068 (Object_t * __this /* static, unused */, EndPointListener_t3_553 * ___epl, IPEndPoint_t3_442 * ___ep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemoveListener(System.Net.HttpListener)
extern "C" void EndPointManager_RemoveListener_m3_4069 (Object_t * __this /* static, unused */, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemovePrefix(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_RemovePrefix_m3_4070 (Object_t * __this /* static, unused */, String_t* ___prefix, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemovePrefixInternal(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_RemovePrefixInternal_m3_4071 (Object_t * __this /* static, unused */, String_t* ___prefix, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
