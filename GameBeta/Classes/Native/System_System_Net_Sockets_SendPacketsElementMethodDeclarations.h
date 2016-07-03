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

// System.Net.Sockets.SendPacketsElement
struct SendPacketsElement_t3_487;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.SendPacketsElement::.ctor(System.Byte[])
extern "C" void SendPacketsElement__ctor_m3_3354 (SendPacketsElement_t3_487 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C" void SendPacketsElement__ctor_m3_3355 (SendPacketsElement_t3_487 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" void SendPacketsElement__ctor_m3_3356 (SendPacketsElement_t3_487 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, bool ___endOfPacket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::.ctor(System.String)
extern "C" void SendPacketsElement__ctor_m3_3357 (SendPacketsElement_t3_487 * __this, String_t* ___filepath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::.ctor(System.String,System.Int32,System.Int32)
extern "C" void SendPacketsElement__ctor_m3_3358 (SendPacketsElement_t3_487 * __this, String_t* ___filepath, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::.ctor(System.String,System.Int32,System.Int32,System.Boolean)
extern "C" void SendPacketsElement__ctor_m3_3359 (SendPacketsElement_t3_487 * __this, String_t* ___filepath, int32_t ___offset, int32_t ___count, bool ___endOfPacket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.SendPacketsElement::get_Buffer()
extern "C" ByteU5BU5D_t1_72* SendPacketsElement_get_Buffer_m3_3360 (SendPacketsElement_t3_487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::set_Buffer(System.Byte[])
extern "C" void SendPacketsElement_set_Buffer_m3_3361 (SendPacketsElement_t3_487 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SendPacketsElement::get_Count()
extern "C" int32_t SendPacketsElement_get_Count_m3_3362 (SendPacketsElement_t3_487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::set_Count(System.Int32)
extern "C" void SendPacketsElement_set_Count_m3_3363 (SendPacketsElement_t3_487 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.SendPacketsElement::get_EndOfPacket()
extern "C" bool SendPacketsElement_get_EndOfPacket_m3_3364 (SendPacketsElement_t3_487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::set_EndOfPacket(System.Boolean)
extern "C" void SendPacketsElement_set_EndOfPacket_m3_3365 (SendPacketsElement_t3_487 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Sockets.SendPacketsElement::get_FilePath()
extern "C" String_t* SendPacketsElement_get_FilePath_m3_3366 (SendPacketsElement_t3_487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::set_FilePath(System.String)
extern "C" void SendPacketsElement_set_FilePath_m3_3367 (SendPacketsElement_t3_487 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SendPacketsElement::get_Offset()
extern "C" int32_t SendPacketsElement_get_Offset_m3_3368 (SendPacketsElement_t3_487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SendPacketsElement::set_Offset(System.Int32)
extern "C" void SendPacketsElement_set_Offset_m3_3369 (SendPacketsElement_t3_487 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
