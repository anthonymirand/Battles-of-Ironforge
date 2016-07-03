#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t3_3;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// System.Net.CredentialCache/CredentialCacheKey
struct  CredentialCacheKey_t3_534  : public Object_t
{
	// System.Uri System.Net.CredentialCache/CredentialCacheKey::uriPrefix
	Uri_t3_3 * ___uriPrefix_0;
	// System.String System.Net.CredentialCache/CredentialCacheKey::authType
	String_t* ___authType_1;
	// System.String System.Net.CredentialCache/CredentialCacheKey::absPath
	String_t* ___absPath_2;
	// System.Int32 System.Net.CredentialCache/CredentialCacheKey::len
	int32_t ___len_3;
	// System.Int32 System.Net.CredentialCache/CredentialCacheKey::hash
	int32_t ___hash_4;
};
