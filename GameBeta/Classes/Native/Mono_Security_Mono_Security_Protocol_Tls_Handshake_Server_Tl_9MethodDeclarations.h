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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange
struct TlsServerKeyExchange_t2_142;
// Mono.Security.Protocol.Tls.Context
struct Context_t2_79;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.RSA
struct RSA_t1_119;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerKeyExchange__ctor_m2_997 (TlsServerKeyExchange_t2_142 * __this, Context_t2_79 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::Update()
extern "C" void TlsServerKeyExchange_Update_m2_998 (TlsServerKeyExchange_t2_142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsSsl3()
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m2_999 (TlsServerKeyExchange_t2_142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsTls1()
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m2_1000 (TlsServerKeyExchange_t2_142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::createSignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t1_72* TlsServerKeyExchange_createSignature_m2_1001 (TlsServerKeyExchange_t2_142 * __this, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
