#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t3_869;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "System_System_Collections_Generic_SortedList_2_EnumeratorMod.h"

// System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t3_877  : public Object_t
{
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/Enumerator::host
	SortedList_2_t3_869 * ___host_0;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator::size
	int32_t ___size_3;
	// System.Collections.Generic.SortedList`2/EnumeratorMode<TKey,TValue> System.Collections.Generic.SortedList`2/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.Generic.SortedList`2/Enumerator::currentKey
	Object_t * ___currentKey_5;
	// System.Object System.Collections.Generic.SortedList`2/Enumerator::currentValue
	Object_t * ___currentValue_6;
	// System.Boolean System.Collections.Generic.SortedList`2/Enumerator::invalid
	bool ___invalid_7;
};
struct Enumerator_t3_877_StaticFields{
	// System.String System.Collections.Generic.SortedList`2/Enumerator::xstr
	String_t* ___xstr_8;
};
