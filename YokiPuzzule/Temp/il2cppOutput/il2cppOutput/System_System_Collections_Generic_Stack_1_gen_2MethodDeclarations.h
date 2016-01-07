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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2098;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t100;
// System.Collections.IEnumerator
struct IEnumerator_t29;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m14547_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1__ctor_m14547(__this, method) (( void (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1__ctor_m14547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m14549_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m14549(__this, method) (( bool (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m14549_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m14551_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m14551(__this, method) (( Object_t * (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m14551_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m14553_gshared (Stack_1_t2098 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m14553(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2098 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m14553_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14555_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14555(__this, method) (( Object_t* (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14555_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m14557_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m14557(__this, method) (( Object_t * (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m14557_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
extern "C" void Stack_1_Clear_m14558_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_Clear_m14558(__this, method) (( void (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_Clear_m14558_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m14559_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_Peek_m14559(__this, method) (( Object_t * (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_Peek_m14559_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m14560_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_Pop_m14560(__this, method) (( Object_t * (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_Pop_m14560_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m14561_gshared (Stack_1_t2098 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m14561(__this, ___t, method) (( void (*) (Stack_1_t2098 *, Object_t *, const MethodInfo*))Stack_1_Push_m14561_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m14563_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m14563(__this, method) (( int32_t (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_get_Count_m14563_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2099  Stack_1_GetEnumerator_m14565_gshared (Stack_1_t2098 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m14565(__this, method) (( Enumerator_t2099  (*) (Stack_1_t2098 *, const MethodInfo*))Stack_1_GetEnumerator_m14565_gshared)(__this, method)
