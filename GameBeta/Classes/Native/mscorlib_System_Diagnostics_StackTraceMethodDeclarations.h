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

// System.Diagnostics.StackTrace
struct StackTrace_t1_203;
// System.Exception
struct Exception_t1_33;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1_204;
// System.Diagnostics.StackFrame
struct StackFrame_t1_201;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C" void StackTrace__ctor_m1_1985 (StackTrace_t1_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
extern "C" void StackTrace__ctor_m1_1986 (StackTrace_t1_203 * __this, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m1_1987 (StackTrace_t1_203 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C" void StackTrace__ctor_m1_1988 (StackTrace_t1_203 * __this, Exception_t1_33 * ___e, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m1_1989 (StackTrace_t1_203 * __this, Exception_t1_33 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C" void StackTrace__ctor_m1_1990 (StackTrace_t1_203 * __this, Exception_t1_33 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C" void StackTrace_init_frames_m1_1991 (StackTrace_t1_203 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C" StackFrameU5BU5D_t1_204* StackTrace_get_trace_m1_1992 (Object_t * __this /* static, unused */, Exception_t1_33 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C" int32_t StackTrace_get_FrameCount_m1_1993 (StackTrace_t1_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C" StackFrame_t1_201 * StackTrace_GetFrame_m1_1994 (StackTrace_t1_203 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C" String_t* StackTrace_ToString_m1_1995 (StackTrace_t1_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
