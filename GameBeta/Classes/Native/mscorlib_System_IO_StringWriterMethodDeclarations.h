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

// System.IO.StringWriter
struct StringWriter_t1_265;
// System.Text.StringBuilder
struct StringBuilder_t1_146;
// System.IFormatProvider
struct IFormatProvider_t1_269;
// System.Text.Encoding
struct Encoding_t1_227;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1_16;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StringWriter::.ctor()
extern "C" void StringWriter__ctor_m1_2516 (StringWriter_t1_265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C" void StringWriter__ctor_m1_2517 (StringWriter_t1_265 * __this, StringBuilder_t1_146 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C" void StringWriter__ctor_m1_2518 (StringWriter_t1_265 * __this, StringBuilder_t1_146 * ___sb, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C" Encoding_t1_227 * StringWriter_get_Encoding_m1_2519 (StringWriter_t1_265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C" void StringWriter_Close_m1_2520 (StringWriter_t1_265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C" void StringWriter_Dispose_m1_2521 (StringWriter_t1_265 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder()
extern "C" StringBuilder_t1_146 * StringWriter_GetStringBuilder_m1_2522 (StringWriter_t1_265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C" String_t* StringWriter_ToString_m1_2523 (StringWriter_t1_265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C" void StringWriter_Write_m1_2524 (StringWriter_t1_265 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C" void StringWriter_Write_m1_2525 (StringWriter_t1_265 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StringWriter_Write_m1_2526 (StringWriter_t1_265 * __this, CharU5BU5D_t1_16* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
