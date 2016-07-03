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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m5_522 (Rect_t5_37 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
extern "C" void Rect__ctor_m5_523 (Rect_t5_37 * __this, Rect_t5_37  ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::Set(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect_Set_m5_524 (Rect_t5_37 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m5_525 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m5_526 (Rect_t5_37 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m5_527 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m5_528 (Rect_t5_37 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern "C" Vector2_t5_67  Rect_get_position_m5_529 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern "C" Vector2_t5_67  Rect_get_center_m5_530 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_center(UnityEngine.Vector2)
extern "C" void Rect_set_center_m5_531 (Rect_t5_37 * __this, Vector2_t5_67  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
extern "C" Vector2_t5_67  Rect_get_min_m5_532 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
extern "C" Vector2_t5_67  Rect_get_max_m5_533 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m5_534 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m5_535 (Rect_t5_37 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m5_536 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m5_537 (Rect_t5_37 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t5_67  Rect_get_size_m5_538 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m5_539 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m5_540 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m5_541 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m5_542 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
extern "C" String_t* Rect_ToString_m5_543 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
extern "C" bool Rect_Contains_m5_544 (Rect_t5_37 * __this, Vector2_t5_67  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" bool Rect_Contains_m5_545 (Rect_t5_37 * __this, Vector3_t5_68  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
extern "C" bool Rect_Overlaps_m5_546 (Rect_t5_37 * __this, Rect_t5_37  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" int32_t Rect_GetHashCode_m5_547 (Rect_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C" bool Rect_Equals_m5_548 (Rect_t5_37 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Inequality_m5_549 (Object_t * __this /* static, unused */, Rect_t5_37  ___lhs, Rect_t5_37  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m5_550 (Object_t * __this /* static, unused */, Rect_t5_37  ___lhs, Rect_t5_37  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
