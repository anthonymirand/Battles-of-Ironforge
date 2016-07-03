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

// System.ComponentModel.LicenseException
struct LicenseException_t3_138;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ComponentModel.LicenseException::.ctor(System.Type)
extern "C" void LicenseException__ctor_m3_853 (LicenseException_t3_138 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object)
extern "C" void LicenseException__ctor_m3_854 (LicenseException_t3_138 * __this, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String)
extern "C" void LicenseException__ctor_m3_855 (LicenseException_t3_138 * __this, Type_t * ___type, Object_t * ___instance, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String,System.Exception)
extern "C" void LicenseException__ctor_m3_856 (LicenseException_t3_138 * __this, Type_t * ___type, Object_t * ___instance, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LicenseException__ctor_m3_857 (LicenseException_t3_138 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LicenseException_GetObjectData_m3_858 (LicenseException_t3_138 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.LicenseException::get_LicensedType()
extern "C" Type_t * LicenseException_get_LicensedType_m3_859 (LicenseException_t3_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
