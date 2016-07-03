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

// System.Diagnostics.Trace
struct Trace_t3_233;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3_237;
// System.Diagnostics.CorrelationManager
struct CorrelationManager_t3_198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1_277;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.Trace::.ctor()
extern "C" void Trace__ctor_m3_1763 (Trace_t3_233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Refresh()
extern "C" void Trace_Refresh_m3_1764 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Trace::get_AutoFlush()
extern "C" bool Trace_get_AutoFlush_m3_1765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::set_AutoFlush(System.Boolean)
extern "C" void Trace_set_AutoFlush_m3_1766 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Trace::get_IndentLevel()
extern "C" int32_t Trace_get_IndentLevel_m3_1767 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::set_IndentLevel(System.Int32)
extern "C" void Trace_set_IndentLevel_m3_1768 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Trace::get_IndentSize()
extern "C" int32_t Trace_get_IndentSize_m3_1769 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::set_IndentSize(System.Int32)
extern "C" void Trace_set_IndentSize_m3_1770 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.Trace::get_Listeners()
extern "C" TraceListenerCollection_t3_237 * Trace_get_Listeners_m3_1771 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.CorrelationManager System.Diagnostics.Trace::get_CorrelationManager()
extern "C" CorrelationManager_t3_198 * Trace_get_CorrelationManager_m3_1772 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Trace::get_UseGlobalLock()
extern "C" bool Trace_get_UseGlobalLock_m3_1773 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::set_UseGlobalLock(System.Boolean)
extern "C" void Trace_set_UseGlobalLock_m3_1774 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Assert(System.Boolean)
extern "C" void Trace_Assert_m3_1775 (Object_t * __this /* static, unused */, bool ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Assert(System.Boolean,System.String)
extern "C" void Trace_Assert_m3_1776 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Assert(System.Boolean,System.String,System.String)
extern "C" void Trace_Assert_m3_1777 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Close()
extern "C" void Trace_Close_m3_1778 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Fail(System.String)
extern "C" void Trace_Fail_m3_1779 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Fail(System.String,System.String)
extern "C" void Trace_Fail_m3_1780 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Flush()
extern "C" void Trace_Flush_m3_1781 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Indent()
extern "C" void Trace_Indent_m3_1782 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Unindent()
extern "C" void Trace_Unindent_m3_1783 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Write(System.Object)
extern "C" void Trace_Write_m3_1784 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Write(System.String)
extern "C" void Trace_Write_m3_1785 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Write(System.Object,System.String)
extern "C" void Trace_Write_m3_1786 (Object_t * __this /* static, unused */, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::Write(System.String,System.String)
extern "C" void Trace_Write_m3_1787 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteIf(System.Boolean,System.Object)
extern "C" void Trace_WriteIf_m3_1788 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteIf(System.Boolean,System.String)
extern "C" void Trace_WriteIf_m3_1789 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteIf(System.Boolean,System.Object,System.String)
extern "C" void Trace_WriteIf_m3_1790 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteIf(System.Boolean,System.String,System.String)
extern "C" void Trace_WriteIf_m3_1791 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLine(System.Object)
extern "C" void Trace_WriteLine_m3_1792 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLine(System.String)
extern "C" void Trace_WriteLine_m3_1793 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLine(System.Object,System.String)
extern "C" void Trace_WriteLine_m3_1794 (Object_t * __this /* static, unused */, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLine(System.String,System.String)
extern "C" void Trace_WriteLine_m3_1795 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLineIf(System.Boolean,System.Object)
extern "C" void Trace_WriteLineIf_m3_1796 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLineIf(System.Boolean,System.String)
extern "C" void Trace_WriteLineIf_m3_1797 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLineIf(System.Boolean,System.Object,System.String)
extern "C" void Trace_WriteLineIf_m3_1798 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::WriteLineIf(System.Boolean,System.String,System.String)
extern "C" void Trace_WriteLineIf_m3_1799 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::DoTrace(System.String,System.Reflection.Assembly,System.String)
extern "C" void Trace_DoTrace_m3_1800 (Object_t * __this /* static, unused */, String_t* ___kind, Assembly_t1_277 * ___report, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::TraceError(System.String)
extern "C" void Trace_TraceError_m3_1801 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::TraceError(System.String,System.Object[])
extern "C" void Trace_TraceError_m3_1802 (Object_t * __this /* static, unused */, String_t* ___message, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::TraceInformation(System.String)
extern "C" void Trace_TraceInformation_m3_1803 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::TraceInformation(System.String,System.Object[])
extern "C" void Trace_TraceInformation_m3_1804 (Object_t * __this /* static, unused */, String_t* ___message, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::TraceWarning(System.String)
extern "C" void Trace_TraceWarning_m3_1805 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Trace::TraceWarning(System.String,System.Object[])
extern "C" void Trace_TraceWarning_m3_1806 (Object_t * __this /* static, unused */, String_t* ___message, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
