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
struct Transform_1_t2129;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14704_gshared (Transform_1_t2129 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14704(__this, ___object, ___method, method) (( void (*) (Transform_1_t2129 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14704_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2044  Transform_1_Invoke_m14705_gshared (Transform_1_t2129 * __this, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14705(__this, ___key, ___value, method) (( KeyValuePair_2_t2044  (*) (Transform_1_t2129 *, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Transform_1_Invoke_m14705_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14706_gshared (Transform_1_t2129 * __this, Object_t * ___key, PropertyMetadata_t59  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14706(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2129 *, Object_t *, PropertyMetadata_t59 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14706_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2044  Transform_1_EndInvoke_m14707_gshared (Transform_1_t2129 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14707(__this, ___result, method) (( KeyValuePair_2_t2044  (*) (Transform_1_t2129 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14707_gshared)(__this, ___result, method)
