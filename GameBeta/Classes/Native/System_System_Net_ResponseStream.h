#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpListenerResponse
struct HttpListenerResponse_t3_586;
// System.IO.Stream
struct Stream_t1_226;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_IO_Stream.h"

// System.Net.ResponseStream
struct  ResponseStream_t3_580  : public Stream_t1_226
{
	// System.Net.HttpListenerResponse System.Net.ResponseStream::response
	HttpListenerResponse_t3_586 * ___response_1;
	// System.Boolean System.Net.ResponseStream::ignore_errors
	bool ___ignore_errors_2;
	// System.Boolean System.Net.ResponseStream::disposed
	bool ___disposed_3;
	// System.Boolean System.Net.ResponseStream::trailer_sent
	bool ___trailer_sent_4;
	// System.IO.Stream System.Net.ResponseStream::stream
	Stream_t1_226 * ___stream_5;
};
struct ResponseStream_t3_580_StaticFields{
	// System.Byte[] System.Net.ResponseStream::crlf
	ByteU5BU5D_t1_72* ___crlf_6;
};
