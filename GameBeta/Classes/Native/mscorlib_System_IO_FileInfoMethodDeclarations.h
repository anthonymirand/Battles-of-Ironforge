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

// System.IO.FileInfo
struct FileInfo_t1_239;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.IO.StreamWriter
struct StreamWriter_t1_262;
// System.IO.FileStream
struct FileStream_t1_246;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_IO_FileMode.h"
#include "mscorlib_System_IO_FileAccess.h"
#include "mscorlib_System_IO_FileShare.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C" void FileInfo__ctor_m1_2262 (FileInfo_t1_239 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileInfo__ctor_m1_2263 (FileInfo_t1_239 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C" void FileInfo_InternalRefresh_m1_2264 (FileInfo_t1_239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C" bool FileInfo_get_Exists_m1_2265 (FileInfo_t1_239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
extern "C" String_t* FileInfo_get_Name_m1_2266 (FileInfo_t1_239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.IO.FileInfo::CreateText()
extern "C" StreamWriter_t1_262 * FileInfo_CreateText_m1_2267 (FileInfo_t1_239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.IO.FileInfo::AppendText()
extern "C" StreamWriter_t1_262 * FileInfo_AppendText_m1_2268 (FileInfo_t1_239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.FileInfo::Open(System.IO.FileMode,System.IO.FileAccess)
extern "C" FileStream_t1_246 * FileInfo_Open_m1_2269 (FileInfo_t1_239 * __this, int32_t ___mode, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.FileInfo::Open(System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" FileStream_t1_246 * FileInfo_Open_m1_2270 (FileInfo_t1_239 * __this, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C" String_t* FileInfo_ToString_m1_2271 (FileInfo_t1_239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
