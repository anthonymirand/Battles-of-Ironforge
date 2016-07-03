#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1_206;
// System.String
struct String_t;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_IntPtr.h"

// System.Diagnostics.Process/ProcInfo
struct  ProcInfo_t3_206 
{
	// System.IntPtr System.Diagnostics.Process/ProcInfo::process_handle
	IntPtr_t ___process_handle_0;
	// System.IntPtr System.Diagnostics.Process/ProcInfo::thread_handle
	IntPtr_t ___thread_handle_1;
	// System.Int32 System.Diagnostics.Process/ProcInfo::pid
	int32_t ___pid_2;
	// System.Int32 System.Diagnostics.Process/ProcInfo::tid
	int32_t ___tid_3;
	// System.String[] System.Diagnostics.Process/ProcInfo::envKeys
	StringU5BU5D_t1_206* ___envKeys_4;
	// System.String[] System.Diagnostics.Process/ProcInfo::envValues
	StringU5BU5D_t1_206* ___envValues_5;
	// System.String System.Diagnostics.Process/ProcInfo::UserName
	String_t* ___UserName_6;
	// System.String System.Diagnostics.Process/ProcInfo::Domain
	String_t* ___Domain_7;
	// System.IntPtr System.Diagnostics.Process/ProcInfo::Password
	IntPtr_t ___Password_8;
	// System.Boolean System.Diagnostics.Process/ProcInfo::LoadUserProfile
	bool ___LoadUserProfile_9;
};
// Native definition for marshalling of: System.Diagnostics.Process/ProcInfo
struct ProcInfo_t3_206_marshaled
{
	intptr_t ___process_handle_0;
	intptr_t ___thread_handle_1;
	int32_t ___pid_2;
	int32_t ___tid_3;
	char** ___envKeys_4;
	char** ___envValues_5;
	char* ___UserName_6;
	char* ___Domain_7;
	intptr_t ___Password_8;
	int32_t ___LoadUserProfile_9;
};
