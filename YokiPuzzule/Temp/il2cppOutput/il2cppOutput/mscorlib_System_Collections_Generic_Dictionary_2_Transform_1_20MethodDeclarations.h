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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct Transform_1_t2090;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14159_gshared (Transform_1_t2090 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14159(__this, ___object, ___method, method) (( void (*) (Transform_1_t2090 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14159_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2048  Transform_1_Invoke_m14160_gshared (Transform_1_t2090 * __this, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14160(__this, ___key, ___value, method) (( KeyValuePair_2_t2048  (*) (Transform_1_t2090 *, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Transform_1_Invoke_m14160_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14161_gshared (Transform_1_t2090 * __this, Object_t * ___key, ObjectMetadata_t61  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14161(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2090 *, Object_t *, ObjectMetadata_t61 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14161_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2048  Transform_1_EndInvoke_m14162_gshared (Transform_1_t2090 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14162(__this, ___result, method) (( KeyValuePair_2_t2048  (*) (Transform_1_t2090 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14162_gshared)(__this, ___result, method)
