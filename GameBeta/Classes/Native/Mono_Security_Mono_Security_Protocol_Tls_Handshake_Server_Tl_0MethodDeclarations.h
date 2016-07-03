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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t2_133;
// Mono.Security.Protocol.Tls.Context
struct Context_t2_79;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientCertificateVerify__ctor_m2_964 (TlsClientCertificateVerify_t2_133 * __this, Context_t2_79 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m2_965 (TlsClientCertificateVerify_t2_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m2_966 (TlsClientCertificateVerify_t2_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
