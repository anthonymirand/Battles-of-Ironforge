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

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Security.SecureString
struct SecureString_t1_665;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C_0.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C" void X509Certificate__ctor_m1_3978 (X509Certificate_t1_572 * __this, ByteU5BU5D_t1_72* ___data, bool ___dates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m1_3979 (X509Certificate_t1_572 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.IntPtr)
extern "C" void X509Certificate__ctor_m1_3980 (X509Certificate_t1_572 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509Certificate__ctor_m1_3981 (X509Certificate_t1_572 * __this, X509Certificate_t1_572 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C" void X509Certificate__ctor_m1_3982 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate__ctor_m1_3983 (X509Certificate_t1_572 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1_3984 (X509Certificate_t1_572 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m1_3985 (X509Certificate_t1_572 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C" String_t* X509Certificate_tostr_m1_3986 (X509Certificate_t1_572 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" bool X509Certificate_Equals_m1_3987 (X509Certificate_t1_572 * __this, X509Certificate_t1_572 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C" ByteU5BU5D_t1_72* X509Certificate_GetCertHash_m1_3988 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C" String_t* X509Certificate_GetCertHashString_m1_3989 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C" String_t* X509Certificate_GetEffectiveDateString_m1_3990 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C" String_t* X509Certificate_GetExpirationDateString_m1_3991 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C" int32_t X509Certificate_GetHashCode_m1_3992 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C" String_t* X509Certificate_GetIssuerName_m1_3993 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C" String_t* X509Certificate_GetName_m1_3994 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C" ByteU5BU5D_t1_72* X509Certificate_GetPublicKey_m1_3995 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C" ByteU5BU5D_t1_72* X509Certificate_GetRawCertData_m1_3996 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C" String_t* X509Certificate_ToString_m1_3997 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C" String_t* X509Certificate_ToString_m1_3998 (X509Certificate_t1_572 * __this, bool ___fVerbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::Load(System.String)
extern "C" ByteU5BU5D_t1_72* X509Certificate_Load_m1_3999 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C" String_t* X509Certificate_get_Issuer_m1_4000 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C" String_t* X509Certificate_get_Subject_m1_4001 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C" bool X509Certificate_Equals_m1_4002 (X509Certificate_t1_572 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::Export(System.Security.Cryptography.X509Certificates.X509ContentType,System.String)
extern "C" ByteU5BU5D_t1_72* X509Certificate_Export_m1_4003 (X509Certificate_t1_572 * __this, int32_t ___contentType, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::Export(System.Security.Cryptography.X509Certificates.X509ContentType,System.Byte[])
extern "C" ByteU5BU5D_t1_72* X509Certificate_Export_m1_4004 (X509Certificate_t1_572 * __this, int32_t ___contentType, ByteU5BU5D_t1_72* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[])
extern "C" void X509Certificate_Import_m1_4005 (X509Certificate_t1_572 * __this, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m1_4006 (X509Certificate_t1_572 * __this, ByteU5BU5D_t1_72* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.Security.SecureString,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m1_4007 (X509Certificate_t1_572 * __this, ByteU5BU5D_t1_72* ___rawData, SecureString_t1_665 * ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.String)
extern "C" void X509Certificate_Import_m1_4008 (X509Certificate_t1_572 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m1_4009 (X509Certificate_t1_572 * __this, String_t* ___fileName, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.String,System.Security.SecureString,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m1_4010 (X509Certificate_t1_572 * __this, String_t* ___fileName, SecureString_t1_665 * ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C" void X509Certificate_Reset_m1_4011 (X509Certificate_t1_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
