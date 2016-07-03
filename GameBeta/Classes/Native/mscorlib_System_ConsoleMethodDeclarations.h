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

// System.Text.Encoding
struct Encoding_t1_227;
// System.IO.TextWriter
struct TextWriter_t1_263;
// System.IO.Stream
struct Stream_t1_226;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.Console::.cctor()
extern "C" void Console__cctor_m1_5033 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C" void Console_SetEncodings_m1_5034 (Object_t * __this /* static, unused */, Encoding_t1_227 * ___inputEncoding, Encoding_t1_227 * ___outputEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C" TextWriter_t1_263 * Console_get_Error_m1_5035 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Out()
extern "C" TextWriter_t1_263 * Console_get_Out_m1_5036 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C" Stream_t1_226 * Console_Open_m1_5037 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C" Stream_t1_226 * Console_OpenStandardError_m1_5038 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C" Stream_t1_226 * Console_OpenStandardInput_m1_5039 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C" Stream_t1_226 * Console_OpenStandardOutput_m1_5040 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::Write(System.String)
extern "C" void Console_Write_m1_5041 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine()
extern "C" void Console_WriteLine_m1_5042 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.Object)
extern "C" void Console_WriteLine_m1_5043 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
extern "C" void Console_WriteLine_m1_5044 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object)
extern "C" void Console_WriteLine_m1_5045 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object[])
extern "C" void Console_WriteLine_m1_5046 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t1_158* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
extern "C" void Console_WriteLine_m1_5047 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" void Console_WriteLine_m1_5048 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
