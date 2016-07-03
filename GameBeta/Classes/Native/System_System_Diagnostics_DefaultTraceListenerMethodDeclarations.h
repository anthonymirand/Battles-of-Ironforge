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

// System.Diagnostics.DefaultTraceListener
struct DefaultTraceListener_t3_202;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_DefaultTraceListener_DialogResult.h"

// System.Void System.Diagnostics.DefaultTraceListener::.ctor()
extern "C" void DefaultTraceListener__ctor_m3_1429 (DefaultTraceListener_t3_202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::.cctor()
extern "C" void DefaultTraceListener__cctor_m3_1430 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DefaultTraceListener::GetPrefix(System.String,System.String)
extern "C" String_t* DefaultTraceListener_GetPrefix_m3_1431 (Object_t * __this /* static, unused */, String_t* ___var, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.DefaultTraceListener::get_AssertUiEnabled()
extern "C" bool DefaultTraceListener_get_AssertUiEnabled_m3_1432 (DefaultTraceListener_t3_202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::set_AssertUiEnabled(System.Boolean)
extern "C" void DefaultTraceListener_set_AssertUiEnabled_m3_1433 (DefaultTraceListener_t3_202 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DefaultTraceListener::get_LogFileName()
extern "C" String_t* DefaultTraceListener_get_LogFileName_m3_1434 (DefaultTraceListener_t3_202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::set_LogFileName(System.String)
extern "C" void DefaultTraceListener_set_LogFileName_m3_1435 (DefaultTraceListener_t3_202 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::Fail(System.String)
extern "C" void DefaultTraceListener_Fail_m3_1436 (DefaultTraceListener_t3_202 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::Fail(System.String,System.String)
extern "C" void DefaultTraceListener_Fail_m3_1437 (DefaultTraceListener_t3_202 * __this, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.DefaultTraceListener/DialogResult System.Diagnostics.DefaultTraceListener::ProcessUI(System.String,System.String)
extern "C" int32_t DefaultTraceListener_ProcessUI_m3_1438 (DefaultTraceListener_t3_202 * __this, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteWindowsDebugString(System.String)
extern "C" void DefaultTraceListener_WriteWindowsDebugString_m3_1439 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteDebugString(System.String)
extern "C" void DefaultTraceListener_WriteDebugString_m3_1440 (DefaultTraceListener_t3_202 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteMonoTrace(System.String)
extern "C" void DefaultTraceListener_WriteMonoTrace_m3_1441 (DefaultTraceListener_t3_202 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WritePrefix()
extern "C" void DefaultTraceListener_WritePrefix_m3_1442 (DefaultTraceListener_t3_202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteImpl(System.String)
extern "C" void DefaultTraceListener_WriteImpl_m3_1443 (DefaultTraceListener_t3_202 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteLogFile(System.String,System.String)
extern "C" void DefaultTraceListener_WriteLogFile_m3_1444 (DefaultTraceListener_t3_202 * __this, String_t* ___message, String_t* ___logFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteLogFileImpl(System.String,System.String)
extern "C" void DefaultTraceListener_WriteLogFileImpl_m3_1445 (DefaultTraceListener_t3_202 * __this, String_t* ___message, String_t* ___logFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::Write(System.String)
extern "C" void DefaultTraceListener_Write_m3_1446 (DefaultTraceListener_t3_202 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteLine(System.String)
extern "C" void DefaultTraceListener_WriteLine_m3_1447 (DefaultTraceListener_t3_202 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
