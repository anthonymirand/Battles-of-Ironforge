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
#include "System_System_IO_FAMRequest.h"

// System.IO.FAMData
struct  FAMData_t3_258  : public Object_t
{
	// System.IO.FileSystemWatcher System.IO.FAMData::FSW
	FileSystemWatcher_t3_251 * ___FSW_0;
	// System.String System.IO.FAMData::Directory
	String_t* ___Directory_1;
	// System.String System.IO.FAMData::FileMask
	String_t* ___FileMask_2;
	// System.Boolean System.IO.FAMData::IncludeSubdirs
	bool ___IncludeSubdirs_3;
	// System.Boolean System.IO.FAMData::Enabled
	bool ___Enabled_4;
	// System.IO.FAMRequest System.IO.FAMData::Request
	FAMRequest_t3_256  ___Request_5;
	// System.Collections.Hashtable System.IO.FAMData::SubDirs
	Hashtable_t1_173 * ___SubDirs_6;
};
