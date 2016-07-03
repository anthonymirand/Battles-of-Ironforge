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

// System.Diagnostics.TraceListener
struct TraceListener_t3_203;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Diagnostics.TraceEventCache
struct TraceEventCache_t3_234;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Diagnostics.TraceFilter
struct TraceFilter_t3_224;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_TraceEventType.h"
#include "mscorlib_System_Guid.h"
#include "System_System_Diagnostics_TraceOptions.h"

// System.Void System.Diagnostics.TraceListener::.ctor()
extern "C" void TraceListener__ctor_m3_1855 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::.ctor(System.String)
extern "C" void TraceListener__ctor_m3_1856 (TraceListener_t3_203 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListener::get_IndentLevel()
extern "C" int32_t TraceListener_get_IndentLevel_m3_1857 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentLevel(System.Int32)
extern "C" void TraceListener_set_IndentLevel_m3_1858 (TraceListener_t3_203 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListener::get_IndentSize()
extern "C" int32_t TraceListener_get_IndentSize_m3_1859 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentSize(System.Int32)
extern "C" void TraceListener_set_IndentSize_m3_1860 (TraceListener_t3_203 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::get_Name()
extern "C" String_t* TraceListener_get_Name_m3_1861 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_Name(System.String)
extern "C" void TraceListener_set_Name_m3_1862 (TraceListener_t3_203 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListener::get_NeedIndent()
extern "C" bool TraceListener_get_NeedIndent_m3_1863 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_NeedIndent(System.Boolean)
extern "C" void TraceListener_set_NeedIndent_m3_1864 (TraceListener_t3_203 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListener::get_IsThreadSafe()
extern "C" bool TraceListener_get_IsThreadSafe_m3_1865 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Close()
extern "C" void TraceListener_Close_m3_1866 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose()
extern "C" void TraceListener_Dispose_m3_1867 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose(System.Boolean)
extern "C" void TraceListener_Dispose_m3_1868 (TraceListener_t3_203 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Fail(System.String)
extern "C" void TraceListener_Fail_m3_1869 (TraceListener_t3_203 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Fail(System.String,System.String)
extern "C" void TraceListener_Fail_m3_1870 (TraceListener_t3_203 * __this, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Flush()
extern "C" void TraceListener_Flush_m3_1871 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Write(System.Object)
extern "C" void TraceListener_Write_m3_1872 (TraceListener_t3_203 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Write(System.Object,System.String)
extern "C" void TraceListener_Write_m3_1873 (TraceListener_t3_203 * __this, Object_t * ___o, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Write(System.String,System.String)
extern "C" void TraceListener_Write_m3_1874 (TraceListener_t3_203 * __this, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::WriteIndent()
extern "C" void TraceListener_WriteIndent_m3_1875 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::WriteLine(System.Object)
extern "C" void TraceListener_WriteLine_m3_1876 (TraceListener_t3_203 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::WriteLine(System.Object,System.String)
extern "C" void TraceListener_WriteLine_m3_1877 (TraceListener_t3_203 * __this, Object_t * ___o, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::WriteLine(System.String,System.String)
extern "C" void TraceListener_WriteLine_m3_1878 (TraceListener_t3_203 * __this, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::FormatArray(System.Collections.ICollection,System.String)
extern "C" String_t* TraceListener_FormatArray_m3_1879 (Object_t * __this /* static, unused */, Object_t * ___list, String_t* ___joiner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceData(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.Object)
extern "C" void TraceListener_TraceData_m3_1880 (TraceListener_t3_203 * __this, TraceEventCache_t3_234 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceData(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.Object[])
extern "C" void TraceListener_TraceData_m3_1881 (TraceListener_t3_203 * __this, TraceEventCache_t3_234 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, ObjectU5BU5D_t1_158* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceEvent(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32)
extern "C" void TraceListener_TraceEvent_m3_1882 (TraceListener_t3_203 * __this, TraceEventCache_t3_234 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceEvent(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String)
extern "C" void TraceListener_TraceEvent_m3_1883 (TraceListener_t3_203 * __this, TraceEventCache_t3_234 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceEvent(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String,System.Object[])
extern "C" void TraceListener_TraceEvent_m3_1884 (TraceListener_t3_203 * __this, TraceEventCache_t3_234 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, String_t* ___format, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceTransfer(System.Diagnostics.TraceEventCache,System.String,System.Int32,System.String,System.Guid)
extern "C" void TraceListener_TraceTransfer_m3_1885 (TraceListener_t3_203 * __this, TraceEventCache_t3_234 * ___eventCache, String_t* ___source, int32_t ___id, String_t* ___message, Guid_t1_775  ___relatedActivityId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.TraceListener::GetSupportedAttributes()
extern "C" StringU5BU5D_t1_206* TraceListener_GetSupportedAttributes_m3_1886 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::get_Attributes()
extern "C" StringDictionary_t3_49 * TraceListener_get_Attributes_m3_1887 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceFilter System.Diagnostics.TraceListener::get_Filter()
extern "C" TraceFilter_t3_224 * TraceListener_get_Filter_m3_1888 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_Filter(System.Diagnostics.TraceFilter)
extern "C" void TraceListener_set_Filter_m3_1889 (TraceListener_t3_203 * __this, TraceFilter_t3_224 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::get_TraceOutputOptions()
extern "C" int32_t TraceListener_get_TraceOutputOptions_m3_1890 (TraceListener_t3_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_TraceOutputOptions(System.Diagnostics.TraceOptions)
extern "C" void TraceListener_set_TraceOutputOptions_m3_1891 (TraceListener_t3_203 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
