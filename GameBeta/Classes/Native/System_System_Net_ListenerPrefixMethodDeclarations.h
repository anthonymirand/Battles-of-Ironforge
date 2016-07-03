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

// System.Net.ListenerPrefix
struct ListenerPrefix_t3_579;
// System.String
struct String_t;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3_492;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ListenerPrefix::.ctor(System.String)
extern "C" void ListenerPrefix__ctor_m3_4721 (ListenerPrefix_t3_579 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::ToString()
extern "C" String_t* ListenerPrefix_ToString_m3_4722 (ListenerPrefix_t3_579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.ListenerPrefix::get_Addresses()
extern "C" IPAddressU5BU5D_t3_492* ListenerPrefix_get_Addresses_m3_4723 (ListenerPrefix_t3_579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::set_Addresses(System.Net.IPAddress[])
extern "C" void ListenerPrefix_set_Addresses_m3_4724 (ListenerPrefix_t3_579 * __this, IPAddressU5BU5D_t3_492* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerPrefix::get_Secure()
extern "C" bool ListenerPrefix_get_Secure_m3_4725 (ListenerPrefix_t3_579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::get_Host()
extern "C" String_t* ListenerPrefix_get_Host_m3_4726 (ListenerPrefix_t3_579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ListenerPrefix::get_Port()
extern "C" int32_t ListenerPrefix_get_Port_m3_4727 (ListenerPrefix_t3_579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::get_Path()
extern "C" String_t* ListenerPrefix_get_Path_m3_4728 (ListenerPrefix_t3_579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerPrefix::Equals(System.Object)
extern "C" bool ListenerPrefix_Equals_m3_4729 (ListenerPrefix_t3_579 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ListenerPrefix::GetHashCode()
extern "C" int32_t ListenerPrefix_GetHashCode_m3_4730 (ListenerPrefix_t3_579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::Parse(System.String)
extern "C" void ListenerPrefix_Parse_m3_4731 (ListenerPrefix_t3_579 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::CheckUri(System.String)
extern "C" void ListenerPrefix_CheckUri_m3_4732 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
