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

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t3_696;
// System.Security.Cryptography.OidCollection
struct OidCollection_t3_679;
// System.Object
struct Object_t;
// System.Security.Cryptography.Oid
struct Oid_t3_662;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C" void OidEnumerator__ctor_m3_5750 (OidEnumerator_t3_696 * __this, OidCollection_t3_679 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * OidEnumerator_System_Collections_IEnumerator_get_Current_m3_5751 (OidEnumerator_t3_696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidEnumerator::get_Current()
extern "C" Oid_t3_662 * OidEnumerator_get_Current_m3_5752 (OidEnumerator_t3_696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C" bool OidEnumerator_MoveNext_m3_5753 (OidEnumerator_t3_696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern "C" void OidEnumerator_Reset_m3_5754 (OidEnumerator_t3_696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
