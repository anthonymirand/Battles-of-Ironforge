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

// System.Guid/GuidParser
struct GuidParser_t1_774;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Guid/GuidParser::.ctor(System.String)
extern "C" void GuidParser__ctor_m1_5492 (GuidParser_t1_774 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::Reset()
extern "C" void GuidParser_Reset_m1_5493 (GuidParser_t1_774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::AtEnd()
extern "C" bool GuidParser_AtEnd_m1_5494 (GuidParser_t1_774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ThrowFormatException()
extern "C" void GuidParser_ThrowFormatException_m1_5495 (GuidParser_t1_774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
extern "C" uint64_t GuidParser_ParseHex_m1_5496 (GuidParser_t1_774 * __this, int32_t ___length, bool ___strictLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
extern "C" bool GuidParser_ParseOptChar_m1_5497 (GuidParser_t1_774 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
extern "C" void GuidParser_ParseChar_m1_5498 (GuidParser_t1_774 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid1()
extern "C" Guid_t1_775  GuidParser_ParseGuid1_m1_5499 (GuidParser_t1_774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseHexPrefix()
extern "C" void GuidParser_ParseHexPrefix_m1_5500 (GuidParser_t1_774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid2()
extern "C" Guid_t1_775  GuidParser_ParseGuid2_m1_5501 (GuidParser_t1_774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::Parse()
extern "C" Guid_t1_775  GuidParser_Parse_m1_5502 (GuidParser_t1_774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
