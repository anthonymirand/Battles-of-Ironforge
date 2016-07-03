#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.FAMWatcher
struct FAMWatcher_t3_259;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Threading.Thread
struct Thread_t1_444;

#include "mscorlib_System_Object.h"
#include "System_System_IO_NotifyFilters.h"
#include "System_System_IO_FAMConnection.h"

// System.IO.FAMWatcher
struct  FAMWatcher_t3_259  : public Object_t
{
};
struct FAMWatcher_t3_259_StaticFields{
	// System.Boolean System.IO.FAMWatcher::failed
	bool ___failed_1;
	// System.IO.FAMWatcher System.IO.FAMWatcher::instance
	FAMWatcher_t3_259 * ___instance_2;
	// System.Collections.Hashtable System.IO.FAMWatcher::watches
	Hashtable_t1_173 * ___watches_3;
	// System.Collections.Hashtable System.IO.FAMWatcher::requests
	Hashtable_t1_173 * ___requests_4;
	// System.IO.FAMConnection System.IO.FAMWatcher::conn
	FAMConnection_t3_255  ___conn_5;
	// System.Threading.Thread System.IO.FAMWatcher::thread
	Thread_t1_444 * ___thread_6;
	// System.Boolean System.IO.FAMWatcher::stop
	bool ___stop_7;
	// System.Boolean System.IO.FAMWatcher::use_gamin
	bool ___use_gamin_8;
};
