#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_EventArgs.h"
#include "System_System_IO_WatcherChangeTypes.h"

// System.IO.FileSystemEventArgs
struct  FileSystemEventArgs_t3_261  : public EventArgs_t1_105
{
	// System.IO.WatcherChangeTypes System.IO.FileSystemEventArgs::changeType
	int32_t ___changeType_1;
	// System.String System.IO.FileSystemEventArgs::directory
	String_t* ___directory_2;
	// System.String System.IO.FileSystemEventArgs::name
	String_t* ___name_3;
};
