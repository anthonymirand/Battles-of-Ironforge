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

#include "System_System_IO_FileSystemEventArgs.h"

// System.IO.RenamedEventArgs
struct  RenamedEventArgs_t3_288  : public FileSystemEventArgs_t3_261
{
	// System.String System.IO.RenamedEventArgs::oldName
	String_t* ___oldName_4;
	// System.String System.IO.RenamedEventArgs::oldFullPath
	String_t* ___oldFullPath_5;
};
