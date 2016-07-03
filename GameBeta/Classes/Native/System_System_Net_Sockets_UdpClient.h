#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_Object.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Net.Sockets.UdpClient
struct  UdpClient_t3_512  : public Object_t
{
	// System.Boolean System.Net.Sockets.UdpClient::disposed
	bool ___disposed_0;
	// System.Boolean System.Net.Sockets.UdpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::socket
	Socket_t3_483 * ___socket_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::family
	int32_t ___family_3;
	// System.Byte[] System.Net.Sockets.UdpClient::recvbuffer
	ByteU5BU5D_t1_72* ___recvbuffer_4;
};
