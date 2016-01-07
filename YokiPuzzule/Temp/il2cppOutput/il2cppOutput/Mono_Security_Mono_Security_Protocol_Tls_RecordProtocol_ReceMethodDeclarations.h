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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1050;
// System.AsyncCallback
struct AsyncCallback_t22;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t581;
// System.IO.Stream
struct Stream_t1052;
// System.Exception
struct Exception_t121;
// System.Threading.WaitHandle
struct WaitHandle_t1098;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m5496 (ReceiveRecordAsyncResult_t1050 * __this, AsyncCallback_t22 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t581* ___initialBuffer, Stream_t1052 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1052 * ReceiveRecordAsyncResult_get_Record_m5497 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t581* ReceiveRecordAsyncResult_get_ResultingBuffer_m5498 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t581* ReceiveRecordAsyncResult_get_InitialBuffer_m5499 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m5500 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t121 * ReceiveRecordAsyncResult_get_AsyncException_m5501 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m5502 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1098 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m5503 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m5504 (ReceiveRecordAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5505 (ReceiveRecordAsyncResult_t1050 * __this, Exception_t121 * ___ex, ByteU5BU5D_t581* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5506 (ReceiveRecordAsyncResult_t1050 * __this, Exception_t121 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5507 (ReceiveRecordAsyncResult_t1050 * __this, ByteU5BU5D_t581* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
