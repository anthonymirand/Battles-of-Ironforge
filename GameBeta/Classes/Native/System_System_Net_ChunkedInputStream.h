#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.ChunkStream
struct ChunkStream_t3_521;
// System.Net.HttpListenerContext
struct HttpListenerContext_t3_527;

#include "System_System_Net_RequestStream.h"

// System.Net.ChunkedInputStream
struct  ChunkedInputStream_t3_525  : public RequestStream_t3_526
{
	// System.Boolean System.Net.ChunkedInputStream::disposed
	bool ___disposed_7;
	// System.Net.ChunkStream System.Net.ChunkedInputStream::decoder
	ChunkStream_t3_521 * ___decoder_8;
	// System.Net.HttpListenerContext System.Net.ChunkedInputStream::context
	HttpListenerContext_t3_527 * ___context_9;
	// System.Boolean System.Net.ChunkedInputStream::no_more_data
	bool ___no_more_data_10;
};
