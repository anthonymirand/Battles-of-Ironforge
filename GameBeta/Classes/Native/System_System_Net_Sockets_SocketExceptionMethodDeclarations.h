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

// System.Net.Sockets.SocketException
struct SocketException_t3_500;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Net_Sockets_SocketError.h"

// System.Void System.Net.Sockets.SocketException::.ctor()
extern "C" void SocketException__ctor_m3_3650 (SocketException_t3_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern "C" void SocketException__ctor_m3_3651 (SocketException_t3_500 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SocketException__ctor_m3_3652 (SocketException_t3_500 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern "C" void SocketException__ctor_m3_3653 (SocketException_t3_500 * __this, int32_t ___error, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern "C" int32_t SocketException_WSAGetLastError_internal_m3_3654 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::get_ErrorCode()
extern "C" int32_t SocketException_get_ErrorCode_m3_3655 (SocketException_t3_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern "C" int32_t SocketException_get_SocketErrorCode_m3_3656 (SocketException_t3_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Sockets.SocketException::get_Message()
extern "C" String_t* SocketException_get_Message_m3_3657 (SocketException_t3_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
