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

// System.Security.Authentication.InvalidCredentialException
struct InvalidCredentialException_t3_655;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Authentication.InvalidCredentialException::.ctor()
extern "C" void InvalidCredentialException__ctor_m3_5388 (InvalidCredentialException_t3_655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Authentication.InvalidCredentialException::.ctor(System.String)
extern "C" void InvalidCredentialException__ctor_m3_5389 (InvalidCredentialException_t3_655 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Authentication.InvalidCredentialException::.ctor(System.String,System.Exception)
extern "C" void InvalidCredentialException__ctor_m3_5390 (InvalidCredentialException_t3_655 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Authentication.InvalidCredentialException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidCredentialException__ctor_m3_5391 (InvalidCredentialException_t3_655 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
