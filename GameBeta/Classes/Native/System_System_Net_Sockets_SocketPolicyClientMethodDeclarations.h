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
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.SocketPolicyClient::.cctor()
extern "C" void SocketPolicyClient__cctor_m3_3662 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketPolicyClient::Log(System.String)
extern "C" void SocketPolicyClient_Log_m3_3663 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Sockets.SocketPolicyClient::GetPolicyStreamForIP(System.String,System.Int32,System.Int32)
extern "C" Stream_t1_226 * SocketPolicyClient_GetPolicyStreamForIP_m3_3664 (Object_t * __this /* static, unused */, String_t* ___ip, int32_t ___policyport, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
