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
struct Comparison_1_t2039;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m13554_gshared (Comparison_1_t2039 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m13554(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2039 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m13554_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13555_gshared (Comparison_1_t2039 * __this, KeyValuePair_2_t1929  ___x, KeyValuePair_2_t1929  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13555(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2039 *, KeyValuePair_2_t1929 , KeyValuePair_2_t1929 , const MethodInfo*))Comparison_1_Invoke_m13555_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13556_gshared (Comparison_1_t2039 * __this, KeyValuePair_2_t1929  ___x, KeyValuePair_2_t1929  ___y, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13556(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2039 *, KeyValuePair_2_t1929 , KeyValuePair_2_t1929 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13556_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13557_gshared (Comparison_1_t2039 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13557(__this, ___result, method) (( int32_t (*) (Comparison_1_t2039 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13557_gshared)(__this, ___result, method)
