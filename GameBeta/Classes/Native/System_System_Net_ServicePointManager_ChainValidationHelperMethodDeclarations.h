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

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t3_611;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t2_109;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2_32;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3_7;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3_6;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_34;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C" void ChainValidationHelper__ctor_m3_4844 (ChainValidationHelper_t3_611 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C" void ChainValidationHelper__cctor_m3_4845 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C" String_t* ChainValidationHelper_get_Host_m3_4846 (ChainValidationHelper_t3_611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::set_Host(System.String)
extern "C" void ChainValidationHelper_set_Host_m3_4847 (ChainValidationHelper_t3_611 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t2_109 * ChainValidationHelper_ValidateChain_m3_4848 (ChainValidationHelper_t3_611 * __this, X509CertificateCollection_t2_32 * ___certs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetStatusFromChain_m3_4849 (Object_t * __this /* static, unused */, X509Chain_t3_7 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetErrorsFromChain_m3_4850 (Object_t * __this /* static, unused */, X509Chain_t3_7 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool ChainValidationHelper_CheckCertificateUsage_m3_4851 (Object_t * __this /* static, unused */, X509Certificate2_t3_6 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C" bool ChainValidationHelper_CheckServerIdentity_m3_4852 (Object_t * __this /* static, unused */, X509Certificate_t2_34 * ___cert, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C" bool ChainValidationHelper_CheckDomainName_m3_4853 (Object_t * __this /* static, unused */, String_t* ___subjectName, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C" bool ChainValidationHelper_Match_m3_4854 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
