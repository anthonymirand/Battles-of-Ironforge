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

// Vuforia.TextRecoAbstractBehaviour
struct TextRecoAbstractBehaviour_t6_194;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t6_217;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1_1089;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t1_1088;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilterMode.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C" bool TextRecoAbstractBehaviour_get_IsInitialized_m6_1937 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C" void TextRecoAbstractBehaviour_Awake_m6_1938 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Start()
extern "C" void TextRecoAbstractBehaviour_Start_m6_1939 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C" void TextRecoAbstractBehaviour_OnEnable_m6_1940 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C" void TextRecoAbstractBehaviour_OnDisable_m6_1941 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C" void TextRecoAbstractBehaviour_OnDestroy_m6_1942 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C" void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m6_1943 (TextRecoAbstractBehaviour_t6_194 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C" bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m6_1944 (TextRecoAbstractBehaviour_t6_194 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C" void TextRecoAbstractBehaviour_StartTextTracker_m6_1945 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C" void TextRecoAbstractBehaviour_StopTextTracker_m6_1946 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C" void TextRecoAbstractBehaviour_SetupWordList_m6_1947 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C" void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m6_1948 (TextRecoAbstractBehaviour_t6_194 * __this, Object_t* ___lostWords, Object_t* ___newWords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordListFile_m6_1949 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordListFile_m6_1950 (TextRecoAbstractBehaviour_t6_194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_CustomWordListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_CustomWordListFile_m6_1951 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_CustomWordListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_CustomWordListFile_m6_1952 (TextRecoAbstractBehaviour_t6_194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalCustomWords()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalCustomWords_m6_1953 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalCustomWords(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalCustomWords_m6_1954 (TextRecoAbstractBehaviour_t6_194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterMode()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterMode_m6_1955 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterMode(Vuforia.WordFilterMode)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterMode_m6_1956 (TextRecoAbstractBehaviour_t6_194 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterListFile_m6_1957 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterListFile_m6_1958 (TextRecoAbstractBehaviour_t6_194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalFilterWords()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalFilterWords_m6_1959 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalFilterWords(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalFilterWords_m6_1960 (TextRecoAbstractBehaviour_t6_194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordPrefabCreationMode()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordPrefabCreationMode_m6_1961 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordPrefabCreationMode(Vuforia.WordPrefabCreationMode)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordPrefabCreationMode_m6_1962 (TextRecoAbstractBehaviour_t6_194 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_MaximumWordInstances()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_MaximumWordInstances_m6_1963 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_MaximumWordInstances(System.Int32)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_MaximumWordInstances_m6_1964 (TextRecoAbstractBehaviour_t6_194 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaInitialized()
extern "C" void TextRecoAbstractBehaviour_OnVuforiaInitialized_m6_1965 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaStarted()
extern "C" void TextRecoAbstractBehaviour_OnVuforiaStarted_m6_1966 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C" void TextRecoAbstractBehaviour_OnTrackablesUpdated_m6_1967 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C" void TextRecoAbstractBehaviour_OnPause_m6_1968 (TextRecoAbstractBehaviour_t6_194 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C" void TextRecoAbstractBehaviour__ctor_m6_1969 (TextRecoAbstractBehaviour_t6_194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
