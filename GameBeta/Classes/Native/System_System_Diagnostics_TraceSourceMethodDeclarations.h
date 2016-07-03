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

// System.Diagnostics.TraceSource
struct TraceSource_t3_241;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3_237;
// System.Diagnostics.SourceSwitch
struct SourceSwitch_t3_226;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_SourceLevels.h"
#include "System_System_Diagnostics_TraceEventType.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Diagnostics.TraceSource::.ctor(System.String)
extern "C" void TraceSource__ctor_m3_1925 (TraceSource_t3_241 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::.ctor(System.String,System.Diagnostics.SourceLevels)
extern "C" void TraceSource__ctor_m3_1926 (TraceSource_t3_241 * __this, String_t* ___name, int32_t ___sourceLevels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceSource::get_Attributes()
extern "C" StringDictionary_t3_49 * TraceSource_get_Attributes_m3_1927 (TraceSource_t3_241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSource::get_Listeners()
extern "C" TraceListenerCollection_t3_237 * TraceSource_get_Listeners_m3_1928 (TraceSource_t3_241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSource::get_Name()
extern "C" String_t* TraceSource_get_Name_m3_1929 (TraceSource_t3_241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.SourceSwitch System.Diagnostics.TraceSource::get_Switch()
extern "C" SourceSwitch_t3_226 * TraceSource_get_Switch_m3_1930 (TraceSource_t3_241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::set_Switch(System.Diagnostics.SourceSwitch)
extern "C" void TraceSource_set_Switch_m3_1931 (TraceSource_t3_241 * __this, SourceSwitch_t3_226 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::Close()
extern "C" void TraceSource_Close_m3_1932 (TraceSource_t3_241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::Flush()
extern "C" void TraceSource_Flush_m3_1933 (TraceSource_t3_241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceData(System.Diagnostics.TraceEventType,System.Int32,System.Object)
extern "C" void TraceSource_TraceData_m3_1934 (TraceSource_t3_241 * __this, int32_t ___eventType, int32_t ___id, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceData(System.Diagnostics.TraceEventType,System.Int32,System.Object[])
extern "C" void TraceSource_TraceData_m3_1935 (TraceSource_t3_241 * __this, int32_t ___eventType, int32_t ___id, ObjectU5BU5D_t1_158* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32)
extern "C" void TraceSource_TraceEvent_m3_1936 (TraceSource_t3_241 * __this, int32_t ___eventType, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32,System.String)
extern "C" void TraceSource_TraceEvent_m3_1937 (TraceSource_t3_241 * __this, int32_t ___eventType, int32_t ___id, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32,System.String,System.Object[])
extern "C" void TraceSource_TraceEvent_m3_1938 (TraceSource_t3_241 * __this, int32_t ___eventType, int32_t ___id, String_t* ___format, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceInformation(System.String)
extern "C" void TraceSource_TraceInformation_m3_1939 (TraceSource_t3_241 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceInformation(System.String,System.Object[])
extern "C" void TraceSource_TraceInformation_m3_1940 (TraceSource_t3_241 * __this, String_t* ___format, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceTransfer(System.Int32,System.String,System.Guid)
extern "C" void TraceSource_TraceTransfer_m3_1941 (TraceSource_t3_241 * __this, int32_t ___id, String_t* ___message, Guid_t1_775  ___relatedActivityId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.TraceSource::GetSupportedAttributes()
extern "C" StringU5BU5D_t1_206* TraceSource_GetSupportedAttributes_m3_1942 (TraceSource_t3_241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
