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
struct HashSet_1_t37;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t100;
// System.Object[]
struct ObjectU5BU5D_t129;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m724_gshared (HashSet_1_t37 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m724(__this, method) (( void (*) (HashSet_1_t37 *, const MethodInfo*))HashSet_1__ctor_m724_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m11934_gshared (HashSet_1_t37 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m11934(__this, ___info, ___context, method) (( void (*) (HashSet_1_t37 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))HashSet_1__ctor_m11934_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11935_gshared (HashSet_1_t37 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11935(__this, method) (( Object_t* (*) (HashSet_1_t37 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11935_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11936_gshared (HashSet_1_t37 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11936(__this, method) (( bool (*) (HashSet_1_t37 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11936_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m11937_gshared (HashSet_1_t37 * __this, ObjectU5BU5D_t129* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m11937(__this, ___array, ___index, method) (( void (*) (HashSet_1_t37 *, ObjectU5BU5D_t129*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m11937_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11938_gshared (HashSet_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11938(__this, ___item, method) (( void (*) (HashSet_1_t37 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11938_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m11939_gshared (HashSet_1_t37 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m11939(__this, method) (( Object_t * (*) (HashSet_1_t37 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m11939_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m11940_gshared (HashSet_1_t37 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m11940(__this, method) (( int32_t (*) (HashSet_1_t37 *, const MethodInfo*))HashSet_1_get_Count_m11940_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m11941_gshared (HashSet_1_t37 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m11941(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t37 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m11941_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m11942_gshared (HashSet_1_t37 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m11942(__this, ___size, method) (( void (*) (HashSet_1_t37 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m11942_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m11943_gshared (HashSet_1_t37 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m11943(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t37 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m11943_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m11944_gshared (HashSet_1_t37 * __this, ObjectU5BU5D_t129* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m11944(__this, ___array, ___index, method) (( void (*) (HashSet_1_t37 *, ObjectU5BU5D_t129*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m11944_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m11945_gshared (HashSet_1_t37 * __this, ObjectU5BU5D_t129* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m11945(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t37 *, ObjectU5BU5D_t129*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m11945_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m11946_gshared (HashSet_1_t37 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m11946(__this, method) (( void (*) (HashSet_1_t37 *, const MethodInfo*))HashSet_1_Resize_m11946_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m11947_gshared (HashSet_1_t37 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m11947(__this, ___index, method) (( int32_t (*) (HashSet_1_t37 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m11947_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m11948_gshared (HashSet_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m11948(__this, ___item, method) (( int32_t (*) (HashSet_1_t37 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m11948_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m725_gshared (HashSet_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m725(__this, ___item, method) (( bool (*) (HashSet_1_t37 *, Object_t *, const MethodInfo*))HashSet_1_Add_m725_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m11949_gshared (HashSet_1_t37 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m11949(__this, method) (( void (*) (HashSet_1_t37 *, const MethodInfo*))HashSet_1_Clear_m11949_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m11950_gshared (HashSet_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m11950(__this, ___item, method) (( bool (*) (HashSet_1_t37 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m11950_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m11951_gshared (HashSet_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m11951(__this, ___item, method) (( bool (*) (HashSet_1_t37 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m11951_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m11952_gshared (HashSet_1_t37 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m11952(__this, ___info, ___context, method) (( void (*) (HashSet_1_t37 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))HashSet_1_GetObjectData_m11952_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m11953_gshared (HashSet_1_t37 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m11953(__this, ___sender, method) (( void (*) (HashSet_1_t37 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m11953_gshared)(__this, ___sender, method)
