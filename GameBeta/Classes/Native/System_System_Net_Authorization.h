#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3_517;

#include "mscorlib_System_Object.h"

// System.Net.Authorization
struct  Authorization_t3_516  : public Object_t
{
	// System.String System.Net.Authorization::token
	String_t* ___token_0;
	// System.Boolean System.Net.Authorization::complete
	bool ___complete_1;
	// System.String System.Net.Authorization::connectionGroupId
	String_t* ___connectionGroupId_2;
	// System.String[] System.Net.Authorization::protectionRealm
	StringU5BU5D_t1_206* ___protectionRealm_3;
	// System.Net.IAuthenticationModule System.Net.Authorization::module
	Object_t * ___module_4;
};
