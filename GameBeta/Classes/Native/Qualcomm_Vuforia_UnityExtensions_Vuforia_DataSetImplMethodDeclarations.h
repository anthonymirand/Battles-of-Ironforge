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

// Vuforia.DataSetImpl
struct DataSetImpl_t6_38;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t1_1083;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t6_21;
// Vuforia.TrackableSource
struct TrackableSource_t6_82;
// UnityEngine.GameObject
struct GameObject_t5_113;
// Vuforia.Trackable
struct Trackable_t6_20;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Storag.h"

// System.IntPtr Vuforia.DataSetImpl::get_DataSetPtr()
extern "C" IntPtr_t DataSetImpl_get_DataSetPtr_m6_475 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetImpl::get_Path()
extern "C" String_t* DataSetImpl_get_Path_m6_476 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::get_FileStorageType()
extern "C" int32_t DataSetImpl_get_FileStorageType_m6_477 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::.ctor(System.IntPtr)
extern "C" void DataSetImpl__ctor_m6_478 (DataSetImpl_t6_38 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String)
extern "C" bool DataSetImpl_Load_m6_479 (DataSetImpl_t6_38 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" bool DataSetImpl_Load_m6_480 (DataSetImpl_t6_38 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSetImpl::GetTrackables()
extern "C" Object_t* DataSetImpl_GetTrackables_m6_481 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,System.String)
extern "C" DataSetTrackableBehaviour_t6_21 * DataSetImpl_CreateTrackable_m6_482 (DataSetImpl_t6_38 * __this, TrackableSource_t6_82 * ___trackableSource, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
extern "C" DataSetTrackableBehaviour_t6_21 * DataSetImpl_CreateTrackable_m6_483 (DataSetImpl_t6_38 * __this, TrackableSource_t6_82 * ___trackableSource, GameObject_t5_113 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Destroy(Vuforia.Trackable,System.Boolean)
extern "C" bool DataSetImpl_Destroy_m6_484 (DataSetImpl_t6_38 * __this, Object_t * ___trackable, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::HasReachedTrackableLimit()
extern "C" bool DataSetImpl_HasReachedTrackableLimit_m6_485 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Contains(Vuforia.Trackable)
extern "C" bool DataSetImpl_Contains_m6_486 (DataSetImpl_t6_38 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::DestroyAllTrackables(System.Boolean)
extern "C" void DataSetImpl_DestroyAllTrackables_m6_487 (DataSetImpl_t6_38 * __this, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::ExistsImpl(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" bool DataSetImpl_ExistsImpl_m6_488 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateImageTargets()
extern "C" bool DataSetImpl_CreateImageTargets_m6_489 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateMultiTargets()
extern "C" bool DataSetImpl_CreateMultiTargets_m6_490 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateCylinderTargets()
extern "C" bool DataSetImpl_CreateCylinderTargets_m6_491 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateObjectTargets()
extern "C" bool DataSetImpl_CreateObjectTargets_m6_492 (DataSetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
