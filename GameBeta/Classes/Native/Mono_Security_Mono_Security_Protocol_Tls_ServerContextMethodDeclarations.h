#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.ServerContext
struct ServerContext_t2_106;
// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t2_107;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.ServerContext::.ctor(Mono.Security.Protocol.Tls.SslServerStream,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean)
extern "C" void ServerContext__ctor_m2_683 (ServerContext_t2_106 * __this, SslServerStream_t2_107 * ___stream, int32_t ___securityProtocolType, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, bool ___requestClientCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslServerStream Mono.Security.Protocol.Tls.ServerContext::get_SslStream()
extern "C" SslServerStream_t2_107 * ServerContext_get_SslStream_m2_684 (ServerContext_t2_106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ServerContext::get_ClientCertificateRequired()
extern "C" bool ServerContext_get_ClientCertificateRequired_m2_685 (ServerContext_t2_106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ServerContext::get_RequestClientCertificate()
extern "C" bool ServerContext_get_RequestClientCertificate_m2_686 (ServerContext_t2_106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
