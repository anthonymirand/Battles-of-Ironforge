#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.SearchPattern2/Op
struct Op_t3_289;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1_16;

#include "mscorlib_System_Object.h"

// System.IO.SearchPattern2
struct  SearchPattern2_t3_264  : public Object_t
{
	// System.IO.SearchPattern2/Op System.IO.SearchPattern2::ops
	Op_t3_289 * ___ops_0;
	// System.Boolean System.IO.SearchPattern2::ignore
	bool ___ignore_1;
	// System.Boolean System.IO.SearchPattern2::hasWildcard
	bool ___hasWildcard_2;
	// System.String System.IO.SearchPattern2::pattern
	String_t* ___pattern_3;
};
struct SearchPattern2_t3_264_StaticFields{
	// System.Char[] System.IO.SearchPattern2::WildcardChars
	CharU5BU5D_t1_16* ___WildcardChars_4;
	// System.Char[] System.IO.SearchPattern2::InvalidChars
	CharU5BU5D_t1_16* ___InvalidChars_5;
};
