#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t3_215;
// System.EventHandler
struct EventHandler_t1_275;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t3_212;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t1_261;
// System.IO.StreamWriter
struct StreamWriter_t1_262;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t3_213;
// System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t3_208;
// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t3_214;

#include "System_System_ComponentModel_Component.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Diagnostics_Process_AsyncModes.h"

// System.Diagnostics.Process
struct  Process_t3_209  : public Component_t3_93
{
	// System.IntPtr System.Diagnostics.Process::process_handle
	IntPtr_t ___process_handle_4;
	// System.Int32 System.Diagnostics.Process::pid
	int32_t ___pid_5;
	// System.Boolean System.Diagnostics.Process::enableRaisingEvents
	bool ___enableRaisingEvents_6;
	// System.Boolean System.Diagnostics.Process::already_waiting
	bool ___already_waiting_7;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	Object_t * ___synchronizingObject_8;
	// System.EventHandler System.Diagnostics.Process::exited_event
	EventHandler_t1_275 * ___exited_event_9;
	// System.IntPtr System.Diagnostics.Process::stdout_rd
	IntPtr_t ___stdout_rd_10;
	// System.IntPtr System.Diagnostics.Process::stderr_rd
	IntPtr_t ___stderr_rd_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::module_collection
	ProcessModuleCollection_t3_212 * ___module_collection_12;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_13;
	// System.IO.StreamReader System.Diagnostics.Process::error_stream
	StreamReader_t1_261 * ___error_stream_14;
	// System.IO.StreamWriter System.Diagnostics.Process::input_stream
	StreamWriter_t1_262 * ___input_stream_15;
	// System.IO.StreamReader System.Diagnostics.Process::output_stream
	StreamReader_t1_261 * ___output_stream_16;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::start_info
	ProcessStartInfo_t3_213 * ___start_info_17;
	// System.Diagnostics.Process/AsyncModes System.Diagnostics.Process::async_mode
	int32_t ___async_mode_18;
	// System.Boolean System.Diagnostics.Process::output_canceled
	bool ___output_canceled_19;
	// System.Boolean System.Diagnostics.Process::error_canceled
	bool ___error_canceled_20;
	// System.Diagnostics.Process/ProcessAsyncReader System.Diagnostics.Process::async_output
	ProcessAsyncReader_t3_208 * ___async_output_21;
	// System.Diagnostics.Process/ProcessAsyncReader System.Diagnostics.Process::async_error
	ProcessAsyncReader_t3_208 * ___async_error_22;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_23;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::OutputDataReceived
	DataReceivedEventHandler_t3_214 * ___OutputDataReceived_24;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::ErrorDataReceived
	DataReceivedEventHandler_t3_214 * ___ErrorDataReceived_25;
};
