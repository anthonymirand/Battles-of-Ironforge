#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Diagnostics.TraceFilter
struct TraceFilter_t3_224;
// System.String
struct String_t;

#include "mscorlib_System_MarshalByRefObject.h"
#include "System_System_Diagnostics_TraceOptions.h"

// System.Diagnostics.TraceListener
struct  TraceListener_t3_203  : public MarshalByRefObject_t1_58
{
	// System.Int32 System.Diagnostics.TraceListener::indentLevel
	int32_t ___indentLevel_1;
	// System.Int32 System.Diagnostics.TraceListener::indentSize
	int32_t ___indentSize_2;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::attributes
	StringDictionary_t3_49 * ___attributes_3;
	// System.Diagnostics.TraceFilter System.Diagnostics.TraceListener::filter
	TraceFilter_t3_224 * ___filter_4;
	// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::options
	int32_t ___options_5;
	// System.String System.Diagnostics.TraceListener::name
	String_t* ___name_6;
	// System.Boolean System.Diagnostics.TraceListener::needIndent
	bool ___needIndent_7;
};
