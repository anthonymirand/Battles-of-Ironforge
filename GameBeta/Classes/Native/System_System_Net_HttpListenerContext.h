#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t3_585;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t3_586;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1_715;
// System.Net.HttpConnection
struct HttpConnection_t3_578;
// System.String
struct String_t;
// System.Net.HttpListener
struct HttpListener_t3_581;

#include "mscorlib_System_Object.h"

// System.Net.HttpListenerContext
struct  HttpListenerContext_t3_527  : public Object_t
{
	// System.Net.HttpListenerRequest System.Net.HttpListenerContext::request
	HttpListenerRequest_t3_585 * ___request_0;
	// System.Net.HttpListenerResponse System.Net.HttpListenerContext::response
	HttpListenerResponse_t3_586 * ___response_1;
	// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::user
	Object_t * ___user_2;
	// System.Net.HttpConnection System.Net.HttpListenerContext::cnc
	HttpConnection_t3_578 * ___cnc_3;
	// System.String System.Net.HttpListenerContext::error
	String_t* ___error_4;
	// System.Int32 System.Net.HttpListenerContext::err_status
	int32_t ___err_status_5;
	// System.Net.HttpListener System.Net.HttpListenerContext::Listener
	HttpListener_t3_581 * ___Listener_6;
};
