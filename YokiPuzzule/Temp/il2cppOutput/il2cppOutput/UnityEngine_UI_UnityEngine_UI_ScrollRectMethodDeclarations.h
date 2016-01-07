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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t368;
// UnityEngine.RectTransform
struct RectTransform_t288;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t362;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t366;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t249;
// UnityEngine.Transform
struct Transform_t128;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_ScrollbarVisibility.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C" void ScrollRect__ctor_m1726 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C" RectTransform_t288 * ScrollRect_get_content_m1727 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_content_m1728 (ScrollRect_t368 * __this, RectTransform_t288 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C" bool ScrollRect_get_horizontal_m1729 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C" void ScrollRect_set_horizontal_m1730 (ScrollRect_t368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C" bool ScrollRect_get_vertical_m1731 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C" void ScrollRect_set_vertical_m1732 (ScrollRect_t368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C" int32_t ScrollRect_get_movementType_m1733 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C" void ScrollRect_set_movementType_m1734 (ScrollRect_t368 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C" float ScrollRect_get_elasticity_m1735 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C" void ScrollRect_set_elasticity_m1736 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C" bool ScrollRect_get_inertia_m1737 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C" void ScrollRect_set_inertia_m1738 (ScrollRect_t368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C" float ScrollRect_get_decelerationRate_m1739 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C" void ScrollRect_set_decelerationRate_m1740 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C" float ScrollRect_get_scrollSensitivity_m1741 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C" void ScrollRect_set_scrollSensitivity_m1742 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
extern "C" RectTransform_t288 * ScrollRect_get_viewport_m1743 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_viewport(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_viewport_m1744 (ScrollRect_t368 * __this, RectTransform_t288 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C" Scrollbar_t362 * ScrollRect_get_horizontalScrollbar_m1745 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_horizontalScrollbar_m1746 (ScrollRect_t368 * __this, Scrollbar_t362 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C" Scrollbar_t362 * ScrollRect_get_verticalScrollbar_m1747 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_verticalScrollbar_m1748 (ScrollRect_t368 * __this, Scrollbar_t362 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_horizontalScrollbarVisibility()
extern "C" int32_t ScrollRect_get_horizontalScrollbarVisibility_m1749 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C" void ScrollRect_set_horizontalScrollbarVisibility_m1750 (ScrollRect_t368 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_verticalScrollbarVisibility()
extern "C" int32_t ScrollRect_get_verticalScrollbarVisibility_m1751 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C" void ScrollRect_set_verticalScrollbarVisibility_m1752 (ScrollRect_t368 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalScrollbarSpacing()
extern "C" float ScrollRect_get_horizontalScrollbarSpacing_m1753 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarSpacing(System.Single)
extern "C" void ScrollRect_set_horizontalScrollbarSpacing_m1754 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalScrollbarSpacing()
extern "C" float ScrollRect_get_verticalScrollbarSpacing_m1755 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarSpacing(System.Single)
extern "C" void ScrollRect_set_verticalScrollbarSpacing_m1756 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C" ScrollRectEvent_t366 * ScrollRect_get_onValueChanged_m1757 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C" void ScrollRect_set_onValueChanged_m1758 (ScrollRect_t368 * __this, ScrollRectEvent_t366 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C" RectTransform_t288 * ScrollRect_get_viewRect_m1759 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C" Vector2_t4  ScrollRect_get_velocity_m1760 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C" void ScrollRect_set_velocity_m1761 (ScrollRect_t368 * __this, Vector2_t4  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_rectTransform()
extern "C" RectTransform_t288 * ScrollRect_get_rectTransform_m1762 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void ScrollRect_Rebuild_m1763 (ScrollRect_t368 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateCachedData()
extern "C" void ScrollRect_UpdateCachedData_m1764 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C" void ScrollRect_OnEnable_m1765 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C" void ScrollRect_OnDisable_m1766 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C" bool ScrollRect_IsActive_m1767 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C" void ScrollRect_EnsureLayoutHasRebuilt_m1768 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C" void ScrollRect_StopMovement_m1769 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnScroll_m1770 (ScrollRect_t368 * __this, PointerEventData_t249 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnInitializePotentialDrag_m1771 (ScrollRect_t368 * __this, PointerEventData_t249 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnBeginDrag_m1772 (ScrollRect_t368 * __this, PointerEventData_t249 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnEndDrag_m1773 (ScrollRect_t368 * __this, PointerEventData_t249 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnDrag_m1774 (ScrollRect_t368 * __this, PointerEventData_t249 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_SetContentAnchoredPosition_m1775 (ScrollRect_t368 * __this, Vector2_t4  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C" void ScrollRect_LateUpdate_m1776 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C" void ScrollRect_UpdatePrevData_m1777 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C" void ScrollRect_UpdateScrollbars_m1778 (ScrollRect_t368 * __this, Vector2_t4  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C" Vector2_t4  ScrollRect_get_normalizedPosition_m1779 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_set_normalizedPosition_m1780 (ScrollRect_t368 * __this, Vector2_t4  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C" float ScrollRect_get_horizontalNormalizedPosition_m1781 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_horizontalNormalizedPosition_m1782 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C" float ScrollRect_get_verticalNormalizedPosition_m1783 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_verticalNormalizedPosition_m1784 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetHorizontalNormalizedPosition_m1785 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetVerticalNormalizedPosition_m1786 (ScrollRect_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C" void ScrollRect_SetNormalizedPosition_m1787 (ScrollRect_t368 * __this, float ___value, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C" float ScrollRect_RubberDelta_m1788 (Object_t * __this /* static, unused */, float ___overStretching, float ___viewSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnRectTransformDimensionsChange()
extern "C" void ScrollRect_OnRectTransformDimensionsChange_m1789 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_hScrollingNeeded()
extern "C" bool ScrollRect_get_hScrollingNeeded_m1790 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vScrollingNeeded()
extern "C" bool ScrollRect_get_vScrollingNeeded_m1791 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputHorizontal()
extern "C" void ScrollRect_CalculateLayoutInputHorizontal_m1792 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputVertical()
extern "C" void ScrollRect_CalculateLayoutInputVertical_m1793 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minWidth()
extern "C" float ScrollRect_get_minWidth_m1794 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredWidth()
extern "C" float ScrollRect_get_preferredWidth_m1795 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleWidth()
extern "C" float ScrollRect_get_flexibleWidth_m1796 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minHeight()
extern "C" float ScrollRect_get_minHeight_m1797 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredHeight()
extern "C" float ScrollRect_get_preferredHeight_m1798 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleHeight()
extern "C" float ScrollRect_get_flexibleHeight_m1799 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.ScrollRect::get_layoutPriority()
extern "C" int32_t ScrollRect_get_layoutPriority_m1800 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutHorizontal()
extern "C" void ScrollRect_SetLayoutHorizontal_m1801 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutVertical()
extern "C" void ScrollRect_SetLayoutVertical_m1802 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarVisibility()
extern "C" void ScrollRect_UpdateScrollbarVisibility_m1803 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarLayout()
extern "C" void ScrollRect_UpdateScrollbarLayout_m1804 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C" void ScrollRect_UpdateBounds_m1805 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C" Bounds_t369  ScrollRect_GetBounds_m1806 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C" Vector2_t4  ScrollRect_CalculateOffset_m1807 (ScrollRect_t368 * __this, Vector2_t4  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirty()
extern "C" void ScrollRect_SetDirty_m1808 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirtyCaching()
extern "C" void ScrollRect_SetDirtyCaching_m1809 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m1810 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t128 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m1811 (ScrollRect_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
