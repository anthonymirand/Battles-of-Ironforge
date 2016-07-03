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

// System.ComponentModel.Design.MenuCommand
struct MenuCommand_t3_63;
// System.EventHandler
struct EventHandler_t1_275;
// System.ComponentModel.Design.CommandID
struct CommandID_t3_53;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1_105;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.MenuCommand::.ctor(System.EventHandler,System.ComponentModel.Design.CommandID)
extern "C" void MenuCommand__ctor_m3_416 (MenuCommand_t3_63 * __this, EventHandler_t1_275 * ___handler, CommandID_t3_53 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::add_CommandChanged(System.EventHandler)
extern "C" void MenuCommand_add_CommandChanged_m3_417 (MenuCommand_t3_63 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::remove_CommandChanged(System.EventHandler)
extern "C" void MenuCommand_remove_CommandChanged_m3_418 (MenuCommand_t3_63 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.MenuCommand::get_Checked()
extern "C" bool MenuCommand_get_Checked_m3_419 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::set_Checked(System.Boolean)
extern "C" void MenuCommand_set_Checked_m3_420 (MenuCommand_t3_63 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.CommandID System.ComponentModel.Design.MenuCommand::get_CommandID()
extern "C" CommandID_t3_53 * MenuCommand_get_CommandID_m3_421 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.MenuCommand::get_Enabled()
extern "C" bool MenuCommand_get_Enabled_m3_422 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::set_Enabled(System.Boolean)
extern "C" void MenuCommand_set_Enabled_m3_423 (MenuCommand_t3_63 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Design.MenuCommand::get_OleStatus()
extern "C" int32_t MenuCommand_get_OleStatus_m3_424 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.Design.MenuCommand::get_Properties()
extern "C" Object_t * MenuCommand_get_Properties_m3_425 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.MenuCommand::get_Supported()
extern "C" bool MenuCommand_get_Supported_m3_426 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::set_Supported(System.Boolean)
extern "C" void MenuCommand_set_Supported_m3_427 (MenuCommand_t3_63 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.MenuCommand::get_Visible()
extern "C" bool MenuCommand_get_Visible_m3_428 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::set_Visible(System.Boolean)
extern "C" void MenuCommand_set_Visible_m3_429 (MenuCommand_t3_63 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::Invoke()
extern "C" void MenuCommand_Invoke_m3_430 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::Invoke(System.Object)
extern "C" void MenuCommand_Invoke_m3_431 (MenuCommand_t3_63 * __this, Object_t * ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.MenuCommand::OnCommandChanged(System.EventArgs)
extern "C" void MenuCommand_OnCommandChanged_m3_432 (MenuCommand_t3_63 * __this, EventArgs_t1_105 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.MenuCommand::ToString()
extern "C" String_t* MenuCommand_ToString_m3_433 (MenuCommand_t3_63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
