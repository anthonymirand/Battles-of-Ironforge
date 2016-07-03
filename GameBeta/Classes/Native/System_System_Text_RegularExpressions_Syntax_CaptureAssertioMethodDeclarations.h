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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t3_754;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3_756;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3_749;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3_841;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3_755;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m3_6203 (CaptureAssertion_t3_754 * __this, Literal_t3_756 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::get_CapturingGroup()
extern "C" CapturingGroup_t3_749 * CaptureAssertion_get_CapturingGroup_m3_6204 (CaptureAssertion_t3_754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m3_6205 (CaptureAssertion_t3_754 * __this, CapturingGroup_t3_749 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m3_6206 (CaptureAssertion_t3_754 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m3_6207 (CaptureAssertion_t3_754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t3_755 * CaptureAssertion_get_Alternate_m3_6208 (CaptureAssertion_t3_754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
