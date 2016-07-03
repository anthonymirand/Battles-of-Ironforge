#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t2_111;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t2_98;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t2_112;

#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase.h"

// Mono.Security.Protocol.Tls.SslServerStream
struct  SslServerStream_t2_107  : public SslStreamBase_t2_110
{
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation
	CertificateValidationCallback_t2_111 * ___ClientCertValidation_16;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::PrivateKeySelection
	PrivateKeySelectionCallback_t2_98 * ___PrivateKeySelection_17;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation2
	CertificateValidationCallback2_t2_112 * ___ClientCertValidation2_18;
};
