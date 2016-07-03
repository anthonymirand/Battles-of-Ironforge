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

// Mono.Security.Cryptography.RC4
struct RC4_t2_18;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.RC4::.ctor()
extern "C" void RC4__ctor_m2_184 (RC4_t2_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::.cctor()
extern "C" void RC4__cctor_m2_185 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RC4::get_IV()
extern "C" ByteU5BU5D_t1_72* RC4_get_IV_m2_186 (RC4_t2_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::set_IV(System.Byte[])
extern "C" void RC4_set_IV_m2_187 (RC4_t2_18 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.RC4 Mono.Security.Cryptography.RC4::Create()
extern "C" RC4_t2_18 * RC4_Create_m2_188 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.RC4 Mono.Security.Cryptography.RC4::Create(System.String)
extern "C" RC4_t2_18 * RC4_Create_m2_189 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
