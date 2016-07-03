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

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2_90;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3_1;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2_28;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern "C" void TlsClientSettings__ctor_m2_832 (TlsClientSettings_t2_90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C" String_t* TlsClientSettings_get_TargetHost_m2_833 (TlsClientSettings_t2_90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C" void TlsClientSettings_set_TargetHost_m2_834 (TlsClientSettings_t2_90 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C" X509CertificateCollection_t3_1 * TlsClientSettings_get_Certificates_m2_835 (TlsClientSettings_t2_90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void TlsClientSettings_set_Certificates_m2_836 (TlsClientSettings_t2_90 * __this, X509CertificateCollection_t3_1 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C" X509Certificate_t1_572 * TlsClientSettings_get_ClientCertificate_m2_837 (TlsClientSettings_t2_90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void TlsClientSettings_set_ClientCertificate_m2_838 (TlsClientSettings_t2_90 * __this, X509Certificate_t1_572 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.RSAManaged Mono.Security.Protocol.Tls.TlsClientSettings::get_CertificateRSA()
extern "C" RSAManaged_t2_28 * TlsClientSettings_get_CertificateRSA_m2_839 (TlsClientSettings_t2_90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern "C" void TlsClientSettings_UpdateCertificateRSA_m2_840 (TlsClientSettings_t2_90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
