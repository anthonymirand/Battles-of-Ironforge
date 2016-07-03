#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct Dictionary_2_t1_1055;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t1_1056;
// System.Collections.Generic.List`1<Vuforia.Word>
struct List_1_t1_1057;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct Dictionary_2_t1_1058;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t1_1059;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct Dictionary_2_t1_1060;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordManager.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// Vuforia.WordManagerImpl
struct  WordManagerImpl_t6_144  : public WordManager_t6_143
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult> Vuforia.WordManagerImpl::mTrackedWords
	Dictionary_2_t1_1055 * ___mTrackedWords_1;
	// System.Collections.Generic.List`1<Vuforia.WordResult> Vuforia.WordManagerImpl::mNewWords
	List_1_t1_1056 * ___mNewWords_2;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mLostWords
	List_1_t1_1057 * ___mLostWords_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mActiveWordBehaviours
	Dictionary_2_t1_1058 * ___mActiveWordBehaviours_4;
	// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mWordBehavioursMarkedForDeletion
	List_1_t1_1059 * ___mWordBehavioursMarkedForDeletion_5;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mWaitingQueue
	List_1_t1_1057 * ___mWaitingQueue_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>> Vuforia.WordManagerImpl::mWordBehaviours
	Dictionary_2_t1_1060 * ___mWordBehaviours_7;
	// System.Boolean Vuforia.WordManagerImpl::mAutomaticTemplate
	bool ___mAutomaticTemplate_8;
	// System.Int32 Vuforia.WordManagerImpl::mMaxInstances
	int32_t ___mMaxInstances_9;
	// Vuforia.WordPrefabCreationMode Vuforia.WordManagerImpl::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_10;
};
