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

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t1491;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t129;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1481;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1791;
// System.Exception
struct Exception_t121;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t735;
// System.Collections.IDictionary
struct IDictionary_t118;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m9103 (ReturnMessage_t1491 * __this, Object_t * ___ret, ObjectU5BU5D_t129* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1481 * ___callCtx, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m9104 (ReturnMessage_t1491 * __this, Exception_t121 * ___e, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9105 (ReturnMessage_t1491 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t129* ReturnMessage_get_Args_m9106 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1481 * ReturnMessage_get_LogicalCallContext_m9107 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t735 * ReturnMessage_get_MethodBase_m9108 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m9109 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C" Object_t * ReturnMessage_get_MethodSignature_m9110 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C" Object_t * ReturnMessage_get_Properties_m9111 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m9112 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m9113 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m9114 (ReturnMessage_t1491 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t121 * ReturnMessage_get_Exception_m9115 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t129* ReturnMessage_get_OutArgs_m9116 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m9117 (ReturnMessage_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
