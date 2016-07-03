#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1_248;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Exception
struct Exception_t1_33;

#include "mscorlib_System_Object.h"

// System.Net.HttpStreamAsyncResult
struct  HttpStreamAsyncResult_t3_524  : public Object_t
{
	// System.Object System.Net.HttpStreamAsyncResult::locker
	Object_t * ___locker_0;
	// System.Threading.ManualResetEvent System.Net.HttpStreamAsyncResult::handle
	ManualResetEvent_t1_248 * ___handle_1;
	// System.Boolean System.Net.HttpStreamAsyncResult::completed
	bool ___completed_2;
	// System.Byte[] System.Net.HttpStreamAsyncResult::Buffer
	ByteU5BU5D_t1_72* ___Buffer_3;
	// System.Int32 System.Net.HttpStreamAsyncResult::Offset
	int32_t ___Offset_4;
	// System.Int32 System.Net.HttpStreamAsyncResult::Count
	int32_t ___Count_5;
	// System.AsyncCallback System.Net.HttpStreamAsyncResult::Callback
	AsyncCallback_t1_28 * ___Callback_6;
	// System.Object System.Net.HttpStreamAsyncResult::State
	Object_t * ___State_7;
	// System.Int32 System.Net.HttpStreamAsyncResult::SynchRead
	int32_t ___SynchRead_8;
	// System.Exception System.Net.HttpStreamAsyncResult::Error
	Exception_t1_33 * ___Error_9;
};
