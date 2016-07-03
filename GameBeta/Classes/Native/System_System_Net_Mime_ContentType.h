#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t1_227;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Char[]
struct CharU5BU5D_t1_16;

#include "mscorlib_System_Object.h"

// System.Net.Mime.ContentType
struct  ContentType_t3_305  : public Object_t
{
	// System.String System.Net.Mime.ContentType::mediaType
	String_t* ___mediaType_1;
	// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentType::parameters
	StringDictionary_t3_49 * ___parameters_2;
};
struct ContentType_t3_305_StaticFields{
	// System.Text.Encoding System.Net.Mime.ContentType::utf8unmarked
	Encoding_t1_227 * ___utf8unmarked_0;
	// System.Char[] System.Net.Mime.ContentType::especials
	CharU5BU5D_t1_16* ___especials_3;
};
