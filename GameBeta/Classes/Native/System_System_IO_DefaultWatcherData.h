#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.FileSystemWatcher
struct FileSystemWatcher_t3_251;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1_173;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// System.IO.DefaultWatcherData
struct  DefaultWatcherData_t3_250  : public Object_t
{
	// System.IO.FileSystemWatcher System.IO.DefaultWatcherData::FSW
	FileSystemWatcher_t3_251 * ___FSW_0;
	// System.String System.IO.DefaultWatcherData::Directory
	String_t* ___Directory_1;
	// System.String System.IO.DefaultWatcherData::FileMask
	String_t* ___FileMask_2;
	// System.Boolean System.IO.DefaultWatcherData::IncludeSubdirs
	bool ___IncludeSubdirs_3;
	// System.Boolean System.IO.DefaultWatcherData::Enabled
	bool ___Enabled_4;
	// System.Boolean System.IO.DefaultWatcherData::NoWildcards
	bool ___NoWildcards_5;
	// System.DateTime System.IO.DefaultWatcherData::DisabledTime
	DateTime_t1_128  ___DisabledTime_6;
	// System.Collections.Hashtable System.IO.DefaultWatcherData::Files
	Hashtable_t1_173 * ___Files_7;
};
