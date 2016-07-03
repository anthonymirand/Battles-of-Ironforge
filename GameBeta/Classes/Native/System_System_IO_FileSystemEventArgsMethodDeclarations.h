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

// System.IO.FileSystemEventArgs
struct FileSystemEventArgs_t3_261;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_WatcherChangeTypes.h"

// System.Void System.IO.FileSystemEventArgs::.ctor(System.IO.WatcherChangeTypes,System.String,System.String)
extern "C" void FileSystemEventArgs__ctor_m3_2061 (FileSystemEventArgs_t3_261 * __this, int32_t ___changeType, String_t* ___directory, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemEventArgs::SetName(System.String)
extern "C" void FileSystemEventArgs_SetName_m3_2062 (FileSystemEventArgs_t3_261 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.WatcherChangeTypes System.IO.FileSystemEventArgs::get_ChangeType()
extern "C" int32_t FileSystemEventArgs_get_ChangeType_m3_2063 (FileSystemEventArgs_t3_261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemEventArgs::get_FullPath()
extern "C" String_t* FileSystemEventArgs_get_FullPath_m3_2064 (FileSystemEventArgs_t3_261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemEventArgs::get_Name()
extern "C" String_t* FileSystemEventArgs_get_Name_m3_2065 (FileSystemEventArgs_t3_261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
