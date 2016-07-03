#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3_582;
// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_t3_583;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Collections.ArrayList
struct ArrayList_t1_114;

#include "mscorlib_System_Object.h"
#include "System_System_Net_AuthenticationSchemes.h"

// System.Net.HttpListener
struct  HttpListener_t3_581  : public Object_t
{
	// System.Net.AuthenticationSchemes System.Net.HttpListener::auth_schemes
	int32_t ___auth_schemes_0;
	// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::prefixes
	HttpListenerPrefixCollection_t3_582 * ___prefixes_1;
	// System.Net.AuthenticationSchemeSelector System.Net.HttpListener::auth_selector
	AuthenticationSchemeSelector_t3_583 * ___auth_selector_2;
	// System.String System.Net.HttpListener::realm
	String_t* ___realm_3;
	// System.Boolean System.Net.HttpListener::ignore_write_exceptions
	bool ___ignore_write_exceptions_4;
	// System.Boolean System.Net.HttpListener::unsafe_ntlm_auth
	bool ___unsafe_ntlm_auth_5;
	// System.Boolean System.Net.HttpListener::listening
	bool ___listening_6;
	// System.Boolean System.Net.HttpListener::disposed
	bool ___disposed_7;
	// System.Collections.Hashtable System.Net.HttpListener::registry
	Hashtable_t1_173 * ___registry_8;
	// System.Collections.ArrayList System.Net.HttpListener::ctx_queue
	ArrayList_t1_114 * ___ctx_queue_9;
	// System.Collections.ArrayList System.Net.HttpListener::wait_queue
	ArrayList_t1_114 * ___wait_queue_10;
};
