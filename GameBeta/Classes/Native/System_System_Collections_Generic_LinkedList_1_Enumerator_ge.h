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
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3_852;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3_853;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct  Enumerator_t3_854 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::list
	LinkedList_1_t3_852 * ___list_3;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::current
	LinkedListNode_1_t3_853 * ___current_4;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::index
	int32_t ___index_5;
	// System.UInt32 System.Collections.Generic.LinkedList`1/Enumerator::version
	uint32_t ___version_6;
};
