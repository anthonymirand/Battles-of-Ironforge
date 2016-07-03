#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.NetworkStream
struct NetworkStream_t3_482;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Net.Sockets.LingerOption
struct LingerOption_t3_479;

#include "mscorlib_System_Object.h"
#include "System_System_Net_Sockets_TcpClient_Properties.h"

// System.Net.Sockets.TcpClient
struct  TcpClient_t3_320  : public Object_t
{
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::stream
	NetworkStream_t3_482 * ___stream_0;
	// System.Boolean System.Net.Sockets.TcpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::client
	Socket_t3_483 * ___client_2;
	// System.Boolean System.Net.Sockets.TcpClient::disposed
	bool ___disposed_3;
	// System.Net.Sockets.TcpClient/Properties System.Net.Sockets.TcpClient::values
	uint32_t ___values_4;
	// System.Int32 System.Net.Sockets.TcpClient::recv_timeout
	int32_t ___recv_timeout_5;
	// System.Int32 System.Net.Sockets.TcpClient::send_timeout
	int32_t ___send_timeout_6;
	// System.Int32 System.Net.Sockets.TcpClient::recv_buffer_size
	int32_t ___recv_buffer_size_7;
	// System.Int32 System.Net.Sockets.TcpClient::send_buffer_size
	int32_t ___send_buffer_size_8;
	// System.Net.Sockets.LingerOption System.Net.Sockets.TcpClient::linger_state
	LingerOption_t3_479 * ___linger_state_9;
	// System.Boolean System.Net.Sockets.TcpClient::no_delay
	bool ___no_delay_10;
};
