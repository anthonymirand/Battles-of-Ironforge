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

// System.Diagnostics.TraceImpl
struct TraceImpl_t3_238;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3_237;
// System.Object
struct Object_t;
// System.Diagnostics.CorrelationManager
struct CorrelationManager_t3_198;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.TraceImpl::.ctor()
extern "C" void TraceImpl__ctor_m3_1816 (TraceImpl_t3_238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::.cctor()
extern "C" void TraceImpl__cctor_m3_1817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceImpl::get_AutoFlush()
extern "C" bool TraceImpl_get_AutoFlush_m3_1818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_AutoFlush(System.Boolean)
extern "C" void TraceImpl_set_AutoFlush_m3_1819 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceImpl::get_IndentLevel()
extern "C" int32_t TraceImpl_get_IndentLevel_m3_1820 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_IndentLevel(System.Int32)
extern "C" void TraceImpl_set_IndentLevel_m3_1821 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceImpl::get_IndentSize()
extern "C" int32_t TraceImpl_get_IndentSize_m3_1822 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_IndentSize(System.Int32)
extern "C" void TraceImpl_set_IndentSize_m3_1823 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImpl::get_Listeners()
extern "C" TraceListenerCollection_t3_237 * TraceImpl_get_Listeners_m3_1824 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceImpl::get_ListenersSyncRoot()
extern "C" Object_t * TraceImpl_get_ListenersSyncRoot_m3_1825 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.CorrelationManager System.Diagnostics.TraceImpl::get_CorrelationManager()
extern "C" CorrelationManager_t3_198 * TraceImpl_get_CorrelationManager_m3_1826 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceImpl::get_UseGlobalLock()
extern "C" bool TraceImpl_get_UseGlobalLock_m3_1827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_UseGlobalLock(System.Boolean)
extern "C" void TraceImpl_set_UseGlobalLock_m3_1828 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::InitOnce()
extern "C" void TraceImpl_InitOnce_m3_1829 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Assert(System.Boolean)
extern "C" void TraceImpl_Assert_m3_1830 (Object_t * __this /* static, unused */, bool ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Assert(System.Boolean,System.String)
extern "C" void TraceImpl_Assert_m3_1831 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Assert(System.Boolean,System.String,System.String)
extern "C" void TraceImpl_Assert_m3_1832 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Close()
extern "C" void TraceImpl_Close_m3_1833 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Fail(System.String)
extern "C" void TraceImpl_Fail_m3_1834 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Fail(System.String,System.String)
extern "C" void TraceImpl_Fail_m3_1835 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Flush()
extern "C" void TraceImpl_Flush_m3_1836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Indent()
extern "C" void TraceImpl_Indent_m3_1837 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Unindent()
extern "C" void TraceImpl_Unindent_m3_1838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.Object)
extern "C" void TraceImpl_Write_m3_1839 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.String)
extern "C" void TraceImpl_Write_m3_1840 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.Object,System.String)
extern "C" void TraceImpl_Write_m3_1841 (Object_t * __this /* static, unused */, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.String,System.String)
extern "C" void TraceImpl_Write_m3_1842 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.Object)
extern "C" void TraceImpl_WriteIf_m3_1843 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.String)
extern "C" void TraceImpl_WriteIf_m3_1844 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.Object,System.String)
extern "C" void TraceImpl_WriteIf_m3_1845 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.String,System.String)
extern "C" void TraceImpl_WriteIf_m3_1846 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.Object)
extern "C" void TraceImpl_WriteLine_m3_1847 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.String)
extern "C" void TraceImpl_WriteLine_m3_1848 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.Object,System.String)
extern "C" void TraceImpl_WriteLine_m3_1849 (Object_t * __this /* static, unused */, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.String,System.String)
extern "C" void TraceImpl_WriteLine_m3_1850 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.Object)
extern "C" void TraceImpl_WriteLineIf_m3_1851 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.String)
extern "C" void TraceImpl_WriteLineIf_m3_1852 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.Object,System.String)
extern "C" void TraceImpl_WriteLineIf_m3_1853 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.String,System.String)
extern "C" void TraceImpl_WriteLineIf_m3_1854 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
