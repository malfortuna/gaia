#include <hxcpp.h>

#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_Multitouch
#include <openfl/ui/Multitouch.h>
#endif
#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#include <openfl/ui/MultitouchInputMode.h>
#endif
namespace openfl{
namespace ui{

Void Multitouch_obj::__construct()
{
	return null();
}

//Multitouch_obj::~Multitouch_obj() { }

Dynamic Multitouch_obj::__CreateEmpty() { return  new Multitouch_obj; }
hx::ObjectPtr< Multitouch_obj > Multitouch_obj::__new()
{  hx::ObjectPtr< Multitouch_obj > result = new Multitouch_obj();
	result->__construct();
	return result;}

Dynamic Multitouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Multitouch_obj > result = new Multitouch_obj();
	result->__construct();
	return result;}

void Multitouch_obj::__init__() {
HX_STACK_FRAME("openfl.ui.Multitouch","__init__",0x293df5fc,"openfl.ui.Multitouch.__init__","openfl/ui/Multitouch.hx",18,0xce42901c)
{
	HX_STACK_LINE(20)
	::openfl::ui::Multitouch_obj::maxTouchPoints = (int)2;
	HX_STACK_LINE(21)
	::openfl::ui::Multitouch_obj::supportedGestures = null();
	HX_STACK_LINE(22)
	::openfl::ui::Multitouch_obj::supportsGestureEvents = false;
}
}

int Multitouch_obj::maxTouchPoints;

Array< ::String > Multitouch_obj::supportedGestures;

bool Multitouch_obj::supportsGestureEvents;

bool Multitouch_obj::supportsTouchEvents;

::openfl::ui::MultitouchInputMode Multitouch_obj::get_inputMode( ){
	HX_STACK_FRAME("openfl.ui.Multitouch","get_inputMode",0x9df85c38,"openfl.ui.Multitouch.get_inputMode","openfl/ui/Multitouch.hx",36,0xce42901c)
	HX_STACK_LINE(36)
	if ((::openfl::ui::Multitouch_obj::lime_stage_get_multitouch_active(::openfl::Lib_obj::get_current()->get_stage()->__handle))){
		HX_STACK_LINE(38)
		return ::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT;
	}
	else{
		HX_STACK_LINE(42)
		return ::openfl::ui::MultitouchInputMode_obj::NONE;
	}
	HX_STACK_LINE(36)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Multitouch_obj,get_inputMode,return )

::openfl::ui::MultitouchInputMode Multitouch_obj::set_inputMode( ::openfl::ui::MultitouchInputMode value){
	HX_STACK_FRAME("openfl.ui.Multitouch","set_inputMode",0xe2fe3e44,"openfl.ui.Multitouch.set_inputMode","openfl/ui/Multitouch.hx",49,0xce42901c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(51)
	if (((value == ::openfl::ui::MultitouchInputMode_obj::GESTURE))){
		HX_STACK_LINE(53)
		return ::openfl::ui::Multitouch_obj::get_inputMode();
	}
	HX_STACK_LINE(57)
	::openfl::ui::Multitouch_obj::lime_stage_set_multitouch_active(::openfl::Lib_obj::get_current()->get_stage()->__handle,(value == ::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT));
	HX_STACK_LINE(58)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Multitouch_obj,set_inputMode,return )

bool Multitouch_obj::get_supportsTouchEvents( ){
	HX_STACK_FRAME("openfl.ui.Multitouch","get_supportsTouchEvents",0x2ba8207f,"openfl.ui.Multitouch.get_supportsTouchEvents","openfl/ui/Multitouch.hx",63,0xce42901c)
	HX_STACK_LINE(63)
	return ::openfl::ui::Multitouch_obj::lime_stage_get_multitouch_supported(::openfl::Lib_obj::get_current()->get_stage()->__handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Multitouch_obj,get_supportsTouchEvents,return )

Dynamic Multitouch_obj::lime_stage_get_multitouch_supported;

Dynamic Multitouch_obj::lime_stage_get_multitouch_active;

Dynamic Multitouch_obj::lime_stage_set_multitouch_active;


Multitouch_obj::Multitouch_obj()
{
}

Dynamic Multitouch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"inputMode") ) { return get_inputMode(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_inputMode") ) { return get_inputMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inputMode") ) { return set_inputMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { return maxTouchPoints; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"supportedGestures") ) { return supportedGestures; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { return inCallProp ? get_supportsTouchEvents() : supportsTouchEvents; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"supportsGestureEvents") ) { return supportsGestureEvents; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_supportsTouchEvents") ) { return get_supportsTouchEvents_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_stage_get_multitouch_active") ) { return lime_stage_get_multitouch_active; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_multitouch_active") ) { return lime_stage_set_multitouch_active; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_stage_get_multitouch_supported") ) { return lime_stage_get_multitouch_supported; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Multitouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"inputMode") ) { return set_inputMode(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"supportedGestures") ) { supportedGestures=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { supportsTouchEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"supportsGestureEvents") ) { supportsGestureEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_stage_get_multitouch_active") ) { lime_stage_get_multitouch_active=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_multitouch_active") ) { lime_stage_set_multitouch_active=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_stage_get_multitouch_supported") ) { lime_stage_get_multitouch_supported=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Multitouch_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("maxTouchPoints"),
	HX_CSTRING("supportedGestures"),
	HX_CSTRING("supportsGestureEvents"),
	HX_CSTRING("supportsTouchEvents"),
	HX_CSTRING("get_inputMode"),
	HX_CSTRING("set_inputMode"),
	HX_CSTRING("get_supportsTouchEvents"),
	HX_CSTRING("lime_stage_get_multitouch_supported"),
	HX_CSTRING("lime_stage_get_multitouch_active"),
	HX_CSTRING("lime_stage_set_multitouch_active"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Multitouch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_MARK_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_supported,"lime_stage_get_multitouch_supported");
	HX_MARK_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_active,"lime_stage_get_multitouch_active");
	HX_MARK_MEMBER_NAME(Multitouch_obj::lime_stage_set_multitouch_active,"lime_stage_set_multitouch_active");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Multitouch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_supported,"lime_stage_get_multitouch_supported");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_active,"lime_stage_get_multitouch_active");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::lime_stage_set_multitouch_active,"lime_stage_set_multitouch_active");
};

#endif

Class Multitouch_obj::__mClass;

void Multitouch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.ui.Multitouch"), hx::TCanCast< Multitouch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Multitouch_obj::__boot()
{
	lime_stage_get_multitouch_supported= ::openfl::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_stage_get_multitouch_supported"),(int)1);
	lime_stage_get_multitouch_active= ::openfl::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_stage_get_multitouch_active"),(int)1);
	lime_stage_set_multitouch_active= ::openfl::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_stage_set_multitouch_active"),(int)2);
}

} // end namespace openfl
} // end namespace ui
