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

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1_274;
// System.EventHandler
struct EventHandler_t1_275;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64)
extern "C" void UnmanagedMemoryStream__ctor_m1_2609 (UnmanagedMemoryStream_t1_274 * __this, uint8_t* ___pointer, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::add_Closed(System.EventHandler)
extern "C" void UnmanagedMemoryStream_add_Closed_m1_2610 (UnmanagedMemoryStream_t1_274 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::remove_Closed(System.EventHandler)
extern "C" void UnmanagedMemoryStream_remove_Closed_m1_2611 (UnmanagedMemoryStream_t1_274 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanRead()
extern "C" bool UnmanagedMemoryStream_get_CanRead_m1_2612 (UnmanagedMemoryStream_t1_274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanSeek()
extern "C" bool UnmanagedMemoryStream_get_CanSeek_m1_2613 (UnmanagedMemoryStream_t1_274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanWrite()
extern "C" bool UnmanagedMemoryStream_get_CanWrite_m1_2614 (UnmanagedMemoryStream_t1_274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Length()
extern "C" int64_t UnmanagedMemoryStream_get_Length_m1_2615 (UnmanagedMemoryStream_t1_274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Position()
extern "C" int64_t UnmanagedMemoryStream_get_Position_m1_2616 (UnmanagedMemoryStream_t1_274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::set_Position(System.Int64)
extern "C" void UnmanagedMemoryStream_set_Position_m1_2617 (UnmanagedMemoryStream_t1_274 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UnmanagedMemoryStream_Read_m1_2618 (UnmanagedMemoryStream_t1_274 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::ReadByte()
extern "C" int32_t UnmanagedMemoryStream_ReadByte_m1_2619 (UnmanagedMemoryStream_t1_274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t UnmanagedMemoryStream_Seek_m1_2620 (UnmanagedMemoryStream_t1_274 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::SetLength(System.Int64)
extern "C" void UnmanagedMemoryStream_SetLength_m1_2621 (UnmanagedMemoryStream_t1_274 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Flush()
extern "C" void UnmanagedMemoryStream_Flush_m1_2622 (UnmanagedMemoryStream_t1_274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Dispose(System.Boolean)
extern "C" void UnmanagedMemoryStream_Dispose_m1_2623 (UnmanagedMemoryStream_t1_274 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void UnmanagedMemoryStream_Write_m1_2624 (UnmanagedMemoryStream_t1_274 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::WriteByte(System.Byte)
extern "C" void UnmanagedMemoryStream_WriteByte_m1_2625 (UnmanagedMemoryStream_t1_274 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Initialize(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
extern "C" void UnmanagedMemoryStream_Initialize_m1_2626 (UnmanagedMemoryStream_t1_274 * __this, uint8_t* ___pointer, int64_t ___length, int64_t ___capacity, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
