﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1_540;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1_538;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1_532;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m1_3899 (ArrayFixupRecord_t1_540 * __this, ObjectRecord_t1_538 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1_538 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m1_3900 (ArrayFixupRecord_t1_540 * __this, ObjectManager_t1_532 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;