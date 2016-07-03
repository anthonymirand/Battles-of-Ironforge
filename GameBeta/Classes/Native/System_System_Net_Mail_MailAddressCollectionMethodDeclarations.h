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

// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3_310;
// System.String
struct String_t;
// System.Net.Mail.MailAddress
struct MailAddress_t3_309;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.MailAddressCollection::.ctor()
extern "C" void MailAddressCollection__ctor_m3_2322 (MailAddressCollection_t3_310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::Add(System.String)
extern "C" void MailAddressCollection_Add_m3_2323 (MailAddressCollection_t3_310 * __this, String_t* ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::InsertItem(System.Int32,System.Net.Mail.MailAddress)
extern "C" void MailAddressCollection_InsertItem_m3_2324 (MailAddressCollection_t3_310 * __this, int32_t ___index, MailAddress_t3_309 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::SetItem(System.Int32,System.Net.Mail.MailAddress)
extern "C" void MailAddressCollection_SetItem_m3_2325 (MailAddressCollection_t3_310 * __this, int32_t ___index, MailAddress_t3_309 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddressCollection::ToString()
extern "C" String_t* MailAddressCollection_ToString_m3_2326 (MailAddressCollection_t3_310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
