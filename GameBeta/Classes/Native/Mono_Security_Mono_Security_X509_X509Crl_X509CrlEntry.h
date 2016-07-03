#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1_72;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2_35;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t2_39  : public Object_t
{
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t1_72* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t1_128  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t2_35 * ___extensions_2;
};
