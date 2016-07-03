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

// System.Net.Sockets.Socket/SendFileHandler
struct SendFileHandler_t3_495;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_Sockets_TransmitFileOptions.h"
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void System.Net.Sockets.Socket/SendFileHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SendFileHandler__ctor_m3_3416 (SendFileHandler_t3_495 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SendFileHandler::Invoke(System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions)
extern "C" void SendFileHandler_Invoke_m3_3417 (SendFileHandler_t3_495 * __this, String_t* ___fileName, ByteU5BU5D_t1_72* ___preBuffer, ByteU5BU5D_t1_72* ___postBuffer, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SendFileHandler_t3_495(Il2CppObject* delegate, String_t* ___fileName, ByteU5BU5D_t1_72* ___preBuffer, ByteU5BU5D_t1_72* ___postBuffer, int32_t ___flags);
// System.IAsyncResult System.Net.Sockets.Socket/SendFileHandler::BeginInvoke(System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions,System.AsyncCallback,System.Object)
extern "C" Object_t * SendFileHandler_BeginInvoke_m3_3418 (SendFileHandler_t3_495 * __this, String_t* ___fileName, ByteU5BU5D_t1_72* ___preBuffer, ByteU5BU5D_t1_72* ___postBuffer, int32_t ___flags, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SendFileHandler::EndInvoke(System.IAsyncResult)
extern "C" void SendFileHandler_EndInvoke_m3_3419 (SendFileHandler_t3_495 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
