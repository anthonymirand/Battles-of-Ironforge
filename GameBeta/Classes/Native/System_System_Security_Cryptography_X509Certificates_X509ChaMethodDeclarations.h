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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3_7;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t3_672;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t3_673;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t3_674;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3_6;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t3_676;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t3_670;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t3_675;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t2_40;
// Mono.Security.X509.X509Extension
struct X509Extension_t2_41;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t2_39;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_1.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C" void X509Chain__ctor_m3_8 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C" void X509Chain__ctor_m3_5531 (X509Chain_t3_7 * __this, bool ___useMachineContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.IntPtr)
extern "C" void X509Chain__ctor_m3_5532 (X509Chain_t3_7 * __this, IntPtr_t ___chainContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C" void X509Chain__cctor_m3_5533 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.X509Certificates.X509Chain::get_ChainContext()
extern "C" IntPtr_t X509Chain_get_ChainContext_m3_5534 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::get_ChainElements()
extern "C" X509ChainElementCollection_t3_672 * X509Chain_get_ChainElements_m3_5535 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C" X509ChainPolicy_t3_673 * X509Chain_get_ChainPolicy_m3_5536 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern "C" void X509Chain_set_ChainPolicy_m3_5537 (X509Chain_t3_7 * __this, X509ChainPolicy_t3_673 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
extern "C" X509ChainStatusU5BU5D_t3_674* X509Chain_get_ChainStatus_m3_5538 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_Build_m3_9 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C" void X509Chain_Reset_m3_5539 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Chain System.Security.Cryptography.X509Certificates.X509Chain::Create()
extern "C" X509Chain_t3_7 * X509Chain_Create_m3_5540 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C" X509Store_t3_676 * X509Chain_get_Roots_m3_5541 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C" X509Store_t3_676 * X509Chain_get_CertificateAuthorities_m3_5542 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C" X509Certificate2Collection_t3_670 * X509Chain_get_CertificateCollection_m3_5543 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Chain_BuildChainFrom_m3_5544 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" X509Certificate2_t3_6 * X509Chain_SelectBestFromCollection_m3_5545 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___child, X509Certificate2Collection_t3_670 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Certificate2_t3_6 * X509Chain_FindParent_m3_5546 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsChainComplete_m3_5547 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsSelfIssued_m3_5548 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_ValidateChain_m3_5549 (X509Chain_t3_7 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C" void X509Chain_Process_m3_5550 (X509Chain_t3_7 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C" void X509Chain_PrepareForNextCertificate_m3_5551 (X509Chain_t3_7 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C" void X509Chain_WrapUp_m3_5552 (X509Chain_t3_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C" void X509Chain_ProcessCertificateExtensions_m3_5553 (X509Chain_t3_7 * __this, X509ChainElement_t3_675 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Chain_IsSignedWith_m3_5554 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___signed, AsymmetricAlgorithm_t1_575 * ___pubkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetSubjectKeyIdentifier_m3_5555 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m3_5556 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m3_5557 (X509Chain_t3_7 * __this, X509Crl_t2_40 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m3_5558 (X509Chain_t3_7 * __this, X509Extension_t2_41 * ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_CheckRevocationOnChain_m3_5559 (X509Chain_t3_7 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m3_5560 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, int32_t ___ca, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m3_5561 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___certificate, X509Certificate2_t3_6 * ___ca_cert, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Crl_t2_40 * X509Chain_FindCrl_m3_5562 (X509Chain_t3_7 * __this, X509Certificate2_t3_6 * ___caCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C" bool X509Chain_ProcessCrlExtensions_m3_5563 (X509Chain_t3_7 * __this, X509Crl_t2_40 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C" bool X509Chain_ProcessCrlEntryExtensions_m3_5564 (X509Chain_t3_7 * __this, X509CrlEntry_t2_39 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
