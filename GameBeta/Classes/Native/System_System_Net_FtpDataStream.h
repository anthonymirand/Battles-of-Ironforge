#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FtpWebRequest
struct FtpWebRequest_t3_569;
// System.IO.Stream
struct Stream_t1_226;

#include "mscorlib_System_IO_Stream.h"

// System.Net.FtpDataStream
struct  FtpDataStream_t3_568  : public Stream_t1_226
{
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t3_569 * ___request_1;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t1_226 * ___networkStream_2;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_3;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_4;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_5;
};
