#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1_883;
// System.Net.HttpListener
struct HttpListener_t3_581;

#include "mscorlib_System_Object.h"

// System.Net.HttpListenerPrefixCollection
struct  HttpListenerPrefixCollection_t3_582  : public Object_t
{
	// System.Collections.Generic.List`1<System.String> System.Net.HttpListenerPrefixCollection::prefixes
	List_1_t1_883 * ___prefixes_0;
	// System.Net.HttpListener System.Net.HttpListenerPrefixCollection::listener
	HttpListener_t3_581 * ___listener_1;
};
