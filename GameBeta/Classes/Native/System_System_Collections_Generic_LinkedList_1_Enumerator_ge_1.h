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
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t3_849;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t3_850;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>
struct  Enumerator_t3_888 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::list
	LinkedList_1_t3_849 * ___list_3;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::current
	LinkedListNode_1_t3_850 * ___current_4;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::index
	int32_t ___index_5;
	// System.UInt32 System.Collections.Generic.LinkedList`1/Enumerator::version
	uint32_t ___version_6;
};
