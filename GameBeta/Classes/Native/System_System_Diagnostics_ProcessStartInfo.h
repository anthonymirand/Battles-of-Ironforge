#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Specialized.ProcessStringDictionary
struct ProcessStringDictionary_t3_48;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Security.SecureString
struct SecureString_t1_665;
// System.String[]
struct StringU5BU5D_t1_206;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Diagnostics_ProcessWindowStyle.h"

// System.Diagnostics.ProcessStartInfo
struct  ProcessStartInfo_t3_213  : public Object_t
{
	// System.String System.Diagnostics.ProcessStartInfo::arguments
	String_t* ___arguments_0;
	// System.IntPtr System.Diagnostics.ProcessStartInfo::error_dialog_parent_handle
	IntPtr_t ___error_dialog_parent_handle_1;
	// System.String System.Diagnostics.ProcessStartInfo::filename
	String_t* ___filename_2;
	// System.String System.Diagnostics.ProcessStartInfo::verb
	String_t* ___verb_3;
	// System.String System.Diagnostics.ProcessStartInfo::working_directory
	String_t* ___working_directory_4;
	// System.Collections.Specialized.ProcessStringDictionary System.Diagnostics.ProcessStartInfo::envVars
	ProcessStringDictionary_t3_48 * ___envVars_5;
	// System.Boolean System.Diagnostics.ProcessStartInfo::create_no_window
	bool ___create_no_window_6;
	// System.Boolean System.Diagnostics.ProcessStartInfo::error_dialog
	bool ___error_dialog_7;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_error
	bool ___redirect_standard_error_8;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_input
	bool ___redirect_standard_input_9;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_output
	bool ___redirect_standard_output_10;
	// System.Boolean System.Diagnostics.ProcessStartInfo::use_shell_execute
	bool ___use_shell_execute_11;
	// System.Diagnostics.ProcessWindowStyle System.Diagnostics.ProcessStartInfo::window_style
	int32_t ___window_style_12;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::encoding_stderr
	Encoding_t1_227 * ___encoding_stderr_13;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::encoding_stdout
	Encoding_t1_227 * ___encoding_stdout_14;
	// System.String System.Diagnostics.ProcessStartInfo::username
	String_t* ___username_15;
	// System.String System.Diagnostics.ProcessStartInfo::domain
	String_t* ___domain_16;
	// System.Security.SecureString System.Diagnostics.ProcessStartInfo::password
	SecureString_t1_665 * ___password_17;
	// System.Boolean System.Diagnostics.ProcessStartInfo::load_user_profile
	bool ___load_user_profile_18;
};
struct ProcessStartInfo_t3_213_StaticFields{
	// System.String[] System.Diagnostics.ProcessStartInfo::empty
	StringU5BU5D_t1_206* ___empty_19;
};
