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
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1_99;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1_597;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m1_1302 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m1_1303 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___array1, ByteU5BU5D_t1_72* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t1_72* PKCS1_I2OSP_m1_1304 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_OS2IP_m1_1305 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_RSAEP_m1_1306 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSADP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_RSADP_m1_1307 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_RSASP1_m1_1308 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_RSAVP1_m1_1309 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_Encrypt_v15_m1_1310 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, RandomNumberGenerator_t1_99 * ___rng, ByteU5BU5D_t1_72* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Decrypt_v15(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_Decrypt_v15_m1_1311 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___C, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS1_Sign_v15_m1_1312 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, HashAlgorithm_t1_597 * ___hash, ByteU5BU5D_t1_72* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m1_1313 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, HashAlgorithm_t1_597 * ___hash, ByteU5BU5D_t1_72* ___hashValue, ByteU5BU5D_t1_72* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m1_1314 (Object_t * __this /* static, unused */, RSA_t1_119 * ___rsa, HashAlgorithm_t1_597 * ___hash, ByteU5BU5D_t1_72* ___hashValue, ByteU5BU5D_t1_72* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t1_72* PKCS1_Encode_v15_m1_1315 (Object_t * __this /* static, unused */, HashAlgorithm_t1_597 * ___hash, ByteU5BU5D_t1_72* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
