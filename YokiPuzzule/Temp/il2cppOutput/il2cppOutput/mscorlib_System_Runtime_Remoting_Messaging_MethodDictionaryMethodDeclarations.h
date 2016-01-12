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

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1478;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1485;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.String[]
struct StringU5BU5D_t104;
// System.Collections.IDictionary
struct IDictionary_t118;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t116;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m9059 (MethodDictionary_t1478 * __this, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m9060 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m9061 (MethodDictionary_t1478 * __this, StringU5BU5D_t104* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m9062 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m9063 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C" bool MethodDictionary_IsOverridenKey_m9064 (MethodDictionary_t1478 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsFixedSize()
extern "C" bool MethodDictionary_get_IsFixedSize_m9065 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsReadOnly()
extern "C" bool MethodDictionary_get_IsReadOnly_m9066 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern "C" Object_t * MethodDictionary_get_Item_m9067 (MethodDictionary_t1478 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m9068 (MethodDictionary_t1478 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern "C" Object_t * MethodDictionary_GetMethodProperty_m9069 (MethodDictionary_t1478 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern "C" void MethodDictionary_SetMethodProperty_m9070 (MethodDictionary_t1478 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern "C" Object_t * MethodDictionary_get_Keys_m9071 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C" Object_t * MethodDictionary_get_Values_m9072 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C" void MethodDictionary_Add_m9073 (MethodDictionary_t1478 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Clear()
extern "C" void MethodDictionary_Clear_m9074 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern "C" bool MethodDictionary_Contains_m9075 (MethodDictionary_t1478 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern "C" void MethodDictionary_Remove_m9076 (MethodDictionary_t1478 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern "C" int32_t MethodDictionary_get_Count_m9077 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C" bool MethodDictionary_get_IsSynchronized_m9078 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m9079 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern "C" void MethodDictionary_CopyTo_m9080 (MethodDictionary_t1478 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern "C" Object_t * MethodDictionary_GetEnumerator_m9081 (MethodDictionary_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
