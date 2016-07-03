#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Compression.DeflateStream
struct DeflateStream_t3_248;

#include "mscorlib_System_IO_Stream.h"

// System.IO.Compression.GZipStream
struct  GZipStream_t3_249  : public Stream_t1_226
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t3_248 * ___deflateStream_1;
};
