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

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t3_669;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_34;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t3_668;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Extension[]
struct X509ExtensionU5BU5D_t3_837;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t3_682;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor()
extern "C" void X509ExtensionCollection__ctor_m3_5628 (X509ExtensionCollection_t3_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void X509ExtensionCollection__ctor_m3_5629 (X509ExtensionCollection_t3_669 * __this, X509Certificate_t2_34 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m3_5630 (X509ExtensionCollection_t3_669 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m3_5631 (X509ExtensionCollection_t3_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
extern "C" int32_t X509ExtensionCollection_get_Count_m3_5632 (X509ExtensionCollection_t3_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
extern "C" bool X509ExtensionCollection_get_IsSynchronized_m3_5633 (X509ExtensionCollection_t3_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
extern "C" Object_t * X509ExtensionCollection_get_SyncRoot_m3_5634 (X509ExtensionCollection_t3_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.Int32)
extern "C" X509Extension_t3_668 * X509ExtensionCollection_get_Item_m3_5635 (X509ExtensionCollection_t3_669 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t3_668 * X509ExtensionCollection_get_Item_m3_5636 (X509ExtensionCollection_t3_669 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Add(System.Security.Cryptography.X509Certificates.X509Extension)
extern "C" int32_t X509ExtensionCollection_Add_m3_5637 (X509ExtensionCollection_t3_669 * __this, X509Extension_t3_668 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::CopyTo(System.Security.Cryptography.X509Certificates.X509Extension[],System.Int32)
extern "C" void X509ExtensionCollection_CopyTo_m3_5638 (X509ExtensionCollection_t3_669 * __this, X509ExtensionU5BU5D_t3_837* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
extern "C" X509ExtensionEnumerator_t3_682 * X509ExtensionCollection_GetEnumerator_m3_5639 (X509ExtensionCollection_t3_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
