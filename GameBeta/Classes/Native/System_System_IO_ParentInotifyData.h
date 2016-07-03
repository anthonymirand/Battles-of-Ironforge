#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.IO.InotifyData
struct InotifyData_t3_273;

#include "mscorlib_System_Object.h"

// System.IO.ParentInotifyData
struct  ParentInotifyData_t3_272  : public Object_t
{
	// System.Boolean System.IO.ParentInotifyData::IncludeSubdirs
	bool ___IncludeSubdirs_0;
	// System.Boolean System.IO.ParentInotifyData::Enabled
	bool ___Enabled_1;
	// System.Collections.ArrayList System.IO.ParentInotifyData::children
	ArrayList_t1_114 * ___children_2;
	// System.IO.InotifyData System.IO.ParentInotifyData::data
	InotifyData_t3_273 * ___data_3;
};
