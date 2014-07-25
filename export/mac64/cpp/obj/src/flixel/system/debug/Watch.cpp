#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Watch_obj::__construct(hx::Null< bool >  __o_Closable)
{
HX_STACK_FRAME("flixel.system.debug.Watch","new",0x42e63119,"flixel.system.debug.Watch.new","flixel/system/debug/Watch.hx",38,0x3c078798)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Closable,"Closable")
bool Closable = __o_Closable.Default(false);
{
	HX_STACK_LINE(39)
	::flixel::system::debug::GraphicWatch _g = ::flixel::system::debug::GraphicWatch_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	super::__construct(HX_CSTRING("watch"),_g,(int)0,(int)0,true,null(),Closable);
	HX_STACK_LINE(41)
	::openfl::display::Sprite _g1 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(41)
	this->_names = _g1;
	HX_STACK_LINE(42)
	this->_names->set_x((int)2);
	HX_STACK_LINE(43)
	this->_names->set_y((int)15);
	HX_STACK_LINE(44)
	this->addChild(this->_names);
	HX_STACK_LINE(46)
	::openfl::display::Sprite _g2 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(46)
	this->_values = _g2;
	HX_STACK_LINE(47)
	this->_values->set_x((int)2);
	HX_STACK_LINE(48)
	this->_values->set_y((int)15);
	HX_STACK_LINE(49)
	this->addChild(this->_values);
	HX_STACK_LINE(51)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(51)
	this->_watching = _g3;
	HX_STACK_LINE(52)
	::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(52)
	this->_quickWatchList = _g4;
	HX_STACK_LINE(54)
	this->editing = false;
	HX_STACK_LINE(56)
	this->removeAll();
	HX_STACK_LINE(57)
	::flixel::FlxG_obj::signals->stateSwitched->add(this->removeAll_dyn());
}
;
	return null();
}

//Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(hx::Null< bool >  __o_Closable)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(__o_Closable);
	return result;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Watch_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","destroy",0x14e9de33,"flixel.system.debug.Watch.destroy","flixel/system/debug/Watch.hx",64,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		if (((this->_names != null()))){
			HX_STACK_LINE(67)
			this->removeChild(this->_names);
			HX_STACK_LINE(68)
			this->_names = null();
		}
		HX_STACK_LINE(70)
		if (((this->_values != null()))){
			HX_STACK_LINE(72)
			this->removeChild(this->_values);
			HX_STACK_LINE(73)
			this->_values = null();
		}
		HX_STACK_LINE(75)
		if (((this->_watching != null()))){
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(77)
				Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(77)
				while((true)){
					HX_STACK_LINE(77)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(77)
						break;
					}
					HX_STACK_LINE(77)
					::flixel::system::debug::WatchEntry watchEntry = _g1->__get(_g).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
					HX_STACK_LINE(77)
					++(_g);
					HX_STACK_LINE(79)
					::flixel::system::debug::WatchEntry _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(watchEntry);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(79)
					watchEntry = _g2;
				}
			}
			HX_STACK_LINE(81)
			this->_watching = null();
		}
		HX_STACK_LINE(83)
		this->_quickWatchList = null();
		HX_STACK_LINE(84)
		::flixel::FlxG_obj::signals->stateSwitched->remove(this->removeAll_dyn());
		HX_STACK_LINE(86)
		this->super::destroy();
	}
return null();
}


Void Watch_obj::add( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","add",0x42dc52da,"flixel.system.debug.Watch.add","flixel/system/debug/Watch.hx",98,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
		HX_STACK_ARG(DisplayName,"DisplayName")
		HX_STACK_LINE(100)
		Dynamic varData = ::flixel::system::debug::ConsoleUtil_obj::resolveObjectAndVariable(VariableName,AnyObject);		HX_STACK_VAR(varData,"varData");
		HX_STACK_LINE(101)
		AnyObject = varData->__Field(HX_CSTRING("object"),true);
		HX_STACK_LINE(102)
		VariableName = varData->__Field(HX_CSTRING("variableName"),true);
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				::flixel::system::debug::WatchEntry watchEntry = _g1->__get(_g).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(107)
				if (((bool((watchEntry->object == AnyObject)) && bool((watchEntry->field == VariableName))))){
					HX_STACK_LINE(109)
					return null();
				}
			}
		}
		HX_STACK_LINE(114)
		::flixel::system::debug::WatchEntry watchEntry = ::flixel::system::debug::WatchEntry_obj::__new((this->_watching->length * (int)15),(Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10),AnyObject,VariableName,DisplayName);		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(116)
		if (((watchEntry->field == null()))){
			HX_STACK_LINE(118)
			watchEntry->destroy();
			HX_STACK_LINE(119)
			watchEntry = null();
			HX_STACK_LINE(120)
			return null();
		}
		HX_STACK_LINE(123)
		this->_names->addChild(watchEntry->nameDisplay);
		HX_STACK_LINE(124)
		this->_values->addChild(watchEntry->valueDisplay);
		HX_STACK_LINE(125)
		this->_watching->push(watchEntry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,add,(void))

Void Watch_obj::updateQuickWatch( ::String Name,Dynamic NewValue){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","updateQuickWatch",0xf6d27332,"flixel.system.debug.Watch.updateQuickWatch","flixel/system/debug/Watch.hx",136,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(NewValue,"NewValue")
		HX_STACK_LINE(138)
		::flixel::system::debug::WatchEntry _g = this->_quickWatchList->get(Name);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		if (((_g == null()))){
			HX_STACK_LINE(140)
			::flixel::system::debug::WatchEntry quickWatch = ::flixel::system::debug::WatchEntry_obj::__new((this->_watching->length * (int)15),(Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10),null(),null(),Name);		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(141)
			this->_names->addChild(quickWatch->nameDisplay);
			HX_STACK_LINE(142)
			this->_values->addChild(quickWatch->valueDisplay);
			HX_STACK_LINE(143)
			this->_watching->push(quickWatch);
			HX_STACK_LINE(144)
			this->_quickWatchList->set(Name,quickWatch);
		}
		HX_STACK_LINE(148)
		::flixel::system::debug::WatchEntry quickWatch = this->_quickWatchList->get(Name);		HX_STACK_VAR(quickWatch,"quickWatch");
		HX_STACK_LINE(150)
		if (((quickWatch != null()))){
			HX_STACK_LINE(152)
			::String _g1 = ::Std_obj::string(NewValue);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(152)
			quickWatch->valueDisplay->set_text(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,updateQuickWatch,(void))

Void Watch_obj::remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","remove",0x17fab52b,"flixel.system.debug.Watch.remove","flixel/system/debug/Watch.hx",164,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
		HX_STACK_ARG(QuickWatchName,"QuickWatchName")
		HX_STACK_LINE(166)
		if (((bool((bool((AnyObject == null())) && bool((VariableName == null())))) && bool((QuickWatchName != null()))))){
			HX_STACK_LINE(168)
			::flixel::system::debug::WatchEntry quickWatch = this->_quickWatchList->get(QuickWatchName);		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(170)
			if (((quickWatch != null()))){
				HX_STACK_LINE(172)
				int _g = this->_watching->indexOf(quickWatch,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(172)
				this->removeEntry(quickWatch,_g);
			}
			HX_STACK_LINE(174)
			this->_quickWatchList->remove(QuickWatchName);
			HX_STACK_LINE(177)
			return null();
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(181)
			int _g = this->_watching->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			while((true)){
				HX_STACK_LINE(181)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(181)
					break;
				}
				HX_STACK_LINE(181)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(183)
				::flixel::system::debug::WatchEntry watchEntry = this->_watching->__get(i).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(184)
				if (((bool((bool((watchEntry != null())) && bool((watchEntry->object == AnyObject)))) && bool(((bool((VariableName == null())) || bool((watchEntry->field == VariableName)))))))){
					HX_STACK_LINE(186)
					this->removeEntry(watchEntry,i);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,remove,(void))

Void Watch_obj::removeEntry( ::flixel::system::debug::WatchEntry Entry,int Index){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","removeEntry",0x8b219747,"flixel.system.debug.Watch.removeEntry","flixel/system/debug/Watch.hx",195,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Entry,"Entry")
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			Array< ::Dynamic > array = this->_watching;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(196)
			int index = array->indexOf(Entry,null());		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(196)
			if (((index != (int)-1))){
				HX_STACK_LINE(196)
				array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::system::debug::WatchEntry >();
				HX_STACK_LINE(196)
				array->pop().StaticCast< ::flixel::system::debug::WatchEntry >();
				HX_STACK_LINE(196)
				array;
			}
			else{
				HX_STACK_LINE(196)
				array;
			}
		}
		HX_STACK_LINE(198)
		this->_names->removeChild(Entry->nameDisplay);
		HX_STACK_LINE(199)
		this->_values->removeChild(Entry->valueDisplay);
		HX_STACK_LINE(200)
		Entry->destroy();
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(203)
			int _g = this->_watching->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			while((true)){
				HX_STACK_LINE(203)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(203)
					break;
				}
				HX_STACK_LINE(203)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(205)
				this->_watching->__get(i).StaticCast< ::flixel::system::debug::WatchEntry >()->setY((i * (int)15));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,removeEntry,(void))

Void Watch_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","removeAll",0x608248b6,"flixel.system.debug.Watch.removeAll","flixel/system/debug/Watch.hx",213,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(214)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(214)
			while((true)){
				HX_STACK_LINE(214)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(214)
					break;
				}
				HX_STACK_LINE(214)
				::flixel::system::debug::WatchEntry watchEntry = _g1->__get(_g).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(214)
				++(_g);
				HX_STACK_LINE(216)
				this->_names->removeChild(watchEntry->nameDisplay);
				HX_STACK_LINE(217)
				this->_values->removeChild(watchEntry->valueDisplay);
				HX_STACK_LINE(218)
				watchEntry->destroy();
			}
		}
		HX_STACK_LINE(221)
		this->_watching = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(222)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		this->_quickWatchList = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

Void Watch_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","update",0x9a779ef0,"flixel.system.debug.Watch.update","flixel/system/debug/Watch.hx",229,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(230)
		this->editing = false;
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(232)
			while((true)){
				HX_STACK_LINE(232)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(232)
					break;
				}
				HX_STACK_LINE(232)
				::flixel::system::debug::WatchEntry watchEntry = _g1->__get(_g).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(232)
				++(_g);
				HX_STACK_LINE(234)
				if ((!(watchEntry->updateValue()))){
					HX_STACK_LINE(235)
					this->editing = true;
				}
			}
		}
	}
return null();
}


Void Watch_obj::submit( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","submit",0xad7870ff,"flixel.system.debug.Watch.submit","flixel/system/debug/Watch.hx",243,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(244)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(244)
			while((true)){
				HX_STACK_LINE(244)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(244)
					break;
				}
				HX_STACK_LINE(244)
				::flixel::system::debug::WatchEntry watchEntry = _g1->__get(_g).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(244)
				++(_g);
				HX_STACK_LINE(246)
				if ((watchEntry->editing)){
					HX_STACK_LINE(247)
					watchEntry->submit();
				}
			}
		}
		HX_STACK_LINE(250)
		this->editing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,submit,(void))

Void Watch_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","updateSize",0x58f6a3d1,"flixel.system.debug.Watch.updateSize","flixel/system/debug/Watch.hx",258,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(259)
		int _g = ::Std_obj::_int(this->_height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(259)
		if (((_g < ((this->_watching->length * (int)15) + (int)17)))){
			HX_STACK_LINE(261)
			this->_height = ((this->_watching->length * (int)15) + (int)17);
		}
		HX_STACK_LINE(264)
		this->super::updateSize();
		HX_STACK_LINE(266)
		this->_values->set_x(((Float(this->_width) / Float((int)2)) + (int)2));
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(268)
			Array< ::Dynamic > _g11 = this->_watching;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(268)
			while((true)){
				HX_STACK_LINE(268)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(268)
					break;
				}
				HX_STACK_LINE(268)
				::flixel::system::debug::WatchEntry watchEntry = _g11->__get(_g1).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(268)
				++(_g1);
				HX_STACK_LINE(270)
				watchEntry->updateWidth((Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10));
			}
		}
	}
return null();
}


int Watch_obj::MAX_LOG_LINES;

int Watch_obj::LINE_HEIGHT;


Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(editing,"editing");
	HX_MARK_MEMBER_NAME(_names,"_names");
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_watching,"_watching");
	HX_MARK_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	::flixel::system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(editing,"editing");
	HX_VISIT_MEMBER_NAME(_names,"_names");
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_watching,"_watching");
	HX_VISIT_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	::flixel::system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Watch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { return _names; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_watching") ) { return _watching; }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return removeEntry_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { return _quickWatchList; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateQuickWatch") ) { return updateQuickWatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { _names=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_watching") ) { _watching=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { _quickWatchList=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("editing"));
	outFields->push(HX_CSTRING("_names"));
	outFields->push(HX_CSTRING("_values"));
	outFields->push(HX_CSTRING("_watching"));
	outFields->push(HX_CSTRING("_quickWatchList"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_LOG_LINES"),
	HX_CSTRING("LINE_HEIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Watch_obj,editing),HX_CSTRING("editing")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Watch_obj,_names),HX_CSTRING("_names")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Watch_obj,_values),HX_CSTRING("_values")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Watch_obj,_watching),HX_CSTRING("_watching")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Watch_obj,_quickWatchList),HX_CSTRING("_quickWatchList")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("editing"),
	HX_CSTRING("_names"),
	HX_CSTRING("_values"),
	HX_CSTRING("_watching"),
	HX_CSTRING("_quickWatchList"),
	HX_CSTRING("destroy"),
	HX_CSTRING("add"),
	HX_CSTRING("updateQuickWatch"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeEntry"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("update"),
	HX_CSTRING("submit"),
	HX_CSTRING("updateSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Watch_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Watch_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#endif

Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Watch"), hx::TCanCast< Watch_obj> ,sStaticFields,sMemberFields,
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

void Watch_obj::__boot()
{
	MAX_LOG_LINES= (int)1024;
	LINE_HEIGHT= (int)15;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
