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

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IO_FileAttributes.h"
#include "mscorlib_System_DateTime.h"

// System.IO.FileData
struct  FileData_t3_252  : public Object_t
{
	// System.String System.IO.FileData::Directory
	String_t* ___Directory_0;
	// System.IO.FileAttributes System.IO.FileData::Attributes
	int32_t ___Attributes_1;
	// System.Boolean System.IO.FileData::NotExists
	bool ___NotExists_2;
	// System.DateTime System.IO.FileData::CreationTime
	DateTime_t1_128  ___CreationTime_3;
	// System.DateTime System.IO.FileData::LastWriteTime
	DateTime_t1_128  ___LastWriteTime_4;
};
