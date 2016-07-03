#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.SourceSwitch
struct SourceSwitch_t3_226;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3_237;

#include "mscorlib_System_Object.h"

// System.Diagnostics.TraceSource
struct  TraceSource_t3_241  : public Object_t
{
	// System.Diagnostics.SourceSwitch System.Diagnostics.TraceSource::source_switch
	SourceSwitch_t3_226 * ___source_switch_0;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSource::listeners
	TraceListenerCollection_t3_237 * ___listeners_1;
};
