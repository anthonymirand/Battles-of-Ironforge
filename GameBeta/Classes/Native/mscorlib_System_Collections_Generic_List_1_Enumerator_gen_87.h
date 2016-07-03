#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Lean.LeanFinger/Snapshot>
struct List_1_t1_1229;
// Lean.LeanFinger/Snapshot
struct Snapshot_t9_80;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<Lean.LeanFinger/Snapshot>
struct  Enumerator_t1_2235 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1_1229 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Snapshot_t9_80 * ___current_3;
};
