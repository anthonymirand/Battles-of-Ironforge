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

// System.IO.FileSystemInfo
struct FileSystemInfo_t1_231;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.IO.FileSystemInfo::.ctor()
extern "C" void FileSystemInfo__ctor_m1_2333 (FileSystemInfo_t1_231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileSystemInfo__ctor_m1_2334 (FileSystemInfo_t1_231 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileSystemInfo_GetObjectData_m1_2335 (FileSystemInfo_t1_231 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C" String_t* FileSystemInfo_get_FullName_m1_2336 (FileSystemInfo_t1_231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_LastAccessTime()
extern "C" DateTime_t1_128  FileSystemInfo_get_LastAccessTime_m1_2337 (FileSystemInfo_t1_231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
extern "C" DateTime_t1_128  FileSystemInfo_get_LastWriteTime_m1_2338 (FileSystemInfo_t1_231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C" void FileSystemInfo_Refresh_m1_2339 (FileSystemInfo_t1_231 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C" void FileSystemInfo_InternalRefresh_m1_2340 (FileSystemInfo_t1_231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C" void FileSystemInfo_CheckPath_m1_2341 (FileSystemInfo_t1_231 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
