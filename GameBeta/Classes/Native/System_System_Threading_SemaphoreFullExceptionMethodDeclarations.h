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

// System.Threading.SemaphoreFullException
struct SemaphoreFullException_t3_764;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.SemaphoreFullException::.ctor()
extern "C" void SemaphoreFullException__ctor_m3_6295 (SemaphoreFullException_t3_764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SemaphoreFullException::.ctor(System.String)
extern "C" void SemaphoreFullException__ctor_m3_6296 (SemaphoreFullException_t3_764 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SemaphoreFullException::.ctor(System.String,System.Exception)
extern "C" void SemaphoreFullException__ctor_m3_6297 (SemaphoreFullException_t3_764 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SemaphoreFullException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SemaphoreFullException__ctor_m3_6298 (SemaphoreFullException_t3_764 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
