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
struct Predicate_1_t2036;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m13544_gshared (Predicate_1_t2036 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m13544(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2036 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m13544_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13545_gshared (Predicate_1_t2036 * __this, KeyValuePair_2_t1929  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m13545(__this, ___obj, method) (( bool (*) (Predicate_1_t2036 *, KeyValuePair_2_t1929 , const MethodInfo*))Predicate_1_Invoke_m13545_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m13546_gshared (Predicate_1_t2036 * __this, KeyValuePair_2_t1929  ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m13546(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2036 *, KeyValuePair_2_t1929 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m13546_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13547_gshared (Predicate_1_t2036 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m13547(__this, ___result, method) (( bool (*) (Predicate_1_t2036 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m13547_gshared)(__this, ___result, method)
