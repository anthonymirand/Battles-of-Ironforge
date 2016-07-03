#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.KeventWatcher
struct KeventWatcher_t3_280;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Threading.Thread
struct Thread_t1_444;

#include "mscorlib_System_Object.h"

// System.IO.KeventWatcher
struct  KeventWatcher_t3_280  : public Object_t
{
};
struct KeventWatcher_t3_280_StaticFields{
	// System.Boolean System.IO.KeventWatcher::failed
	bool ___failed_0;
	// System.IO.KeventWatcher System.IO.KeventWatcher::instance
	KeventWatcher_t3_280 * ___instance_1;
	// System.Collections.Hashtable System.IO.KeventWatcher::watches
	Hashtable_t1_173 * ___watches_2;
	// System.Collections.Hashtable System.IO.KeventWatcher::requests
	Hashtable_t1_173 * ___requests_3;
	// System.Threading.Thread System.IO.KeventWatcher::thread
	Thread_t1_444 * ___thread_4;
	// System.Int32 System.IO.KeventWatcher::conn
	int32_t ___conn_5;
	// System.Boolean System.IO.KeventWatcher::stop
	bool ___stop_6;
};
