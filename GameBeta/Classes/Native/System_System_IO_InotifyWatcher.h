#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.InotifyWatcher
struct InotifyWatcher_t3_275;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Threading.Thread
struct Thread_t1_444;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_IO_InotifyMask.h"

// System.IO.InotifyWatcher
struct  InotifyWatcher_t3_275  : public Object_t
{
};
struct InotifyWatcher_t3_275_StaticFields{
	// System.Boolean System.IO.InotifyWatcher::failed
	bool ___failed_0;
	// System.IO.InotifyWatcher System.IO.InotifyWatcher::instance
	InotifyWatcher_t3_275 * ___instance_1;
	// System.Collections.Hashtable System.IO.InotifyWatcher::watches
	Hashtable_t1_173 * ___watches_2;
	// System.Collections.Hashtable System.IO.InotifyWatcher::requests
	Hashtable_t1_173 * ___requests_3;
	// System.IntPtr System.IO.InotifyWatcher::FD
	IntPtr_t ___FD_4;
	// System.Threading.Thread System.IO.InotifyWatcher::thread
	Thread_t1_444 * ___thread_5;
	// System.Boolean System.IO.InotifyWatcher::stop
	bool ___stop_6;
	// System.IO.InotifyMask System.IO.InotifyWatcher::Interesting
	uint32_t ___Interesting_7;
};
