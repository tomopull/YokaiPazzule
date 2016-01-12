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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1950;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12622_gshared (Comparison_1_t1950 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12622(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1950 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12622_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12623_gshared (Comparison_1_t1950 * __this, KeyValuePair_2_t1851  ___x, KeyValuePair_2_t1851  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12623(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1950 *, KeyValuePair_2_t1851 , KeyValuePair_2_t1851 , const MethodInfo*))Comparison_1_Invoke_m12623_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12624_gshared (Comparison_1_t1950 * __this, KeyValuePair_2_t1851  ___x, KeyValuePair_2_t1851  ___y, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12624(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1950 *, KeyValuePair_2_t1851 , KeyValuePair_2_t1851 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12624_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12625_gshared (Comparison_1_t1950 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12625(__this, ___result, method) (( int32_t (*) (Comparison_1_t1950 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12625_gshared)(__this, ___result, method)
