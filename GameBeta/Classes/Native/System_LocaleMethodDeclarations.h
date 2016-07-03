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

// Locale
struct Locale_t3_18;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"

// System.Void Locale::.ctor()
extern "C" void Locale__ctor_m3_23 (Locale_t3_18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String)
extern "C" String_t* Locale_GetText_m3_24 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String,System.Object[])
extern "C" String_t* Locale_GetText_m3_25 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
