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

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t3_665;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3_661;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_X500Dis_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Security.Cryptography.AsnEncodedData)
extern "C" void X500DistinguishedName__ctor_m3_5414 (X500DistinguishedName_t3_665 * __this, AsnEncodedData_t3_661 * ___encodedDistinguishedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Byte[])
extern "C" void X500DistinguishedName__ctor_m3_5415 (X500DistinguishedName_t3_665 * __this, ByteU5BU5D_t1_72* ___encodedDistinguishedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.String)
extern "C" void X500DistinguishedName__ctor_m3_5416 (X500DistinguishedName_t3_665 * __this, String_t* ___distinguishedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.String,System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C" void X500DistinguishedName__ctor_m3_5417 (X500DistinguishedName_t3_665 * __this, String_t* ___distinguishedName, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Security.Cryptography.X509Certificates.X500DistinguishedName)
extern "C" void X500DistinguishedName__ctor_m3_5418 (X500DistinguishedName_t3_665 * __this, X500DistinguishedName_t3_665 * ___distinguishedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::get_Name()
extern "C" String_t* X500DistinguishedName_get_Name_m3_5419 (X500DistinguishedName_t3_665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C" String_t* X500DistinguishedName_Decode_m3_5420 (X500DistinguishedName_t3_665 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Format(System.Boolean)
extern "C" String_t* X500DistinguishedName_Format_m3_5421 (X500DistinguishedName_t3_665 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C" String_t* X500DistinguishedName_GetSeparator_m3_5422 (Object_t * __this /* static, unused */, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::DecodeRawData()
extern "C" void X500DistinguishedName_DecodeRawData_m3_5423 (X500DistinguishedName_t3_665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Canonize(System.String)
extern "C" String_t* X500DistinguishedName_Canonize_m3_5424 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X500DistinguishedName::AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName,System.Security.Cryptography.X509Certificates.X500DistinguishedName)
extern "C" bool X500DistinguishedName_AreEqual_m3_5425 (Object_t * __this /* static, unused */, X500DistinguishedName_t3_665 * ___name1, X500DistinguishedName_t3_665 * ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
