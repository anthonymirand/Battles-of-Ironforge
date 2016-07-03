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

// Vuforia.VirtualButtonImpl
struct VirtualButtonImpl_t6_173;
// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t6_174;
// Vuforia.DataSet
struct DataSet_t6_60;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"

// System.String Vuforia.VirtualButtonImpl::get_Name()
extern "C" String_t* VirtualButtonImpl_get_Name_m6_1735 (VirtualButtonImpl_t6_173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VirtualButtonImpl::get_ID()
extern "C" int32_t VirtualButtonImpl_get_ID_m6_1736 (VirtualButtonImpl_t6_173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::get_Enabled()
extern "C" bool VirtualButtonImpl_get_Enabled_m6_1737 (VirtualButtonImpl_t6_173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData Vuforia.VirtualButtonImpl::get_Area()
extern "C" RectangleData_t6_62  VirtualButtonImpl_get_Area_m6_1738 (VirtualButtonImpl_t6_173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonImpl::.ctor(System.String,System.Int32,Vuforia.RectangleData,Vuforia.ImageTarget,Vuforia.DataSet)
extern "C" void VirtualButtonImpl__ctor_m6_1739 (VirtualButtonImpl_t6_173 * __this, String_t* ___name, int32_t ___id, RectangleData_t6_62  ___area, Object_t * ___imageTarget, DataSet_t6_60 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetArea(Vuforia.RectangleData)
extern "C" bool VirtualButtonImpl_SetArea_m6_1740 (VirtualButtonImpl_t6_173 * __this, RectangleData_t6_62  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetSensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonImpl_SetSensitivity_m6_1741 (VirtualButtonImpl_t6_173 * __this, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetEnabled(System.Boolean)
extern "C" bool VirtualButtonImpl_SetEnabled_m6_1742 (VirtualButtonImpl_t6_173 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
