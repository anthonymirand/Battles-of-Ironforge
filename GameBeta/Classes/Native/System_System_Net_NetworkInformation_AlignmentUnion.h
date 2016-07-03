#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"

// System.Net.NetworkInformation.AlignmentUnion
#pragma pack(push, tp, 1)
struct  AlignmentUnion_t3_459 
{
	union
	{
		// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
		struct
		{
			uint64_t ___Alignment_0;
		};
		// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
		struct
		{
			int32_t ___Length_1;
		};
		// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			int32_t ___IfIndex_2;
		};
	};
};
#pragma pack(pop, tp)
