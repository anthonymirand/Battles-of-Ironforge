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

// System.Net.FileWebResponse
struct FileWebResponse_t3_560;
// System.Uri
struct Uri_t3_3;
// System.IO.FileStream
struct FileStream_t1_246;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C" void FileWebResponse__ctor_m3_4119 (FileWebResponse_t3_560 * __this, Uri_t3_3 * ___responseUri, FileStream_t1_246 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse__ctor_m3_4120 (FileWebResponse_t3_560 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3_4121 (FileWebResponse_t3_560 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C" void FileWebResponse_System_IDisposable_Dispose_m3_4122 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebResponse::get_ContentLength()
extern "C" int64_t FileWebResponse_get_ContentLength_m3_4123 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebResponse::get_ContentType()
extern "C" String_t* FileWebResponse_get_ContentType_m3_4124 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C" WebHeaderCollection_t3_522 * FileWebResponse_get_Headers_m3_4125 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebResponse::get_ResponseUri()
extern "C" Uri_t3_3 * FileWebResponse_get_ResponseUri_m3_4126 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_GetObjectData_m3_4127 (FileWebResponse_t3_560 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C" Stream_t1_226 * FileWebResponse_GetResponseStream_m3_4128 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C" void FileWebResponse_Finalize_m3_4129 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C" void FileWebResponse_Close_m3_4130 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C" void FileWebResponse_Dispose_m3_4131 (FileWebResponse_t3_560 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C" void FileWebResponse_CheckDisposed_m3_4132 (FileWebResponse_t3_560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
