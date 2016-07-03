#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t1_248;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t1_33;
// System.Net.HttpListenerContext
struct HttpListenerContext_t3_527;
// System.Net.ListenerAsyncResult
struct ListenerAsyncResult_t3_601;

#include "mscorlib_System_Object.h"

// System.Net.ListenerAsyncResult
struct  ListenerAsyncResult_t3_601  : public Object_t
{
	// System.Threading.ManualResetEvent System.Net.ListenerAsyncResult::handle
	ManualResetEvent_t1_248 * ___handle_0;
	// System.Boolean System.Net.ListenerAsyncResult::synch
	bool ___synch_1;
	// System.Boolean System.Net.ListenerAsyncResult::completed
	bool ___completed_2;
	// System.AsyncCallback System.Net.ListenerAsyncResult::cb
	AsyncCallback_t1_28 * ___cb_3;
	// System.Object System.Net.ListenerAsyncResult::state
	Object_t * ___state_4;
	// System.Exception System.Net.ListenerAsyncResult::exception
	Exception_t1_33 * ___exception_5;
	// System.Net.HttpListenerContext System.Net.ListenerAsyncResult::context
	HttpListenerContext_t3_527 * ___context_6;
	// System.Object System.Net.ListenerAsyncResult::locker
	Object_t * ___locker_7;
	// System.Net.ListenerAsyncResult System.Net.ListenerAsyncResult::forward
	ListenerAsyncResult_t3_601 * ___forward_8;
};
