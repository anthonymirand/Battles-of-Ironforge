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

// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t1_664;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Security_Principal_WindowsAccountType.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Principal.WindowsIdentity::.ctor(System.IntPtr,System.String,System.Security.Principal.WindowsAccountType,System.Boolean)
extern "C" void WindowsIdentity__ctor_m1_4449 (WindowsIdentity_t1_664 * __this, IntPtr_t ___userToken, String_t* ___type, int32_t ___acctType, bool ___isAuthenticated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WindowsIdentity__ctor_m1_4450 (WindowsIdentity_t1_664 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::.cctor()
extern "C" void WindowsIdentity__cctor_m1_4451 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1_4452 (WindowsIdentity_t1_664 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WindowsIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m1_4453 (WindowsIdentity_t1_664 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::Dispose()
extern "C" void WindowsIdentity_Dispose_m1_4454 (WindowsIdentity_t1_664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.WindowsIdentity System.Security.Principal.WindowsIdentity::GetCurrent()
extern "C" WindowsIdentity_t1_664 * WindowsIdentity_GetCurrent_m1_4455 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.WindowsIdentity::get_Name()
extern "C" String_t* WindowsIdentity_get_Name_m1_4456 (WindowsIdentity_t1_664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Principal.WindowsIdentity::get_IsPosix()
extern "C" bool WindowsIdentity_get_IsPosix_m1_4457 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::SetToken(System.IntPtr)
extern "C" void WindowsIdentity_SetToken_m1_4458 (WindowsIdentity_t1_664 * __this, IntPtr_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Principal.WindowsIdentity::GetCurrentToken()
extern "C" IntPtr_t WindowsIdentity_GetCurrentToken_m1_4459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.WindowsIdentity::GetTokenName(System.IntPtr)
extern "C" String_t* WindowsIdentity_GetTokenName_m1_4460 (Object_t * __this /* static, unused */, IntPtr_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
