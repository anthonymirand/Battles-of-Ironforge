#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IO.Stream
struct Stream_t1_226;

#include "mscorlib_System_IO_Stream.h"

// System.Net.RequestStream
struct  RequestStream_t3_526  : public Stream_t1_226
{
	// System.Byte[] System.Net.RequestStream::buffer
	ByteU5BU5D_t1_72* ___buffer_1;
	// System.Int32 System.Net.RequestStream::offset
	int32_t ___offset_2;
	// System.Int32 System.Net.RequestStream::length
	int32_t ___length_3;
	// System.Int64 System.Net.RequestStream::remaining_body
	int64_t ___remaining_body_4;
	// System.Boolean System.Net.RequestStream::disposed
	bool ___disposed_5;
	// System.IO.Stream System.Net.RequestStream::stream
	Stream_t1_226 * ___stream_6;
};
