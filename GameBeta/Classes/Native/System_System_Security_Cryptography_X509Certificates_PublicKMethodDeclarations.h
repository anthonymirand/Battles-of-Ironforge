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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3_660;
// System.Security.Cryptography.Oid
struct Oid_t3_662;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3_661;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_34;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.DSA
struct DSA_t1_107;
// System.Security.Cryptography.RSA
struct RSA_t1_119;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(System.Security.Cryptography.Oid,System.Security.Cryptography.AsnEncodedData,System.Security.Cryptography.AsnEncodedData)
extern "C" void PublicKey__ctor_m3_5405 (PublicKey_t3_660 * __this, Oid_t3_662 * ___oid, AsnEncodedData_t3_661 * ___parameters, AsnEncodedData_t3_661 * ___keyValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m3_5406 (PublicKey_t3_660 * __this, X509Certificate_t2_34 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t3_661 * PublicKey_get_EncodedKeyValue_m3_5407 (PublicKey_t3_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t3_661 * PublicKey_get_EncodedParameters_m3_5408 (PublicKey_t3_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1_575 * PublicKey_get_Key_m3_5409 (PublicKey_t3_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t3_662 * PublicKey_get_Oid_m3_5410 (PublicKey_t3_660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1_72* PublicKey_GetUnsignedBigInteger_m3_5411 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1_107 * PublicKey_DecodeDSA_m3_5412 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___rawPublicKey, ByteU5BU5D_t1_72* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1_119 * PublicKey_DecodeRSA_m3_5413 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
