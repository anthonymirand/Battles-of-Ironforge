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

// System.Net.CookieParser
struct CookieParser_t3_599;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CookieParser::.ctor(System.String)
extern "C" void CookieParser__ctor_m3_4629 (CookieParser_t3_599 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieParser::.ctor(System.String,System.Int32)
extern "C" void CookieParser__ctor_m3_4630 (CookieParser_t3_599 * __this, String_t* ___header, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieParser::GetNextNameValue(System.String&,System.String&)
extern "C" bool CookieParser_GetNextNameValue_m3_4631 (CookieParser_t3_599 * __this, String_t** ___name, String_t** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieName()
extern "C" String_t* CookieParser_GetCookieName_m3_4632 (CookieParser_t3_599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieValue()
extern "C" String_t* CookieParser_GetCookieValue_m3_4633 (CookieParser_t3_599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
