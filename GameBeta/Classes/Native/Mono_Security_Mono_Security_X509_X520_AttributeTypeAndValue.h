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

// Mono.Security.X509.X520/AttributeTypeAndValue
struct  AttributeTypeAndValue_t2_45  : public Object_t
{
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520/AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;
};
