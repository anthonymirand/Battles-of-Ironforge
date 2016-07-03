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
// System.Net.HttpStreamAsyncResult
struct HttpStreamAsyncResult_t3_524;

#include "mscorlib_System_Object.h"

// System.Net.ChunkedInputStream/ReadBufferState
struct  ReadBufferState_t3_523  : public Object_t
{
	// System.Byte[] System.Net.ChunkedInputStream/ReadBufferState::Buffer
	ByteU5BU5D_t1_72* ___Buffer_0;
	// System.Int32 System.Net.ChunkedInputStream/ReadBufferState::Offset
	int32_t ___Offset_1;
	// System.Int32 System.Net.ChunkedInputStream/ReadBufferState::Count
	int32_t ___Count_2;
	// System.Int32 System.Net.ChunkedInputStream/ReadBufferState::InitialCount
	int32_t ___InitialCount_3;
	// System.Net.HttpStreamAsyncResult System.Net.ChunkedInputStream/ReadBufferState::Ares
	HttpStreamAsyncResult_t3_524 * ___Ares_4;
};
