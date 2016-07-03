#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2_32;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
struct  TlsClientCertificate_t2_132  : public HandshakeMessage_t2_101
{
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::clientCertificates
	X509CertificateCollection_t2_32 * ___clientCertificates_9;
};
