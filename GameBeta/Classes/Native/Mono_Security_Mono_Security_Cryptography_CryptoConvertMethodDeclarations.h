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

// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.RSA
struct RSA_t1_119;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m2_139 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m2_140 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C" ByteU5BU5D_t1_72* CryptoConvert_Trim_m2_141 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[])
extern "C" RSA_t1_119 * CryptoConvert_FromCapiPrivateKeyBlob_m2_142 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1_119 * CryptoConvert_FromCapiPrivateKeyBlob_m2_143 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C" String_t* CryptoConvert_ToHex_m2_144 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
extern "C" uint8_t CryptoConvert_FromHexChar_m2_145 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
extern "C" ByteU5BU5D_t1_72* CryptoConvert_FromHex_m2_146 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
