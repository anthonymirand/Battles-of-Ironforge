#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler
struct EventHandler_t1_275;
// System.ComponentModel.Design.CommandID
struct CommandID_t3_53;
// System.Collections.Hashtable
struct Hashtable_t1_173;

#include "mscorlib_System_Object.h"

// System.ComponentModel.Design.MenuCommand
struct  MenuCommand_t3_63  : public Object_t
{
	// System.EventHandler System.ComponentModel.Design.MenuCommand::handler
	EventHandler_t1_275 * ___handler_0;
	// System.ComponentModel.Design.CommandID System.ComponentModel.Design.MenuCommand::command
	CommandID_t3_53 * ___command_1;
	// System.Boolean System.ComponentModel.Design.MenuCommand::ischecked
	bool ___ischecked_2;
	// System.Boolean System.ComponentModel.Design.MenuCommand::enabled
	bool ___enabled_3;
	// System.Boolean System.ComponentModel.Design.MenuCommand::issupported
	bool ___issupported_4;
	// System.Boolean System.ComponentModel.Design.MenuCommand::visible
	bool ___visible_5;
	// System.Collections.Hashtable System.ComponentModel.Design.MenuCommand::properties
	Hashtable_t1_173 * ___properties_6;
	// System.EventHandler System.ComponentModel.Design.MenuCommand::CommandChanged
	EventHandler_t1_275 * ___CommandChanged_7;
};
