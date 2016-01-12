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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>
struct Transform_1_t2040;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13772_gshared (Transform_1_t2040 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13772(__this, ___object, ___method, method) (( void (*) (Transform_1_t2040 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13772_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1955  Transform_1_Invoke_m13773_gshared (Transform_1_t2040 * __this, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13773(__this, ___key, ___value, method) (( KeyValuePair_2_t1955  (*) (Transform_1_t2040 *, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Transform_1_Invoke_m13773_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13774_gshared (Transform_1_t2040 * __this, Object_t * ___key, PropertyMetadata_t47  ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13774(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2040 *, Object_t *, PropertyMetadata_t47 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13774_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1955  Transform_1_EndInvoke_m13775_gshared (Transform_1_t2040 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13775(__this, ___result, method) (( KeyValuePair_2_t1955  (*) (Transform_1_t2040 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13775_gshared)(__this, ___result, method)
