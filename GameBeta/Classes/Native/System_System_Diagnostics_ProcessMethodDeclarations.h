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

// System.Diagnostics.Process
struct Process_t3_209;
// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t3_214;
// System.EventHandler
struct EventHandler_t1_275;
// System.String
struct String_t;
// System.Diagnostics.ProcessModule
struct ProcessModule_t3_216;
// System.Diagnostics.ProcessModule[]
struct ProcessModuleU5BU5D_t3_817;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t3_212;
// System.IO.StreamReader
struct StreamReader_t1_261;
// System.IO.StreamWriter
struct StreamWriter_t1_262;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t3_213;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t3_215;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t3_221;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Diagnostics.Process[]
struct ProcessU5BU5D_t3_818;
// System.Security.SecureString
struct SecureString_t1_665;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Diagnostics_ProcessPriorityClass.h"
#include "mscorlib_System_TimeSpan.h"
#include "System_System_Diagnostics_Process_ProcInfo.h"

// System.Void System.Diagnostics.Process::.ctor(System.IntPtr,System.Int32)
extern "C" void Process__ctor_m3_1495 (Process_t3_209 * __this, IntPtr_t ___handle, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::.ctor()
extern "C" void Process__ctor_m3_1496 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::add_OutputDataReceived(System.Diagnostics.DataReceivedEventHandler)
extern "C" void Process_add_OutputDataReceived_m3_1497 (Process_t3_209 * __this, DataReceivedEventHandler_t3_214 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::remove_OutputDataReceived(System.Diagnostics.DataReceivedEventHandler)
extern "C" void Process_remove_OutputDataReceived_m3_1498 (Process_t3_209 * __this, DataReceivedEventHandler_t3_214 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::add_ErrorDataReceived(System.Diagnostics.DataReceivedEventHandler)
extern "C" void Process_add_ErrorDataReceived_m3_1499 (Process_t3_209 * __this, DataReceivedEventHandler_t3_214 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::remove_ErrorDataReceived(System.Diagnostics.DataReceivedEventHandler)
extern "C" void Process_remove_ErrorDataReceived_m3_1500 (Process_t3_209 * __this, DataReceivedEventHandler_t3_214 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::add_Exited(System.EventHandler)
extern "C" void Process_add_Exited_m3_1501 (Process_t3_209 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::remove_Exited(System.EventHandler)
extern "C" void Process_remove_Exited_m3_1502 (Process_t3_209 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_BasePriority()
extern "C" int32_t Process_get_BasePriority_m3_1503 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::StartExitCallbackIfNeeded()
extern "C" void Process_StartExitCallbackIfNeeded_m3_1504 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_EnableRaisingEvents()
extern "C" bool Process_get_EnableRaisingEvents_m3_1505 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_EnableRaisingEvents(System.Boolean)
extern "C" void Process_set_EnableRaisingEvents_m3_1506 (Process_t3_209 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::ExitCode_internal(System.IntPtr)
extern "C" int32_t Process_ExitCode_internal_m3_1507 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_ExitCode()
extern "C" int32_t Process_get_ExitCode_m3_1508 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::ExitTime_internal(System.IntPtr)
extern "C" int64_t Process_ExitTime_internal_m3_1509 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Diagnostics.Process::get_ExitTime()
extern "C" DateTime_t1_128  Process_get_ExitTime_m3_1510 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::get_Handle()
extern "C" IntPtr_t Process_get_Handle_m3_1511 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_HandleCount()
extern "C" int32_t Process_get_HandleCount_m3_1512 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_HasExited()
extern "C" bool Process_get_HasExited_m3_1513 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_Id()
extern "C" int32_t Process_get_Id_m3_1514 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::get_MachineName()
extern "C" String_t* Process_get_MachineName_m3_1515 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessModule System.Diagnostics.Process::get_MainModule()
extern "C" ProcessModule_t3_216 * Process_get_MainModule_m3_1516 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::get_MainWindowHandle()
extern "C" IntPtr_t Process_get_MainWindowHandle_m3_1517 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::get_MainWindowTitle()
extern "C" String_t* Process_get_MainWindowTitle_m3_1518 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::GetWorkingSet_internal(System.IntPtr,System.Int32&,System.Int32&)
extern "C" bool Process_GetWorkingSet_internal_m3_1519 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::SetWorkingSet_internal(System.IntPtr,System.Int32,System.Int32,System.Boolean)
extern "C" bool Process_SetWorkingSet_internal_m3_1520 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___min, int32_t ___max, bool ___use_min, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::get_MaxWorkingSet()
extern "C" IntPtr_t Process_get_MaxWorkingSet_m3_1521 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_MaxWorkingSet(System.IntPtr)
extern "C" void Process_set_MaxWorkingSet_m3_1522 (Process_t3_209 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::get_MinWorkingSet()
extern "C" IntPtr_t Process_get_MinWorkingSet_m3_1523 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_MinWorkingSet(System.IntPtr)
extern "C" void Process_set_MinWorkingSet_m3_1524 (Process_t3_209 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessModule[] System.Diagnostics.Process::GetModules_internal(System.IntPtr)
extern "C" ProcessModuleU5BU5D_t3_817* Process_GetModules_internal_m3_1525 (Process_t3_209 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::get_Modules()
extern "C" ProcessModuleCollection_t3_212 * Process_get_Modules_m3_1526 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::GetProcessData(System.Int32,System.Int32,System.Int32&)
extern "C" int64_t Process_GetProcessData_m3_1527 (Object_t * __this /* static, unused */, int32_t ___pid, int32_t ___data_type, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_NonpagedSystemMemorySize()
extern "C" int32_t Process_get_NonpagedSystemMemorySize_m3_1528 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_PagedMemorySize()
extern "C" int32_t Process_get_PagedMemorySize_m3_1529 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_PagedSystemMemorySize()
extern "C" int32_t Process_get_PagedSystemMemorySize_m3_1530 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_PeakPagedMemorySize()
extern "C" int32_t Process_get_PeakPagedMemorySize_m3_1531 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_PeakVirtualMemorySize()
extern "C" int32_t Process_get_PeakVirtualMemorySize_m3_1532 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_PeakWorkingSet()
extern "C" int32_t Process_get_PeakWorkingSet_m3_1533 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_NonpagedSystemMemorySize64()
extern "C" int64_t Process_get_NonpagedSystemMemorySize64_m3_1534 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_PagedMemorySize64()
extern "C" int64_t Process_get_PagedMemorySize64_m3_1535 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_PagedSystemMemorySize64()
extern "C" int64_t Process_get_PagedSystemMemorySize64_m3_1536 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_PeakPagedMemorySize64()
extern "C" int64_t Process_get_PeakPagedMemorySize64_m3_1537 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_PeakVirtualMemorySize64()
extern "C" int64_t Process_get_PeakVirtualMemorySize64_m3_1538 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_PeakWorkingSet64()
extern "C" int64_t Process_get_PeakWorkingSet64_m3_1539 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_PriorityBoostEnabled()
extern "C" bool Process_get_PriorityBoostEnabled_m3_1540 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_PriorityBoostEnabled(System.Boolean)
extern "C" void Process_set_PriorityBoostEnabled_m3_1541 (Process_t3_209 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessPriorityClass System.Diagnostics.Process::get_PriorityClass()
extern "C" int32_t Process_get_PriorityClass_m3_1542 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_PriorityClass(System.Diagnostics.ProcessPriorityClass)
extern "C" void Process_set_PriorityClass_m3_1543 (Process_t3_209 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::GetPriorityClass(System.IntPtr,System.Int32&)
extern "C" int32_t Process_GetPriorityClass_m3_1544 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::SetPriorityClass(System.IntPtr,System.Int32,System.Int32&)
extern "C" bool Process_SetPriorityClass_m3_1545 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___priority, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_PrivateMemorySize()
extern "C" int32_t Process_get_PrivateMemorySize_m3_1546 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_SessionId()
extern "C" int32_t Process_get_SessionId_m3_1547 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::Times(System.IntPtr,System.Int32)
extern "C" int64_t Process_Times_m3_1548 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Process::get_PrivilegedProcessorTime()
extern "C" TimeSpan_t1_218  Process_get_PrivilegedProcessorTime_m3_1549 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::ProcessName_internal(System.IntPtr)
extern "C" String_t* Process_ProcessName_internal_m3_1550 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::get_ProcessName()
extern "C" String_t* Process_get_ProcessName_m3_1551 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::get_ProcessorAffinity()
extern "C" IntPtr_t Process_get_ProcessorAffinity_m3_1552 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_ProcessorAffinity(System.IntPtr)
extern "C" void Process_set_ProcessorAffinity_m3_1553 (Process_t3_209 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_Responding()
extern "C" bool Process_get_Responding_m3_1554 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.Diagnostics.Process::get_StandardError()
extern "C" StreamReader_t1_261 * Process_get_StandardError_m3_1555 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.Diagnostics.Process::get_StandardInput()
extern "C" StreamWriter_t1_262 * Process_get_StandardInput_m3_1556 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.Diagnostics.Process::get_StandardOutput()
extern "C" StreamReader_t1_261 * Process_get_StandardOutput_m3_1557 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::get_StartInfo()
extern "C" ProcessStartInfo_t3_213 * Process_get_StartInfo_m3_1558 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_StartInfo(System.Diagnostics.ProcessStartInfo)
extern "C" void Process_set_StartInfo_m3_1559 (Process_t3_209 * __this, ProcessStartInfo_t3_213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::StartTime_internal(System.IntPtr)
extern "C" int64_t Process_StartTime_internal_m3_1560 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Diagnostics.Process::get_StartTime()
extern "C" DateTime_t1_128  Process_get_StartTime_m3_1561 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::get_SynchronizingObject()
extern "C" Object_t * Process_get_SynchronizingObject_m3_1562 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_SynchronizingObject(System.ComponentModel.ISynchronizeInvoke)
extern "C" void Process_set_SynchronizingObject_m3_1563 (Process_t3_209 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::get_Threads()
extern "C" ProcessThreadCollection_t3_221 * Process_get_Threads_m3_1564 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Process::get_TotalProcessorTime()
extern "C" TimeSpan_t1_218  Process_get_TotalProcessorTime_m3_1565 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Process::get_UserProcessorTime()
extern "C" TimeSpan_t1_218  Process_get_UserProcessorTime_m3_1566 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_VirtualMemorySize()
extern "C" int32_t Process_get_VirtualMemorySize_m3_1567 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_WorkingSet()
extern "C" int32_t Process_get_WorkingSet_m3_1568 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_PrivateMemorySize64()
extern "C" int64_t Process_get_PrivateMemorySize64_m3_1569 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_VirtualMemorySize64()
extern "C" int64_t Process_get_VirtualMemorySize64_m3_1570 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Process::get_WorkingSet64()
extern "C" int64_t Process_get_WorkingSet64_m3_1571 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Close()
extern "C" void Process_Close_m3_1572 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Kill_internal(System.IntPtr,System.Int32)
extern "C" bool Process_Kill_internal_m3_1573 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___signo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Close(System.Int32)
extern "C" bool Process_Close_m3_1574 (Process_t3_209 * __this, int32_t ___signo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::CloseMainWindow()
extern "C" bool Process_CloseMainWindow_m3_1575 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::EnterDebugMode()
extern "C" void Process_EnterDebugMode_m3_1576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::GetProcess_internal(System.Int32)
extern "C" IntPtr_t Process_GetProcess_internal_m3_1577 (Object_t * __this /* static, unused */, int32_t ___pid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::GetPid_internal()
extern "C" int32_t Process_GetPid_internal_m3_1578 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::GetCurrentProcess()
extern "C" Process_t3_209 * Process_GetCurrentProcess_m3_1579 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::GetProcessById(System.Int32)
extern "C" Process_t3_209 * Process_GetProcessById_m3_1580 (Object_t * __this /* static, unused */, int32_t ___processId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::GetProcessById(System.Int32,System.String)
extern "C" Process_t3_209 * Process_GetProcessById_m3_1581 (Object_t * __this /* static, unused */, int32_t ___processId, String_t* ___machineName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Diagnostics.Process::GetProcesses_internal()
extern "C" Int32U5BU5D_t1_161* Process_GetProcesses_internal_m3_1582 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process[] System.Diagnostics.Process::GetProcesses()
extern "C" ProcessU5BU5D_t3_818* Process_GetProcesses_m3_1583 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process[] System.Diagnostics.Process::GetProcesses(System.String)
extern "C" ProcessU5BU5D_t3_818* Process_GetProcesses_m3_1584 (Object_t * __this /* static, unused */, String_t* ___machineName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process[] System.Diagnostics.Process::GetProcessesByName(System.String)
extern "C" ProcessU5BU5D_t3_818* Process_GetProcessesByName_m3_1585 (Object_t * __this /* static, unused */, String_t* ___processName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process[] System.Diagnostics.Process::GetProcessesByName(System.String,System.String)
extern "C" ProcessU5BU5D_t3_818* Process_GetProcessesByName_m3_1586 (Object_t * __this /* static, unused */, String_t* ___processName, String_t* ___machineName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Kill()
extern "C" void Process_Kill_m3_1587 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::LeaveDebugMode()
extern "C" void Process_LeaveDebugMode_m3_1588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Refresh()
extern "C" void Process_Refresh_m3_1589 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::ShellExecuteEx_internal(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process/ProcInfo&)
extern "C" bool Process_ShellExecuteEx_internal_m3_1590 (Object_t * __this /* static, unused */, ProcessStartInfo_t3_213 * ___startInfo, ProcInfo_t3_206 * ___proc_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::CreateProcess_internal(System.Diagnostics.ProcessStartInfo,System.IntPtr,System.IntPtr,System.IntPtr,System.Diagnostics.Process/ProcInfo&)
extern "C" bool Process_CreateProcess_internal_m3_1591 (Object_t * __this /* static, unused */, ProcessStartInfo_t3_213 * ___startInfo, IntPtr_t ___stdin, IntPtr_t ___stdout, IntPtr_t ___stderr, ProcInfo_t3_206 * ___proc_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_shell(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C" bool Process_Start_shell_m3_1592 (Object_t * __this /* static, unused */, ProcessStartInfo_t3_213 * ___startInfo, Process_t3_209 * ___process, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_noshell(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C" bool Process_Start_noshell_m3_1593 (Object_t * __this /* static, unused */, ProcessStartInfo_t3_213 * ___startInfo, Process_t3_209 * ___process, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::FillUserInfo(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process/ProcInfo&)
extern "C" void Process_FillUserInfo_m3_1594 (Object_t * __this /* static, unused */, ProcessStartInfo_t3_213 * ___startInfo, ProcInfo_t3_206 * ___proc_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_common(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C" bool Process_Start_common_m3_1595 (Object_t * __this /* static, unused */, ProcessStartInfo_t3_213 * ___startInfo, Process_t3_209 * ___process, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start()
extern "C" bool Process_Start_m3_1596 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::Start(System.Diagnostics.ProcessStartInfo)
extern "C" Process_t3_209 * Process_Start_m3_1597 (Object_t * __this /* static, unused */, ProcessStartInfo_t3_213 * ___startInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::Start(System.String)
extern "C" Process_t3_209 * Process_Start_m3_1598 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::Start(System.String,System.String)
extern "C" Process_t3_209 * Process_Start_m3_1599 (Object_t * __this /* static, unused */, String_t* ___fileName, String_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::Start(System.String,System.String,System.Security.SecureString,System.String)
extern "C" Process_t3_209 * Process_Start_m3_1600 (Object_t * __this /* static, unused */, String_t* ___fileName, String_t* ___username, SecureString_t1_665 * ___password, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::Start(System.String,System.String,System.String,System.Security.SecureString,System.String)
extern "C" Process_t3_209 * Process_Start_m3_1601 (Object_t * __this /* static, unused */, String_t* ___fileName, String_t* ___arguments, String_t* ___username, SecureString_t1_665 * ___password, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::ToString()
extern "C" String_t* Process_ToString_m3_1602 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForExit_internal(System.IntPtr,System.Int32)
extern "C" bool Process_WaitForExit_internal_m3_1603 (Process_t3_209 * __this, IntPtr_t ___handle, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::WaitForExit()
extern "C" void Process_WaitForExit_m3_1604 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForExit(System.Int32)
extern "C" bool Process_WaitForExit_m3_1605 (Process_t3_209 * __this, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForInputIdle_internal(System.IntPtr,System.Int32)
extern "C" bool Process_WaitForInputIdle_internal_m3_1606 (Process_t3_209 * __this, IntPtr_t ___handle, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForInputIdle()
extern "C" bool Process_WaitForInputIdle_m3_1607 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForInputIdle(System.Int32)
extern "C" bool Process_WaitForInputIdle_m3_1608 (Process_t3_209 * __this, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::IsLocalMachine(System.String)
extern "C" bool Process_IsLocalMachine_m3_1609 (Object_t * __this /* static, unused */, String_t* ___machineName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::OnOutputDataReceived(System.String)
extern "C" void Process_OnOutputDataReceived_m3_1610 (Process_t3_209 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::OnErrorDataReceived(System.String)
extern "C" void Process_OnErrorDataReceived_m3_1611 (Process_t3_209 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::BeginOutputReadLine()
extern "C" void Process_BeginOutputReadLine_m3_1612 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::CancelOutputRead()
extern "C" void Process_CancelOutputRead_m3_1613 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::BeginErrorReadLine()
extern "C" void Process_BeginErrorReadLine_m3_1614 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::CancelErrorRead()
extern "C" void Process_CancelErrorRead_m3_1615 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Process_free_internal(System.IntPtr)
extern "C" void Process_Process_free_internal_m3_1616 (Process_t3_209 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Dispose(System.Boolean)
extern "C" void Process_Dispose_m3_1617 (Process_t3_209 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Finalize()
extern "C" void Process_Finalize_m3_1618 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::CBOnExit(System.Object,System.Boolean)
extern "C" void Process_CBOnExit_m3_1619 (Object_t * __this /* static, unused */, Object_t * ___state, bool ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::OnExited()
extern "C" void Process_OnExited_m3_1620 (Process_t3_209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_IsWindows()
extern "C" bool Process_get_IsWindows_m3_1621 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
