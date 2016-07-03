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

// System.Security.Cryptography.Oid
struct Oid_t3_662;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.Oid::.ctor()
extern "C" void Oid__ctor_m3_5726 (Oid_t3_662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern "C" void Oid__ctor_m3_5727 (Oid_t3_662 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern "C" void Oid__ctor_m3_5728 (Oid_t3_662 * __this, String_t* ___value, String_t* ___friendlyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern "C" void Oid__ctor_m3_5729 (Oid_t3_662 * __this, Oid_t3_662 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern "C" String_t* Oid_get_FriendlyName_m3_5730 (Oid_t3_662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::set_FriendlyName(System.String)
extern "C" void Oid_set_FriendlyName_m3_5731 (Oid_t3_662 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_Value()
extern "C" String_t* Oid_get_Value_m3_5732 (Oid_t3_662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::set_Value(System.String)
extern "C" void Oid_set_Value_m3_5733 (Oid_t3_662 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::GetName(System.String)
extern "C" String_t* Oid_GetName_m3_5734 (Oid_t3_662 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::GetValue(System.String)
extern "C" String_t* Oid_GetValue_m3_5735 (Oid_t3_662 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
