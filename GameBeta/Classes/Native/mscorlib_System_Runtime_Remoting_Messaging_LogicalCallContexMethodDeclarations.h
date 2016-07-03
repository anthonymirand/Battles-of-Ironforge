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

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1_466;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern "C" void LogicalCallContext__ctor_m1_3530 (LogicalCallContext_t1_466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LogicalCallContext__ctor_m1_3531 (LogicalCallContext_t1_466 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LogicalCallContext_GetObjectData_m1_3532 (LogicalCallContext_t1_466 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern "C" void LogicalCallContext_SetData_m1_3533 (LogicalCallContext_t1_466 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.LogicalCallContext::Clone()
extern "C" Object_t * LogicalCallContext_Clone_m1_3534 (LogicalCallContext_t1_466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
