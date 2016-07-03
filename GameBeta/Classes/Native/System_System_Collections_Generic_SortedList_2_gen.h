#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1443;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t1_1442;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct  SortedList_2_t3_869  : public Object_t
{
	// System.Int32 System.Collections.Generic.SortedList`2::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Generic.SortedList`2::modificationCount
	int32_t ___modificationCount_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Generic.SortedList`2::table
	KeyValuePair_2U5BU5D_t1_1443* ___table_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	Object_t* ___comparer_4;
	// System.Int32 System.Collections.Generic.SortedList`2::defaultCapacity
	int32_t ___defaultCapacity_5;
};
struct SortedList_2_t3_869_StaticFields{
	// System.Int32 System.Collections.Generic.SortedList`2::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
};
