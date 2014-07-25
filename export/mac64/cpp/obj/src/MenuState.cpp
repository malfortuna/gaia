#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_culgen_CivGenerator
#include <culgen/CivGenerator.h>
#endif
#ifndef INCLUDED_culgen_Language
#include <culgen/Language.h>
#endif
#ifndef INCLUDED_culgen_LanguageGenerator
#include <culgen/LanguageGenerator.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_model_Civ
#include <model/Civ.h>
#endif
#ifndef INCLUDED_model_Planet
#include <model/Planet.h>
#endif
#ifndef INCLUDED_model_Star
#include <model/Star.h>
#endif
#ifndef INCLUDED_model_Universe
#include <model/Universe.h>
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
#ifndef INCLUDED_worldgen_World
#include <worldgen/World.h>
#endif
#ifndef INCLUDED_worldgen_WorldGenerator
#include <worldgen/WorldGenerator.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",22,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(96)
	this->numCivs = (int)3;
	HX_STACK_LINE(22)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::logMessage( ::String s){
{
		HX_STACK_FRAME("MenuState","logMessage",0x199834bf,"MenuState.logMessage","MenuState.hx",31,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(31)
		this->log->set_text(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuState_obj,logMessage,(void))

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",38,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::create();
		HX_STACK_LINE(40)
		::Reg_obj::state = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(41)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,(int)400,::flixel::FlxG_obj::width,HX_CSTRING(""),(int)16,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		this->log = _g;
		HX_STACK_LINE(44)
		::haxe::Log_obj::trace(HX_CSTRING("the universe exhales"),hx::SourceInfo(HX_CSTRING("MenuState.hx"),44,HX_CSTRING("MenuState"),HX_CSTRING("create")));
		HX_STACK_LINE(45)
		::model::Universe _g1 = ::model::Universe_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		::MenuState_obj::universe = _g1;
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				if ((!(((_g2 < (int)100))))){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(49)
				Float _g21 = ::Math_obj::random();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(49)
				Float _g3 = (_g21 * (int)200);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(49)
				Float _g4 = ::Math_obj::random();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(49)
				Float _g5 = (_g4 * (int)200);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(49)
				::model::Star _g6 = ::model::Star_obj::__new(_g3,_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(49)
				::MenuState_obj::universe->stars->push(_g6);
			}
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				if ((!(((_g2 < (int)100))))){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					int _g21 = (int)1;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(53)
					int _g7 = ::Std_obj::random((int)5);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(53)
					int _g11 = ((int)1 + _g7);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(53)
					while((true)){
						HX_STACK_LINE(53)
						if ((!(((_g21 < _g11))))){
							HX_STACK_LINE(53)
							break;
						}
						HX_STACK_LINE(53)
						int j = (_g21)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(54)
						Float _g8 = ::Math_obj::random();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(54)
						Float _g9 = (_g8 * (int)100);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(54)
						Float _g10 = ::Math_obj::random();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(54)
						Float _g111 = (_g10 * (int)100);		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(54)
						::model::Planet p = ::model::Planet_obj::__new(_g9,_g111,::MenuState_obj::universe->stars->__get((i - (int)1)).StaticCast< ::model::Star >());		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(55)
						::MenuState_obj::universe->planets->push(p);
						HX_STACK_LINE(56)
						::MenuState_obj::universe->stars->__get((i - (int)1)).StaticCast< ::model::Star >()->planets->push(p);
					}
				}
			}
		}
		HX_STACK_LINE(60)
		::flixel::FlxSprite tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				if ((!(((_g2 < (int)99))))){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(61)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(62)
				::flixel::FlxSprite _g12 = ::flixel::FlxSprite_obj::__new((::MenuState_obj::universe->stars->__get(i).StaticCast< ::model::Star >()->x * (int)2),(::MenuState_obj::universe->stars->__get(i).StaticCast< ::model::Star >()->y * (int)2),null());		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(62)
				tile = _g12;
				HX_STACK_LINE(64)
				tile->makeGraphic((int)2,(int)2,::MenuState_obj::universe->stars->__get(i).StaticCast< ::model::Star >()->spec,null(),null());
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::MenuState_obj::starSpriteMap->set(::MenuState_obj::universe->stars->__get(i).StaticCast< ::model::Star >(),tile);
					HX_STACK_LINE(65)
					tile;
				}
			}
		}
		HX_STACK_LINE(69)
		int _g13 = ::Std_obj::random(::MenuState_obj::universe->planets->length);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(69)
		::model::Planet p = ::MenuState_obj::universe->planets->__get(_g13).StaticCast< ::model::Planet >();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(71)
		::worldgen::World _g14 = ::worldgen::WorldGenerator_obj::generateWorld();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(71)
		this->w = _g14;
		HX_STACK_LINE(72)
		::worldgen::WorldGenerator_obj::addRivers(this->w);
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(77)
			int _g2 = this->numCivs;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(77)
			while((true)){
				HX_STACK_LINE(77)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(77)
					break;
				}
				HX_STACK_LINE(77)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(78)
				::culgen::Language _g15 = ::culgen::LanguageGenerator_obj::generateLanguage();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(78)
				::model::Civ civ = ::model::Civ_obj::__new(p,_g15);		HX_STACK_VAR(civ,"civ");
				HX_STACK_LINE(79)
				this->w->civs->push(civ);
				HX_STACK_LINE(80)
				::MenuState_obj::universe->civs->push(civ);
			}
		}
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				if ((!(((_g2 < (int)20))))){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(85)
				::culgen::CivGenerator_obj::settleCity(this->w,null());
			}
		}
		HX_STACK_LINE(88)
		::culgen::CivGenerator_obj::assignCities(this->w,null());
		HX_STACK_LINE(91)
		::flixel::FlxSprite _g16 = this->w->getSprite();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(91)
		this->add(_g16);
		HX_STACK_LINE(92)
		this->add(this->log);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",105,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",112,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		this->super::update();
		HX_STACK_LINE(115)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)82,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
			HX_STACK_LINE(116)
			::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(116)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
		HX_STACK_LINE(118)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)84,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
		}
	}
return null();
}


::model::Universe MenuState_obj::universe;

::haxe::ds::ObjectMap MenuState_obj::starSpriteMap;


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(numCivs,"numCivs");
	HX_MARK_MEMBER_NAME(mapp,"mapp");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(numCivs,"numCivs");
	HX_VISIT_MEMBER_NAME(mapp,"mapp");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mapp") ) { return mapp; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numCivs") ) { return numCivs; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"universe") ) { return universe; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"logMessage") ) { return logMessage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"starSpriteMap") ) { return starSpriteMap; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< ::worldgen::World >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mapp") ) { mapp=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numCivs") ) { numCivs=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"universe") ) { universe=inValue.Cast< ::model::Universe >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"starSpriteMap") ) { starSpriteMap=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("log"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("numCivs"));
	outFields->push(HX_CSTRING("mapp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("universe"),
	HX_CSTRING("starSpriteMap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,log),HX_CSTRING("log")},
	{hx::fsObject /*::worldgen::World*/ ,(int)offsetof(MenuState_obj,w),HX_CSTRING("w")},
	{hx::fsInt,(int)offsetof(MenuState_obj,numCivs),HX_CSTRING("numCivs")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,mapp),HX_CSTRING("mapp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("log"),
	HX_CSTRING("logMessage"),
	HX_CSTRING("create"),
	HX_CSTRING("w"),
	HX_CSTRING("numCivs"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("mapp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuState_obj::universe,"universe");
	HX_MARK_MEMBER_NAME(MenuState_obj::starSpriteMap,"starSpriteMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuState_obj::universe,"universe");
	HX_VISIT_MEMBER_NAME(MenuState_obj::starSpriteMap,"starSpriteMap");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
	starSpriteMap= ::haxe::ds::ObjectMap_obj::__new();
}

