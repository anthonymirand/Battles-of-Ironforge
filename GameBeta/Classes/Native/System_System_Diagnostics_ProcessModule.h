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
// System.Diagnostics.FileVersionInfo
struct FileVersionInfo_t3_204;

#include "System_System_ComponentModel_Component.h"
#include "mscorlib_System_IntPtr.h"

// System.Diagnostics.ProcessModule
struct  ProcessModule_t3_216  : public Component_t3_93
{
	// System.IntPtr System.Diagnostics.ProcessModule::baseaddr
	IntPtr_t ___baseaddr_4;
	// System.IntPtr System.Diagnostics.ProcessModule::entryaddr
	IntPtr_t ___entryaddr_5;
	// System.String System.Diagnostics.ProcessModule::filename
	String_t* ___filename_6;
	// System.Diagnostics.FileVersionInfo System.Diagnostics.ProcessModule::version_info
	FileVersionInfo_t3_204 * ___version_info_7;
	// System.Int32 System.Diagnostics.ProcessModule::memory_size
	int32_t ___memory_size_8;
	// System.String System.Diagnostics.ProcessModule::modulename
	String_t* ___modulename_9;
};
