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

// UnityEngine.Renderer
struct Renderer_t132;
// UnityEngine.Material
struct Material_t133;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t133 * Renderer_get_material_m635 (Renderer_t132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2351 (Renderer_t132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2352 (Renderer_t132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C" void Renderer_set_sortingOrder_m670 (Renderer_t132 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
