﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3_661;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.Oid
struct Oid_t3_662;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C" void AsnEncodedData__ctor_m3_5690 (AsnEncodedData_t3_661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C" void AsnEncodedData__ctor_m3_5691 (AsnEncodedData_t3_661 * __this, String_t* ___oid, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C" void AsnEncodedData__ctor_m3_5692 (AsnEncodedData_t3_661 * __this, Oid_t3_662 * ___oid, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.AsnEncodedData)
extern "C" void AsnEncodedData__ctor_m3_5693 (AsnEncodedData_t3_661 * __this, AsnEncodedData_t3_661 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Byte[])
extern "C" void AsnEncodedData__ctor_m3_5694 (AsnEncodedData_t3_661 * __this, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C" Oid_t3_662 * AsnEncodedData_get_Oid_m3_5695 (AsnEncodedData_t3_661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C" void AsnEncodedData_set_Oid_m3_5696 (AsnEncodedData_t3_661 * __this, Oid_t3_662 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C" ByteU5BU5D_t1_72* AsnEncodedData_get_RawData_m3_5697 (AsnEncodedData_t3_661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C" void AsnEncodedData_set_RawData_m3_5698 (AsnEncodedData_t3_661 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void AsnEncodedData_CopyFrom_m3_5699 (AsnEncodedData_t3_661 * __this, AsnEncodedData_t3_661 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Format(System.Boolean)
extern "C" String_t* AsnEncodedData_Format_m3_5700 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C" String_t* AsnEncodedData_ToString_m3_5701 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C" String_t* AsnEncodedData_Default_m3_5702 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_BasicConstraintsExtension_m3_5703 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_EnhancedKeyUsageExtension_m3_5704 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_KeyUsageExtension_m3_5705 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3_5706 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectAltName_m3_5707 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C" String_t* AsnEncodedData_NetscapeCertType_m3_5708 (AsnEncodedData_t3_661 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
