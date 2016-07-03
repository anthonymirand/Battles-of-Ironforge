#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.RBTree/Node
struct Node_t3_26;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1_936;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.RBTree
struct  RBTree_t3_28  : public Object_t
{
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::root
	Node_t3_26 * ___root_0;
	// System.Object System.Collections.Generic.RBTree::hlp
	Object_t * ___hlp_1;
	// System.UInt32 System.Collections.Generic.RBTree::version
	uint32_t ___version_2;
};
struct RBTree_t3_28_ThreadStaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::cached_path
	List_1_t1_936 * ___cached_path_3;
};
