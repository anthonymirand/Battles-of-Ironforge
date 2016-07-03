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

// System.IO.TextWriter
struct TextWriter_t1_263;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m1_2552 (TextWriter_t1_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C" void TextWriter__cctor_m1_2553 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C" void TextWriter_Close_m1_2554 (TextWriter_t1_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m1_2555 (TextWriter_t1_263 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C" void TextWriter_Dispose_m1_2556 (TextWriter_t1_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C" void TextWriter_Flush_m1_2557 (TextWriter_t1_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C" TextWriter_t1_263 * TextWriter_Synchronized_m1_2558 (Object_t * __this /* static, unused */, TextWriter_t1_263 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m1_2559 (TextWriter_t1_263 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m1_2560 (TextWriter_t1_263 * __this, CharU5BU5D_t1_16* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Object)
extern "C" void TextWriter_Write_m1_2561 (TextWriter_t1_263 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m1_2562 (TextWriter_t1_263 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object)
extern "C" void TextWriter_Write_m1_2563 (TextWriter_t1_263 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object[])
extern "C" void TextWriter_Write_m1_2564 (TextWriter_t1_263 * __this, String_t* ___format, ObjectU5BU5D_t1_158* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m1_2565 (TextWriter_t1_263 * __this, CharU5BU5D_t1_16* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object,System.Object)
extern "C" void TextWriter_Write_m1_2566 (TextWriter_t1_263 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C" void TextWriter_Write_m1_2567 (TextWriter_t1_263 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m1_2568 (TextWriter_t1_263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.Object)
extern "C" void TextWriter_WriteLine_m1_2569 (TextWriter_t1_263 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C" void TextWriter_WriteLine_m1_2570 (TextWriter_t1_263 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object)
extern "C" void TextWriter_WriteLine_m1_2571 (TextWriter_t1_263 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object[])
extern "C" void TextWriter_WriteLine_m1_2572 (TextWriter_t1_263 * __this, String_t* ___format, ObjectU5BU5D_t1_158* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object,System.Object)
extern "C" void TextWriter_WriteLine_m1_2573 (TextWriter_t1_263 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" void TextWriter_WriteLine_m1_2574 (TextWriter_t1_263 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
