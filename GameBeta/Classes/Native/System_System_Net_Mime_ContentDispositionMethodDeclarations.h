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

// System.Net.Mime.ContentDisposition
struct ContentDisposition_t3_303;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.Mime.ContentDisposition::.ctor()
extern "C" void ContentDisposition__ctor_m3_2471 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::.ctor(System.String)
extern "C" void ContentDisposition__ctor_m3_2472 (ContentDisposition_t3_303 * __this, String_t* ___disposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::Parse(System.String)
extern "C" void ContentDisposition_Parse_m3_2473 (ContentDisposition_t3_303 * __this, String_t* ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Mime.ContentDisposition::get_CreationDate()
extern "C" DateTime_t1_128  ContentDisposition_get_CreationDate_m3_2474 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_CreationDate(System.DateTime)
extern "C" void ContentDisposition_set_CreationDate_m3_2475 (ContentDisposition_t3_303 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::get_DispositionType()
extern "C" String_t* ContentDisposition_get_DispositionType_m3_2476 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_DispositionType(System.String)
extern "C" void ContentDisposition_set_DispositionType_m3_2477 (ContentDisposition_t3_303 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::get_FileName()
extern "C" String_t* ContentDisposition_get_FileName_m3_2478 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_FileName(System.String)
extern "C" void ContentDisposition_set_FileName_m3_2479 (ContentDisposition_t3_303 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::get_Inline()
extern "C" bool ContentDisposition_get_Inline_m3_2480 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_Inline(System.Boolean)
extern "C" void ContentDisposition_set_Inline_m3_2481 (ContentDisposition_t3_303 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Mime.ContentDisposition::get_ModificationDate()
extern "C" DateTime_t1_128  ContentDisposition_get_ModificationDate_m3_2482 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_ModificationDate(System.DateTime)
extern "C" void ContentDisposition_set_ModificationDate_m3_2483 (ContentDisposition_t3_303 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentDisposition::get_Parameters()
extern "C" StringDictionary_t3_49 * ContentDisposition_get_Parameters_m3_2484 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Mime.ContentDisposition::get_ReadDate()
extern "C" DateTime_t1_128  ContentDisposition_get_ReadDate_m3_2485 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_ReadDate(System.DateTime)
extern "C" void ContentDisposition_set_ReadDate_m3_2486 (ContentDisposition_t3_303 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Mime.ContentDisposition::get_Size()
extern "C" int64_t ContentDisposition_get_Size_m3_2487 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_Size(System.Int64)
extern "C" void ContentDisposition_set_Size_m3_2488 (ContentDisposition_t3_303 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Object)
extern "C" bool ContentDisposition_Equals_m3_2489 (ContentDisposition_t3_303 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Net.Mime.ContentDisposition)
extern "C" bool ContentDisposition_Equals_m3_2490 (ContentDisposition_t3_303 * __this, ContentDisposition_t3_303 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentDisposition::GetHashCode()
extern "C" int32_t ContentDisposition_GetHashCode_m3_2491 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::ToString()
extern "C" String_t* ContentDisposition_ToString_m3_2492 (ContentDisposition_t3_303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
