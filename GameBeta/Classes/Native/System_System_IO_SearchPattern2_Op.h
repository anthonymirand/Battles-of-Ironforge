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
// System.IO.SearchPattern2/Op
struct Op_t3_289;

#include "mscorlib_System_Object.h"
#include "System_System_IO_SearchPattern2_OpCode.h"

// System.IO.SearchPattern2/Op
struct  Op_t3_289  : public Object_t
{
	// System.IO.SearchPattern2/OpCode System.IO.SearchPattern2/Op::Code
	int32_t ___Code_0;
	// System.String System.IO.SearchPattern2/Op::Argument
	String_t* ___Argument_1;
	// System.IO.SearchPattern2/Op System.IO.SearchPattern2/Op::Next
	Op_t3_289 * ___Next_2;
};
