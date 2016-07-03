#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Principal.IdentityReference
struct IdentityReference_t1_563;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Security_AccessControl_InheritanceFlags.h"
#include "mscorlib_System_Security_AccessControl_PropagationFlags.h"

// System.Security.AccessControl.AuthorizationRule
struct  AuthorizationRule_t1_560  : public Object_t
{
	// System.Security.Principal.IdentityReference System.Security.AccessControl.AuthorizationRule::identity
	IdentityReference_t1_563 * ___identity_0;
	// System.Int32 System.Security.AccessControl.AuthorizationRule::accessMask
	int32_t ___accessMask_1;
	// System.Boolean System.Security.AccessControl.AuthorizationRule::isInherited
	bool ___isInherited_2;
	// System.Security.AccessControl.InheritanceFlags System.Security.AccessControl.AuthorizationRule::inheritanceFlags
	int32_t ___inheritanceFlags_3;
	// System.Security.AccessControl.PropagationFlags System.Security.AccessControl.AuthorizationRule::propagationFlags
	int32_t ___propagationFlags_4;
};
