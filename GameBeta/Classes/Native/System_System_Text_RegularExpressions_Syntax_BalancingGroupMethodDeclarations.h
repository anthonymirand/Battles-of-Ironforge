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

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct BalancingGroup_t3_750;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3_749;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3_841;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
extern "C" void BalancingGroup__ctor_m3_6178 (BalancingGroup_t3_750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::get_Balance()
extern "C" CapturingGroup_t3_749 * BalancingGroup_get_Balance_m3_6179 (BalancingGroup_t3_750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void BalancingGroup_set_Balance_m3_6180 (BalancingGroup_t3_750 * __this, CapturingGroup_t3_749 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void BalancingGroup_Compile_m3_6181 (BalancingGroup_t3_750 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
