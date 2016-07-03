#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t2_110;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3_5;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3_474;

#include "System_System_Net_Security_AuthenticatedStream.h"

// System.Net.Security.SslStream
struct  SslStream_t3_472  : public AuthenticatedStream_t3_466
{
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t2_110 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t3_5 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t3_474 * ___selection_callback_5;
};
