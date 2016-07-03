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

// Mono.Security.X509.X509Store
struct X509Store_t2_42;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2_32;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_34;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2_35;
// Mono.Security.X509.X509Crl
struct X509Crl_t2_40;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m2_359 (X509Store_t2_42 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t2_32 * X509Store_get_Certificates_m2_360 (X509Store_t2_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t1_114 * X509Store_get_Crls_m2_361 (X509Store_t2_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Store::Import(Mono.Security.X509.X509Certificate)
extern "C" void X509Store_Import_m2_362 (X509Store_t2_42 * __this, X509Certificate_t2_34 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Store::Remove(Mono.Security.X509.X509Certificate)
extern "C" void X509Store_Remove_m2_363 (X509Store_t2_42 * __this, X509Certificate_t2_34 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Certificate)
extern "C" String_t* X509Store_GetUniqueName_m2_364 (X509Store_t2_42 * __this, X509Certificate_t2_34 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509ExtensionCollection)
extern "C" ByteU5BU5D_t1_72* X509Store_GetUniqueName_m2_365 (X509Store_t2_42 * __this, X509ExtensionCollection_t2_35 * ___extensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Store::GetUniqueName(System.String,System.Byte[],System.String)
extern "C" String_t* X509Store_GetUniqueName_m2_366 (X509Store_t2_42 * __this, String_t* ___method, ByteU5BU5D_t1_72* ___name, String_t* ___fileExtension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t1_72* X509Store_Load_m2_367 (X509Store_t2_42 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t2_34 * X509Store_LoadCertificate_m2_368 (X509Store_t2_42 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t2_40 * X509Store_LoadCrl_m2_369 (X509Store_t2_42 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m2_370 (X509Store_t2_42 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t2_32 * X509Store_BuildCertificatesCollection_m2_371 (X509Store_t2_42 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t1_114 * X509Store_BuildCrlsCollection_m2_372 (X509Store_t2_42 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
