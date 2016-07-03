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

// System.ComponentModel.Design.DesignerVerb
struct DesignerVerb_t3_62;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t1_275;
// System.ComponentModel.Design.CommandID
struct CommandID_t3_53;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.DesignerVerb::.ctor(System.String,System.EventHandler)
extern "C" void DesignerVerb__ctor_m3_393 (DesignerVerb_t3_62 * __this, String_t* ___text, EventHandler_t1_275 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.DesignerVerb::.ctor(System.String,System.EventHandler,System.ComponentModel.Design.CommandID)
extern "C" void DesignerVerb__ctor_m3_394 (DesignerVerb_t3_62 * __this, String_t* ___text, EventHandler_t1_275 * ___handler, CommandID_t3_53 * ___startCommandID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.DesignerVerb::get_Text()
extern "C" String_t* DesignerVerb_get_Text_m3_395 (DesignerVerb_t3_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.DesignerVerb::get_Description()
extern "C" String_t* DesignerVerb_get_Description_m3_396 (DesignerVerb_t3_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.DesignerVerb::set_Description(System.String)
extern "C" void DesignerVerb_set_Description_m3_397 (DesignerVerb_t3_62 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.DesignerVerb::ToString()
extern "C" String_t* DesignerVerb_ToString_m3_398 (DesignerVerb_t3_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
