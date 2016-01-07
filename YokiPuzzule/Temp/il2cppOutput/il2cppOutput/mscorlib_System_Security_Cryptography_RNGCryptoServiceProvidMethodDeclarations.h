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

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t1588;
// System.Byte[]
struct ByteU5BU5D_t581;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
extern "C" void RNGCryptoServiceProvider__ctor_m9630 (RNGCryptoServiceProvider_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
extern "C" void RNGCryptoServiceProvider__cctor_m9631 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
extern "C" void RNGCryptoServiceProvider_Check_m9632 (RNGCryptoServiceProvider_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
extern "C" bool RNGCryptoServiceProvider_RngOpen_m9633 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
extern "C" IntPtr_t RNGCryptoServiceProvider_RngInitialize_m9634 (Object_t * __this /* static, unused */, ByteU5BU5D_t581* ___seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
extern "C" IntPtr_t RNGCryptoServiceProvider_RngGetBytes_m9635 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t581* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
extern "C" void RNGCryptoServiceProvider_RngClose_m9636 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
extern "C" void RNGCryptoServiceProvider_GetBytes_m9637 (RNGCryptoServiceProvider_t1588 * __this, ByteU5BU5D_t581* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
extern "C" void RNGCryptoServiceProvider_GetNonZeroBytes_m9638 (RNGCryptoServiceProvider_t1588 * __this, ByteU5BU5D_t581* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
extern "C" void RNGCryptoServiceProvider_Finalize_m9639 (RNGCryptoServiceProvider_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
