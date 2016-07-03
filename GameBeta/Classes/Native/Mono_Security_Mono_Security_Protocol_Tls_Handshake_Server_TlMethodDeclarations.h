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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
struct TlsClientCertificate_t2_132;
// Mono.Security.Protocol.Tls.Context
struct Context_t2_79;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_34;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2_32;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientCertificate__ctor_m2_958 (TlsClientCertificate_t2_132 * __this, Context_t2_79 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::Update()
extern "C" void TlsClientCertificate_Update_m2_959 (TlsClientCertificate_t2_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsSsl3()
extern "C" void TlsClientCertificate_ProcessAsSsl3_m2_960 (TlsClientCertificate_t2_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsTls1()
extern "C" void TlsClientCertificate_ProcessAsTls1_m2_961 (TlsClientCertificate_t2_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C" bool TlsClientCertificate_checkCertificateUsage_m2_962 (TlsClientCertificate_t2_132 * __this, X509Certificate_t2_34 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsClientCertificate_validateCertificates_m2_963 (TlsClientCertificate_t2_132 * __this, X509CertificateCollection_t2_32 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
