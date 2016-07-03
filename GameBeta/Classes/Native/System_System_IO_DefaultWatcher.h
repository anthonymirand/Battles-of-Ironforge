#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.DefaultWatcher
struct DefaultWatcher_t3_253;
// System.Threading.Thread
struct Thread_t1_444;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.String[]
struct StringU5BU5D_t1_206;

#include "mscorlib_System_Object.h"

// System.IO.DefaultWatcher
struct  DefaultWatcher_t3_253  : public Object_t
{
};
struct DefaultWatcher_t3_253_StaticFields{
	// System.IO.DefaultWatcher System.IO.DefaultWatcher::instance
	DefaultWatcher_t3_253 * ___instance_0;
	// System.Threading.Thread System.IO.DefaultWatcher::thread
	Thread_t1_444 * ___thread_1;
	// System.Collections.Hashtable System.IO.DefaultWatcher::watches
	Hashtable_t1_173 * ___watches_2;
	// System.String[] System.IO.DefaultWatcher::NoStringsArray
	StringU5BU5D_t1_206* ___NoStringsArray_3;
};
