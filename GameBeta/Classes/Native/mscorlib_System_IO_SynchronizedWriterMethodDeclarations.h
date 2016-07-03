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

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t1_270;
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
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m1_2575 (SynchronizedWriter_t1_270 * __this, TextWriter_t1_263 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m1_2576 (SynchronizedWriter_t1_270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m1_2577 (SynchronizedWriter_t1_270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m1_2578 (SynchronizedWriter_t1_270 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m1_2579 (SynchronizedWriter_t1_270 * __this, CharU5BU5D_t1_16* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Object)
extern "C" void SynchronizedWriter_Write_m1_2580 (SynchronizedWriter_t1_270 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m1_2581 (SynchronizedWriter_t1_270 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
extern "C" void SynchronizedWriter_Write_m1_2582 (SynchronizedWriter_t1_270 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object[])
extern "C" void SynchronizedWriter_Write_m1_2583 (SynchronizedWriter_t1_270 * __this, String_t* ___format, ObjectU5BU5D_t1_158* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m1_2584 (SynchronizedWriter_t1_270 * __this, CharU5BU5D_t1_16* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object)
extern "C" void SynchronizedWriter_Write_m1_2585 (SynchronizedWriter_t1_270 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C" void SynchronizedWriter_Write_m1_2586 (SynchronizedWriter_t1_270 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m1_2587 (SynchronizedWriter_t1_270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.Object)
extern "C" void SynchronizedWriter_WriteLine_m1_2588 (SynchronizedWriter_t1_270 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m1_2589 (SynchronizedWriter_t1_270 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m1_2590 (SynchronizedWriter_t1_270 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object[])
extern "C" void SynchronizedWriter_WriteLine_m1_2591 (SynchronizedWriter_t1_270 * __this, String_t* ___format, ObjectU5BU5D_t1_158* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m1_2592 (SynchronizedWriter_t1_270 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m1_2593 (SynchronizedWriter_t1_270 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.SynchronizedWriter::get_Encoding()
extern "C" Encoding_t1_227 * SynchronizedWriter_get_Encoding_m1_2594 (SynchronizedWriter_t1_270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
