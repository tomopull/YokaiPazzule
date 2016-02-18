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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>
struct Transform_1_t2089;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14151_gshared (Transform_1_t2089 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14151(__this, ___object, ___method, method) (( void (*) (Transform_1_t2089 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14151_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::Invoke(TKey,TValue)
extern "C" ObjectMetadata_t61  Transform_1_Invoke_m14152_gshared (Transform_1_t2089 * __this, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14152(__this, ___key, ___value, method) (( ObjectMetadata_t61  (*) (Transform_1_t2089 *, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Transform_1_Invoke_m14152_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14153_gshared (Transform_1_t2089 * __this, Object_t * ___key, ObjectMetadata_t61  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14153(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2089 *, Object_t *, ObjectMetadata_t61 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14153_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::EndInvoke(System.IAsyncResult)
extern "C" ObjectMetadata_t61  Transform_1_EndInvoke_m14154_gshared (Transform_1_t2089 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14154(__this, ___result, method) (( ObjectMetadata_t61  (*) (Transform_1_t2089 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14154_gshared)(__this, ___result, method)
