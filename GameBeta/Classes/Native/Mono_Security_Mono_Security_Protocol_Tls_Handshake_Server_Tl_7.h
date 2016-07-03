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

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello
struct  TlsServerHello_t2_140  : public HandshakeMessage_t2_101
{
	// System.Int32 Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::unixTime
	int32_t ___unixTime_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::random
	ByteU5BU5D_t1_72* ___random_10;
};
