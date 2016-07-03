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
// System.Int16[]
struct Int16U5BU5D_t1_886;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct  TlsClientHello_t2_135  : public HandshakeMessage_t2_101
{
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::random
	ByteU5BU5D_t1_72* ___random_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::sessionId
	ByteU5BU5D_t1_72* ___sessionId_10;
	// System.Int16[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::cipherSuites
	Int16U5BU5D_t1_886* ___cipherSuites_11;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::compressionMethods
	ByteU5BU5D_t1_72* ___compressionMethods_12;
};
