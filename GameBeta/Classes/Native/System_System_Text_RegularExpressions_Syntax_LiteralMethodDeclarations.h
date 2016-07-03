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

// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3_756;
// System.String
struct String_t;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3_841;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3_762;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C" void Literal__ctor_m3_6223 (Literal_t3_756 * __this, String_t* ___str, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Literal::get_String()
extern "C" String_t* Literal_get_String_m3_6224 (Literal_t3_756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::set_String(System.String)
extern "C" void Literal_set_String_m3_6225 (Literal_t3_756 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::get_IgnoreCase()
extern "C" bool Literal_get_IgnoreCase_m3_6226 (Literal_t3_756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::set_IgnoreCase(System.Boolean)
extern "C" void Literal_set_IgnoreCase_m3_6227 (Literal_t3_756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern "C" void Literal_CompileLiteral_m3_6228 (Object_t * __this /* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Literal_Compile_m3_6229 (Literal_t3_756 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C" void Literal_GetWidth_m3_6230 (Literal_t3_756 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t3_762 * Literal_GetAnchorInfo_m3_6231 (Literal_t3_756 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C" bool Literal_IsComplex_m3_6232 (Literal_t3_756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
