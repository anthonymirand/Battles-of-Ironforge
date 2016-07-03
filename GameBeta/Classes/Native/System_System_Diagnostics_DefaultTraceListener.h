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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_78;

#include "System_System_Diagnostics_TraceListener.h"

// System.Diagnostics.DefaultTraceListener
struct  DefaultTraceListener_t3_202  : public TraceListener_t3_203
{
	// System.String System.Diagnostics.DefaultTraceListener::logFileName
	String_t* ___logFileName_13;
	// System.Boolean System.Diagnostics.DefaultTraceListener::assertUiEnabled
	bool ___assertUiEnabled_14;
};
struct DefaultTraceListener_t3_202_StaticFields{
	// System.Boolean System.Diagnostics.DefaultTraceListener::OnWin32
	bool ___OnWin32_10;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTracePrefix
	String_t* ___MonoTracePrefix_11;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTraceFile
	String_t* ___MonoTraceFile_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Diagnostics.DefaultTraceListener::<>f__switch$map0
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map0_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Diagnostics.DefaultTraceListener::<>f__switch$map1
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map1_16;
};
