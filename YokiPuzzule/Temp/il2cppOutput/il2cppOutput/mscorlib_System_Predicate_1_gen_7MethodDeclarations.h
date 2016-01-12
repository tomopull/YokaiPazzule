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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t1947;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12612_gshared (Predicate_1_t1947 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12612(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1947 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12612_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12613_gshared (Predicate_1_t1947 * __this, KeyValuePair_2_t1851  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12613(__this, ___obj, method) (( bool (*) (Predicate_1_t1947 *, KeyValuePair_2_t1851 , const MethodInfo*))Predicate_1_Invoke_m12613_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12614_gshared (Predicate_1_t1947 * __this, KeyValuePair_2_t1851  ___obj, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12614(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1947 *, KeyValuePair_2_t1851 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12614_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12615_gshared (Predicate_1_t1947 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12615(__this, ___result, method) (( bool (*) (Predicate_1_t1947 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12615_gshared)(__this, ___result, method)
