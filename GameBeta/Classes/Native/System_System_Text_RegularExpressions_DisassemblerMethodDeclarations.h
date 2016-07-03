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

// System.Text.RegularExpressions.Disassembler
struct Disassembler_t3_732;
// System.UInt16[]
struct UInt16U5BU5D_t1_613;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Disassembler::.ctor()
extern "C" void Disassembler__ctor_m3_6009 (Disassembler_t3_732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Disassembler::DisassemblePattern(System.UInt16[])
extern "C" void Disassembler_DisassemblePattern_m3_6010 (Object_t * __this /* static, unused */, UInt16U5BU5D_t1_613* ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Disassembler::DisassembleBlock(System.UInt16[],System.Int32,System.Int32)
extern "C" void Disassembler_DisassembleBlock_m3_6011 (Object_t * __this /* static, unused */, UInt16U5BU5D_t1_613* ___image, int32_t ___pc, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Disassembler::DisassembleOp(System.UInt16[],System.Int32)
extern "C" String_t* Disassembler_DisassembleOp_m3_6012 (Object_t * __this /* static, unused */, UInt16U5BU5D_t1_613* ___image, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Disassembler::ReadString(System.UInt16[],System.Int32)
extern "C" String_t* Disassembler_ReadString_m3_6013 (Object_t * __this /* static, unused */, UInt16U5BU5D_t1_613* ___image, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Disassembler::FormatAddress(System.Int32)
extern "C" String_t* Disassembler_FormatAddress_m3_6014 (Object_t * __this /* static, unused */, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Disassembler::FormatSet(System.UInt16[],System.Int32)
extern "C" String_t* Disassembler_FormatSet_m3_6015 (Object_t * __this /* static, unused */, UInt16U5BU5D_t1_613* ___image, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Disassembler::FormatChar(System.Char)
extern "C" String_t* Disassembler_FormatChar_m3_6016 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
