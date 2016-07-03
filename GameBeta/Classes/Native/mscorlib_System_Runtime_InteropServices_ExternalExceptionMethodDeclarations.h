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

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t1_407;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.InteropServices.ExternalException::.ctor()
extern "C" void ExternalException__ctor_m1_3304 (ExternalException_t1_407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
extern "C" void ExternalException__ctor_m1_3305 (ExternalException_t1_407 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExternalException__ctor_m1_3306 (ExternalException_t1_407 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String,System.Exception)
extern "C" void ExternalException__ctor_m1_3307 (ExternalException_t1_407 * __this, String_t* ___message, Exception_t1_33 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode()
extern "C" int32_t ExternalException_get_ErrorCode_m1_3308 (ExternalException_t1_407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
