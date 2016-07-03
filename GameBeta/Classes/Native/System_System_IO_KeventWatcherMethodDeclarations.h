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

// System.IO.KeventWatcher
struct KeventWatcher_t3_280;
// System.IO.IFileWatcher
struct IFileWatcher_t3_268;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t3_251;
// System.IO.KeventData
struct KeventData_t3_279;
// System.String
struct String_t;
// System.IO.FileSystemInfo
struct FileSystemInfo_t1_231;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_kevent.h"
#include "System_System_IO_FileAction.h"
#include "System_System_IO_timespec.h"

// System.Void System.IO.KeventWatcher::.ctor()
extern "C" void KeventWatcher__ctor_m3_2156 (KeventWatcher_t3_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.KeventWatcher::GetInstance(System.IO.IFileWatcher&)
extern "C" bool KeventWatcher_GetInstance_m3_2157 (Object_t * __this /* static, unused */, Object_t ** ___watcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void KeventWatcher_StartDispatching_m3_2158 (KeventWatcher_t3_280 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StartMonitoringDirectory(System.IO.KeventData)
extern "C" void KeventWatcher_StartMonitoringDirectory_m3_2159 (Object_t * __this /* static, unused */, KeventData_t3_279 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void KeventWatcher_StopDispatching_m3_2160 (KeventWatcher_t3_280 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StopMonitoringDirectory(System.IO.KeventData)
extern "C" void KeventWatcher_StopMonitoringDirectory_m3_2161 (Object_t * __this /* static, unused */, KeventData_t3_279 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::Monitor()
extern "C" void KeventWatcher_Monitor_m3_2162 (KeventWatcher_t3_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::ProcessEvent(System.IO.kevent)
extern "C" void KeventWatcher_ProcessEvent_m3_2163 (KeventWatcher_t3_280 * __this, kevent_t3_276  ___ev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::PostEvent(System.String,System.IO.FileSystemWatcher,System.IO.FileAction,System.IO.FileSystemInfo)
extern "C" void KeventWatcher_PostEvent_m3_2164 (KeventWatcher_t3_280 * __this, String_t* ___filename, FileSystemWatcher_t3_251 * ___fsw, int32_t ___fa, FileSystemInfo_t1_231 * ___changedFsi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::open(System.String,System.Int32,System.Int32)
extern "C" int32_t KeventWatcher_open_m3_2165 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___flags, int32_t ___mode_t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::close(System.Int32)
extern "C" int32_t KeventWatcher_close_m3_2166 (Object_t * __this /* static, unused */, int32_t ___fd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::kqueue()
extern "C" int32_t KeventWatcher_kqueue_m3_2167 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::kevent(System.Int32,System.IO.kevent&,System.Int32,System.IO.kevent&,System.Int32,System.IO.timespec&)
extern "C" int32_t KeventWatcher_kevent_m3_2168 (Object_t * __this /* static, unused */, int32_t ___kqueue, kevent_t3_276 * ___ev, int32_t ___nchanges, kevent_t3_276 * ___evtlist, int32_t ___nevents, timespec_t3_277 * ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
