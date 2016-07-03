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

// System.ComponentModel.TypeDescriptor
struct TypeDescriptor_t3_183;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t3_184;
// System.Type
struct Type_t;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3_177;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.IServiceProvider
struct IServiceProvider_t1_959;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.ComponentModel.Design.IDesigner
struct IDesigner_t3_816;
// System.ComponentModel.IComponent
struct IComponent_t3_58;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t3_124;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3_83;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3_125;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t3_815;
// System.Collections.IList
struct IList_t1_429;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t3_185;
// System.Reflection.Assembly
struct Assembly_t1_277;
// System.Reflection.Module
struct Module_t1_298;
// System.EventArgs
struct EventArgs_t1_105;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t3_187;
// System.ComponentModel.TypeInfo
struct TypeInfo_t3_188;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor::.ctor()
extern "C" void TypeDescriptor__ctor_m3_1279 (TypeDescriptor_t3_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C" void TypeDescriptor__cctor_m3_1280 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::add_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C" void TypeDescriptor_add_Refreshed_m3_1281 (Object_t * __this /* static, unused */, RefreshEventHandler_t3_184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::remove_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C" void TypeDescriptor_remove_Refreshed_m3_1282 (Object_t * __this /* static, unused */, RefreshEventHandler_t3_184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::get_ComObjectType()
extern "C" Type_t * TypeDescriptor_get_ComObjectType_m3_1283 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Object,System.Attribute[])
extern "C" TypeDescriptionProvider_t3_177 * TypeDescriptor_AddAttributes_m3_1284 (Object_t * __this /* static, unused */, Object_t * ___instance, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Type,System.Attribute[])
extern "C" TypeDescriptionProvider_t3_177 * TypeDescriptor_AddAttributes_m3_1285 (Object_t * __this /* static, unused */, Type_t * ___type, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C" void TypeDescriptor_AddProvider_m3_1286 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t3_177 * ___provider, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C" void TypeDescriptor_AddProvider_m3_1287 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t3_177 * ___provider, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * TypeDescriptor_CreateInstance_m3_1288 (Object_t * __this /* static, unused */, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t1_31* ___argTypes, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddEditorTable(System.Type,System.Collections.Hashtable)
extern "C" void TypeDescriptor_AddEditorTable_m3_1289 (Object_t * __this /* static, unused */, Type_t * ___editorBaseType, Hashtable_t1_173 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.IDesigner System.ComponentModel.TypeDescriptor::CreateDesigner(System.ComponentModel.IComponent,System.Type)
extern "C" Object_t * TypeDescriptor_CreateDesigner_m3_1290 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___designerBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.String,System.Type,System.Attribute[])
extern "C" EventDescriptor_t3_124 * TypeDescriptor_CreateEvent_m3_1291 (Object_t * __this /* static, unused */, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C" EventDescriptor_t3_124 * TypeDescriptor_CreateEvent_m3_1292 (Object_t * __this /* static, unused */, Type_t * ___componentType, EventDescriptor_t3_124 * ___oldEventDescriptor, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.String,System.Type,System.Attribute[])
extern "C" PropertyDescriptor_t3_70 * TypeDescriptor_CreateProperty_m3_1293 (Object_t * __this /* static, unused */, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C" PropertyDescriptor_t3_70 * TypeDescriptor_CreateProperty_m3_1294 (Object_t * __this /* static, unused */, Type_t * ___componentType, PropertyDescriptor_t3_70 * ___oldPropertyDescriptor, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C" AttributeCollection_t3_76 * TypeDescriptor_GetAttributes_m3_1295 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object)
extern "C" AttributeCollection_t3_76 * TypeDescriptor_GetAttributes_m3_1296 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object,System.Boolean)
extern "C" AttributeCollection_t3_76 * TypeDescriptor_GetAttributes_m3_1297 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object)
extern "C" String_t* TypeDescriptor_GetClassName_m3_1298 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object,System.Boolean)
extern "C" String_t* TypeDescriptor_GetClassName_m3_1299 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object)
extern "C" String_t* TypeDescriptor_GetComponentName_m3_1300 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object,System.Boolean)
extern "C" String_t* TypeDescriptor_GetComponentName_m3_1301 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetFullComponentName(System.Object)
extern "C" String_t* TypeDescriptor_GetFullComponentName_m3_1302 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Type)
extern "C" String_t* TypeDescriptor_GetClassName_m3_1303 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object)
extern "C" TypeConverter_t3_83 * TypeDescriptor_GetConverter_m3_1304 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object,System.Boolean)
extern "C" TypeConverter_t3_83 * TypeDescriptor_GetConverter_m3_1305 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C" ArrayList_t1_114 * TypeDescriptor_get_DefaultConverters_m3_1306 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C" TypeConverter_t3_83 * TypeDescriptor_GetConverter_m3_1307 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C" Type_t * TypeDescriptor_FindDefaultConverterType_m3_1308 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Type)
extern "C" EventDescriptor_t3_124 * TypeDescriptor_GetDefaultEvent_m3_1309 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object)
extern "C" EventDescriptor_t3_124 * TypeDescriptor_GetDefaultEvent_m3_1310 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object,System.Boolean)
extern "C" EventDescriptor_t3_124 * TypeDescriptor_GetDefaultEvent_m3_1311 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Type)
extern "C" PropertyDescriptor_t3_70 * TypeDescriptor_GetDefaultProperty_m3_1312 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object)
extern "C" PropertyDescriptor_t3_70 * TypeDescriptor_GetDefaultProperty_m3_1313 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object,System.Boolean)
extern "C" PropertyDescriptor_t3_70 * TypeDescriptor_GetDefaultProperty_m3_1314 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateEditor(System.Type,System.Type)
extern "C" Object_t * TypeDescriptor_CreateEditor_m3_1315 (Object_t * __this /* static, unused */, Type_t * ___t, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::FindEditorInTable(System.Type,System.Type,System.Collections.Hashtable)
extern "C" Object_t * TypeDescriptor_FindEditorInTable_m3_1316 (Object_t * __this /* static, unused */, Type_t * ___componentType, Type_t * ___editorBaseType, Hashtable_t1_173 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Type,System.Type)
extern "C" Object_t * TypeDescriptor_GetEditor_m3_1317 (Object_t * __this /* static, unused */, Type_t * ___componentType, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type)
extern "C" Object_t * TypeDescriptor_GetEditor_m3_1318 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type,System.Boolean)
extern "C" Object_t * TypeDescriptor_GetEditor_m3_1319 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___editorBaseType, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object)
extern "C" EventDescriptorCollection_t3_125 * TypeDescriptor_GetEvents_m3_1320 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type)
extern "C" EventDescriptorCollection_t3_125 * TypeDescriptor_GetEvents_m3_1321 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[])
extern "C" EventDescriptorCollection_t3_125 * TypeDescriptor_GetEvents_m3_1322 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Boolean)
extern "C" EventDescriptorCollection_t3_125 * TypeDescriptor_GetEvents_m3_1323 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type,System.Attribute[])
extern "C" EventDescriptorCollection_t3_125 * TypeDescriptor_GetEvents_m3_1324 (Object_t * __this /* static, unused */, Type_t * ___componentType, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[],System.Boolean)
extern "C" EventDescriptorCollection_t3_125 * TypeDescriptor_GetEvents_m3_1325 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_937* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object)
extern "C" PropertyDescriptorCollection_t3_158 * TypeDescriptor_GetProperties_m3_1326 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type)
extern "C" PropertyDescriptorCollection_t3_158 * TypeDescriptor_GetProperties_m3_1327 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * TypeDescriptor_GetProperties_m3_1328 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C" PropertyDescriptorCollection_t3_158 * TypeDescriptor_GetProperties_m3_1329 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_937* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Boolean)
extern "C" PropertyDescriptorCollection_t3_158 * TypeDescriptor_GetProperties_m3_1330 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type,System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * TypeDescriptor_GetProperties_m3_1331 (Object_t * __this /* static, unused */, Type_t * ___componentType, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Object)
extern "C" TypeDescriptionProvider_t3_177 * TypeDescriptor_GetProvider_m3_1332 (Object_t * __this /* static, unused */, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
extern "C" TypeDescriptionProvider_t3_177 * TypeDescriptor_GetProvider_m3_1333 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Object)
extern "C" Type_t * TypeDescriptor_GetReflectionType_m3_1334 (Object_t * __this /* static, unused */, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Type)
extern "C" Type_t * TypeDescriptor_GetReflectionType_m3_1335 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::CreateAssociation(System.Object,System.Object)
extern "C" void TypeDescriptor_CreateAssociation_m3_1336 (Object_t * __this /* static, unused */, Object_t * ___primary, Object_t * ___secondary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetAssociation(System.Type,System.Object)
extern "C" Object_t * TypeDescriptor_GetAssociation_m3_1337 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___primary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociation(System.Object,System.Object)
extern "C" void TypeDescriptor_RemoveAssociation_m3_1338 (Object_t * __this /* static, unused */, Object_t * ___primary, Object_t * ___secondary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociations(System.Object)
extern "C" void TypeDescriptor_RemoveAssociations_m3_1339 (Object_t * __this /* static, unused */, Object_t * ___primary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C" void TypeDescriptor_RemoveProvider_m3_1340 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t3_177 * ___provider, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C" void TypeDescriptor_RemoveProvider_m3_1341 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t3_177 * ___provider, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>)
extern "C" void TypeDescriptor_RemoveProvider_m3_1342 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t3_177 * ___provider, LinkedList_1_t3_815 * ___plist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::SortDescriptorArray(System.Collections.IList)
extern "C" void TypeDescriptor_SortDescriptorArray_m3_1343 (Object_t * __this /* static, unused */, Object_t * ___infos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::get_ComNativeDescriptorHandler()
extern "C" Object_t * TypeDescriptor_get_ComNativeDescriptorHandler_m3_1344 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::set_ComNativeDescriptorHandler(System.ComponentModel.IComNativeDescriptorHandler)
extern "C" void TypeDescriptor_set_ComNativeDescriptorHandler_m3_1345 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Assembly)
extern "C" void TypeDescriptor_Refresh_m3_1346 (Object_t * __this /* static, unused */, Assembly_t1_277 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Module)
extern "C" void TypeDescriptor_Refresh_m3_1347 (Object_t * __this /* static, unused */, Module_t1_298 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Object)
extern "C" void TypeDescriptor_Refresh_m3_1348 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Type)
extern "C" void TypeDescriptor_Refresh_m3_1349 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C" void TypeDescriptor_OnComponentDisposed_m3_1350 (Object_t * __this /* static, unused */, Object_t * ___sender, EventArgs_t1_105 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C" ComponentInfo_t3_187 * TypeDescriptor_GetComponentInfo_m3_1351 (Object_t * __this /* static, unused */, Object_t * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C" TypeInfo_t3_188 * TypeDescriptor_GetTypeInfo_m3_1352 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C" Type_t * TypeDescriptor_GetTypeFromName_m3_1353 (Object_t * __this /* static, unused */, Object_t * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
