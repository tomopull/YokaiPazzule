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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>
struct KeyCollection_t2083;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2080;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t140;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object[]
struct ObjectU5BU5D_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m14093_gshared (KeyCollection_t2083 * __this, Dictionary_2_t2080 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m14093(__this, ___dictionary, method) (( void (*) (KeyCollection_t2083 *, Dictionary_2_t2080 *, const MethodInfo*))KeyCollection__ctor_m14093_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14094_gshared (KeyCollection_t2083 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14094(__this, ___item, method) (( void (*) (KeyCollection_t2083 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14094_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14095_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14095(__this, method) (( void (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14096_gshared (KeyCollection_t2083 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14096(__this, ___item, method) (( bool (*) (KeyCollection_t2083 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14096_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14097_gshared (KeyCollection_t2083 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14097(__this, ___item, method) (( bool (*) (KeyCollection_t2083 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14097_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14098_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14098(__this, method) (( Object_t* (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14098_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m14099_gshared (KeyCollection_t2083 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m14099(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2083 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m14099_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14100_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14100(__this, method) (( Object_t * (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14101_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14101(__this, method) (( bool (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14102_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14102(__this, method) (( bool (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14102_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m14103_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m14103(__this, method) (( Object_t * (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m14103_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m14104_gshared (KeyCollection_t2083 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m14104(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2083 *, ObjectU5BU5D_t164*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m14104_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2084  KeyCollection_GetEnumerator_m14105_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m14105(__this, method) (( Enumerator_t2084  (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_GetEnumerator_m14105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m14106_gshared (KeyCollection_t2083 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m14106(__this, method) (( int32_t (*) (KeyCollection_t2083 *, const MethodInfo*))KeyCollection_get_Count_m14106_gshared)(__this, method)
