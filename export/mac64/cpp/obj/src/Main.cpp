#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",11,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->startFullscreen = false;
	HX_STACK_LINE(18)
	this->skipSplash = true;
	HX_STACK_LINE(17)
	this->framerate = (int)60;
	HX_STACK_LINE(16)
	this->zoom = (int)-1;
	HX_STACK_LINE(15)
	this->initialState = hx::ClassOf< ::MenuState >();
	HX_STACK_LINE(14)
	this->gameHeight = (int)800;
	HX_STACK_LINE(13)
	this->gameWidth = (int)800;
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(32)
	::openfl::display::Stage _g = this->get_stage();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	if (((_g != null()))){
		HX_STACK_LINE(34)
		this->init(null());
	}
	else{
		HX_STACK_LINE(38)
		this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::init( ::openfl::events::Event E){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",43,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(44)
		if ((this->hasEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE))){
			HX_STACK_LINE(46)
			this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		}
		HX_STACK_LINE(49)
		this->setupGame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

Void Main_obj::setupGame( ){
{
		HX_STACK_FRAME("Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",53,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		int stageWidth = ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(stageWidth,"stageWidth");
		HX_STACK_LINE(55)
		int stageHeight = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(stageHeight,"stageHeight");
		HX_STACK_LINE(57)
		if (((this->zoom == (int)-1))){
			HX_STACK_LINE(59)
			Float ratioX = (Float(stageWidth) / Float(this->gameWidth));		HX_STACK_VAR(ratioX,"ratioX");
			HX_STACK_LINE(60)
			Float ratioY = (Float(stageHeight) / Float(this->gameHeight));		HX_STACK_VAR(ratioY,"ratioY");
			HX_STACK_LINE(61)
			Float _g = ::Math_obj::min(ratioX,ratioY);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			this->zoom = _g;
			HX_STACK_LINE(62)
			int _g1 = ::Math_obj::ceil((Float(stageWidth) / Float(this->zoom)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			this->gameWidth = _g1;
			HX_STACK_LINE(63)
			int _g2 = ::Math_obj::ceil((Float(stageHeight) / Float(this->zoom)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(63)
			this->gameHeight = _g2;
		}
		HX_STACK_LINE(66)
		::flixel::FlxGame _g3 = ::flixel::FlxGame_obj::__new(this->gameWidth,this->gameHeight,this->initialState,this->zoom,this->framerate,this->framerate,this->skipSplash,this->startFullscreen);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(66)
		this->addChild(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",24,0x087e5c05)
		HX_STACK_LINE(25)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		::openfl::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(skipSplash,"skipSplash");
	HX_MARK_MEMBER_NAME(startFullscreen,"startFullscreen");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(skipSplash,"skipSplash");
	HX_VISIT_MEMBER_NAME(startFullscreen,"startFullscreen");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return gameWidth; }
		if (HX_FIELD_EQ(inName,"framerate") ) { return framerate; }
		if (HX_FIELD_EQ(inName,"setupGame") ) { return setupGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return gameHeight; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { return skipSplash; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return initialState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { return startFullscreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { startFullscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gameWidth"));
	outFields->push(HX_CSTRING("gameHeight"));
	outFields->push(HX_CSTRING("initialState"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("framerate"));
	outFields->push(HX_CSTRING("skipSplash"));
	outFields->push(HX_CSTRING("startFullscreen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,gameWidth),HX_CSTRING("gameWidth")},
	{hx::fsInt,(int)offsetof(Main_obj,gameHeight),HX_CSTRING("gameHeight")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(Main_obj,initialState),HX_CSTRING("initialState")},
	{hx::fsFloat,(int)offsetof(Main_obj,zoom),HX_CSTRING("zoom")},
	{hx::fsInt,(int)offsetof(Main_obj,framerate),HX_CSTRING("framerate")},
	{hx::fsBool,(int)offsetof(Main_obj,skipSplash),HX_CSTRING("skipSplash")},
	{hx::fsBool,(int)offsetof(Main_obj,startFullscreen),HX_CSTRING("startFullscreen")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gameWidth"),
	HX_CSTRING("gameHeight"),
	HX_CSTRING("initialState"),
	HX_CSTRING("zoom"),
	HX_CSTRING("framerate"),
	HX_CSTRING("skipSplash"),
	HX_CSTRING("startFullscreen"),
	HX_CSTRING("init"),
	HX_CSTRING("setupGame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

