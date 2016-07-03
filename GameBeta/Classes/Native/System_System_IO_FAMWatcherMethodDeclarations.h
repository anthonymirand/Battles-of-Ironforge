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

// System.IO.FAMWatcher
struct FAMWatcher_t3_259;
// System.IO.IFileWatcher
struct IFileWatcher_t3_268;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t3_251;
// System.IO.FAMData
struct FAMData_t3_258;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_FAMConnection.h"
#include "System_System_IO_FAMRequest.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FAMWatcher::.ctor()
extern "C" void FAMWatcher__ctor_m3_2036 (FAMWatcher_t3_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FAMWatcher::GetInstance(System.IO.IFileWatcher&,System.Boolean)
extern "C" bool FAMWatcher_GetInstance_m3_2037 (Object_t * __this /* static, unused */, Object_t ** ___watcher, bool ___gamin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void FAMWatcher_StartDispatching_m3_2038 (FAMWatcher_t3_259 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StartMonitoringDirectory(System.IO.FAMData,System.Boolean)
extern "C" void FAMWatcher_StartMonitoringDirectory_m3_2039 (Object_t * __this /* static, unused */, FAMData_t3_258 * ___data, bool ___justcreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void FAMWatcher_StopDispatching_m3_2040 (FAMWatcher_t3_259 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StopMonitoringDirectory(System.IO.FAMData)
extern "C" void FAMWatcher_StopMonitoringDirectory_m3_2041 (Object_t * __this /* static, unused */, FAMData_t3_258 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::Monitor()
extern "C" void FAMWatcher_Monitor_m3_2042 (FAMWatcher_t3_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::ProcessEvents()
extern "C" void FAMWatcher_ProcessEvents_m3_2043 (FAMWatcher_t3_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::Finalize()
extern "C" void FAMWatcher_Finalize_m3_2044 (FAMWatcher_t3_259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMOpen(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_FAMOpen_m3_2045 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMClose(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_FAMClose_m3_2046 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMMonitorDirectory(System.IO.FAMConnection&,System.String,System.IO.FAMRequest&,System.IntPtr)
extern "C" int32_t FAMWatcher_FAMMonitorDirectory_m3_2047 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, String_t* ___filename, FAMRequest_t3_256 * ___fr, IntPtr_t ___user_data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMCancelMonitor(System.IO.FAMConnection&,System.IO.FAMRequest&)
extern "C" int32_t FAMWatcher_FAMCancelMonitor_m3_2048 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, FAMRequest_t3_256 * ___fr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMPending(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_FAMPending_m3_2049 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_Open(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_fam_Open_m3_2050 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_Close(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_fam_Close_m3_2051 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_MonitorDirectory(System.IO.FAMConnection&,System.String,System.IO.FAMRequest&,System.IntPtr)
extern "C" int32_t FAMWatcher_fam_MonitorDirectory_m3_2052 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, String_t* ___filename, FAMRequest_t3_256 * ___fr, IntPtr_t ___user_data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_CancelMonitor(System.IO.FAMConnection&,System.IO.FAMRequest&)
extern "C" int32_t FAMWatcher_fam_CancelMonitor_m3_2053 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, FAMRequest_t3_256 * ___fr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_Pending(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_fam_Pending_m3_2054 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_Open(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_gamin_Open_m3_2055 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_Close(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_gamin_Close_m3_2056 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_MonitorDirectory(System.IO.FAMConnection&,System.String,System.IO.FAMRequest&,System.IntPtr)
extern "C" int32_t FAMWatcher_gamin_MonitorDirectory_m3_2057 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, String_t* ___filename, FAMRequest_t3_256 * ___fr, IntPtr_t ___user_data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_CancelMonitor(System.IO.FAMConnection&,System.IO.FAMRequest&)
extern "C" int32_t FAMWatcher_gamin_CancelMonitor_m3_2058 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, FAMRequest_t3_256 * ___fr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_Pending(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_gamin_Pending_m3_2059 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::InternalFAMNextEvent(System.IO.FAMConnection&,System.String&,System.Int32&,System.Int32&)
extern "C" int32_t FAMWatcher_InternalFAMNextEvent_m3_2060 (Object_t * __this /* static, unused */, FAMConnection_t3_255 * ___fc, String_t** ___filename, int32_t* ___code, int32_t* ___reqnum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
