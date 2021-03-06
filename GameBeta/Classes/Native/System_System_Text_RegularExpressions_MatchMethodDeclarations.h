﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.Match
struct Match_t3_13;
// System.Text.RegularExpressions.Regex
struct Regex_t3_11;
// System.Text.RegularExpressions.IMachine
struct IMachine_t3_703;
// System.String
struct String_t;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t3_14;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Match::.ctor()
extern "C" void Match__ctor_m3_5797 (Match_t3_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Match__ctor_m3_5798 (Match_t3_13 * __this, Regex_t3_11 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Match__ctor_m3_5799 (Match_t3_13 * __this, Regex_t3_11 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
extern "C" void Match__cctor_m3_5800 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern "C" Match_t3_13 * Match_get_Empty_m3_5801 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::Synchronized(System.Text.RegularExpressions.Match)
extern "C" Match_t3_13 * Match_Synchronized_m3_5802 (Object_t * __this /* static, unused */, Match_t3_13 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern "C" GroupCollection_t3_14 * Match_get_Groups_m3_5803 (Match_t3_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern "C" Match_t3_13 * Match_NextMatch_m3_5804 (Match_t3_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Match::Result(System.String)
extern "C" String_t* Match_Result_m3_5805 (Match_t3_13 * __this, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
extern "C" Regex_t3_11 * Match_get_Regex_m3_5806 (Match_t3_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
