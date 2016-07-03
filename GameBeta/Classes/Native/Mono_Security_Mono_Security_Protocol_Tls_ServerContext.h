#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t2_107;

#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"

// Mono.Security.Protocol.Tls.ServerContext
struct  ServerContext_t2_106  : public Context_t2_79
{
	// Mono.Security.Protocol.Tls.SslServerStream Mono.Security.Protocol.Tls.ServerContext::sslStream
	SslServerStream_t2_107 * ___sslStream_30;
	// System.Boolean Mono.Security.Protocol.Tls.ServerContext::request_client_certificate
	bool ___request_client_certificate_31;
	// System.Boolean Mono.Security.Protocol.Tls.ServerContext::clientCertificateRequired
	bool ___clientCertificateRequired_32;
};
