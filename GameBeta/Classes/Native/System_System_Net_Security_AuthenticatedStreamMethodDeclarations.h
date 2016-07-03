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

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t3_466;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void AuthenticatedStream__ctor_m3_3186 (AuthenticatedStream_t3_466 * __this, Stream_t1_226 * ___innerStream, bool ___leaveInnerStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern "C" Stream_t1_226 * AuthenticatedStream_get_InnerStream_m3_3187 (AuthenticatedStream_t3_466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
extern "C" bool AuthenticatedStream_get_LeaveInnerStreamOpen_m3_3188 (AuthenticatedStream_t3_466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern "C" void AuthenticatedStream_Dispose_m3_3189 (AuthenticatedStream_t3_466 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
