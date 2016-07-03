#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3_177;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t3_815;
// System.Collections.Generic.LinkedListNode`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedListNode_1_t3_845;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedListNode`1<System.ComponentModel.TypeDescriptionProvider>
struct  LinkedListNode_1_t3_845  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1::item
	TypeDescriptionProvider_t3_177 * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t3_815 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t3_845 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t3_845 * ___back_3;
};
