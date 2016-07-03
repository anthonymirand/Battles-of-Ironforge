#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1_936;
// System.Collections.Generic.RBTree/Node
struct Node_t3_26;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>
struct  Enumerator_t1_1440 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1_936 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Node_t3_26 * ___current_3;
};
