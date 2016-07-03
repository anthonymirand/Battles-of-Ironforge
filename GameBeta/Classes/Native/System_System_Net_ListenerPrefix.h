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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3_492;
// System.Net.HttpListener
struct HttpListener_t3_581;

#include "mscorlib_System_Object.h"

// System.Net.ListenerPrefix
struct  ListenerPrefix_t3_579  : public Object_t
{
	// System.String System.Net.ListenerPrefix::original
	String_t* ___original_0;
	// System.String System.Net.ListenerPrefix::host
	String_t* ___host_1;
	// System.UInt16 System.Net.ListenerPrefix::port
	uint16_t ___port_2;
	// System.String System.Net.ListenerPrefix::path
	String_t* ___path_3;
	// System.Boolean System.Net.ListenerPrefix::secure
	bool ___secure_4;
	// System.Net.IPAddress[] System.Net.ListenerPrefix::addresses
	IPAddressU5BU5D_t3_492* ___addresses_5;
	// System.Net.HttpListener System.Net.ListenerPrefix::Listener
	HttpListener_t3_581 * ___Listener_6;
};
