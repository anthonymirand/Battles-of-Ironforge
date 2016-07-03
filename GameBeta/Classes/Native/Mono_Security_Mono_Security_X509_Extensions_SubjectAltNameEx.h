#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t2_65;

#include "Mono_Security_Mono_Security_X509_X509Extension.h"

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t2_70  : public X509Extension_t2_41
{
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t2_65 * ____names_3;
};
