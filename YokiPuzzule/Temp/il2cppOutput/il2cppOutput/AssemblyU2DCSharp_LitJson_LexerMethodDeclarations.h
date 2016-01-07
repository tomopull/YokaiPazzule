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

// LitJson.Lexer
struct Lexer_t66;
// System.IO.TextReader
struct TextReader_t67;
// System.String
struct String_t;
// LitJson.FsmContext
struct FsmContext_t74;

#include "codegen/il2cpp-codegen.h"

// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C" void Lexer__ctor_m475 (Lexer_t66 * __this, TextReader_t67 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C" void Lexer__cctor_m476 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowComments()
extern "C" bool Lexer_get_AllowComments_m477 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
extern "C" void Lexer_set_AllowComments_m478 (Lexer_t66 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
extern "C" bool Lexer_get_AllowSingleQuotedStrings_m479 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
extern "C" void Lexer_set_AllowSingleQuotedStrings_m480 (Lexer_t66 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" bool Lexer_get_EndOfInput_m481 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C" int32_t Lexer_get_Token_m482 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C" String_t* Lexer_get_StringValue_m483 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" int32_t Lexer_HexValue_m484 (Object_t * __this /* static, unused */, int32_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C" void Lexer_PopulateFsmTables_m485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C" uint16_t Lexer_ProcessEscChar_m486 (Object_t * __this /* static, unused */, int32_t ___esc_char, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C" bool Lexer_State1_m487 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C" bool Lexer_State2_m488 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C" bool Lexer_State3_m489 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C" bool Lexer_State4_m490 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C" bool Lexer_State5_m491 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C" bool Lexer_State6_m492 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C" bool Lexer_State7_m493 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C" bool Lexer_State8_m494 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C" bool Lexer_State9_m495 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C" bool Lexer_State10_m496 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C" bool Lexer_State11_m497 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C" bool Lexer_State12_m498 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C" bool Lexer_State13_m499 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C" bool Lexer_State14_m500 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C" bool Lexer_State15_m501 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C" bool Lexer_State16_m502 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C" bool Lexer_State17_m503 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C" bool Lexer_State18_m504 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C" bool Lexer_State19_m505 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C" bool Lexer_State20_m506 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C" bool Lexer_State21_m507 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C" bool Lexer_State22_m508 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C" bool Lexer_State23_m509 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C" bool Lexer_State24_m510 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C" bool Lexer_State25_m511 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C" bool Lexer_State26_m512 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C" bool Lexer_State27_m513 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C" bool Lexer_State28_m514 (Object_t * __this /* static, unused */, FsmContext_t74 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C" bool Lexer_GetChar_m515 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C" int32_t Lexer_NextChar_m516 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C" bool Lexer_NextToken_m517 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C" void Lexer_UngetChar_m518 (Lexer_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
