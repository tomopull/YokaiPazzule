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

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t915;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t843;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchEvaluator__ctor_m4755 (MatchEvaluator_t915 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C" String_t* MatchEvaluator_Invoke_m4756 (MatchEvaluator_t915 * __this, Match_t843 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t915(Il2CppObject* delegate, Match_t843 * ___match);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchEvaluator_BeginInvoke_m4757 (MatchEvaluator_t915 * __this, Match_t843 * ___match, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C" String_t* MatchEvaluator_EndInvoke_m4758 (MatchEvaluator_t915 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
