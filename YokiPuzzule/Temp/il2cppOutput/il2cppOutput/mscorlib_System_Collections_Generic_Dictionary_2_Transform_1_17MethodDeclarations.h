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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>
struct Transform_1_t1997;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13195_gshared (Transform_1_t1997 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13195(__this, ___object, ___method, method) (( void (*) (Transform_1_t1997 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13195_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m13196_gshared (Transform_1_t1997 * __this, Object_t * ___key, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13196(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1997 *, Object_t *, ObjectMetadata_t49 , const MethodInfo*))Transform_1_Invoke_m13196_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13197_gshared (Transform_1_t1997 * __this, Object_t * ___key, ObjectMetadata_t49  ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13197(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1997 *, Object_t *, ObjectMetadata_t49 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13197_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m13198_gshared (Transform_1_t1997 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13198(__this, ___result, method) (( Object_t * (*) (Transform_1_t1997 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13198_gshared)(__this, ___result, method)
