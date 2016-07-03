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

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct RSAPKCS1KeyExchangeDeformatter_t1_618;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeDeformatter__ctor_m1_4238 (RSAPKCS1KeyExchangeDeformatter_t1_618 * __this, AsymmetricAlgorithm_t1_575 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t1_72* RSAPKCS1KeyExchangeDeformatter_DecryptKeyExchange_m1_4239 (RSAPKCS1KeyExchangeDeformatter_t1_618 * __this, ByteU5BU5D_t1_72* ___rgbIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeDeformatter_SetKey_m1_4240 (RSAPKCS1KeyExchangeDeformatter_t1_618 * __this, AsymmetricAlgorithm_t1_575 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
