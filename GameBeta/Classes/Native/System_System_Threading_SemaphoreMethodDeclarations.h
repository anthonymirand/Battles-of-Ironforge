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

// System.Threading.Semaphore
struct Semaphore_t3_763;
// System.String
struct String_t;
// System.Security.AccessControl.SemaphoreSecurity
struct SemaphoreSecurity_t3_650;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Security_AccessControl_SemaphoreRights.h"
#include "System_System_IO_MonoIOError.h"

// System.Void System.Threading.Semaphore::.ctor(System.IntPtr)
extern "C" void Semaphore__ctor_m3_6281 (Semaphore_t3_763 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32)
extern "C" void Semaphore__ctor_m3_6282 (Semaphore_t3_763 * __this, int32_t ___initialCount, int32_t ___maximumCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32,System.String)
extern "C" void Semaphore__ctor_m3_6283 (Semaphore_t3_763 * __this, int32_t ___initialCount, int32_t ___maximumCount, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32,System.String,System.Boolean&)
extern "C" void Semaphore__ctor_m3_6284 (Semaphore_t3_763 * __this, int32_t ___initialCount, int32_t ___maximumCount, String_t* ___name, bool* ___createdNew, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32,System.String,System.Boolean&,System.Security.AccessControl.SemaphoreSecurity)
extern "C" void Semaphore__ctor_m3_6285 (Semaphore_t3_763 * __this, int32_t ___initialCount, int32_t ___maximumCount, String_t* ___name, bool* ___createdNew, SemaphoreSecurity_t3_650 * ___semaphoreSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Semaphore::CreateSemaphore_internal(System.Int32,System.Int32,System.String,System.Boolean&)
extern "C" IntPtr_t Semaphore_CreateSemaphore_internal_m3_6286 (Object_t * __this /* static, unused */, int32_t ___initialCount, int32_t ___maximumCount, String_t* ___name, bool* ___createdNew, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Semaphore::ReleaseSemaphore_internal(System.IntPtr,System.Int32,System.Boolean&)
extern "C" int32_t Semaphore_ReleaseSemaphore_internal_m3_6287 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___releaseCount, bool* ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Semaphore::OpenSemaphore_internal(System.String,System.Security.AccessControl.SemaphoreRights,System.IO.MonoIOError&)
extern "C" IntPtr_t Semaphore_OpenSemaphore_internal_m3_6288 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___rights, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.AccessControl.SemaphoreSecurity System.Threading.Semaphore::GetAccessControl()
extern "C" SemaphoreSecurity_t3_650 * Semaphore_GetAccessControl_m3_6289 (Semaphore_t3_763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Semaphore::Release()
extern "C" int32_t Semaphore_Release_m3_6290 (Semaphore_t3_763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Semaphore::Release(System.Int32)
extern "C" int32_t Semaphore_Release_m3_6291 (Semaphore_t3_763 * __this, int32_t ___releaseCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Semaphore::SetAccessControl(System.Security.AccessControl.SemaphoreSecurity)
extern "C" void Semaphore_SetAccessControl_m3_6292 (Semaphore_t3_763 * __this, SemaphoreSecurity_t3_650 * ___semaphoreSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Semaphore System.Threading.Semaphore::OpenExisting(System.String)
extern "C" Semaphore_t3_763 * Semaphore_OpenExisting_m3_6293 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Semaphore System.Threading.Semaphore::OpenExisting(System.String,System.Security.AccessControl.SemaphoreRights)
extern "C" Semaphore_t3_763 * Semaphore_OpenExisting_m3_6294 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___rights, const MethodInfo* method) IL2CPP_METHOD_ATTR;
