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

// System.IO.InotifyWatcher
struct InotifyWatcher_t3_275;
// System.IO.IFileWatcher
struct IFileWatcher_t3_268;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t3_251;
// System.IO.InotifyData
struct InotifyData_t3_273;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Collections.IEnumerable
struct IEnumerable_t1_890;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_InotifyMask.h"
#include "System_System_IO_NotifyFilters.h"
#include "System_System_IO_InotifyEvent.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.InotifyWatcher::.ctor()
extern "C" void InotifyWatcher__ctor_m3_2133 (InotifyWatcher_t3_275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::.cctor()
extern "C" void InotifyWatcher__cctor_m3_2134 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.InotifyWatcher::GetInstance(System.IO.IFileWatcher&,System.Boolean)
extern "C" bool InotifyWatcher_GetInstance_m3_2135 (Object_t * __this /* static, unused */, Object_t ** ___watcher, bool ___gamin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void InotifyWatcher_StartDispatching_m3_2136 (InotifyWatcher_t3_275 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::AppendRequestData(System.IO.InotifyData)
extern "C" void InotifyWatcher_AppendRequestData_m3_2137 (Object_t * __this /* static, unused */, InotifyData_t3_273 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.InotifyWatcher::RemoveRequestData(System.IO.InotifyData)
extern "C" bool InotifyWatcher_RemoveRequestData_m3_2138 (Object_t * __this /* static, unused */, InotifyData_t3_273 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.InotifyMask System.IO.InotifyWatcher::GetMaskFromFilters(System.IO.NotifyFilters)
extern "C" uint32_t InotifyWatcher_GetMaskFromFilters_m3_2139 (Object_t * __this /* static, unused */, int32_t ___filters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::StartMonitoringDirectory(System.IO.InotifyData,System.Boolean)
extern "C" void InotifyWatcher_StartMonitoringDirectory_m3_2140 (Object_t * __this /* static, unused */, InotifyData_t3_273 * ___data, bool ___justcreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void InotifyWatcher_StopDispatching_m3_2141 (InotifyWatcher_t3_275 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::StopMonitoringDirectory(System.IO.InotifyData)
extern "C" void InotifyWatcher_StopMonitoringDirectory_m3_2142 (Object_t * __this /* static, unused */, InotifyData_t3_273 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::Monitor()
extern "C" void InotifyWatcher_Monitor_m3_2143 (InotifyWatcher_t3_275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.InotifyWatcher::ReadEvent(System.Byte[],System.Int32,System.Int32,System.IO.InotifyEvent&)
extern "C" int32_t InotifyWatcher_ReadEvent_m3_2144 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___source, int32_t ___off, int32_t ___size, InotifyEvent_t3_271 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable System.IO.InotifyWatcher::GetEnumerator(System.Object)
extern "C" Object_t * InotifyWatcher_GetEnumerator_m3_2145 (Object_t * __this /* static, unused */, Object_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.InotifyWatcher::ProcessEvents(System.Byte[],System.Int32)
extern "C" void InotifyWatcher_ProcessEvents_m3_2146 (InotifyWatcher_t3_275 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.InotifyWatcher::AddDirectoryWatch(System.IntPtr,System.String,System.IO.InotifyMask)
extern "C" int32_t InotifyWatcher_AddDirectoryWatch_m3_2147 (Object_t * __this /* static, unused */, IntPtr_t ___fd, String_t* ___directory, uint32_t ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.InotifyWatcher::Close(System.IntPtr)
extern "C" int32_t InotifyWatcher_Close_m3_2148 (Object_t * __this /* static, unused */, IntPtr_t ___fd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.InotifyWatcher::ReadFromFD(System.IntPtr,System.Byte[],System.IntPtr)
extern "C" int32_t InotifyWatcher_ReadFromFD_m3_2149 (Object_t * __this /* static, unused */, IntPtr_t ___fd, ByteU5BU5D_t1_72* ___buffer, IntPtr_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.InotifyWatcher::GetInotifyInstance()
extern "C" IntPtr_t InotifyWatcher_GetInotifyInstance_m3_2150 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.InotifyWatcher::AddWatch(System.IntPtr,System.String,System.IO.InotifyMask)
extern "C" int32_t InotifyWatcher_AddWatch_m3_2151 (Object_t * __this /* static, unused */, IntPtr_t ___fd, String_t* ___name, uint32_t ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.InotifyWatcher::RemoveWatch(System.IntPtr,System.Int32)
extern "C" IntPtr_t InotifyWatcher_RemoveWatch_m3_2152 (Object_t * __this /* static, unused */, IntPtr_t ___fd, int32_t ___wd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
