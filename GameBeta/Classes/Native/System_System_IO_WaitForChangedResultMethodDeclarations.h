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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_WaitForChangedResult.h"
#include "System_System_IO_WatcherChangeTypes.h"

// System.IO.WatcherChangeTypes System.IO.WaitForChangedResult::get_ChangeType()
extern "C" int32_t WaitForChangedResult_get_ChangeType_m3_2206 (WaitForChangedResult_t3_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WaitForChangedResult::set_ChangeType(System.IO.WatcherChangeTypes)
extern "C" void WaitForChangedResult_set_ChangeType_m3_2207 (WaitForChangedResult_t3_263 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.WaitForChangedResult::get_Name()
extern "C" String_t* WaitForChangedResult_get_Name_m3_2208 (WaitForChangedResult_t3_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WaitForChangedResult::set_Name(System.String)
extern "C" void WaitForChangedResult_set_Name_m3_2209 (WaitForChangedResult_t3_263 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.WaitForChangedResult::get_OldName()
extern "C" String_t* WaitForChangedResult_get_OldName_m3_2210 (WaitForChangedResult_t3_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WaitForChangedResult::set_OldName(System.String)
extern "C" void WaitForChangedResult_set_OldName_m3_2211 (WaitForChangedResult_t3_263 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.WaitForChangedResult::get_TimedOut()
extern "C" bool WaitForChangedResult_get_TimedOut_m3_2212 (WaitForChangedResult_t3_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WaitForChangedResult::set_TimedOut(System.Boolean)
extern "C" void WaitForChangedResult_set_TimedOut_m3_2213 (WaitForChangedResult_t3_263 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WaitForChangedResult_t3_263_marshal(const WaitForChangedResult_t3_263& unmarshaled, WaitForChangedResult_t3_263_marshaled& marshaled);
extern "C" void WaitForChangedResult_t3_263_marshal_back(const WaitForChangedResult_t3_263_marshaled& marshaled, WaitForChangedResult_t3_263& unmarshaled);
extern "C" void WaitForChangedResult_t3_263_marshal_cleanup(WaitForChangedResult_t3_263_marshaled& marshaled);
