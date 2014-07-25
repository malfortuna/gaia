#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_model_Civ
#include <model/Civ.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_worldgen_City
#include <worldgen/City.h>
#endif
#ifndef INCLUDED_worldgen_World
#include <worldgen/World.h>
#endif
namespace worldgen{

Void World_obj::__construct(Array< ::Dynamic > raw,Array< ::Dynamic > td)
{
HX_STACK_FRAME("worldgen.World","new",0xbe386534,"worldgen.World.new","worldgen/World.hx",7,0x19d2a5bd)
HX_STACK_THIS(this)
HX_STACK_ARG(raw,"raw")
HX_STACK_ARG(td,"td")
{
	HX_STACK_LINE(63)
	this->plainslimit = (int)190;
	HX_STACK_LINE(62)
	this->hilllimit = (int)225;
	HX_STACK_LINE(61)
	this->mountainlimit = (int)245;
	HX_STACK_LINE(60)
	this->waterline = (int)115;
	HX_STACK_LINE(26)
	this->nations = ::haxe::ds::ObjectMap_obj::__new();
	HX_STACK_LINE(25)
	this->colours = Array_obj< int >::__new();
	HX_STACK_LINE(23)
	this->civs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	this->cities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(16)
	this->food = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(15)
	this->metals = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(14)
	this->forests = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(13)
	this->rivers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(11)
	this->tile_data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(10)
	this->raw_map_data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(30)
	this->colours->push((int)-65536);
	HX_STACK_LINE(31)
	this->colours->push((int)-16711936);
	HX_STACK_LINE(32)
	this->colours->push((int)-16755201);
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		int _g = raw->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(34)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(35)
			Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(35)
			this->raw_map_data->push(_g2);
			HX_STACK_LINE(36)
			Array< int > _g11 = Array_obj< int >::__new();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(36)
			this->rivers->push(_g11);
			HX_STACK_LINE(37)
			Array< int > _g21 = Array_obj< int >::__new();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(37)
			this->forests->push(_g21);
			HX_STACK_LINE(38)
			Array< int > _g3 = Array_obj< int >::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(38)
			this->metals->push(_g3);
			HX_STACK_LINE(39)
			Array< int > _g4 = Array_obj< int >::__new();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(39)
			this->food->push(_g4);
			HX_STACK_LINE(40)
			if (((td != null()))){
				HX_STACK_LINE(41)
				Array< int > _g5 = Array_obj< int >::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(41)
				this->tile_data->push(_g5);
			}
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(43)
				int _g22 = raw->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(43)
				while((true)){
					HX_STACK_LINE(43)
					if ((!(((_g31 < _g22))))){
						HX_STACK_LINE(43)
						break;
					}
					HX_STACK_LINE(43)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(44)
					::haxe::Log_obj::trace(raw->__get(i).StaticCast< Array< int > >()->__get(j),hx::SourceInfo(HX_CSTRING("World.hx"),44,HX_CSTRING("worldgen.World"),HX_CSTRING("new")));
					HX_STACK_LINE(45)
					this->raw_map_data->__get(i).StaticCast< Array< int > >()->push(raw->__get(i).StaticCast< Array< int > >()->__get(j));
					HX_STACK_LINE(46)
					this->rivers->__get(i).StaticCast< Array< int > >()->push((int)0);
					HX_STACK_LINE(47)
					this->forests->__get(i).StaticCast< Array< int > >()->push((int)0);
					HX_STACK_LINE(48)
					this->metals->__get(i).StaticCast< Array< int > >()->push((int)0);
					HX_STACK_LINE(49)
					this->food->__get(i).StaticCast< Array< int > >()->push((int)0);
					HX_STACK_LINE(50)
					if (((td != null()))){
						HX_STACK_LINE(51)
						this->tile_data->__get(i).StaticCast< Array< int > >()->push(td->__get(i).StaticCast< Array< int > >()->__get(j));
					}
				}
			}
		}
	}
	HX_STACK_LINE(55)
	if (((td == null()))){
		HX_STACK_LINE(56)
		this->recolourMap();
	}
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new(Array< ::Dynamic > raw,Array< ::Dynamic > td)
{  hx::ObjectPtr< World_obj > result = new World_obj();
	result->__construct(raw,td);
	return result;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > result = new World_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void World_obj::recolourMap( ){
{
		HX_STACK_FRAME("worldgen.World","recolourMap",0xb94dc871,"worldgen.World.recolourMap","worldgen/World.hx",66,0x19d2a5bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		int _g = this->raw_map_data->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		while((true)){
			HX_STACK_LINE(66)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(66)
				break;
			}
			HX_STACK_LINE(66)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(67)
				int _g2 = this->raw_map_data->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(67)
				while((true)){
					HX_STACK_LINE(67)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(67)
						break;
					}
					HX_STACK_LINE(67)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(68)
					int val = this->raw_map_data->__get(i).StaticCast< Array< int > >()->__get(j);		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(69)
					int col = (int)0;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(70)
					if (((val < (this->waterline - (int)40)))){
						HX_STACK_LINE(71)
						col = (int)-16776961;
					}
					else{
						HX_STACK_LINE(73)
						if (((val < this->waterline))){
							HX_STACK_LINE(74)
							col = (int)-16737793;
						}
						else{
							HX_STACK_LINE(76)
							if (((val < (this->waterline + (int)15)))){
								HX_STACK_LINE(77)
								col = (int)-154;
							}
							else{
								HX_STACK_LINE(79)
								if (((val < this->plainslimit))){
									HX_STACK_LINE(80)
									col = (int)-10053376;
								}
								else{
									HX_STACK_LINE(82)
									if (((bool((val < this->hilllimit)) && bool((val < this->mountainlimit))))){
										HX_STACK_LINE(83)
										col = (int)-10066381;
									}
									else{
										HX_STACK_LINE(86)
										col = (int)-1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(88)
					this->tile_data->__get(i).StaticCast< Array< int > >()[j] = col;
					HX_STACK_LINE(90)
					::haxe::Log_obj::trace(this->forests->__get(i).StaticCast< Array< int > >()->__get(j),hx::SourceInfo(HX_CSTRING("World.hx"),90,HX_CSTRING("worldgen.World"),HX_CSTRING("recolourMap")));
					HX_STACK_LINE(91)
					if (((bool((bool((val < (this->plainslimit - (int)20))) && bool((val > (this->waterline + (int)30))))) && bool((this->forests->__get(i).StaticCast< Array< int > >()->__get(j) > (int)125))))){
						HX_STACK_LINE(93)
						this->tile_data->__get(i).StaticCast< Array< int > >()[j] = (int)-13408768;
					}
					HX_STACK_LINE(95)
					if (((this->rivers->__get(i).StaticCast< Array< int > >()->__get(j) > (int)0))){
						HX_STACK_LINE(96)
						this->tile_data->__get(i).StaticCast< Array< int > >()[j] = (int)-16737793;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,recolourMap,(void))

::flixel::FlxSprite World_obj::getSprite( ){
	HX_STACK_FRAME("worldgen.World","getSprite",0x593e510f,"worldgen.World.getSprite","worldgen/World.hx",104,0x19d2a5bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::flixel::FlxSprite sprite = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(sprite,"sprite");
	HX_STACK_LINE(109)
	sprite->makeGraphic((this->raw_map_data->length * (int)2),(this->raw_map_data->__get((int)0).StaticCast< Array< int > >()->length * (int)2),(int)-1,null(),null());
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(111)
		int _g = this->raw_map_data->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(111)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(112)
				int _g2 = this->raw_map_data->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(115)
					int col = this->tile_data->__get(i).StaticCast< Array< int > >()->__get(j);		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(120)
					sprite->get_pixels()->setPixel((i * (int)2),(j * (int)2),col);
					HX_STACK_LINE(121)
					sprite->get_pixels()->setPixel(((i * (int)2) + (int)1),(j * (int)2),col);
					HX_STACK_LINE(122)
					sprite->get_pixels()->setPixel((i * (int)2),((j * (int)2) + (int)1),col);
					HX_STACK_LINE(123)
					sprite->get_pixels()->setPixel(((i * (int)2) + (int)1),((j * (int)2) + (int)1),col);
				}
			}
		}
	}
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		Array< ::Dynamic > _g1 = this->cities;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		while((true)){
			HX_STACK_LINE(128)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(128)
				break;
			}
			HX_STACK_LINE(128)
			::worldgen::City city = _g1->__get(_g).StaticCast< ::worldgen::City >();		HX_STACK_VAR(city,"city");
			HX_STACK_LINE(128)
			++(_g);
			HX_STACK_LINE(130)
			Dynamic _g2 = this->nations->get(city);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(130)
			int nationColour = this->colours->__get(_g2);		HX_STACK_VAR(nationColour,"nationColour");
			HX_STACK_LINE(132)
			::haxe::Log_obj::trace(((((city->x + HX_CSTRING(",")) + city->y) + HX_CSTRING(" - ")) + city->name),hx::SourceInfo(HX_CSTRING("World.hx"),132,HX_CSTRING("worldgen.World"),HX_CSTRING("getSprite")));
			HX_STACK_LINE(134)
			sprite->get_pixels()->setPixel(((city->x * (int)2) - (int)1),(city->y * (int)2),nationColour);
			HX_STACK_LINE(135)
			sprite->get_pixels()->setPixel(((city->x * (int)2) - (int)1),((city->y * (int)2) + (int)1),nationColour);
			HX_STACK_LINE(136)
			sprite->get_pixels()->setPixel(((city->x * (int)2) + (int)2),(city->y * (int)2),nationColour);
			HX_STACK_LINE(137)
			sprite->get_pixels()->setPixel(((city->x * (int)2) + (int)2),((city->y * (int)2) + (int)1),nationColour);
			HX_STACK_LINE(138)
			sprite->get_pixels()->setPixel((city->x * (int)2),((city->y * (int)2) - (int)1),nationColour);
			HX_STACK_LINE(139)
			sprite->get_pixels()->setPixel(((city->x * (int)2) + (int)1),((city->y * (int)2) - (int)1),nationColour);
			HX_STACK_LINE(140)
			sprite->get_pixels()->setPixel((city->x * (int)2),((city->y * (int)2) + (int)2),nationColour);
			HX_STACK_LINE(141)
			sprite->get_pixels()->setPixel(((city->x * (int)2) + (int)1),((city->y * (int)2) + (int)2),nationColour);
			HX_STACK_LINE(143)
			sprite->get_pixels()->setPixel((city->x * (int)2),(city->y * (int)2),nationColour);
			HX_STACK_LINE(144)
			sprite->get_pixels()->setPixel(((city->x * (int)2) + (int)1),(city->y * (int)2),nationColour);
			HX_STACK_LINE(145)
			sprite->get_pixels()->setPixel((city->x * (int)2),((city->y * (int)2) + (int)1),nationColour);
			HX_STACK_LINE(146)
			sprite->get_pixels()->setPixel(((city->x * (int)2) + (int)1),((city->y * (int)2) + (int)1),nationColour);
		}
	}
	HX_STACK_LINE(149)
	return sprite;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getSprite,return )


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(raw_map_data,"raw_map_data");
	HX_MARK_MEMBER_NAME(tile_data,"tile_data");
	HX_MARK_MEMBER_NAME(rivers,"rivers");
	HX_MARK_MEMBER_NAME(forests,"forests");
	HX_MARK_MEMBER_NAME(metals,"metals");
	HX_MARK_MEMBER_NAME(food,"food");
	HX_MARK_MEMBER_NAME(cities,"cities");
	HX_MARK_MEMBER_NAME(civs,"civs");
	HX_MARK_MEMBER_NAME(colours,"colours");
	HX_MARK_MEMBER_NAME(nations,"nations");
	HX_MARK_MEMBER_NAME(waterline,"waterline");
	HX_MARK_MEMBER_NAME(mountainlimit,"mountainlimit");
	HX_MARK_MEMBER_NAME(hilllimit,"hilllimit");
	HX_MARK_MEMBER_NAME(plainslimit,"plainslimit");
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(raw_map_data,"raw_map_data");
	HX_VISIT_MEMBER_NAME(tile_data,"tile_data");
	HX_VISIT_MEMBER_NAME(rivers,"rivers");
	HX_VISIT_MEMBER_NAME(forests,"forests");
	HX_VISIT_MEMBER_NAME(metals,"metals");
	HX_VISIT_MEMBER_NAME(food,"food");
	HX_VISIT_MEMBER_NAME(cities,"cities");
	HX_VISIT_MEMBER_NAME(civs,"civs");
	HX_VISIT_MEMBER_NAME(colours,"colours");
	HX_VISIT_MEMBER_NAME(nations,"nations");
	HX_VISIT_MEMBER_NAME(waterline,"waterline");
	HX_VISIT_MEMBER_NAME(mountainlimit,"mountainlimit");
	HX_VISIT_MEMBER_NAME(hilllimit,"hilllimit");
	HX_VISIT_MEMBER_NAME(plainslimit,"plainslimit");
}

Dynamic World_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { return food; }
		if (HX_FIELD_EQ(inName,"civs") ) { return civs; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rivers") ) { return rivers; }
		if (HX_FIELD_EQ(inName,"metals") ) { return metals; }
		if (HX_FIELD_EQ(inName,"cities") ) { return cities; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forests") ) { return forests; }
		if (HX_FIELD_EQ(inName,"colours") ) { return colours; }
		if (HX_FIELD_EQ(inName,"nations") ) { return nations; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tile_data") ) { return tile_data; }
		if (HX_FIELD_EQ(inName,"waterline") ) { return waterline; }
		if (HX_FIELD_EQ(inName,"hilllimit") ) { return hilllimit; }
		if (HX_FIELD_EQ(inName,"getSprite") ) { return getSprite_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"plainslimit") ) { return plainslimit; }
		if (HX_FIELD_EQ(inName,"recolourMap") ) { return recolourMap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"raw_map_data") ) { return raw_map_data; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mountainlimit") ) { return mountainlimit; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { food=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"civs") ) { civs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rivers") ) { rivers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"metals") ) { metals=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cities") ) { cities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forests") ) { forests=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colours") ) { colours=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nations") ) { nations=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tile_data") ) { tile_data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waterline") ) { waterline=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hilllimit") ) { hilllimit=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"plainslimit") ) { plainslimit=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"raw_map_data") ) { raw_map_data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mountainlimit") ) { mountainlimit=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("raw_map_data"));
	outFields->push(HX_CSTRING("tile_data"));
	outFields->push(HX_CSTRING("rivers"));
	outFields->push(HX_CSTRING("forests"));
	outFields->push(HX_CSTRING("metals"));
	outFields->push(HX_CSTRING("food"));
	outFields->push(HX_CSTRING("cities"));
	outFields->push(HX_CSTRING("civs"));
	outFields->push(HX_CSTRING("colours"));
	outFields->push(HX_CSTRING("nations"));
	outFields->push(HX_CSTRING("waterline"));
	outFields->push(HX_CSTRING("mountainlimit"));
	outFields->push(HX_CSTRING("hilllimit"));
	outFields->push(HX_CSTRING("plainslimit"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,raw_map_data),HX_CSTRING("raw_map_data")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,tile_data),HX_CSTRING("tile_data")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,rivers),HX_CSTRING("rivers")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,forests),HX_CSTRING("forests")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,metals),HX_CSTRING("metals")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,food),HX_CSTRING("food")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,cities),HX_CSTRING("cities")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,civs),HX_CSTRING("civs")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(World_obj,colours),HX_CSTRING("colours")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(World_obj,nations),HX_CSTRING("nations")},
	{hx::fsInt,(int)offsetof(World_obj,waterline),HX_CSTRING("waterline")},
	{hx::fsInt,(int)offsetof(World_obj,mountainlimit),HX_CSTRING("mountainlimit")},
	{hx::fsInt,(int)offsetof(World_obj,hilllimit),HX_CSTRING("hilllimit")},
	{hx::fsInt,(int)offsetof(World_obj,plainslimit),HX_CSTRING("plainslimit")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("raw_map_data"),
	HX_CSTRING("tile_data"),
	HX_CSTRING("rivers"),
	HX_CSTRING("forests"),
	HX_CSTRING("metals"),
	HX_CSTRING("food"),
	HX_CSTRING("cities"),
	HX_CSTRING("civs"),
	HX_CSTRING("colours"),
	HX_CSTRING("nations"),
	HX_CSTRING("waterline"),
	HX_CSTRING("mountainlimit"),
	HX_CSTRING("hilllimit"),
	HX_CSTRING("plainslimit"),
	HX_CSTRING("recolourMap"),
	HX_CSTRING("getSprite"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#endif

Class World_obj::__mClass;

void World_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("worldgen.World"), hx::TCanCast< World_obj> ,sStaticFields,sMemberFields,
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

void World_obj::__boot()
{
}

} // end namespace worldgen
