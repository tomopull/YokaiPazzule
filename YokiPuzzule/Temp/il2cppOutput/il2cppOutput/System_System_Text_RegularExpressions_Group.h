#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Group
struct Group_t848;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t846;

#include "System_System_Text_RegularExpressions_Capture.h"

// System.Text.RegularExpressions.Group
struct  Group_t848  : public Capture_t845
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t846 * ___captures_5;
};
struct Group_t848_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t848 * ___Fail_3;
};
