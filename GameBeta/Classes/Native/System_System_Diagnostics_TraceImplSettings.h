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
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3_237;

#include "mscorlib_System_Object.h"

// System.Diagnostics.TraceImplSettings
struct  TraceImplSettings_t3_236  : public Object_t
{
	// System.Boolean System.Diagnostics.TraceImplSettings::AutoFlush
	bool ___AutoFlush_1;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentLevel
	int32_t ___IndentLevel_2;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentSize
	int32_t ___IndentSize_3;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImplSettings::Listeners
	TraceListenerCollection_t3_237 * ___Listeners_4;
};
