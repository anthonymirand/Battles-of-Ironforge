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

// System.IO.MonoSyncFileStream
struct MonoSyncFileStream_t3_285;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.IO.MonoSyncFileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32)
extern "C" void MonoSyncFileStream__ctor_m3_2185 (MonoSyncFileStream_t3_285 * __this, IntPtr_t ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * MonoSyncFileStream_BeginWrite_m3_2186 (MonoSyncFileStream_t3_285 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream::EndWrite(System.IAsyncResult)
extern "C" void MonoSyncFileStream_EndWrite_m3_2187 (MonoSyncFileStream_t3_285 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * MonoSyncFileStream_BeginRead_m3_2188 (MonoSyncFileStream_t3_285 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoSyncFileStream::EndRead(System.IAsyncResult)
extern "C" int32_t MonoSyncFileStream_EndRead_m3_2189 (MonoSyncFileStream_t3_285 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
