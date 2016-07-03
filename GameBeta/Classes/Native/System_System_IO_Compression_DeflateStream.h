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
// System.IO.Stream
struct Stream_t1_226;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3_245;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_IO_Stream.h"
#include "System_System_IO_Compression_CompressionMode.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"

// System.IO.Compression.DeflateStream
struct  DeflateStream_t3_248  : public Stream_t1_226
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t1_226 * ___base_stream_3;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_4;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_5;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_6;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t3_245 * ___feeder_7;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_8;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t1_72* ___io_buffer_9;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t1_408  ___data_10;
};
