#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_ComponentModel_ProgressChangedEventArgs.h"

// System.Net.UploadProgressChangedEventArgs
struct  UploadProgressChangedEventArgs_t3_616  : public ProgressChangedEventArgs_t3_156
{
	// System.Int64 System.Net.UploadProgressChangedEventArgs::received
	int64_t ___received_3;
	// System.Int64 System.Net.UploadProgressChangedEventArgs::sent
	int64_t ___sent_4;
	// System.Int64 System.Net.UploadProgressChangedEventArgs::total_recv
	int64_t ___total_recv_5;
	// System.Int64 System.Net.UploadProgressChangedEventArgs::total_send
	int64_t ___total_send_6;
};
