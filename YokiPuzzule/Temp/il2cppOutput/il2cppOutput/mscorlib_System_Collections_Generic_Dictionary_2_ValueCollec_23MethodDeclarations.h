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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>
struct ValueCollection_t2126;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t2120;
// System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>
struct IEnumerator_1_t240;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t2118;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m14676_gshared (ValueCollection_t2126 * __this, Dictionary_2_t2120 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m14676(__this, ___dictionary, method) (( void (*) (ValueCollection_t2126 *, Dictionary_2_t2120 *, const MethodInfo*))ValueCollection__ctor_m14676_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14677_gshared (ValueCollection_t2126 * __this, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14677(__this, ___item, method) (( void (*) (ValueCollection_t2126 *, PropertyMetadata_t59 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14677_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14678_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14678(__this, method) (( void (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14678_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14679_gshared (ValueCollection_t2126 * __this, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14679(__this, ___item, method) (( bool (*) (ValueCollection_t2126 *, PropertyMetadata_t59 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14679_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14680_gshared (ValueCollection_t2126 * __this, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14680(__this, ___item, method) (( bool (*) (ValueCollection_t2126 *, PropertyMetadata_t59 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14680_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14681_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14681(__this, method) (( Object_t* (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14681_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m14682_gshared (ValueCollection_t2126 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m14682(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2126 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m14682_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14683_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14683(__this, method) (( Object_t * (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14683_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14684_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14684(__this, method) (( bool (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14684_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14685_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14685(__this, method) (( bool (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14685_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m14686_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m14686(__this, method) (( Object_t * (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m14686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m14687_gshared (ValueCollection_t2126 * __this, PropertyMetadataU5BU5D_t2118* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m14687(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2126 *, PropertyMetadataU5BU5D_t2118*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m14687_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::GetEnumerator()
extern "C" Enumerator_t2127  ValueCollection_GetEnumerator_m14688_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m14688(__this, method) (( Enumerator_t2127  (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_GetEnumerator_m14688_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m14689_gshared (ValueCollection_t2126 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m14689(__this, method) (( int32_t (*) (ValueCollection_t2126 *, const MethodInfo*))ValueCollection_get_Count_m14689_gshared)(__this, method)
