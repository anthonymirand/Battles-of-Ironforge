#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t3_432;

#include "mscorlib_System_Object.h"
#include "System_System_Net_NetworkInformation_IPStatus.h"

// System.Net.NetworkInformation.PingReply
struct  PingReply_t3_436  : public Object_t
{
	// System.Net.IPAddress System.Net.NetworkInformation.PingReply::address
	IPAddress_t3_339 * ___address_0;
	// System.Byte[] System.Net.NetworkInformation.PingReply::buffer
	ByteU5BU5D_t1_72* ___buffer_1;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.PingReply::options
	PingOptions_t3_432 * ___options_2;
	// System.Int64 System.Net.NetworkInformation.PingReply::rtt
	int64_t ___rtt_3;
	// System.Net.NetworkInformation.IPStatus System.Net.NetworkInformation.PingReply::status
	int32_t ___status_4;
};
