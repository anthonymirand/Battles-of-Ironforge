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

// System.Diagnostics.Switch
struct Switch_t3_227;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.Switch::.ctor(System.String,System.String)
extern "C" void Switch__ctor_m3_1733 (Switch_t3_227 * __this, String_t* ___displayName, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::.ctor(System.String,System.String,System.String)
extern "C" void Switch__ctor_m3_1734 (Switch_t3_227 * __this, String_t* ___displayName, String_t* ___description, String_t* ___defaultSwitchValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_Description()
extern "C" String_t* Switch_get_Description_m3_1735 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_DisplayName()
extern "C" String_t* Switch_get_DisplayName_m3_1736 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Switch::get_SwitchSetting()
extern "C" int32_t Switch_get_SwitchSetting_m3_1737 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::set_SwitchSetting(System.Int32)
extern "C" void Switch_set_SwitchSetting_m3_1738 (Switch_t3_227 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.Switch::get_Attributes()
extern "C" StringDictionary_t3_49 * Switch_get_Attributes_m3_1739 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_Value()
extern "C" String_t* Switch_get_Value_m3_1740 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::set_Value(System.String)
extern "C" void Switch_set_Value_m3_1741 (Switch_t3_227 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.Switch::GetSupportedAttributes()
extern "C" StringU5BU5D_t1_206* Switch_GetSupportedAttributes_m3_1742 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::OnValueChanged()
extern "C" void Switch_OnValueChanged_m3_1743 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::GetConfigFileSetting()
extern "C" void Switch_GetConfigFileSetting_m3_1744 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::OnSwitchSettingChanged()
extern "C" void Switch_OnSwitchSettingChanged_m3_1745 (Switch_t3_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
