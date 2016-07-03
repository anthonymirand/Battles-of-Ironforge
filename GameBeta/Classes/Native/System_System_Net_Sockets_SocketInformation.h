#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_ValueType.h"
#include "System_System_Net_Sockets_SocketInformationOptions.h"

// System.Net.Sockets.SocketInformation
struct  SocketInformation_t3_502 
{
	// System.Net.Sockets.SocketInformationOptions System.Net.Sockets.SocketInformation::options
	int32_t ___options_0;
	// System.Byte[] System.Net.Sockets.SocketInformation::protocol_info
	ByteU5BU5D_t1_72* ___protocol_info_1;
};
// Native definition for marshalling of: System.Net.Sockets.SocketInformation
struct SocketInformation_t3_502_marshaled
{
	int32_t ___options_0;
	uint8_t* ___protocol_info_1;
};
