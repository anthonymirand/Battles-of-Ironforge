#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t1_119;

#include "mscorlib_System_Object.h"

// Mono.Security.Authenticode.PrivateKey
struct  PrivateKey_t2_16  : public Object_t
{
	// System.Boolean Mono.Security.Authenticode.PrivateKey::encrypted
	bool ___encrypted_0;
	// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::rsa
	RSA_t1_119 * ___rsa_1;
	// System.Boolean Mono.Security.Authenticode.PrivateKey::weak
	bool ___weak_2;
	// System.Int32 Mono.Security.Authenticode.PrivateKey::keyType
	int32_t ___keyType_3;
};
