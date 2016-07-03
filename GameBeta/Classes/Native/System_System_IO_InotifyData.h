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

#include "mscorlib_System_Object.h"

// System.IO.InotifyData
struct  InotifyData_t3_273  : public Object_t
{
	// System.IO.FileSystemWatcher System.IO.InotifyData::FSW
	FileSystemWatcher_t3_251 * ___FSW_0;
	// System.String System.IO.InotifyData::Directory
	String_t* ___Directory_1;
	// System.Int32 System.IO.InotifyData::Watch
	int32_t ___Watch_2;
};
