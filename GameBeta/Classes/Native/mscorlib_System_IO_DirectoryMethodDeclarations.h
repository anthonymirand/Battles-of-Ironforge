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
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileAttributes.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" DirectoryInfo_t1_230 * Directory_CreateDirectory_m1_2223 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C" DirectoryInfo_t1_230 * Directory_CreateDirectoriesInternal_m1_2224 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" bool Directory_Exists_m1_2225 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
extern "C" String_t* Directory_GetCurrentDirectory_m1_2226 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String)
extern "C" StringU5BU5D_t1_206* Directory_GetDirectories_m1_2227 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String,System.String)
extern "C" StringU5BU5D_t1_206* Directory_GetDirectories_m1_2228 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String)
extern "C" StringU5BU5D_t1_206* Directory_GetFiles_m1_2229 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C" StringU5BU5D_t1_206* Directory_GetFiles_m1_2230 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String)
extern "C" StringU5BU5D_t1_206* Directory_GetFileSystemEntries_m1_2231 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern "C" StringU5BU5D_t1_206* Directory_GetFileSystemEntries_m1_2232 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
