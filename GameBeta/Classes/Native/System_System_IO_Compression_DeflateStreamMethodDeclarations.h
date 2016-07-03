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

// System.IO.Compression.DeflateStream
struct DeflateStream_t3_248;
// System.IO.Stream
struct Stream_t1_226;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3_245;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_Compression_CompressionMode.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C" void DeflateStream__ctor_m3_1970 (DeflateStream_t3_248 * __this, Stream_t1_226 * ___compressedStream, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern "C" void DeflateStream__ctor_m3_1971 (DeflateStream_t3_248 * __this, Stream_t1_226 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
extern "C" void DeflateStream__ctor_m3_1972 (DeflateStream_t3_248 * __this, Stream_t1_226 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, bool ___gzip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern "C" void DeflateStream_Dispose_m3_1973 (DeflateStream_t3_248 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t DeflateStream_UnmanagedRead_m3_1974 (Object_t * __this /* static, unused */, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_UnmanagedRead_m3_1975 (DeflateStream_t3_248 * __this, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t DeflateStream_UnmanagedWrite_m3_1976 (Object_t * __this /* static, unused */, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_UnmanagedWrite_m3_1977 (DeflateStream_t3_248 * __this, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t DeflateStream_ReadInternal_m3_1978 (DeflateStream_t3_248 * __this, ByteU5BU5D_t1_72* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t DeflateStream_Read_m3_1979 (DeflateStream_t3_248 * __this, ByteU5BU5D_t1_72* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflateStream_WriteInternal_m3_1980 (DeflateStream_t3_248 * __this, ByteU5BU5D_t1_72* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflateStream_Write_m3_1981 (DeflateStream_t3_248 * __this, ByteU5BU5D_t1_72* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::CheckResult(System.Int32,System.String)
extern "C" void DeflateStream_CheckResult_m3_1982 (Object_t * __this /* static, unused */, int32_t ___result, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Flush()
extern "C" void DeflateStream_Flush_m3_1983 (DeflateStream_t3_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * DeflateStream_BeginRead_m3_1984 (DeflateStream_t3_248 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * DeflateStream_BeginWrite_m3_1985 (DeflateStream_t3_248 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern "C" int32_t DeflateStream_EndRead_m3_1986 (DeflateStream_t3_248 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern "C" void DeflateStream_EndWrite_m3_1987 (DeflateStream_t3_248 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t DeflateStream_Seek_m3_1988 (DeflateStream_t3_248 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
extern "C" void DeflateStream_SetLength_m3_1989 (DeflateStream_t3_248 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.Compression.DeflateStream::get_BaseStream()
extern "C" Stream_t1_226 * DeflateStream_get_BaseStream_m3_1990 (DeflateStream_t3_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
extern "C" bool DeflateStream_get_CanRead_m3_1991 (DeflateStream_t3_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
extern "C" bool DeflateStream_get_CanSeek_m3_1992 (DeflateStream_t3_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
extern "C" bool DeflateStream_get_CanWrite_m3_1993 (DeflateStream_t3_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
extern "C" int64_t DeflateStream_get_Length_m3_1994 (DeflateStream_t3_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
extern "C" int64_t DeflateStream_get_Position_m3_1995 (DeflateStream_t3_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
extern "C" void DeflateStream_set_Position_m3_1996 (DeflateStream_t3_248 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.Compression.DeflateStream::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStream/UnmanagedReadOrWrite,System.IntPtr)
extern "C" IntPtr_t DeflateStream_CreateZStream_m3_1997 (Object_t * __this /* static, unused */, int32_t ___compress, bool ___gzip, UnmanagedReadOrWrite_t3_245 * ___feeder, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::CloseZStream(System.IntPtr)
extern "C" int32_t DeflateStream_CloseZStream_m3_1998 (Object_t * __this /* static, unused */, IntPtr_t ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Flush(System.IntPtr)
extern "C" int32_t DeflateStream_Flush_m3_1999 (Object_t * __this /* static, unused */, IntPtr_t ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_ReadZStream_m3_2000 (Object_t * __this /* static, unused */, IntPtr_t ___stream, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::WriteZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_WriteZStream_m3_2001 (Object_t * __this /* static, unused */, IntPtr_t ___stream, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
