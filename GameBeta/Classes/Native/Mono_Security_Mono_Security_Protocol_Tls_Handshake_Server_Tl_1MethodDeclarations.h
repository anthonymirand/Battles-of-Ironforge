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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished
struct TlsClientFinished_t2_134;
// Mono.Security.Protocol.Tls.Context
struct Context_t2_79;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientFinished__ctor_m2_967 (TlsClientFinished_t2_134 * __this, Context_t2_79 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsSsl3()
extern "C" void TlsClientFinished_ProcessAsSsl3_m2_968 (TlsClientFinished_t2_134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsTls1()
extern "C" void TlsClientFinished_ProcessAsTls1_m2_969 (TlsClientFinished_t2_134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
