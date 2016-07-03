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

#include "mscorlib_System_Object.h"
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Text.RegularExpressions.RegexCompilationInfo
struct  RegexCompilationInfo_t3_709  : public Object_t
{
	// System.String System.Text.RegularExpressions.RegexCompilationInfo::pattern
	String_t* ___pattern_0;
	// System.String System.Text.RegularExpressions.RegexCompilationInfo::name
	String_t* ___name_1;
	// System.String System.Text.RegularExpressions.RegexCompilationInfo::nspace
	String_t* ___nspace_2;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexCompilationInfo::options
	int32_t ___options_3;
	// System.Boolean System.Text.RegularExpressions.RegexCompilationInfo::isPublic
	bool ___isPublic_4;
};
