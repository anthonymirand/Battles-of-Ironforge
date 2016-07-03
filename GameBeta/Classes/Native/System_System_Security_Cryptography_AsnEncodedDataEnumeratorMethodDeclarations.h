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

// System.Security.Cryptography.AsnEncodedDataEnumerator
struct AsnEncodedDataEnumerator_t3_695;
// System.Security.Cryptography.AsnEncodedDataCollection
struct AsnEncodedDataCollection_t3_694;
// System.Object
struct Object_t;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3_661;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AsnEncodedDataEnumerator::.ctor(System.Security.Cryptography.AsnEncodedDataCollection)
extern "C" void AsnEncodedDataEnumerator__ctor_m3_5721 (AsnEncodedDataEnumerator_t3_695 * __this, AsnEncodedDataCollection_t3_694 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.AsnEncodedDataEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * AsnEncodedDataEnumerator_System_Collections_IEnumerator_get_Current_m3_5722 (AsnEncodedDataEnumerator_t3_695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.AsnEncodedDataEnumerator::get_Current()
extern "C" AsnEncodedData_t3_661 * AsnEncodedDataEnumerator_get_Current_m3_5723 (AsnEncodedDataEnumerator_t3_695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.AsnEncodedDataEnumerator::MoveNext()
extern "C" bool AsnEncodedDataEnumerator_MoveNext_m3_5724 (AsnEncodedDataEnumerator_t3_695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedDataEnumerator::Reset()
extern "C" void AsnEncodedDataEnumerator_Reset_m3_5725 (AsnEncodedDataEnumerator_t3_695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
