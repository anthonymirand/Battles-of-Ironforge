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
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1_248;
// System.Exception
struct Exception_t1_33;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Diagnostics.Process
struct Process_t3_209;
// System.IO.Stream
struct Stream_t1_226;
// System.Text.StringBuilder
struct StringBuilder_t1_146;
// System.Diagnostics.Process/AsyncReadHandler
struct AsyncReadHandler_t3_210;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"

// System.Diagnostics.Process/ProcessAsyncReader
struct  ProcessAsyncReader_t3_208  : public Object_t
{
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::Sock
	Object_t * ___Sock_0;
	// System.IntPtr System.Diagnostics.Process/ProcessAsyncReader::handle
	IntPtr_t ___handle_1;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::state
	Object_t * ___state_2;
	// System.AsyncCallback System.Diagnostics.Process/ProcessAsyncReader::callback
	AsyncCallback_t1_28 * ___callback_3;
	// System.Threading.ManualResetEvent System.Diagnostics.Process/ProcessAsyncReader::wait_handle
	ManualResetEvent_t1_248 * ___wait_handle_4;
	// System.Exception System.Diagnostics.Process/ProcessAsyncReader::delayedException
	Exception_t1_33 * ___delayedException_5;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::EndPoint
	Object_t * ___EndPoint_6;
	// System.Byte[] System.Diagnostics.Process/ProcessAsyncReader::buffer
	ByteU5BU5D_t1_72* ___buffer_7;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::Size
	int32_t ___Size_9;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::SockFlags
	int32_t ___SockFlags_10;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::AcceptSocket
	Object_t * ___AcceptSocket_11;
	// System.Object[] System.Diagnostics.Process/ProcessAsyncReader::Addresses
	ObjectU5BU5D_t1_158* ___Addresses_12;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::port
	int32_t ___port_13;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::Buffers
	Object_t * ___Buffers_14;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::acc_socket
	Object_t * ___acc_socket_16;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::total
	int32_t ___total_17;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::completed_sync
	bool ___completed_sync_18;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::completed
	bool ___completed_19;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::err_out
	bool ___err_out_20;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::error
	int32_t ___error_21;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::operation
	int32_t ___operation_22;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::ares
	Object_t * ___ares_23;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::EndCalled
	int32_t ___EndCalled_24;
	// System.Diagnostics.Process System.Diagnostics.Process/ProcessAsyncReader::process
	Process_t3_209 * ___process_25;
	// System.IO.Stream System.Diagnostics.Process/ProcessAsyncReader::stream
	Stream_t1_226 * ___stream_26;
	// System.Text.StringBuilder System.Diagnostics.Process/ProcessAsyncReader::sb
	StringBuilder_t1_146 * ___sb_27;
	// System.Diagnostics.Process/AsyncReadHandler System.Diagnostics.Process/ProcessAsyncReader::ReadHandler
	AsyncReadHandler_t3_210 * ___ReadHandler_28;
};
