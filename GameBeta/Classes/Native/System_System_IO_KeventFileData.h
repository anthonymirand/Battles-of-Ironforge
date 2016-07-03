#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.FileSystemInfo
struct FileSystemInfo_t1_231;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// System.IO.KeventFileData
struct  KeventFileData_t3_278  : public Object_t
{
	// System.IO.FileSystemInfo System.IO.KeventFileData::fsi
	FileSystemInfo_t1_231 * ___fsi_0;
	// System.DateTime System.IO.KeventFileData::LastAccessTime
	DateTime_t1_128  ___LastAccessTime_1;
	// System.DateTime System.IO.KeventFileData::LastWriteTime
	DateTime_t1_128  ___LastWriteTime_2;
};
