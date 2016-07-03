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

// System.Net.ResponseStream
struct ResponseStream_t3_580;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t3_586;
// System.IO.MemoryStream
struct MemoryStream_t1_250;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.ResponseStream::.ctor(System.IO.Stream,System.Net.HttpListenerResponse,System.Boolean)
extern "C" void ResponseStream__ctor_m3_4776 (ResponseStream_t3_580 * __this, Stream_t1_226 * ___stream, HttpListenerResponse_t3_586 * ___response, bool ___ignore_errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::.cctor()
extern "C" void ResponseStream__cctor_m3_4777 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanRead()
extern "C" bool ResponseStream_get_CanRead_m3_4778 (ResponseStream_t3_580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanSeek()
extern "C" bool ResponseStream_get_CanSeek_m3_4779 (ResponseStream_t3_580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanWrite()
extern "C" bool ResponseStream_get_CanWrite_m3_4780 (ResponseStream_t3_580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::get_Length()
extern "C" int64_t ResponseStream_get_Length_m3_4781 (ResponseStream_t3_580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::get_Position()
extern "C" int64_t ResponseStream_get_Position_m3_4782 (ResponseStream_t3_580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::set_Position(System.Int64)
extern "C" void ResponseStream_set_Position_m3_4783 (ResponseStream_t3_580 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Close()
extern "C" void ResponseStream_Close_m3_4784 (ResponseStream_t3_580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream System.Net.ResponseStream::GetHeaders(System.Boolean)
extern "C" MemoryStream_t1_250 * ResponseStream_GetHeaders_m3_4785 (ResponseStream_t3_580 * __this, bool ___closing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Flush()
extern "C" void ResponseStream_Flush_m3_4786 (ResponseStream_t3_580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.ResponseStream::GetChunkSizeBytes(System.Int32,System.Boolean)
extern "C" ByteU5BU5D_t1_72* ResponseStream_GetChunkSizeBytes_m3_4787 (Object_t * __this /* static, unused */, int32_t ___size, bool ___final, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern "C" void ResponseStream_InternalWrite_m3_4788 (ResponseStream_t3_580 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ResponseStream_Write_m3_4789 (ResponseStream_t3_580 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ResponseStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseStream_BeginWrite_m3_4790 (ResponseStream_t3_580 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::EndWrite(System.IAsyncResult)
extern "C" void ResponseStream_EndWrite_m3_4791 (ResponseStream_t3_580 * __this, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ResponseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ResponseStream_Read_m3_4792 (ResponseStream_t3_580 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ResponseStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseStream_BeginRead_m3_4793 (ResponseStream_t3_580 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ResponseStream::EndRead(System.IAsyncResult)
extern "C" int32_t ResponseStream_EndRead_m3_4794 (ResponseStream_t3_580 * __this, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ResponseStream_Seek_m3_4795 (ResponseStream_t3_580 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::SetLength(System.Int64)
extern "C" void ResponseStream_SetLength_m3_4796 (ResponseStream_t3_580 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
