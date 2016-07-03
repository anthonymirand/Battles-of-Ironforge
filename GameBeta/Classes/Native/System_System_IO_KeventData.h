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
#include "System_System_IO_kevent.h"

// System.IO.KeventData
struct  KeventData_t3_279  : public Object_t
{
	// System.IO.FileSystemWatcher System.IO.KeventData::FSW
	FileSystemWatcher_t3_251 * ___FSW_0;
	// System.String System.IO.KeventData::Directory
	String_t* ___Directory_1;
	// System.String System.IO.KeventData::FileMask
	String_t* ___FileMask_2;
	// System.Boolean System.IO.KeventData::IncludeSubdirs
	bool ___IncludeSubdirs_3;
	// System.Boolean System.IO.KeventData::Enabled
	bool ___Enabled_4;
	// System.Collections.Hashtable System.IO.KeventData::DirEntries
	Hashtable_t1_173 * ___DirEntries_5;
	// System.IO.kevent System.IO.KeventData::ev
	kevent_t3_276  ___ev_6;
};
