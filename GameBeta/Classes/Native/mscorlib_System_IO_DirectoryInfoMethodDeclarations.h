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

// System.IO.DirectoryInfo
struct DirectoryInfo_t1_230;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.IO.FileSystemInfo[]
struct FileSystemInfoU5BU5D_t1_863;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C" void DirectoryInfo__ctor_m1_2233 (DirectoryInfo_t1_230 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C" void DirectoryInfo__ctor_m1_2234 (DirectoryInfo_t1_230 * __this, String_t* ___path, bool ___simpleOriginalPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryInfo__ctor_m1_2235 (DirectoryInfo_t1_230 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C" void DirectoryInfo_Initialize_m1_2236 (DirectoryInfo_t1_230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C" bool DirectoryInfo_get_Exists_m1_2237 (DirectoryInfo_t1_230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::get_Name()
extern "C" String_t* DirectoryInfo_get_Name_m1_2238 (DirectoryInfo_t1_230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C" DirectoryInfo_t1_230 * DirectoryInfo_get_Parent_m1_2239 (DirectoryInfo_t1_230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C" void DirectoryInfo_Create_m1_2240 (DirectoryInfo_t1_230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileSystemInfo[] System.IO.DirectoryInfo::GetFileSystemInfos()
extern "C" FileSystemInfoU5BU5D_t1_863* DirectoryInfo_GetFileSystemInfos_m1_2241 (DirectoryInfo_t1_230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileSystemInfo[] System.IO.DirectoryInfo::GetFileSystemInfos(System.String)
extern "C" FileSystemInfoU5BU5D_t1_863* DirectoryInfo_GetFileSystemInfos_m1_2242 (DirectoryInfo_t1_230 * __this, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C" String_t* DirectoryInfo_ToString_m1_2243 (DirectoryInfo_t1_230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
