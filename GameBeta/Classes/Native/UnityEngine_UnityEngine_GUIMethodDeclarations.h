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

// UnityEngine.GUISkin
struct GUISkin_t5_214;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t5_216;
// UnityEngine.GUIStyle
struct GUIStyle_t5_221;
// UnityEngine.Texture
struct Texture_t5_38;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t5_212;
// UnityEngine.Material
struct Material_t5_40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScaleMode.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m5_1782 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m5_1783 (Object_t * __this /* static, unused */, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m5_1784 (Object_t * __this /* static, unused */, GUISkin_t5_214 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t5_214 * GUI_get_skin_m5_1785 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m5_1786 (Object_t * __this /* static, unused */, GUISkin_t5_214 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m5_1787 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5_1788 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, GUIContent_t5_216 * ___content, GUIStyle_t5_221 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_DrawTexture_m5_1789 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, Texture_t5_38 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m5_1790 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, Texture_t5_38 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C" void GUI_DrawTexture_m5_1791 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, Texture_t5_38 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m5_1792 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, Texture_t5_38 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m5_1793 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t5_37  GUI_Window_m5_1794 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t5_37  ___clientRect, WindowFunction_t5_212 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m5_1795 (Object_t * __this /* static, unused */, WindowFunction_t5_212 * ___func, int32_t ___id, GUISkin_t5_214 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t5_221 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t5_58  GUI_get_color_m5_1796 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m5_1797 (Object_t * __this /* static, unused */, Color_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m5_1798 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m5_1799 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, GUIContent_t5_216 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m5_1800 (Object_t * __this /* static, unused */, Rect_t5_37 * ___position, GUIContent_t5_216 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t5_40 * GUI_get_blendMaterial_m5_1801 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t5_40 * GUI_get_blitMaterial_m5_1802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m5_1803 (Object_t * __this /* static, unused */, Rect_t5_37  ___position, GUIContent_t5_216 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m5_1804 (Object_t * __this /* static, unused */, Rect_t5_37 * ___position, GUIContent_t5_216 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t5_37  GUI_DoWindow_m5_1805 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t5_37  ___clientRect, WindowFunction_t5_212 * ___func, GUIContent_t5_216 * ___title, GUIStyle_t5_221 * ___style, GUISkin_t5_214 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t5_37  GUI_INTERNAL_CALL_DoWindow_m5_1806 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t5_37 * ___clientRect, WindowFunction_t5_212 * ___func, GUIContent_t5_216 * ___title, GUIStyle_t5_221 * ___style, GUISkin_t5_214 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
