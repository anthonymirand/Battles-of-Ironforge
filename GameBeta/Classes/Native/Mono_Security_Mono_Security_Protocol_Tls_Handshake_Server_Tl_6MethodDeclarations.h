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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished
struct TlsServerFinished_t2_139;
// Mono.Security.Protocol.Tls.Context
struct Context_t2_79;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerFinished__ctor_m2_986 (TlsServerFinished_t2_139 * __this, Context_t2_79 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.cctor()
extern "C" void TlsServerFinished__cctor_m2_987 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsSsl3()
extern "C" void TlsServerFinished_ProcessAsSsl3_m2_988 (TlsServerFinished_t2_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsTls1()
extern "C" void TlsServerFinished_ProcessAsTls1_m2_989 (TlsServerFinished_t2_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
