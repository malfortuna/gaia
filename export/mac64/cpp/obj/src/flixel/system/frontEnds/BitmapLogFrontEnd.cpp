#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_BitmapLog
#include <flixel/system/debug/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
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
namespace flixel{
namespace system{
namespace frontEnds{

Void BitmapLogFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","new",0xa186019f,"flixel.system.frontEnds.BitmapLogFrontEnd.new","flixel/system/frontEnds/BitmapLogFrontEnd.hx",52,0x20ede752)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BitmapLogFrontEnd_obj::~BitmapLogFrontEnd_obj() { }

Dynamic BitmapLogFrontEnd_obj::__CreateEmpty() { return  new BitmapLogFrontEnd_obj; }
hx::ObjectPtr< BitmapLogFrontEnd_obj > BitmapLogFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapLogFrontEnd_obj > result = new BitmapLogFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic BitmapLogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapLogFrontEnd_obj > result = new BitmapLogFrontEnd_obj();
	result->__construct();
	return result;}

Void BitmapLogFrontEnd_obj::add( ::openfl::display::BitmapData Data,::String __o_Name){
::String Name = __o_Name.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","add",0xa17c2360,"flixel.system.frontEnds.BitmapLogFrontEnd.add","flixel/system/frontEnds/BitmapLogFrontEnd.hx",12,0x20ede752)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Name,"Name")
{
		HX_STACK_LINE(12)
		::flixel::FlxG_obj::game->debugger->bitmapLog->add(Data,Name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLogFrontEnd_obj,add,(void))

Void BitmapLogFrontEnd_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","clear",0x3f6bb08c,"flixel.system.frontEnds.BitmapLogFrontEnd.clear","flixel/system/frontEnds/BitmapLogFrontEnd.hx",22,0x20ede752)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::flixel::FlxG_obj::game->debugger->bitmapLog->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,clear,(void))

Void BitmapLogFrontEnd_obj::clearAt( hx::Null< int >  __o_Index){
int Index = __o_Index.Default(-1);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","clearAt",0xb622249f,"flixel.system.frontEnds.BitmapLogFrontEnd.clearAt","flixel/system/frontEnds/BitmapLogFrontEnd.hx",33,0x20ede752)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
{
		HX_STACK_LINE(33)
		::flixel::FlxG_obj::game->debugger->bitmapLog->clearAt(Index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLogFrontEnd_obj,clearAt,(void))

Void BitmapLogFrontEnd_obj::viewCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","viewCache",0xebde341c,"flixel.system.frontEnds.BitmapLogFrontEnd.viewCache","flixel/system/frontEnds/BitmapLogFrontEnd.hx",41,0x20ede752)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::flixel::FlxG_obj::game->debugger->bitmapLog->clear();
		HX_STACK_LINE(44)
		for(::cpp::FastIterator_obj< ::flixel::util::loaders::CachedGraphics > *__it = ::cpp::CreateFastIterator< ::flixel::util::loaders::CachedGraphics >(::flixel::FlxG_obj::bitmap->_cache->iterator());  __it->hasNext(); ){
			::flixel::util::loaders::CachedGraphics cachedGraphic = __it->next();
			::flixel::FlxG_obj::game->debugger->bitmapLog->add(cachedGraphic->bitmap,cachedGraphic->key);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,viewCache,(void))


BitmapLogFrontEnd_obj::BitmapLogFrontEnd_obj()
{
}

Dynamic BitmapLogFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clearAt") ) { return clearAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewCache") ) { return viewCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapLogFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapLogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearAt"),
	HX_CSTRING("viewCache"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapLogFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapLogFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class BitmapLogFrontEnd_obj::__mClass;

void BitmapLogFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.BitmapLogFrontEnd"), hx::TCanCast< BitmapLogFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void BitmapLogFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
