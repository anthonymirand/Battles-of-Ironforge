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

// System.IO.FileStream
struct FileStream_t1_246;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t1_261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileAttributes.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_IO_FileMode.h"
#include "mscorlib_System_IO_FileAccess.h"
#include "mscorlib_System_IO_FileShare.h"

// System.IO.FileStream System.IO.File::Create(System.String)
extern "C" FileStream_t1_246 * File_Create_m1_2249 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String,System.Int32)
extern "C" FileStream_t1_246 * File_Create_m1_2250 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m1_2251 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m1_2252 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
extern "C" int32_t File_GetAttributes_m1_2253 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::GetCreationTime(System.String)
extern "C" DateTime_t1_128  File_GetCreationTime_m1_2254 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::GetLastWriteTime(System.String)
extern "C" DateTime_t1_128  File_GetLastWriteTime_m1_2255 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t1_246 * File_Open_m1_2256 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" FileStream_t1_246 * File_Open_m1_2257 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t1_246 * File_OpenRead_m1_2258 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t1_261 * File_OpenText_m1_2259 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::CheckPathExceptions(System.String)
extern "C" void File_CheckPathExceptions_m1_2260 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::get_DefaultLocalFileTime()
extern "C" DateTime_t1_128  File_get_DefaultLocalFileTime_m1_2261 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
