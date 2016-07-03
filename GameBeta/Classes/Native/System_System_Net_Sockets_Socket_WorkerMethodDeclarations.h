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

// System.Net.Sockets.Socket/Worker
struct Worker_t3_493;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t3_490;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
extern "C" void Worker__ctor_m3_3392 (Worker_t3_493 * __this, SocketAsyncResult_t3_490 * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
extern "C" void Worker__ctor_m3_3393 (Worker_t3_493 * __this, SocketAsyncResult_t3_490 * ___ares, bool ___requireSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Accept()
extern "C" void Worker_Accept_m3_3394 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::AcceptReceive()
extern "C" void Worker_AcceptReceive_m3_3395 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Connect()
extern "C" void Worker_Connect_m3_3396 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Disconnect()
extern "C" void Worker_Disconnect_m3_3397 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
extern "C" void Worker_Receive_m3_3398 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
extern "C" void Worker_ReceiveFrom_m3_3399 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveGeneric()
extern "C" void Worker_ReceiveGeneric_m3_3400 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
extern "C" void Worker_UpdateSendValues_m3_3401 (Worker_t3_493 * __this, int32_t ___last_sent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
extern "C" void Worker_Send_m3_3402 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
extern "C" void Worker_SendTo_m3_3403 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendGeneric()
extern "C" void Worker_SendGeneric_m3_3404 (Worker_t3_493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
