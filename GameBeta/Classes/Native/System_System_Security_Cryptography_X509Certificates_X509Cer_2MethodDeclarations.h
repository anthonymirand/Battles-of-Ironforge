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

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t3_670;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3_6;
// System.Security.Cryptography.X509Certificates.X509Certificate2[]
struct X509Certificate2U5BU5D_t3_835;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t3_671;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C_0.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Fin.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
extern "C" void X509Certificate2Collection__ctor_m3_5485 (X509Certificate2Collection_t3_670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection__ctor_m3_5486 (X509Certificate2Collection_t3_670 * __this, X509Certificate2Collection_t3_670 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection__ctor_m3_5487 (X509Certificate2Collection_t3_670 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2[])
extern "C" void X509Certificate2Collection__ctor_m3_5488 (X509Certificate2Collection_t3_670 * __this, X509Certificate2U5BU5D_t3_835* ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
extern "C" X509Certificate2_t3_6 * X509Certificate2Collection_get_Item_m3_5489 (X509Certificate2Collection_t3_670 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::set_Item(System.Int32,System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection_set_Item_m3_5490 (X509Certificate2Collection_t3_670 * __this, int32_t ___index, X509Certificate2_t3_6 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Certificate2Collection_Add_m3_5491 (X509Certificate2Collection_t3_670 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2[])
extern "C" void X509Certificate2Collection_AddRange_m3_5492 (X509Certificate2Collection_t3_670 * __this, X509Certificate2U5BU5D_t3_835* ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection_AddRange_m3_5493 (X509Certificate2Collection_t3_670 * __this, X509Certificate2Collection_t3_670 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Certificate2Collection_Contains_m3_5494 (X509Certificate2Collection_t3_670 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Export(System.Security.Cryptography.X509Certificates.X509ContentType)
extern "C" ByteU5BU5D_t1_72* X509Certificate2Collection_Export_m3_5495 (X509Certificate2Collection_t3_670 * __this, int32_t ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Export(System.Security.Cryptography.X509Certificates.X509ContentType,System.String)
extern "C" ByteU5BU5D_t1_72* X509Certificate2Collection_Export_m3_5496 (X509Certificate2Collection_t3_670 * __this, int32_t ___contentType, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
extern "C" X509Certificate2Collection_t3_670 * X509Certificate2Collection_Find_m3_5497 (X509Certificate2Collection_t3_670 * __this, int32_t ___findType, Object_t * ___findValue, bool ___validOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
extern "C" X509Certificate2Enumerator_t3_671 * X509Certificate2Collection_GetEnumerator_m3_5498 (X509Certificate2Collection_t3_670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.Byte[])
extern "C" void X509Certificate2Collection_Import_m3_5499 (X509Certificate2Collection_t3_670 * __this, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2Collection_Import_m3_5500 (X509Certificate2Collection_t3_670 * __this, ByteU5BU5D_t1_72* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.String)
extern "C" void X509Certificate2Collection_Import_m3_5501 (X509Certificate2Collection_t3_670 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2Collection_Import_m3_5502 (X509Certificate2Collection_t3_670 * __this, String_t* ___fileName, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Insert(System.Int32,System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection_Insert_m3_5503 (X509Certificate2Collection_t3_670 * __this, int32_t ___index, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Remove(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection_Remove_m3_5504 (X509Certificate2Collection_t3_670 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::RemoveRange(System.Security.Cryptography.X509Certificates.X509Certificate2[])
extern "C" void X509Certificate2Collection_RemoveRange_m3_5505 (X509Certificate2Collection_t3_670 * __this, X509Certificate2U5BU5D_t3_835* ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::RemoveRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection_RemoveRange_m3_5506 (X509Certificate2Collection_t3_670 * __this, X509Certificate2Collection_t3_670 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
