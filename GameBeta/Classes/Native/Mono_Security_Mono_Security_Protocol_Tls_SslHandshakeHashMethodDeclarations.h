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

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t2_114;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.RSA
struct RSA_t1_119;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
extern "C" void SslHandshakeHash__ctor_m2_737 (SslHandshakeHash_t2_114 * __this, ByteU5BU5D_t1_72* ___secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
extern "C" void SslHandshakeHash_Initialize_m2_738 (SslHandshakeHash_t2_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
extern "C" ByteU5BU5D_t1_72* SslHandshakeHash_HashFinal_m2_739 (SslHandshakeHash_t2_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SslHandshakeHash_HashCore_m2_740 (SslHandshakeHash_t2_114 * __this, ByteU5BU5D_t1_72* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t1_72* SslHandshakeHash_CreateSignature_m2_741 (SslHandshakeHash_t2_114 * __this, RSA_t1_119 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslHandshakeHash::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C" bool SslHandshakeHash_VerifySignature_m2_742 (SslHandshakeHash_t2_114 * __this, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
extern "C" void SslHandshakeHash_initializePad_m2_743 (SslHandshakeHash_t2_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
