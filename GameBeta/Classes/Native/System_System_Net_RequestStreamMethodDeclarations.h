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

// System.Net.RequestStream
struct RequestStream_t3_526;
// System.IO.Stream
struct Stream_t1_226;
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

// System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C" void RequestStream__ctor_m3_4757 (RequestStream_t3_526 * __this, Stream_t1_226 * ___stream, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Int64)
extern "C" void RequestStream__ctor_m3_4758 (RequestStream_t3_526 * __this, Stream_t1_226 * ___stream, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___length, int64_t ___contentlength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.RequestStream::get_CanRead()
extern "C" bool RequestStream_get_CanRead_m3_4759 (RequestStream_t3_526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.RequestStream::get_CanSeek()
extern "C" bool RequestStream_get_CanSeek_m3_4760 (RequestStream_t3_526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.RequestStream::get_CanWrite()
extern "C" bool RequestStream_get_CanWrite_m3_4761 (RequestStream_t3_526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.RequestStream::get_Length()
extern "C" int64_t RequestStream_get_Length_m3_4762 (RequestStream_t3_526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.RequestStream::get_Position()
extern "C" int64_t RequestStream_get_Position_m3_4763 (RequestStream_t3_526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::set_Position(System.Int64)
extern "C" void RequestStream_set_Position_m3_4764 (RequestStream_t3_526 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::Close()
extern "C" void RequestStream_Close_m3_4765 (RequestStream_t3_526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::Flush()
extern "C" void RequestStream_Flush_m3_4766 (RequestStream_t3_526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.RequestStream::FillFromBuffer(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t RequestStream_FillFromBuffer_m3_4767 (RequestStream_t3_526 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___off, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.RequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t RequestStream_Read_m3_4768 (RequestStream_t3_526 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.RequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * RequestStream_BeginRead_m3_4769 (RequestStream_t3_526 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.RequestStream::EndRead(System.IAsyncResult)
extern "C" int32_t RequestStream_EndRead_m3_4770 (RequestStream_t3_526 * __this, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.RequestStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t RequestStream_Seek_m3_4771 (RequestStream_t3_526 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::SetLength(System.Int64)
extern "C" void RequestStream_SetLength_m3_4772 (RequestStream_t3_526 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void RequestStream_Write_m3_4773 (RequestStream_t3_526 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.RequestStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * RequestStream_BeginWrite_m3_4774 (RequestStream_t3_526 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::EndWrite(System.IAsyncResult)
extern "C" void RequestStream_EndWrite_m3_4775 (RequestStream_t3_526 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
