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

// System.Net.HttpUtility
struct HttpUtility_t3_592;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.IO.MemoryStream
struct MemoryStream_t1_250;
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpUtility::.ctor()
extern "C" void HttpUtility__ctor_m3_4476 (HttpUtility_t3_592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpUtility::UrlDecode(System.String)
extern "C" String_t* HttpUtility_UrlDecode_m3_4477 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Net.HttpUtility::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C" CharU5BU5D_t1_16* HttpUtility_GetChars_m3_4478 (Object_t * __this /* static, unused */, MemoryStream_t1_250 * ___b, Encoding_t1_227 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpUtility::UrlDecode(System.String,System.Text.Encoding)
extern "C" String_t* HttpUtility_UrlDecode_m3_4479 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t1_227 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
