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

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1_268;
// System.Text.Encoding
struct Encoding_t1_227;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1_16;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern "C" void NullTextWriter__ctor_m1_2547 (NullTextWriter_t1_268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.TextWriter/NullTextWriter::get_Encoding()
extern "C" Encoding_t1_227 * NullTextWriter_get_Encoding_m1_2548 (NullTextWriter_t1_268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern "C" void NullTextWriter_Write_m1_2549 (NullTextWriter_t1_268 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern "C" void NullTextWriter_Write_m1_2550 (NullTextWriter_t1_268 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void NullTextWriter_Write_m1_2551 (NullTextWriter_t1_268 * __this, CharU5BU5D_t1_16* ___value, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
