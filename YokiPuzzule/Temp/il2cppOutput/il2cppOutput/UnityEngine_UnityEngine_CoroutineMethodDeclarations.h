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

// UnityEngine.Coroutine
struct Coroutine_t341;
struct Coroutine_t341_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2850 (Coroutine_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2851 (Coroutine_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2852 (Coroutine_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t341_marshal(const Coroutine_t341& unmarshaled, Coroutine_t341_marshaled& marshaled);
extern "C" void Coroutine_t341_marshal_back(const Coroutine_t341_marshaled& marshaled, Coroutine_t341& unmarshaled);
extern "C" void Coroutine_t341_marshal_cleanup(Coroutine_t341_marshaled& marshaled);
