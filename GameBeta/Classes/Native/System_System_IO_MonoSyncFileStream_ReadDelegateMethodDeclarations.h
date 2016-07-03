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

// System.IO.MonoSyncFileStream/ReadDelegate
struct ReadDelegate_t3_284;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void System.IO.MonoSyncFileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ReadDelegate__ctor_m3_2181 (ReadDelegate_t3_284 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoSyncFileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadDelegate_Invoke_m3_2182 (ReadDelegate_t3_284 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t3_284(Il2CppObject* delegate, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.MonoSyncFileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadDelegate_BeginInvoke_m3_2183 (ReadDelegate_t3_284 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoSyncFileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadDelegate_EndInvoke_m3_2184 (ReadDelegate_t3_284 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
