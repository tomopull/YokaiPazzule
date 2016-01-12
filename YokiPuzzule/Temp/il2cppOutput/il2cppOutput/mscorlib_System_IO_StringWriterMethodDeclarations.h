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

// System.IO.StringWriter
struct StringWriter_t169;
// System.Text.StringBuilder
struct StringBuilder_t28;
// System.IFormatProvider
struct IFormatProvider_t56;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t34;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StringWriter::.ctor()
extern "C" void StringWriter__ctor_m783 (StringWriter_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C" void StringWriter__ctor_m847 (StringWriter_t169 * __this, StringBuilder_t28 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C" void StringWriter__ctor_m8105 (StringWriter_t169 * __this, StringBuilder_t28 * ___sb, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C" void StringWriter_Close_m8106 (StringWriter_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C" void StringWriter_Dispose_m8107 (StringWriter_t169 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C" String_t* StringWriter_ToString_m8108 (StringWriter_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C" void StringWriter_Write_m8109 (StringWriter_t169 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C" void StringWriter_Write_m8110 (StringWriter_t169 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StringWriter_Write_m8111 (StringWriter_t169 * __this, CharU5BU5D_t34* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
