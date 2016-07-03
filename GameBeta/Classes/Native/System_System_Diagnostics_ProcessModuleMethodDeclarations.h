#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Diagnostics.ProcessModule
struct ProcessModule_t3_216;
// System.String
struct String_t;
// System.Diagnostics.FileVersionInfo
struct FileVersionInfo_t3_204;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Diagnostics.ProcessModule::.ctor(System.IntPtr,System.IntPtr,System.String,System.Diagnostics.FileVersionInfo,System.Int32,System.String)
extern "C" void ProcessModule__ctor_m3_1622 (ProcessModule_t3_216 * __this, IntPtr_t ___baseaddr, IntPtr_t ___entryaddr, String_t* ___filename, FileVersionInfo_t3_204 * ___version_info, int32_t ___memory_size, String_t* ___modulename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.ProcessModule::get_BaseAddress()
extern "C" IntPtr_t ProcessModule_get_BaseAddress_m3_1623 (ProcessModule_t3_216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.ProcessModule::get_EntryPointAddress()
extern "C" IntPtr_t ProcessModule_get_EntryPointAddress_m3_1624 (ProcessModule_t3_216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessModule::get_FileName()
extern "C" String_t* ProcessModule_get_FileName_m3_1625 (ProcessModule_t3_216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.FileVersionInfo System.Diagnostics.ProcessModule::get_FileVersionInfo()
extern "C" FileVersionInfo_t3_204 * ProcessModule_get_FileVersionInfo_m3_1626 (ProcessModule_t3_216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessModule::get_ModuleMemorySize()
extern "C" int32_t ProcessModule_get_ModuleMemorySize_m3_1627 (ProcessModule_t3_216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessModule::get_ModuleName()
extern "C" String_t* ProcessModule_get_ModuleName_m3_1628 (ProcessModule_t3_216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessModule::ToString()
extern "C" String_t* ProcessModule_ToString_m3_1629 (ProcessModule_t3_216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
