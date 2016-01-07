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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t1082;
// Mono.Security.Protocol.Tls.Context
struct Context_t1030;
// System.Byte[]
struct ByteU5BU5D_t581;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerFinished__ctor_m5787 (TlsServerFinished_t1082 * __this, Context_t1030 * ___context, ByteU5BU5D_t581* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern "C" void TlsServerFinished__cctor_m5788 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern "C" void TlsServerFinished_Update_m5789 (TlsServerFinished_t1082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern "C" void TlsServerFinished_ProcessAsSsl3_m5790 (TlsServerFinished_t1082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern "C" void TlsServerFinished_ProcessAsTls1_m5791 (TlsServerFinished_t1082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
