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

// System.Diagnostics.TextWriterTraceListener
struct TextWriterTraceListener_t3_197;
// System.IO.Stream
struct Stream_t1_226;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t1_263;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.TextWriterTraceListener::.ctor()
extern "C" void TextWriterTraceListener__ctor_m3_1749 (TextWriterTraceListener_t3_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.Stream)
extern "C" void TextWriterTraceListener__ctor_m3_1750 (TextWriterTraceListener_t3_197 * __this, Stream_t1_226 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.String)
extern "C" void TextWriterTraceListener__ctor_m3_1751 (TextWriterTraceListener_t3_197 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.TextWriter)
extern "C" void TextWriterTraceListener__ctor_m3_1752 (TextWriterTraceListener_t3_197 * __this, TextWriter_t1_263 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.Stream,System.String)
extern "C" void TextWriterTraceListener__ctor_m3_1753 (TextWriterTraceListener_t3_197 * __this, Stream_t1_226 * ___stream, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.String,System.String)
extern "C" void TextWriterTraceListener__ctor_m3_1754 (TextWriterTraceListener_t3_197 * __this, String_t* ___fileName, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.TextWriter,System.String)
extern "C" void TextWriterTraceListener__ctor_m3_1755 (TextWriterTraceListener_t3_197 * __this, TextWriter_t1_263 * ___writer, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Diagnostics.TextWriterTraceListener::get_Writer()
extern "C" TextWriter_t1_263 * TextWriterTraceListener_get_Writer_m3_1756 (TextWriterTraceListener_t3_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::set_Writer(System.IO.TextWriter)
extern "C" void TextWriterTraceListener_set_Writer_m3_1757 (TextWriterTraceListener_t3_197 * __this, TextWriter_t1_263 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Close()
extern "C" void TextWriterTraceListener_Close_m3_1758 (TextWriterTraceListener_t3_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Dispose(System.Boolean)
extern "C" void TextWriterTraceListener_Dispose_m3_1759 (TextWriterTraceListener_t3_197 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Flush()
extern "C" void TextWriterTraceListener_Flush_m3_1760 (TextWriterTraceListener_t3_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Write(System.String)
extern "C" void TextWriterTraceListener_Write_m3_1761 (TextWriterTraceListener_t3_197 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::WriteLine(System.String)
extern "C" void TextWriterTraceListener_WriteLine_m3_1762 (TextWriterTraceListener_t3_197 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
