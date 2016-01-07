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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>
struct KeyCollection_t2033;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t2031;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t100;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object[]
struct ObjectU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_19.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m13706_gshared (KeyCollection_t2033 * __this, Dictionary_2_t2031 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m13706(__this, ___dictionary, method) (( void (*) (KeyCollection_t2033 *, Dictionary_2_t2031 *, const MethodInfo*))KeyCollection__ctor_m13706_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13707_gshared (KeyCollection_t2033 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13707(__this, ___item, method) (( void (*) (KeyCollection_t2033 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13707_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13708_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13708(__this, method) (( void (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13708_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13709_gshared (KeyCollection_t2033 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13709(__this, ___item, method) (( bool (*) (KeyCollection_t2033 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13709_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13710_gshared (KeyCollection_t2033 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13710(__this, ___item, method) (( bool (*) (KeyCollection_t2033 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13710_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13711_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13711(__this, method) (( Object_t* (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13712_gshared (KeyCollection_t2033 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m13712(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2033 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m13712_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13713_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13713(__this, method) (( Object_t * (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13713_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13714_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13714(__this, method) (( bool (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13715_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13715(__this, method) (( bool (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13715_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13716_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m13716(__this, method) (( Object_t * (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m13716_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13717_gshared (KeyCollection_t2033 * __this, ObjectU5BU5D_t129* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m13717(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2033 *, ObjectU5BU5D_t129*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m13717_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::GetEnumerator()
extern "C" Enumerator_t2034  KeyCollection_GetEnumerator_m13718_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m13718(__this, method) (( Enumerator_t2034  (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_GetEnumerator_m13718_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m13719_gshared (KeyCollection_t2033 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m13719(__this, method) (( int32_t (*) (KeyCollection_t2033 *, const MethodInfo*))KeyCollection_get_Count_m13719_gshared)(__this, method)
