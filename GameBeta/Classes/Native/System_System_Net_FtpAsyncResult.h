#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FtpWebResponse
struct FtpWebResponse_t3_565;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1_248;
// System.Exception
struct Exception_t1_33;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.IO.Stream
struct Stream_t1_226;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// System.Net.FtpAsyncResult
struct  FtpAsyncResult_t3_564  : public Object_t
{
	// System.Net.FtpWebResponse System.Net.FtpAsyncResult::response
	FtpWebResponse_t3_565 * ___response_0;
	// System.Threading.ManualResetEvent System.Net.FtpAsyncResult::waitHandle
	ManualResetEvent_t1_248 * ___waitHandle_1;
	// System.Exception System.Net.FtpAsyncResult::exception
	Exception_t1_33 * ___exception_2;
	// System.AsyncCallback System.Net.FtpAsyncResult::callback
	AsyncCallback_t1_28 * ___callback_3;
	// System.IO.Stream System.Net.FtpAsyncResult::stream
	Stream_t1_226 * ___stream_4;
	// System.Object System.Net.FtpAsyncResult::state
	Object_t * ___state_5;
	// System.Boolean System.Net.FtpAsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Net.FtpAsyncResult::synch
	bool ___synch_7;
	// System.Object System.Net.FtpAsyncResult::locker
	Object_t * ___locker_8;
};
