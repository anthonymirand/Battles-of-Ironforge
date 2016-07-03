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

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t3_676;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t3_670;
// Mono.Security.X509.X509Stores
struct X509Stores_t2_44;
// Mono.Security.X509.X509Store
struct X509Store_t2_42;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3_6;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_StoreNa.h"
#include "System_System_Security_Cryptography_X509Certificates_StoreLo.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Security_Cryptography_X509Certificates_OpenFla.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor()
extern "C" void X509Store__ctor_m3_5654 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.String)
extern "C" void X509Store__ctor_m3_5655 (X509Store_t3_676 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName)
extern "C" void X509Store__ctor_m3_5656 (X509Store_t3_676 * __this, int32_t ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C" void X509Store__ctor_m3_5657 (X509Store_t3_676 * __this, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C" void X509Store__ctor_m3_5658 (X509Store_t3_676 * __this, int32_t ___storeName, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.IntPtr)
extern "C" void X509Store__ctor_m3_5659 (X509Store_t3_676 * __this, IntPtr_t ___storeHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.String,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C" void X509Store__ctor_m3_5660 (X509Store_t3_676 * __this, String_t* ___storeName, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C" X509Certificate2Collection_t3_670 * X509Store_get_Certificates_m3_5661 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::get_Location()
extern "C" int32_t X509Store_get_Location_m3_5662 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Store::get_Name()
extern "C" String_t* X509Store_get_Name_m3_5663 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
extern "C" X509Stores_t2_44 * X509Store_get_Factory_m3_5664 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Store::get_IsOpen()
extern "C" bool X509Store_get_IsOpen_m3_5665 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Store::get_IsReadOnly()
extern "C" bool X509Store_get_IsReadOnly_m3_5666 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
extern "C" X509Store_t2_42 * X509Store_get_Store_m3_5667 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.X509Certificates.X509Store::get_StoreHandle()
extern "C" IntPtr_t X509Store_get_StoreHandle_m3_5668 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Store_Add_m3_5669 (X509Store_t3_676 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Store_AddRange_m3_5670 (X509Store_t3_676 * __this, X509Certificate2Collection_t3_670 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C" void X509Store_Close_m3_5671 (X509Store_t3_676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C" void X509Store_Open_m3_5672 (X509Store_t3_676 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Remove(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Store_Remove_m3_5673 (X509Store_t3_676 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::RemoveRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Store_RemoveRange_m3_5674 (X509Store_t3_676 * __this, X509Certificate2Collection_t3_670 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Store::Exists(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Store_Exists_m3_5675 (X509Store_t3_676 * __this, X509Certificate2_t3_6 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
