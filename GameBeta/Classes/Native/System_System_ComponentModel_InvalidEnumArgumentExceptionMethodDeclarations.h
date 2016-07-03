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

// System.ComponentModel.InvalidEnumArgumentException
struct InvalidEnumArgumentException_t3_133;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t1_33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
extern "C" void InvalidEnumArgumentException__ctor_m3_835 (InvalidEnumArgumentException_t3_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
extern "C" void InvalidEnumArgumentException__ctor_m3_836 (InvalidEnumArgumentException_t3_133 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Int32,System.Type)
extern "C" void InvalidEnumArgumentException__ctor_m3_837 (InvalidEnumArgumentException_t3_133 * __this, String_t* ___argumentName, int32_t ___invalidValue, Type_t * ___enumClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Exception)
extern "C" void InvalidEnumArgumentException__ctor_m3_838 (InvalidEnumArgumentException_t3_133 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidEnumArgumentException__ctor_m3_839 (InvalidEnumArgumentException_t3_133 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
