#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#define INCLUDED_openfl_ui_MultitouchInputMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,ui,MultitouchInputMode)
namespace openfl{
namespace ui{


class MultitouchInputMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MultitouchInputMode_obj OBJ_;

	public:
		MultitouchInputMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("openfl.ui.MultitouchInputMode"); }
		::String __ToString() const { return HX_CSTRING("MultitouchInputMode.") + tag; }

		static ::openfl::ui::MultitouchInputMode GESTURE;
		static inline ::openfl::ui::MultitouchInputMode GESTURE_dyn() { return GESTURE; }
		static ::openfl::ui::MultitouchInputMode NONE;
		static inline ::openfl::ui::MultitouchInputMode NONE_dyn() { return NONE; }
		static ::openfl::ui::MultitouchInputMode TOUCH_POINT;
		static inline ::openfl::ui::MultitouchInputMode TOUCH_POINT_dyn() { return TOUCH_POINT; }
};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_MultitouchInputMode */ 
