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

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t1_108;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1_109;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void KeyPairPersistence__ctor_m1_1270 (KeyPairPersistence_t1_108 * __this, CspParameters_t1_109 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C" void KeyPairPersistence__ctor_m1_1271 (KeyPairPersistence_t1_108 * __this, CspParameters_t1_109 * ___parameters, String_t* ___keyPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C" void KeyPairPersistence__cctor_m1_1272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C" String_t* KeyPairPersistence_get_Filename_m1_1273 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C" String_t* KeyPairPersistence_get_KeyValue_m1_1274 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C" void KeyPairPersistence_set_KeyValue_m1_1275 (KeyPairPersistence_t1_108 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C" bool KeyPairPersistence_Load_m1_1276 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C" void KeyPairPersistence_Save_m1_1277 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C" void KeyPairPersistence_Remove_m1_1278 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C" String_t* KeyPairPersistence_get_UserPath_m1_1279 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C" String_t* KeyPairPersistence_get_MachinePath_m1_1280 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C" bool KeyPairPersistence__CanSecure_m1_1281 (Object_t * __this /* static, unused */, String_t* ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C" bool KeyPairPersistence__ProtectUser_m1_1282 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C" bool KeyPairPersistence__ProtectMachine_m1_1283 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C" bool KeyPairPersistence__IsUserProtected_m1_1284 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence__IsMachineProtected_m1_1285 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C" bool KeyPairPersistence_CanSecure_m1_1286 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C" bool KeyPairPersistence_ProtectUser_m1_1287 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C" bool KeyPairPersistence_ProtectMachine_m1_1288 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C" bool KeyPairPersistence_IsUserProtected_m1_1289 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence_IsMachineProtected_m1_1290 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C" bool KeyPairPersistence_get_CanChange_m1_1291 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C" bool KeyPairPersistence_get_UseDefaultKeyContainer_m1_1292 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C" bool KeyPairPersistence_get_UseMachineKeyStore_m1_1293 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C" String_t* KeyPairPersistence_get_ContainerName_m1_1294 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C" CspParameters_t1_109 * KeyPairPersistence_Copy_m1_1295 (KeyPairPersistence_t1_108 * __this, CspParameters_t1_109 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C" void KeyPairPersistence_FromXml_m1_1296 (KeyPairPersistence_t1_108 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C" String_t* KeyPairPersistence_ToXml_m1_1297 (KeyPairPersistence_t1_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
