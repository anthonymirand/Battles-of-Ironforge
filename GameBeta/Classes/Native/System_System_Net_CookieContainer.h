#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.CookieCollection
struct CookieCollection_t3_531;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_78;

#include "mscorlib_System_Object.h"

// System.Net.CookieContainer
struct  CookieContainer_t3_532  : public Object_t
{
	// System.Int32 System.Net.CookieContainer::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Net.CookieContainer::perDomainCapacity
	int32_t ___perDomainCapacity_4;
	// System.Int32 System.Net.CookieContainer::maxCookieSize
	int32_t ___maxCookieSize_5;
	// System.Net.CookieCollection System.Net.CookieContainer::cookies
	CookieCollection_t3_531 * ___cookies_6;
};
struct CookieContainer_t3_532_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.CookieContainer::<>f__switch$map4
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map4_7;
};
