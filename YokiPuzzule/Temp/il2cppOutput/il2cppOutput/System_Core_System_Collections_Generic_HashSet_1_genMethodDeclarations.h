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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t49;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t140;
// System.Object[]
struct ObjectU5BU5D_t164;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1928;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m1114_gshared (HashSet_1_t49 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m1114(__this, method) (( void (*) (HashSet_1_t49 *, const MethodInfo*))HashSet_1__ctor_m1114_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m12866_gshared (HashSet_1_t49 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m12866(__this, ___info, ___context, method) (( void (*) (HashSet_1_t49 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))HashSet_1__ctor_m12866_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12867_gshared (HashSet_1_t49 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12867(__this, method) (( Object_t* (*) (HashSet_1_t49 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12867_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12868_gshared (HashSet_1_t49 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12868(__this, method) (( bool (*) (HashSet_1_t49 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12868_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12869_gshared (HashSet_1_t49 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12869(__this, ___array, ___index, method) (( void (*) (HashSet_1_t49 *, ObjectU5BU5D_t164*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12869_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12870_gshared (HashSet_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12870(__this, ___item, method) (( void (*) (HashSet_1_t49 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12870_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12871_gshared (HashSet_1_t49 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12871(__this, method) (( Object_t * (*) (HashSet_1_t49 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12871_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m12872_gshared (HashSet_1_t49 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m12872(__this, method) (( int32_t (*) (HashSet_1_t49 *, const MethodInfo*))HashSet_1_get_Count_m12872_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m12873_gshared (HashSet_1_t49 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m12873(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t49 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m12873_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m12874_gshared (HashSet_1_t49 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m12874(__this, ___size, method) (( void (*) (HashSet_1_t49 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m12874_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m12875_gshared (HashSet_1_t49 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m12875(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t49 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m12875_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m12876_gshared (HashSet_1_t49 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m12876(__this, ___array, ___index, method) (( void (*) (HashSet_1_t49 *, ObjectU5BU5D_t164*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m12876_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m12877_gshared (HashSet_1_t49 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m12877(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t49 *, ObjectU5BU5D_t164*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m12877_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m12878_gshared (HashSet_1_t49 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m12878(__this, method) (( void (*) (HashSet_1_t49 *, const MethodInfo*))HashSet_1_Resize_m12878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m12879_gshared (HashSet_1_t49 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m12879(__this, ___index, method) (( int32_t (*) (HashSet_1_t49 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m12879_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m12880_gshared (HashSet_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m12880(__this, ___item, method) (( int32_t (*) (HashSet_1_t49 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m12880_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m1115_gshared (HashSet_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m1115(__this, ___item, method) (( bool (*) (HashSet_1_t49 *, Object_t *, const MethodInfo*))HashSet_1_Add_m1115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m12881_gshared (HashSet_1_t49 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m12881(__this, method) (( void (*) (HashSet_1_t49 *, const MethodInfo*))HashSet_1_Clear_m12881_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m12882_gshared (HashSet_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m12882(__this, ___item, method) (( bool (*) (HashSet_1_t49 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m12882_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m12883_gshared (HashSet_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m12883(__this, ___item, method) (( bool (*) (HashSet_1_t49 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m12883_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m12884_gshared (HashSet_1_t49 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m12884(__this, ___info, ___context, method) (( void (*) (HashSet_1_t49 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))HashSet_1_GetObjectData_m12884_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m12885_gshared (HashSet_1_t49 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m12885(__this, ___sender, method) (( void (*) (HashSet_1_t49 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m12885_gshared)(__this, ___sender, method)
