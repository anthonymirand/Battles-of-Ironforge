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

#include "mscorlib_System_Security_CodeAccessPermission.h"

// System.Net.WebPermission
struct  WebPermission_t3_639  : public CodeAccessPermission_t1_649
{
	// System.Collections.ArrayList System.Net.WebPermission::m_acceptList
	ArrayList_t1_114 * ___m_acceptList_0;
	// System.Collections.ArrayList System.Net.WebPermission::m_connectList
	ArrayList_t1_114 * ___m_connectList_1;
	// System.Boolean System.Net.WebPermission::m_noRestriction
	bool ___m_noRestriction_2;
};
