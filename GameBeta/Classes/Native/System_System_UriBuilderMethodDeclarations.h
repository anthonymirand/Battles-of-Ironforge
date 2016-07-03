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

// System.UriBuilder
struct UriBuilder_t3_783;
// System.String
struct String_t;
// System.Uri
struct Uri_t3_3;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.UriBuilder::.ctor()
extern "C" void UriBuilder__ctor_m3_6432 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::.ctor(System.String)
extern "C" void UriBuilder__ctor_m3_6433 (UriBuilder_t3_783 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C" void UriBuilder__ctor_m3_6434 (UriBuilder_t3_783 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::.ctor(System.String,System.String)
extern "C" void UriBuilder__ctor_m3_6435 (UriBuilder_t3_783 * __this, String_t* ___schemeName, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::.ctor(System.String,System.String,System.Int32)
extern "C" void UriBuilder__ctor_m3_6436 (UriBuilder_t3_783 * __this, String_t* ___scheme, String_t* ___host, int32_t ___portNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::.ctor(System.String,System.String,System.Int32,System.String)
extern "C" void UriBuilder__ctor_m3_6437 (UriBuilder_t3_783 * __this, String_t* ___scheme, String_t* ___host, int32_t ___port, String_t* ___pathValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::.ctor(System.String,System.String,System.Int32,System.String,System.String)
extern "C" void UriBuilder__ctor_m3_6438 (UriBuilder_t3_783 * __this, String_t* ___scheme, String_t* ___host, int32_t ___port, String_t* ___pathValue, String_t* ___extraValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::get_Fragment()
extern "C" String_t* UriBuilder_get_Fragment_m3_6439 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Fragment(System.String)
extern "C" void UriBuilder_set_Fragment_m3_6440 (UriBuilder_t3_783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::get_Host()
extern "C" String_t* UriBuilder_get_Host_m3_6441 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C" void UriBuilder_set_Host_m3_6442 (UriBuilder_t3_783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::get_Password()
extern "C" String_t* UriBuilder_get_Password_m3_6443 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Password(System.String)
extern "C" void UriBuilder_set_Password_m3_6444 (UriBuilder_t3_783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::get_Path()
extern "C" String_t* UriBuilder_get_Path_m3_6445 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Path(System.String)
extern "C" void UriBuilder_set_Path_m3_6446 (UriBuilder_t3_783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::get_Port()
extern "C" int32_t UriBuilder_get_Port_m3_6447 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Port(System.Int32)
extern "C" void UriBuilder_set_Port_m3_6448 (UriBuilder_t3_783 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::get_Query()
extern "C" String_t* UriBuilder_get_Query_m3_6449 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Query(System.String)
extern "C" void UriBuilder_set_Query_m3_6450 (UriBuilder_t3_783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::get_Scheme()
extern "C" String_t* UriBuilder_get_Scheme_m3_6451 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Scheme(System.String)
extern "C" void UriBuilder_set_Scheme_m3_6452 (UriBuilder_t3_783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C" Uri_t3_3 * UriBuilder_get_Uri_m3_6453 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::get_UserName()
extern "C" String_t* UriBuilder_get_UserName_m3_6454 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_UserName(System.String)
extern "C" void UriBuilder_set_UserName_m3_6455 (UriBuilder_t3_783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C" bool UriBuilder_Equals_m3_6456 (UriBuilder_t3_783 * __this, Object_t * ___rparam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C" int32_t UriBuilder_GetHashCode_m3_6457 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C" String_t* UriBuilder_ToString_m3_6458 (UriBuilder_t3_783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
