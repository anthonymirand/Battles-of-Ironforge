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

// System.IO.Stream
struct Stream_t1_226;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.Stream::.ctor()
extern "C" void Stream__ctor_m1_2419 (Stream_t1_226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
extern "C" void Stream__cctor_m1_2420 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Stream::get_CanTimeout()
extern "C" bool Stream_get_CanTimeout_m1_2421 (Stream_t1_226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose()
extern "C" void Stream_Dispose_m1_2422 (Stream_t1_226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m1_2423 (Stream_t1_226 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m1_2424 (Stream_t1_226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::get_ReadTimeout()
extern "C" int32_t Stream_get_ReadTimeout_m1_2425 (Stream_t1_226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::set_ReadTimeout(System.Int32)
extern "C" void Stream_set_ReadTimeout_m1_2426 (Stream_t1_226 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::get_WriteTimeout()
extern "C" int32_t Stream_get_WriteTimeout_m1_2427 (Stream_t1_226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::set_WriteTimeout(System.Int32)
extern "C" void Stream_set_WriteTimeout_m1_2428 (Stream_t1_226 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::ReadByte()
extern "C" int32_t Stream_ReadByte_m1_2429 (Stream_t1_226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern "C" void Stream_WriteByte_m1_2430 (Stream_t1_226 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginRead_m1_2431 (Stream_t1_226 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginWrite_m1_2432 (Stream_t1_226 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C" int32_t Stream_EndRead_m1_2433 (Stream_t1_226 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C" void Stream_EndWrite_m1_2434 (Stream_t1_226 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
