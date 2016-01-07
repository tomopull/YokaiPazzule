#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t581;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct  TlsServerKeyExchange_t1085  : public HandshakeMessage_t1054
{
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::rsaParams
	RSAParameters_t940  ___rsaParams_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::signedParams
	ByteU5BU5D_t581* ___signedParams_10;
};
