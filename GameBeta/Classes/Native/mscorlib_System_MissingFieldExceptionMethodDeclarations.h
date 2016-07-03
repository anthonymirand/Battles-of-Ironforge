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

// System.MissingFieldException
struct MissingFieldException_t1_783;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingFieldException::.ctor()
extern "C" void MissingFieldException__ctor_m1_5569 (MissingFieldException_t1_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.String)
extern "C" void MissingFieldException__ctor_m1_5570 (MissingFieldException_t1_783 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingFieldException__ctor_m1_5571 (MissingFieldException_t1_783 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingFieldException::get_Message()
extern "C" String_t* MissingFieldException_get_Message_m1_5572 (MissingFieldException_t1_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
