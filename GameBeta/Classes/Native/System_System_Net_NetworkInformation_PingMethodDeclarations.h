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

// System.Net.NetworkInformation.Ping
struct Ping_t3_433;
// System.Net.NetworkInformation.PingCompletedEventHandler
struct PingCompletedEventHandler_t3_434;
// System.Net.NetworkInformation.PingCompletedEventArgs
struct PingCompletedEventArgs_t3_435;
// System.Net.NetworkInformation.PingReply
struct PingReply_t3_436;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t3_432;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Ping_cap_user_header_t.h"
#include "System_System_Net_NetworkInformation_Ping_cap_user_data_t.h"

// System.Void System.Net.NetworkInformation.Ping::.ctor()
extern "C" void Ping__ctor_m3_3038 (Ping_t3_433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::.cctor()
extern "C" void Ping__cctor_m3_3039 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::add_PingCompleted(System.Net.NetworkInformation.PingCompletedEventHandler)
extern "C" void Ping_add_PingCompleted_m3_3040 (Ping_t3_433 * __this, PingCompletedEventHandler_t3_434 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::remove_PingCompleted(System.Net.NetworkInformation.PingCompletedEventHandler)
extern "C" void Ping_remove_PingCompleted_m3_3041 (Ping_t3_433 * __this, PingCompletedEventHandler_t3_434 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::System.IDisposable.Dispose()
extern "C" void Ping_System_IDisposable_Dispose_m3_3042 (Ping_t3_433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Ping::capget(System.Net.NetworkInformation.Ping/cap_user_header_t&,System.Net.NetworkInformation.Ping/cap_user_data_t&)
extern "C" int32_t Ping_capget_m3_3043 (Object_t * __this /* static, unused */, cap_user_header_t_t3_428 * ___header, cap_user_data_t_t3_429 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::CheckLinuxCapabilities()
extern "C" void Ping_CheckLinuxCapabilities_m3_3044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::OnPingCompleted(System.Net.NetworkInformation.PingCompletedEventArgs)
extern "C" void Ping_OnPingCompleted_m3_3045 (Ping_t3_433 * __this, PingCompletedEventArgs_t3_435 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress)
extern "C" PingReply_t3_436 * Ping_Send_m3_3046 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress,System.Int32)
extern "C" PingReply_t3_436 * Ping_Send_m3_3047 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress,System.Int32,System.Byte[])
extern "C" PingReply_t3_436 * Ping_Send_m3_3048 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String)
extern "C" PingReply_t3_436 * Ping_Send_m3_3049 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String,System.Int32)
extern "C" PingReply_t3_436 * Ping_Send_m3_3050 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String,System.Int32,System.Byte[])
extern "C" PingReply_t3_436 * Ping_Send_m3_3051 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t3_436 * Ping_Send_m3_3052 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t3_432 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Ping::GetNonLoopbackIP()
extern "C" IPAddress_t3_339 * Ping_GetNonLoopbackIP_m3_3053 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t3_436 * Ping_Send_m3_3054 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t3_432 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::SendPrivileged(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t3_436 * Ping_SendPrivileged_m3_3055 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t3_432 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::SendUnprivileged(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t3_436 * Ping_SendUnprivileged_m3_3056 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t3_432 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Int32,System.Byte[],System.Object)
extern "C" void Ping_SendAsync_m3_3057 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Int32,System.Object)
extern "C" void Ping_SendAsync_m3_3058 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Object)
extern "C" void Ping_SendAsync_m3_3059 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Int32,System.Byte[],System.Object)
extern "C" void Ping_SendAsync_m3_3060 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions,System.Object)
extern "C" void Ping_SendAsync_m3_3061 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t3_432 * ___options, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Int32,System.Object)
extern "C" void Ping_SendAsync_m3_3062 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Object)
extern "C" void Ping_SendAsync_m3_3063 (Ping_t3_433 * __this, String_t* ___hostNameOrAddress, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions,System.Object)
extern "C" void Ping_SendAsync_m3_3064 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t3_432 * ___options, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsyncCancel()
extern "C" void Ping_SendAsyncCancel_m3_3065 (Ping_t3_433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Ping::BuildPingArgs(System.Net.IPAddress,System.Int32,System.Net.NetworkInformation.PingOptions)
extern "C" String_t* Ping_BuildPingArgs_m3_3066 (Ping_t3_433 * __this, IPAddress_t3_339 * ___address, int32_t ___timeout, PingOptions_t3_432 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
