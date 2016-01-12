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

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t779;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t811;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t818;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void RemoteCertificateValidationCallback__ctor_m4751 (RemoteCertificateValidationCallback_t779 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool RemoteCertificateValidationCallback_Invoke_m4752 (RemoteCertificateValidationCallback_t779 * __this, Object_t * ___sender, X509Certificate_t811 * ___certificate, X509Chain_t818 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t779(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t811 * ___certificate, X509Chain_t818 * ___chain, int32_t ___sslPolicyErrors);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m4753 (RemoteCertificateValidationCallback_t779 * __this, Object_t * ___sender, X509Certificate_t811 * ___certificate, X509Chain_t818 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m4754 (RemoteCertificateValidationCallback_t779 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
