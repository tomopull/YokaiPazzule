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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t776;
// System.Net.WebRequest
struct WebRequest_t772;
// System.Uri
struct Uri_t773;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m3951 (FileWebRequestCreator_t776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t772 * FileWebRequestCreator_Create_m3952 (FileWebRequestCreator_t776 * __this, Uri_t773 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
