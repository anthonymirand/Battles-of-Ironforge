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

// Mono.Security.Authenticode.PrivateKey
struct PrivateKey_t2_16;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1_119;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Authenticode.PrivateKey::.ctor(System.Byte[],System.String)
extern "C" void PrivateKey__ctor_m2_118 (PrivateKey_t2_16 * __this, ByteU5BU5D_t1_72* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::get_RSA()
extern "C" RSA_t1_119 * PrivateKey_get_RSA_m2_119 (PrivateKey_t2_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.PrivateKey::DeriveKey(System.Byte[],System.String)
extern "C" ByteU5BU5D_t1_72* PrivateKey_DeriveKey_m2_120 (PrivateKey_t2_16 * __this, ByteU5BU5D_t1_72* ___salt, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.PrivateKey::Decode(System.Byte[],System.String)
extern "C" bool PrivateKey_Decode_m2_121 (PrivateKey_t2_16 * __this, ByteU5BU5D_t1_72* ___pvk, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Authenticode.PrivateKey Mono.Security.Authenticode.PrivateKey::CreateFromFile(System.String)
extern "C" PrivateKey_t2_16 * PrivateKey_CreateFromFile_m2_122 (Object_t * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Authenticode.PrivateKey Mono.Security.Authenticode.PrivateKey::CreateFromFile(System.String,System.String)
extern "C" PrivateKey_t2_16 * PrivateKey_CreateFromFile_m2_123 (Object_t * __this /* static, unused */, String_t* ___filename, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
