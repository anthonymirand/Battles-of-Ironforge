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
#include "System_System_Diagnostics_SourceLevels.h"

// System.Diagnostics.TraceSourceInfo
struct  TraceSourceInfo_t3_242  : public Object_t
{
	// System.String System.Diagnostics.TraceSourceInfo::name
	String_t* ___name_0;
	// System.Diagnostics.SourceLevels System.Diagnostics.TraceSourceInfo::levels
	int32_t ___levels_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::listeners
	TraceListenerCollection_t3_237 * ___listeners_2;
};
