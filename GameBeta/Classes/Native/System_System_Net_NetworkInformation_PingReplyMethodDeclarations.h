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

// System.Net.NetworkInformation.PingReply
struct PingReply_t3_436;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t3_432;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_IPStatus.h"

// System.Void System.Net.NetworkInformation.PingReply::.ctor(System.Net.IPAddress,System.Byte[],System.Net.NetworkInformation.PingOptions,System.Int64,System.Net.NetworkInformation.IPStatus)
extern "C" void PingReply__ctor_m3_3078 (PingReply_t3_436 * __this, IPAddress_t3_339 * ___address, ByteU5BU5D_t1_72* ___buffer, PingOptions_t3_432 * ___options, int64_t ___roundtripTime, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.PingReply::get_Address()
extern "C" IPAddress_t3_339 * PingReply_get_Address_m3_3079 (PingReply_t3_436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.NetworkInformation.PingReply::get_Buffer()
extern "C" ByteU5BU5D_t1_72* PingReply_get_Buffer_m3_3080 (PingReply_t3_436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.PingReply::get_Options()
extern "C" PingOptions_t3_432 * PingReply_get_Options_m3_3081 (PingReply_t3_436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.PingReply::get_RoundtripTime()
extern "C" int64_t PingReply_get_RoundtripTime_m3_3082 (PingReply_t3_436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPStatus System.Net.NetworkInformation.PingReply::get_Status()
extern "C" int32_t PingReply_get_Status_m3_3083 (PingReply_t3_436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
