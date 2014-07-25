#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tracker
#include <flixel/system/debug/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TrackerProfile
#include <flixel/system/debug/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Tracker_obj::__construct(::flixel::system::debug::TrackerProfile Profile,Dynamic Object,::String WindowTitle)
{
HX_STACK_FRAME("flixel.system.debug.Tracker","new",0xabada902,"flixel.system.debug.Tracker.new","flixel/system/debug/Tracker.hx",151,0x59950a0f)
HX_STACK_THIS(this)
HX_STACK_ARG(Profile,"Profile")
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(WindowTitle,"WindowTitle")
{
	HX_STACK_LINE(152)
	super::__construct(true);
	HX_STACK_LINE(154)
	::flixel::system::debug::Tracker_obj::initProfiles();
	HX_STACK_LINE(155)
	this->_object = Object;
	HX_STACK_LINE(156)
	::flixel::system::debug::Tracker_obj::objectsBeingTracked->__Field(HX_CSTRING("push"),true)(this->_object);
	HX_STACK_LINE(158)
	this->initWatchEntries(Profile);
	HX_STACK_LINE(160)
	::String _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(160)
	if (((WindowTitle == null()))){
		HX_STACK_LINE(160)
		Dynamic Obj = this->_object;		HX_STACK_VAR(Obj,"Obj");
		HX_STACK_LINE(160)
		::Class cl;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(160)
		if ((::Std_obj::is(Obj,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(160)
			cl = Obj;
		}
		else{
			HX_STACK_LINE(160)
			::Class _g = ::Type_obj::getClass(Obj);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(160)
			cl = _g;
		}
		HX_STACK_LINE(160)
		::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(160)
		if (((s != null()))){
			HX_STACK_LINE(160)
			::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(160)
			s = _g1;
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(160)
				int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(160)
				::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(160)
				s = _g4;
			}
		}
		HX_STACK_LINE(160)
		_g5 = s;
	}
	else{
		HX_STACK_LINE(160)
		_g5 = WindowTitle;
	}
	HX_STACK_LINE(160)
	this->_title->set_text(_g5);
	HX_STACK_LINE(161)
	this->set_visible(true);
	HX_STACK_LINE(163)
	Float lastWatchEntryY = this->_watching->__get((this->_watching->length - (int)1)).StaticCast< ::flixel::system::debug::WatchEntry >()->nameDisplay->get_y();		HX_STACK_VAR(lastWatchEntryY,"lastWatchEntryY");
	HX_STACK_LINE(164)
	this->resize((int)200,(lastWatchEntryY + (int)30));
	HX_STACK_LINE(167)
	this->set_x((::flixel::system::debug::Tracker_obj::_numTrackerWindows * (int)80));
	HX_STACK_LINE(168)
	this->set_y(((::flixel::system::debug::Tracker_obj::_numTrackerWindows * (int)25) + (int)20));
	HX_STACK_LINE(169)
	(::flixel::system::debug::Tracker_obj::_numTrackerWindows)++;
	HX_STACK_LINE(171)
	::flixel::FlxG_obj::signals->stateSwitched->add(this->close_dyn());
}
;
	return null();
}

//Tracker_obj::~Tracker_obj() { }

Dynamic Tracker_obj::__CreateEmpty() { return  new Tracker_obj; }
hx::ObjectPtr< Tracker_obj > Tracker_obj::__new(::flixel::system::debug::TrackerProfile Profile,Dynamic Object,::String WindowTitle)
{  hx::ObjectPtr< Tracker_obj > result = new Tracker_obj();
	result->__construct(Profile,Object,WindowTitle);
	return result;}

Dynamic Tracker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tracker_obj > result = new Tracker_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Tracker_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","destroy",0xc495fe9c,"flixel.system.debug.Tracker.destroy","flixel/system/debug/Tracker.hx",175,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		::flixel::FlxG_obj::signals->stateSwitched->remove(this->close_dyn());
		HX_STACK_LINE(177)
		(::flixel::system::debug::Tracker_obj::_numTrackerWindows)--;
		HX_STACK_LINE(178)
		::flixel::system::debug::Tracker_obj::objectsBeingTracked->__Field(HX_CSTRING("remove"),true)(this->_object);
		HX_STACK_LINE(179)
		this->_object = null();
		HX_STACK_LINE(180)
		this->super::destroy();
	}
return null();
}


::flixel::system::debug::TrackerProfile Tracker_obj::findProfileByClass( ::Class ObjectClass){
	HX_STACK_FRAME("flixel.system.debug.Tracker","findProfileByClass",0xa5ca706f,"flixel.system.debug.Tracker.findProfileByClass","flixel/system/debug/Tracker.hx",184,0x59950a0f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		Array< ::Dynamic > _g1 = ::flixel::system::debug::Tracker_obj::profiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(185)
			::flixel::system::debug::TrackerProfile profile = _g1->__get(_g).StaticCast< ::flixel::system::debug::TrackerProfile >();		HX_STACK_VAR(profile,"profile");
			HX_STACK_LINE(185)
			++(_g);
			HX_STACK_LINE(187)
			if (((profile->objectClass == ObjectClass))){
				HX_STACK_LINE(189)
				return profile;
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfileByClass,return )

Void Tracker_obj::initWatchEntries( ::flixel::system::debug::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","initWatchEntries",0x70db000f,"flixel.system.debug.Tracker.initWatchEntries","flixel/system/debug/Tracker.hx",197,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(197)
		if (((Profile != null()))){
			HX_STACK_LINE(199)
			this->addExtensions(Profile);
			HX_STACK_LINE(200)
			this->addVariables(Profile->variables);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,initWatchEntries,(void))

Void Tracker_obj::addExtensions( ::flixel::system::debug::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","addExtensions",0xdf917cb7,"flixel.system.debug.Tracker.addExtensions","flixel/system/debug/Tracker.hx",206,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(206)
		if (((Profile->extensions != null()))){
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			Array< ::Dynamic > _g1 = Profile->extensions;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				::Class extension = _g1->__get(_g).StaticCast< ::Class >();		HX_STACK_VAR(extension,"extension");
				HX_STACK_LINE(208)
				++(_g);
				HX_STACK_LINE(210)
				if (((extension != null()))){
					HX_STACK_LINE(212)
					::flixel::system::debug::TrackerProfile extensionProfile = this->findProfileByClass(extension);		HX_STACK_VAR(extensionProfile,"extensionProfile");
					HX_STACK_LINE(213)
					if (((extensionProfile != null()))){
						HX_STACK_LINE(215)
						this->addVariables(extensionProfile->variables);
						HX_STACK_LINE(216)
						this->addExtensions(extensionProfile);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addExtensions,(void))

Void Tracker_obj::addVariables( Array< ::String > Variables){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","addVariables",0xa7820774,"flixel.system.debug.Tracker.addVariables","flixel/system/debug/Tracker.hx",225,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Variables,"Variables")
		HX_STACK_LINE(225)
		if (((Variables != null()))){
			HX_STACK_LINE(227)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				if ((!(((_g < Variables->length))))){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				::String variable = Variables->__get(_g);		HX_STACK_VAR(variable,"variable");
				HX_STACK_LINE(227)
				++(_g);
				HX_STACK_LINE(229)
				this->add(this->_object,variable,variable);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addVariables,(void))

Array< ::Dynamic > Tracker_obj::profiles;

Dynamic Tracker_obj::objectsBeingTracked;

int Tracker_obj::_numTrackerWindows;

Void Tracker_obj::addProfile( ::flixel::system::debug::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","addProfile",0x7ed0d4a6,"flixel.system.debug.Tracker.addProfile","flixel/system/debug/Tracker.hx",59,0x59950a0f)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(59)
		if (((Profile != null()))){
			HX_STACK_LINE(61)
			::flixel::system::debug::Tracker_obj::profiles->push(Profile);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addProfile,(void))

::flixel::system::debug::TrackerProfile Tracker_obj::findProfile( Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.Tracker","findProfile",0x4cea5492,"flixel.system.debug.Tracker.findProfile","flixel/system/debug/Tracker.hx",66,0x59950a0f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(67)
	::flixel::system::debug::Tracker_obj::initProfiles();
	HX_STACK_LINE(69)
	::flixel::system::debug::TrackerProfile lastMatchingProfile = null();		HX_STACK_VAR(lastMatchingProfile,"lastMatchingProfile");
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		Array< ::Dynamic > _g1 = ::flixel::system::debug::Tracker_obj::profiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			::flixel::system::debug::TrackerProfile profile = _g1->__get(_g).StaticCast< ::flixel::system::debug::TrackerProfile >();		HX_STACK_VAR(profile,"profile");
			HX_STACK_LINE(70)
			++(_g);
			HX_STACK_LINE(72)
			if (((  ((!(::Std_obj::is(Object,profile->objectClass)))) ? bool((Object == profile->objectClass)) : bool(true) ))){
				HX_STACK_LINE(74)
				lastMatchingProfile = profile;
			}
		}
	}
	HX_STACK_LINE(77)
	return lastMatchingProfile;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfile,return )

Void Tracker_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","onStateSwitch",0x8ec46b28,"flixel.system.debug.Tracker.onStateSwitch","flixel/system/debug/Tracker.hx",82,0x59950a0f)
		HX_STACK_LINE(82)
		::flixel::system::debug::Tracker_obj::_numTrackerWindows = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,onStateSwitch,(void))

Void Tracker_obj::initProfiles( ){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","initProfiles",0xb7584578,"flixel.system.debug.Tracker.initProfiles","flixel/system/debug/Tracker.hx",87,0x59950a0f)
		HX_STACK_LINE(87)
		if (((::flixel::system::debug::Tracker_obj::profiles == null()))){
			HX_STACK_LINE(89)
			::flixel::system::debug::Tracker_obj::profiles = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxG >(),Array_obj< ::String >::__new().Add(HX_CSTRING("width")).Add(HX_CSTRING("height")).Add(HX_CSTRING("worldBounds.x")).Add(HX_CSTRING("worldBounds.y")).Add(HX_CSTRING("worldBounds.width")).Add(HX_CSTRING("worldBounds.height")).Add(HX_CSTRING("worldDivisions")).Add(HX_CSTRING("updateFramerate")).Add(HX_CSTRING("drawFramerate")).Add(HX_CSTRING("elapsed")).Add(HX_CSTRING("maxElapsed")).Add(HX_CSTRING("autoPause")).Add(HX_CSTRING("fixedTimestep")).Add(HX_CSTRING("timeScale")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(91)
				if (((Profile != null()))){
					HX_STACK_LINE(91)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxPoint >(),Array_obj< ::String >::__new().Add(HX_CSTRING("x")).Add(HX_CSTRING("y")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(94)
				if (((Profile != null()))){
					HX_STACK_LINE(94)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxRect >(),Array_obj< ::String >::__new().Add(HX_CSTRING("width")).Add(HX_CSTRING("height")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(95)
				if (((Profile != null()))){
					HX_STACK_LINE(95)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxBasic >(),Array_obj< ::String >::__new().Add(HX_CSTRING("active")).Add(HX_CSTRING("visible")).Add(HX_CSTRING("alive")).Add(HX_CSTRING("exists")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(97)
				if (((Profile != null()))){
					HX_STACK_LINE(97)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxObject >(),Array_obj< ::String >::__new().Add(HX_CSTRING("velocity")).Add(HX_CSTRING("acceleration")).Add(HX_CSTRING("drag")).Add(HX_CSTRING("angle")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxRect >()).Add(hx::ClassOf< ::flixel::FlxBasic >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(98)
				if (((Profile != null()))){
					HX_STACK_LINE(98)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::tile::FlxTilemap >(),Array_obj< ::String >::__new().Add(HX_CSTRING("auto")).Add(HX_CSTRING("widthInTiles")).Add(HX_CSTRING("heightInTiles")).Add(HX_CSTRING("totalTiles")).Add(HX_CSTRING("scaleX")).Add(HX_CSTRING("scaleY")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxObject >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(100)
				if (((Profile != null()))){
					HX_STACK_LINE(100)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxSprite >(),Array_obj< ::String >::__new().Add(HX_CSTRING("frameWidth")).Add(HX_CSTRING("frameHeight")).Add(HX_CSTRING("alpha")).Add(HX_CSTRING("origin")).Add(HX_CSTRING("offset")).Add(HX_CSTRING("scale")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxObject >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(101)
				if (((Profile != null()))){
					HX_STACK_LINE(101)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::ui::FlxTypedButton >(),Array_obj< ::String >::__new().Add(HX_CSTRING("status")).Add(HX_CSTRING("labelAlphas")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(102)
				if (((Profile != null()))){
					HX_STACK_LINE(102)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::ui::FlxBar >(),Array_obj< ::String >::__new().Add(HX_CSTRING("min")).Add(HX_CSTRING("max")).Add(HX_CSTRING("range")).Add(HX_CSTRING("pct")).Add(HX_CSTRING("pxPerPercent")).Add(HX_CSTRING("value")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(104)
				if (((Profile != null()))){
					HX_STACK_LINE(104)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::text::FlxText >(),Array_obj< ::String >::__new().Add(HX_CSTRING("text")).Add(HX_CSTRING("size")).Add(HX_CSTRING("font")).Add(HX_CSTRING("embedded")).Add(HX_CSTRING("bold")).Add(HX_CSTRING("italic")).Add(HX_CSTRING("wordWrap")).Add(HX_CSTRING("borderSize")).Add(HX_CSTRING("borderStyle")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(106)
				if (((Profile != null()))){
					HX_STACK_LINE(106)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::group::FlxTypedGroup >(),Array_obj< ::String >::__new().Add(HX_CSTRING("length")).Add(HX_CSTRING("members.length")).Add(HX_CSTRING("maxSize")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxBasic >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(109)
				if (((Profile != null()))){
					HX_STACK_LINE(109)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::group::FlxSpriteGroup >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()).Add(hx::ClassOf< ::flixel::group::FlxTypedGroup >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(110)
				if (((Profile != null()))){
					HX_STACK_LINE(110)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxState >(),Array_obj< ::String >::__new().Add(HX_CSTRING("persistentUpdate")).Add(HX_CSTRING("persistentDraw")).Add(HX_CSTRING("destroySubStates")).Add(HX_CSTRING("bgColor")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::group::FlxTypedGroup >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(111)
				if (((Profile != null()))){
					HX_STACK_LINE(111)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxCamera >(),Array_obj< ::String >::__new().Add(HX_CSTRING("style")).Add(HX_CSTRING("followLerp")).Add(HX_CSTRING("followLead")).Add(HX_CSTRING("deadzone")).Add(HX_CSTRING("bounds")).Add(HX_CSTRING("zoom")).Add(HX_CSTRING("alpha")).Add(HX_CSTRING("angle")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxBasic >()).Add(hx::ClassOf< ::flixel::util::FlxRect >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(113)
				if (((Profile != null()))){
					HX_STACK_LINE(113)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::tweens::FlxTween >(),Array_obj< ::String >::__new().Add(HX_CSTRING("active")).Add(HX_CSTRING("duration")).Add(HX_CSTRING("type")).Add(HX_CSTRING("percent")).Add(HX_CSTRING("finished")).Add(HX_CSTRING("scale")).Add(HX_CSTRING("backward")).Add(HX_CSTRING("executions")).Add(HX_CSTRING("startDelay")).Add(HX_CSTRING("loopDelay")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(116)
				if (((Profile != null()))){
					HX_STACK_LINE(116)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxPath >(),Array_obj< ::String >::__new().Add(HX_CSTRING("speed")).Add(HX_CSTRING("angle")).Add(HX_CSTRING("autoCenter")).Add(HX_CSTRING("_nodeIndex")).Add(HX_CSTRING("active")).Add(HX_CSTRING("finished")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(119)
				if (((Profile != null()))){
					HX_STACK_LINE(119)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxTimer >(),Array_obj< ::String >::__new().Add(HX_CSTRING("time")).Add(HX_CSTRING("loops")).Add(HX_CSTRING("active")).Add(HX_CSTRING("finished")).Add(HX_CSTRING("timeLeft")).Add(HX_CSTRING("elapsedTime")).Add(HX_CSTRING("loopsLeft")).Add(HX_CSTRING("elapsedLoops")).Add(HX_CSTRING("progress")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(120)
				if (((Profile != null()))){
					HX_STACK_LINE(120)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::animation::FlxAnimationController >(),Array_obj< ::String >::__new().Add(HX_CSTRING("frameIndex")).Add(HX_CSTRING("frameName")).Add(HX_CSTRING("name")).Add(HX_CSTRING("paused")).Add(HX_CSTRING("finished")).Add(HX_CSTRING("frames")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(122)
				if (((Profile != null()))){
					HX_STACK_LINE(122)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::mouse::FlxMouse >(),Array_obj< ::String >::__new().Add(HX_CSTRING("screenX")).Add(HX_CSTRING("screenY")).Add(HX_CSTRING("wheel")).Add(HX_CSTRING("visible")).Add(HX_CSTRING("useSystemCursor")).Add(HX_CSTRING("pressed")).Add(HX_CSTRING("justPressed")).Add(HX_CSTRING("justReleased")).Add(HX_CSTRING("pressedMiddle")).Add(HX_CSTRING("justPressedMiddle")).Add(HX_CSTRING("justReleasedMiddle")).Add(HX_CSTRING("pressedRight")).Add(HX_CSTRING("justPressedRight")).Add(HX_CSTRING("justReleasedRight")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(126)
				if (((Profile != null()))){
					HX_STACK_LINE(126)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::touch::FlxTouch >(),Array_obj< ::String >::__new().Add(HX_CSTRING("screenX")).Add(HX_CSTRING("screenY")).Add(HX_CSTRING("touchPointID")).Add(HX_CSTRING("pressed")).Add(HX_CSTRING("justPressed")).Add(HX_CSTRING("justReleased")).Add(HX_CSTRING("isActive")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(131)
				if (((Profile != null()))){
					HX_STACK_LINE(131)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::gamepad::FlxGamepad >(),Array_obj< ::String >::__new().Add(HX_CSTRING("id")).Add(HX_CSTRING("deadZone")).Add(HX_CSTRING("hat")).Add(HX_CSTRING("ball")).Add(HX_CSTRING("dpadUp")).Add(HX_CSTRING("dpadDown")).Add(HX_CSTRING("dpadLeft")).Add(HX_CSTRING("dpadRight")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(134)
				if (((Profile != null()))){
					HX_STACK_LINE(134)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::FlxSwipe >(),Array_obj< ::String >::__new().Add(HX_CSTRING("ID")).Add(HX_CSTRING("startPosition")).Add(HX_CSTRING("endPosition")).Add(HX_CSTRING("distance")).Add(HX_CSTRING("angle")).Add(HX_CSTRING("duration")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(138)
				if (((Profile != null()))){
					HX_STACK_LINE(138)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::display::DisplayObject >(),Array_obj< ::String >::__new().Add(HX_CSTRING("z")).Add(HX_CSTRING("scaleX")).Add(HX_CSTRING("scaleY")).Add(HX_CSTRING("mouseX")).Add(HX_CSTRING("mouseY")).Add(HX_CSTRING("rotationX")).Add(HX_CSTRING("rotationY")).Add(HX_CSTRING("visible")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxRect >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(141)
				if (((Profile != null()))){
					HX_STACK_LINE(141)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::geom::Point >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(142)
				if (((Profile != null()))){
					HX_STACK_LINE(142)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::geom::Rectangle >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxRect >()));		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(143)
				if (((Profile != null()))){
					HX_STACK_LINE(143)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				::flixel::system::debug::TrackerProfile Profile = ::flixel::system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::geom::Matrix >(),Array_obj< ::String >::__new().Add(HX_CSTRING("a")).Add(HX_CSTRING("b")).Add(HX_CSTRING("c")).Add(HX_CSTRING("d")).Add(HX_CSTRING("tx")).Add(HX_CSTRING("ty")),null());		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(144)
				if (((Profile != null()))){
					HX_STACK_LINE(144)
					::flixel::system::debug::Tracker_obj::profiles->push(Profile);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,initProfiles,(void))


Tracker_obj::Tracker_obj()
{
}

void Tracker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tracker);
	HX_MARK_MEMBER_NAME(_object,"_object");
	::flixel::system::debug::Watch_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tracker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	::flixel::system::debug::Watch_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tracker_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { return profiles; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addProfile") ) { return addProfile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findProfile") ) { return findProfile_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initProfiles") ) { return initProfiles_dyn(); }
		if (HX_FIELD_EQ(inName,"addVariables") ) { return addVariables_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		if (HX_FIELD_EQ(inName,"addExtensions") ) { return addExtensions_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initWatchEntries") ) { return initWatchEntries_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { return _numTrackerWindows; }
		if (HX_FIELD_EQ(inName,"findProfileByClass") ) { return findProfileByClass_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { return objectsBeingTracked; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tracker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { profiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { _numTrackerWindows=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { objectsBeingTracked=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tracker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("profiles"),
	HX_CSTRING("objectsBeingTracked"),
	HX_CSTRING("_numTrackerWindows"),
	HX_CSTRING("addProfile"),
	HX_CSTRING("findProfile"),
	HX_CSTRING("onStateSwitch"),
	HX_CSTRING("initProfiles"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tracker_obj,_object),HX_CSTRING("_object")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_object"),
	HX_CSTRING("destroy"),
	HX_CSTRING("findProfileByClass"),
	HX_CSTRING("initWatchEntries"),
	HX_CSTRING("addExtensions"),
	HX_CSTRING("addVariables"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_MARK_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_MARK_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_VISIT_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_VISIT_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#endif

Class Tracker_obj::__mClass;

void Tracker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Tracker"), hx::TCanCast< Tracker_obj> ,sStaticFields,sMemberFields,
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

void Tracker_obj::__boot()
{
	objectsBeingTracked= Dynamic( Array_obj<Dynamic>::__new());
	_numTrackerWindows= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
