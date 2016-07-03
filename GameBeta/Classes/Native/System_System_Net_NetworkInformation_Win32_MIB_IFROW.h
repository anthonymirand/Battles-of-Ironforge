#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1_16;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_ValueType.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceType.h"
#include "mscorlib_System_Byte.h"

// System.Net.NetworkInformation.Win32_MIB_IFROW
struct  Win32_MIB_IFROW_t3_369 
{
	// System.Char[] System.Net.NetworkInformation.Win32_MIB_IFROW::Name
	CharU5BU5D_t1_16* ___Name_3;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Index
	int32_t ___Index_4;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_MIB_IFROW::Type
	int32_t ___Type_5;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Mtu
	int32_t ___Mtu_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::Speed
	uint32_t ___Speed_7;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddrLen
	int32_t ___PhysAddrLen_8;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddr
	ByteU5BU5D_t1_72* ___PhysAddr_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::AdminStatus
	uint32_t ___AdminStatus_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::OperStatus
	uint32_t ___OperStatus_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::LastChange
	uint32_t ___LastChange_12;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InOctets
	int32_t ___InOctets_13;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUcastPkts
	int32_t ___InUcastPkts_14;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InNUcastPkts
	int32_t ___InNUcastPkts_15;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InDiscards
	int32_t ___InDiscards_16;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InErrors
	int32_t ___InErrors_17;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUnknownProtos
	int32_t ___InUnknownProtos_18;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutOctets
	int32_t ___OutOctets_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutUcastPkts
	int32_t ___OutUcastPkts_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutNUcastPkts
	int32_t ___OutNUcastPkts_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutDiscards
	int32_t ___OutDiscards_22;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutErrors
	int32_t ___OutErrors_23;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutQLen
	int32_t ___OutQLen_24;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::DescrLen
	int32_t ___DescrLen_25;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::Descr
	ByteU5BU5D_t1_72* ___Descr_26;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t3_369_marshaled
{
	char* ___Name_3;
	int32_t ___Index_4;
	int32_t ___Type_5;
	int32_t ___Mtu_6;
	uint32_t ___Speed_7;
	int32_t ___PhysAddrLen_8;
	uint8_t ___PhysAddr_9[8];
	uint32_t ___AdminStatus_10;
	uint32_t ___OperStatus_11;
	uint32_t ___LastChange_12;
	int32_t ___InOctets_13;
	int32_t ___InUcastPkts_14;
	int32_t ___InNUcastPkts_15;
	int32_t ___InDiscards_16;
	int32_t ___InErrors_17;
	int32_t ___InUnknownProtos_18;
	int32_t ___OutOctets_19;
	int32_t ___OutUcastPkts_20;
	int32_t ___OutNUcastPkts_21;
	int32_t ___OutDiscards_22;
	int32_t ___OutErrors_23;
	int32_t ___OutQLen_24;
	int32_t ___DescrLen_25;
	uint8_t ___Descr_26[256];
};
