﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t896;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t890;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t897;

#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t895  : public Assertion_t894
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t896 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t890 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t897 * ___literal_3;
};
