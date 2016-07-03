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

// Mono.Security.X509.X509Crl
struct X509Crl_t2_40;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2_35;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t2_39;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_34;
// System.Security.Cryptography.DSA
struct DSA_t1_107;
// System.Security.Cryptography.RSA
struct RSA_t1_119;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m2_330 (X509Crl_t2_40 * __this, ByteU5BU5D_t1_72* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m2_331 (X509Crl_t2_40 * __this, ByteU5BU5D_t1_72* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t2_35 * X509Crl_get_Extensions_m2_332 (X509Crl_t2_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t1_72* X509Crl_get_Hash_m2_333 (X509Crl_t2_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m2_334 (X509Crl_t2_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t1_128  X509Crl_get_NextUpdate_m2_335 (X509Crl_t2_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m2_336 (X509Crl_t2_40 * __this, ByteU5BU5D_t1_72* ___array1, ByteU5BU5D_t1_72* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t2_39 * X509Crl_GetCrlEntry_m2_337 (X509Crl_t2_40 * __this, X509Certificate_t2_34 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t2_39 * X509Crl_GetCrlEntry_m2_338 (X509Crl_t2_40 * __this, ByteU5BU5D_t1_72* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m2_339 (X509Crl_t2_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m2_340 (X509Crl_t2_40 * __this, DSA_t1_107 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m2_341 (X509Crl_t2_40 * __this, RSA_t1_119 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m2_342 (X509Crl_t2_40 * __this, AsymmetricAlgorithm_t1_575 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
