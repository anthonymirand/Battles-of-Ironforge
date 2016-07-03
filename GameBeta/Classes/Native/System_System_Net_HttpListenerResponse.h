#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t1_227;
// System.String
struct String_t;
// System.Net.CookieCollection
struct CookieCollection_t3_531;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Net.ResponseStream
struct ResponseStream_t3_580;
// System.Version
struct Version_t1_331;
// System.Net.HttpListenerContext
struct HttpListenerContext_t3_527;

#include "mscorlib_System_Object.h"

// System.Net.HttpListenerResponse
struct  HttpListenerResponse_t3_586  : public Object_t
{
	// System.Boolean System.Net.HttpListenerResponse::disposed
	bool ___disposed_0;
	// System.Text.Encoding System.Net.HttpListenerResponse::content_encoding
	Encoding_t1_227 * ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerResponse::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerResponse::cl_set
	bool ___cl_set_3;
	// System.String System.Net.HttpListenerResponse::content_type
	String_t* ___content_type_4;
	// System.Net.CookieCollection System.Net.HttpListenerResponse::cookies
	CookieCollection_t3_531 * ___cookies_5;
	// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::headers
	WebHeaderCollection_t3_522 * ___headers_6;
	// System.Boolean System.Net.HttpListenerResponse::keep_alive
	bool ___keep_alive_7;
	// System.Net.ResponseStream System.Net.HttpListenerResponse::output_stream
	ResponseStream_t3_580 * ___output_stream_8;
	// System.Version System.Net.HttpListenerResponse::version
	Version_t1_331 * ___version_9;
	// System.String System.Net.HttpListenerResponse::location
	String_t* ___location_10;
	// System.Int32 System.Net.HttpListenerResponse::status_code
	int32_t ___status_code_11;
	// System.String System.Net.HttpListenerResponse::status_description
	String_t* ___status_description_12;
	// System.Boolean System.Net.HttpListenerResponse::chunked
	bool ___chunked_13;
	// System.Net.HttpListenerContext System.Net.HttpListenerResponse::context
	HttpListenerContext_t3_527 * ___context_14;
	// System.Boolean System.Net.HttpListenerResponse::HeadersSent
	bool ___HeadersSent_15;
	// System.Boolean System.Net.HttpListenerResponse::force_close_chunked
	bool ___force_close_chunked_16;
};
