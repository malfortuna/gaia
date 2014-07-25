#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace flixel{
namespace ui{

Void FlxBar_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_border)
{
HX_STACK_FRAME("flixel.ui.FlxBar","new",0xec11b05b,"flixel.ui.FlxBar.new","flixel/ui/FlxBar.hx",138,0x9c56c8d5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_direction,"direction")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(parentRef,"parentRef")
HX_STACK_ARG(__o_variable,"variable")
HX_STACK_ARG(__o_min,"min")
HX_STACK_ARG(__o_max,"max")
HX_STACK_ARG(__o_border,"border")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int direction = __o_direction.Default(1);
int width = __o_width.Default(100);
int height = __o_height.Default(10);
::String variable = __o_variable.Default(HX_CSTRING(""));
Float min = __o_min.Default(0);
Float max = __o_max.Default(100);
bool border = __o_border.Default(false);
{
	HX_STACK_LINE(139)
	this->fixedPosition = true;
	HX_STACK_LINE(140)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(140)
	this->zeroOffset = _g;
	HX_STACK_LINE(142)
	super::__construct(x,y,null());
	HX_STACK_LINE(144)
	this->barWidth = width;
	HX_STACK_LINE(145)
	this->barHeight = height;
	HX_STACK_LINE(150)
	int _g1 = this->frameWidth = width;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(150)
	this->set_width(_g1);
	HX_STACK_LINE(151)
	int _g2 = this->frameHeight = height;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(151)
	this->set_height(_g2);
	HX_STACK_LINE(152)
	this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	HX_STACK_LINE(153)
	this->_halfWidth = (0.5 * this->frameWidth);
	HX_STACK_LINE(154)
	this->_halfHeight = (0.5 * this->frameHeight);
	HX_STACK_LINE(156)
	this->_framesPosition = HX_CSTRING("horizontal");
	HX_STACK_LINE(159)
	::openfl::geom::Point _g3 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(159)
	this->filledBarPoint = _g3;
	HX_STACK_LINE(165)
	if (((parentRef != null()))){
		HX_STACK_LINE(167)
		this->parent = parentRef;
		HX_STACK_LINE(168)
		this->parentVariable = variable;
	}
	HX_STACK_LINE(171)
	this->setFillDirection(direction);
	HX_STACK_LINE(173)
	this->setRange(min,max);
	HX_STACK_LINE(175)
	this->createFilledBar((int)-16756480,(int)-16714752,border,null());
	HX_STACK_LINE(177)
	this->emptyKill = false;
}
;
	return null();
}

//FlxBar_obj::~FlxBar_obj() { }

Dynamic FlxBar_obj::__CreateEmpty() { return  new FlxBar_obj; }
hx::ObjectPtr< FlxBar_obj > FlxBar_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_border)
{  hx::ObjectPtr< FlxBar_obj > result = new FlxBar_obj();
	result->__construct(__o_x,__o_y,__o_direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_border);
	return result;}

Dynamic FlxBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBar_obj > result = new FlxBar_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

Void FlxBar_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","destroy",0x13b32675,"flixel.ui.FlxBar.destroy","flixel/ui/FlxBar.hx",186,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->positionOffset);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		this->positionOffset = _g;
		HX_STACK_LINE(193)
		this->_filledBarFrames = null();
		HX_STACK_LINE(196)
		this->parent = null();
		HX_STACK_LINE(197)
		this->positionOffset = null();
		HX_STACK_LINE(198)
		this->emptyCallback = null();
		HX_STACK_LINE(199)
		this->emptyBarRect = null();
		HX_STACK_LINE(200)
		this->emptyBarPoint = null();
		HX_STACK_LINE(201)
		this->zeroOffset = null();
		HX_STACK_LINE(202)
		this->filledCallback = null();
		HX_STACK_LINE(203)
		this->filledBarRect = null();
		HX_STACK_LINE(204)
		this->filledBarPoint = null();
		HX_STACK_LINE(206)
		::openfl::display::BitmapData _g1 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->emptyBar);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(206)
		this->emptyBar = _g1;
		HX_STACK_LINE(207)
		::openfl::display::BitmapData _g2 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->filledBar);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(207)
		this->filledBar = _g2;
		HX_STACK_LINE(209)
		this->super::destroy();
	}
return null();
}


Void FlxBar_obj::trackParent( int offsetX,int offsetY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","trackParent",0x235ed510,"flixel.ui.FlxBar.trackParent","flixel/ui/FlxBar.hx",222,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(offsetY,"offsetY")
		HX_STACK_LINE(223)
		this->fixedPosition = false;
		HX_STACK_LINE(225)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(offsetX,offsetY);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(225)
			point->_inPool = false;
			HX_STACK_LINE(225)
			_g = point;
		}
		HX_STACK_LINE(225)
		this->positionOffset = _g;
		HX_STACK_LINE(227)
		if ((::Reflect_obj::hasField(this->parent,HX_CSTRING("scrollFactor")))){
			HX_STACK_LINE(229)
			this->scrollFactor->set_x(this->parent->__Field(HX_CSTRING("scrollFactor"),true)->__Field(HX_CSTRING("x"),true));
			HX_STACK_LINE(230)
			this->scrollFactor->set_y(this->parent->__Field(HX_CSTRING("scrollFactor"),true)->__Field(HX_CSTRING("y"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,trackParent,(void))

Void FlxBar_obj::setParent( Dynamic parentRef,::String variable,hx::Null< bool >  __o_track,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY){
bool track = __o_track.Default(false);
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
	HX_STACK_FRAME("flixel.ui.FlxBar","setParent",0x1ca008a7,"flixel.ui.FlxBar.setParent","flixel/ui/FlxBar.hx",244,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parentRef,"parentRef")
	HX_STACK_ARG(variable,"variable")
	HX_STACK_ARG(track,"track")
	HX_STACK_ARG(offsetX,"offsetX")
	HX_STACK_ARG(offsetY,"offsetY")
{
		HX_STACK_LINE(245)
		this->parent = parentRef;
		HX_STACK_LINE(246)
		this->parentVariable = variable;
		HX_STACK_LINE(248)
		if ((track)){
			HX_STACK_LINE(250)
			this->trackParent(offsetX,offsetY);
		}
		HX_STACK_LINE(253)
		this->updateValueFromParent();
		HX_STACK_LINE(254)
		this->updateBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,setParent,(void))

Void FlxBar_obj::stopTrackingParent( int posX,int posY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","stopTrackingParent",0x3b6e39c8,"flixel.ui.FlxBar.stopTrackingParent","flixel/ui/FlxBar.hx",264,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(posX,"posX")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(265)
		this->fixedPosition = true;
		HX_STACK_LINE(267)
		this->set_x(posX);
		HX_STACK_LINE(268)
		this->set_y(posY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,stopTrackingParent,(void))

Void FlxBar_obj::setCallbacks( Dynamic onEmpty,Dynamic onFilled,hx::Null< bool >  __o_killOnEmpty){
bool killOnEmpty = __o_killOnEmpty.Default(false);
	HX_STACK_FRAME("flixel.ui.FlxBar","setCallbacks",0x67217bb1,"flixel.ui.FlxBar.setCallbacks","flixel/ui/FlxBar.hx",281,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(onEmpty,"onEmpty")
	HX_STACK_ARG(onFilled,"onFilled")
	HX_STACK_ARG(killOnEmpty,"killOnEmpty")
{
		HX_STACK_LINE(282)
		if (((onEmpty != null()))){
			HX_STACK_LINE(284)
			this->emptyCallback = onEmpty;
		}
		HX_STACK_LINE(287)
		if (((onFilled != null()))){
			HX_STACK_LINE(289)
			this->filledCallback = onFilled;
		}
		HX_STACK_LINE(292)
		if ((killOnEmpty)){
			HX_STACK_LINE(294)
			this->emptyKill = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,setCallbacks,(void))

bool FlxBar_obj::set_killOnEmpty( bool value){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_killOnEmpty",0x8f04120e,"flixel.ui.FlxBar.set_killOnEmpty","flixel/ui/FlxBar.hx",304,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(305)
	this->emptyKill = value;
	HX_STACK_LINE(306)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_killOnEmpty,return )

bool FlxBar_obj::get_killOnEmpty( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_killOnEmpty",0x93389502,"flixel.ui.FlxBar.get_killOnEmpty","flixel/ui/FlxBar.hx",311,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	return this->emptyKill;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_killOnEmpty,return )

Void FlxBar_obj::setRange( Float min,Float max){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setRange",0x4a8160e0,"flixel.ui.FlxBar.setRange","flixel/ui/FlxBar.hx",321,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(322)
		if (((max <= min))){
			HX_STACK_LINE(324)
			HX_STACK_DO_THROW(HX_CSTRING("FlxBar: max cannot be less than or equal to min"));
			HX_STACK_LINE(325)
			return null();
		}
		HX_STACK_LINE(328)
		this->min = min;
		HX_STACK_LINE(329)
		this->max = max;
		HX_STACK_LINE(331)
		this->range = (max - min);
		HX_STACK_LINE(333)
		this->pct = (Float(this->range) / Float((int)100));
		HX_STACK_LINE(335)
		if ((this->fillHorizontal)){
			HX_STACK_LINE(337)
			this->pxPerPercent = (Float(this->barWidth) / Float((int)100));
		}
		else{
			HX_STACK_LINE(341)
			this->pxPerPercent = (Float(this->barHeight) / Float((int)100));
		}
		HX_STACK_LINE(344)
		if ((!(::Math_obj::isNaN(this->value)))){
			HX_STACK_LINE(346)
			if (((this->value > max))){
				HX_STACK_LINE(348)
				this->value = max;
			}
			HX_STACK_LINE(351)
			if (((this->value < min))){
				HX_STACK_LINE(353)
				this->value = min;
			}
		}
		else{
			HX_STACK_LINE(358)
			this->value = min;
		}
		HX_STACK_LINE(362)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,setRange,(void))

::haxe::ds::StringMap FlxBar_obj::get_stats( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_stats",0x972f60b1,"flixel.ui.FlxBar.get_stats","flixel/ui/FlxBar.hx",369,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(370)
	::haxe::ds::StringMap data = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(371)
	data->set(HX_CSTRING("min"),this->min);
	HX_STACK_LINE(372)
	data->set(HX_CSTRING("max"),this->max);
	HX_STACK_LINE(373)
	data->set(HX_CSTRING("range"),this->range);
	HX_STACK_LINE(374)
	data->set(HX_CSTRING("pct"),this->pct);
	HX_STACK_LINE(375)
	data->set(HX_CSTRING("pxPerPct"),this->pxPerPercent);
	HX_STACK_LINE(376)
	data->set(HX_CSTRING("fillH"),this->fillHorizontal);
	HX_STACK_LINE(378)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_stats,return )

Void FlxBar_obj::createFilledBar( int empty,int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createFilledBar",0x6a7e3330,"flixel.ui.FlxBar.createFilledBar","flixel/ui/FlxBar.hx",391,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(392)
		this->barType = (int)1;
		HX_STACK_LINE(395)
		int emptyA = (int((int(empty) >> int((int)24))) & int((int)255));		HX_STACK_VAR(emptyA,"emptyA");
		HX_STACK_LINE(396)
		int emptyRGB = (int(empty) & int((int)16777215));		HX_STACK_VAR(emptyRGB,"emptyRGB");
		HX_STACK_LINE(397)
		int fillA = (int((int(fill) >> int((int)24))) & int((int)255));		HX_STACK_VAR(fillA,"fillA");
		HX_STACK_LINE(398)
		int fillRGB = (int(fill) & int((int)16777215));		HX_STACK_VAR(fillRGB,"fillRGB");
		HX_STACK_LINE(399)
		int borderA = (int((int(border) >> int((int)24))) & int((int)255));		HX_STACK_VAR(borderA,"borderA");
		HX_STACK_LINE(400)
		int borderRGB = (int(border) & int((int)16777215));		HX_STACK_VAR(borderRGB,"borderRGB");
		HX_STACK_LINE(402)
		::String _g = ::Std_obj::string(showBorder);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(402)
		::String emptyKey = (((((((((HX_CSTRING("empty: ") + this->barWidth) + HX_CSTRING("x")) + this->barHeight) + HX_CSTRING(":")) + emptyA) + HX_CSTRING(".")) + emptyRGB) + HX_CSTRING("showBorder: ")) + _g);		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(403)
		::String _g1 = ::Std_obj::string(showBorder);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(403)
		::String filledKey = (((((((((HX_CSTRING("filled: ") + this->barWidth) + HX_CSTRING("x")) + this->barHeight) + HX_CSTRING(":")) + fillA) + HX_CSTRING(".")) + fillRGB) + HX_CSTRING("showBorder: ")) + _g1);		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(404)
		if ((showBorder)){
			HX_STACK_LINE(406)
			emptyKey = ((((emptyKey + HX_CSTRING("border: ")) + borderA) + HX_CSTRING(".")) + borderRGB);
			HX_STACK_LINE(407)
			filledKey = ((((filledKey + HX_CSTRING("border: ")) + borderA) + HX_CSTRING(".")) + borderRGB);
		}
		HX_STACK_LINE(410)
		if (((this->barWidth >= this->barHeight))){
			HX_STACK_LINE(412)
			this->_framesPosition = HX_CSTRING("horizontal");
		}
		else{
			HX_STACK_LINE(416)
			this->_framesPosition = HX_CSTRING("vertical");
		}
		HX_STACK_LINE(420)
		if ((showBorder)){
			HX_STACK_LINE(423)
			bool _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(423)
			{
				HX_STACK_LINE(423)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(423)
				if ((_this->_cache->exists(emptyKey))){
					HX_STACK_LINE(423)
					::flixel::util::loaders::CachedGraphics _g2 = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(423)
					_g3 = (_g2 != null());
				}
				else{
					HX_STACK_LINE(423)
					_g3 = false;
				}
			}
			HX_STACK_LINE(423)
			if (((_g3 == false))){
				HX_STACK_LINE(425)
				::openfl::display::BitmapData emptyBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(426)
				::openfl::geom::Rectangle _g4 = ::openfl::geom::Rectangle_obj::__new((int)1,(int)1,(this->barWidth - (int)2),(this->barHeight - (int)2));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(426)
				emptyBar->fillRect(_g4,empty);
				HX_STACK_LINE(428)
				::flixel::FlxG_obj::bitmap->addWithSpaces(emptyBar,(int)0,(int)0,(int)1,(int)1,false,emptyKey);
			}
			HX_STACK_LINE(431)
			bool _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(431)
				if ((_this->_cache->exists(filledKey))){
					HX_STACK_LINE(431)
					::flixel::util::loaders::CachedGraphics _g5 = _this->_cache->get(filledKey);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(431)
					_g6 = (_g5 != null());
				}
				else{
					HX_STACK_LINE(431)
					_g6 = false;
				}
			}
			HX_STACK_LINE(431)
			if (((_g6 == false))){
				HX_STACK_LINE(433)
				::openfl::display::BitmapData filledBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(434)
				::openfl::geom::Rectangle _g7 = ::openfl::geom::Rectangle_obj::__new((int)1,(int)1,(this->barWidth - (int)2),(this->barHeight - (int)2));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(434)
				filledBar->fillRect(_g7,fill);
				HX_STACK_LINE(436)
				::flixel::FlxG_obj::bitmap->addWithSpaces(filledBar,(int)0,(int)0,(int)1,(int)1,false,filledKey);
			}
		}
		else{
			HX_STACK_LINE(449)
			bool _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(449)
				if ((_this->_cache->exists(emptyKey))){
					HX_STACK_LINE(449)
					::flixel::util::loaders::CachedGraphics _g8 = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(449)
					_g9 = (_g8 != null());
				}
				else{
					HX_STACK_LINE(449)
					_g9 = false;
				}
			}
			HX_STACK_LINE(449)
			if (((_g9 == false))){
				HX_STACK_LINE(451)
				::openfl::display::BitmapData emptyBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,empty,null());		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(452)
				::flixel::FlxG_obj::bitmap->addWithSpaces(emptyBar,(int)0,(int)0,(int)1,(int)1,false,emptyKey);
			}
			HX_STACK_LINE(455)
			bool _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(455)
			{
				HX_STACK_LINE(455)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(455)
				if ((_this->_cache->exists(filledKey))){
					HX_STACK_LINE(455)
					::flixel::util::loaders::CachedGraphics _g10 = _this->_cache->get(filledKey);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(455)
					_g11 = (_g10 != null());
				}
				else{
					HX_STACK_LINE(455)
					_g11 = false;
				}
			}
			HX_STACK_LINE(455)
			if (((_g11 == false))){
				HX_STACK_LINE(457)
				::openfl::display::BitmapData filledBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,fill,null());		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(458)
				::flixel::FlxG_obj::bitmap->addWithSpaces(filledBar,(int)0,(int)0,(int)1,(int)1,false,filledKey);
			}
		}
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			::flixel::util::loaders::CachedGraphics value = ::flixel::FlxG_obj::bitmap->get(emptyKey);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(470)
			this->set_cachedGraphics(value);
		}
		HX_STACK_LINE(471)
		::flixel::util::loaders::CachedGraphics _g12 = ::flixel::FlxG_obj::bitmap->get(filledKey);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(471)
		this->setCachedFrontGraphics(_g12);
		HX_STACK_LINE(473)
		::flixel::system::layer::Region _g13 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(473)
		this->region = _g13;
		HX_STACK_LINE(474)
		int _g14 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(474)
		this->region->width = _g14;
		HX_STACK_LINE(475)
		int _g15 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(475)
		this->region->height = _g15;
		HX_STACK_LINE(476)
		::flixel::system::layer::Region _g16 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(476)
		this->_frontRegion = _g16;
		HX_STACK_LINE(477)
		int _g17 = this->_cachedFrontGraphics->bitmap->get_width();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(477)
		this->_frontRegion->width = _g17;
		HX_STACK_LINE(478)
		int _g18 = this->_cachedFrontGraphics->bitmap->get_height();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(478)
		this->_frontRegion->height = _g18;
		HX_STACK_LINE(479)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createFilledBar,(void))

Void FlxBar_obj::createGradientBar( Array< int > empty,Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientBar",0x851ca162,"flixel.ui.FlxBar.createGradientBar","flixel/ui/FlxBar.hx",495,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(496)
		this->barType = (int)2;
		HX_STACK_LINE(499)
		int colA;		HX_STACK_VAR(colA,"colA");
		HX_STACK_LINE(500)
		int colRGB;		HX_STACK_VAR(colRGB,"colRGB");
		HX_STACK_LINE(502)
		::String emptyKey = ((((HX_CSTRING("Gradient: ") + this->barWidth) + HX_CSTRING(" x ")) + this->barHeight) + HX_CSTRING(", colors: ["));		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(503)
			while((true)){
				HX_STACK_LINE(503)
				if ((!(((_g < empty->length))))){
					HX_STACK_LINE(503)
					break;
				}
				HX_STACK_LINE(503)
				int col = empty->__get(_g);		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(503)
				++(_g);
				HX_STACK_LINE(505)
				colA = (int((int(col) >> int((int)24))) & int((int)255));
				HX_STACK_LINE(506)
				colRGB = (int(col) & int((int)16777215));
				HX_STACK_LINE(508)
				emptyKey = ((((emptyKey + colRGB) + HX_CSTRING("_")) + colA) + HX_CSTRING(", "));
			}
		}
		HX_STACK_LINE(510)
		::String _g = ::Std_obj::string(showBorder);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(510)
		::String _g1 = ((((((emptyKey + HX_CSTRING("], chunkSize: ")) + chunkSize) + HX_CSTRING(", rotation: ")) + rotation) + HX_CSTRING("showBorder: ")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(510)
		emptyKey = _g1;
		HX_STACK_LINE(512)
		::String filledKey = ((((HX_CSTRING("Gradient: ") + this->barWidth) + HX_CSTRING(" x ")) + this->barHeight) + HX_CSTRING(", colors: ["));		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(513)
			while((true)){
				HX_STACK_LINE(513)
				if ((!(((_g2 < fill->length))))){
					HX_STACK_LINE(513)
					break;
				}
				HX_STACK_LINE(513)
				int col = fill->__get(_g2);		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(513)
				++(_g2);
				HX_STACK_LINE(515)
				colA = (int((int(col) >> int((int)24))) & int((int)255));
				HX_STACK_LINE(516)
				colRGB = (int(col) & int((int)16777215));
				HX_STACK_LINE(518)
				filledKey = ((((filledKey + colRGB) + HX_CSTRING("_")) + colA) + HX_CSTRING(", "));
			}
		}
		HX_STACK_LINE(520)
		::String _g2 = ::Std_obj::string(showBorder);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(520)
		::String _g3 = ((((((filledKey + HX_CSTRING("], chunkSize: ")) + chunkSize) + HX_CSTRING(", rotation: ")) + rotation) + HX_CSTRING("showBorder: ")) + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(520)
		filledKey = _g3;
		HX_STACK_LINE(522)
		if ((showBorder)){
			HX_STACK_LINE(524)
			int borderA = (int((int(border) >> int((int)24))) & int((int)255));		HX_STACK_VAR(borderA,"borderA");
			HX_STACK_LINE(525)
			int borderRGB = (int(border) & int((int)16777215));		HX_STACK_VAR(borderRGB,"borderRGB");
			HX_STACK_LINE(527)
			emptyKey = ((((emptyKey + HX_CSTRING("border: ")) + borderA) + HX_CSTRING(".")) + borderRGB);
			HX_STACK_LINE(528)
			filledKey = ((((filledKey + HX_CSTRING("border: ")) + borderA) + HX_CSTRING(".")) + borderRGB);
		}
		HX_STACK_LINE(531)
		if (((this->barWidth >= this->barHeight))){
			HX_STACK_LINE(533)
			this->_framesPosition = HX_CSTRING("horizontal");
		}
		else{
			HX_STACK_LINE(537)
			this->_framesPosition = HX_CSTRING("vertical");
		}
		HX_STACK_LINE(541)
		if ((showBorder)){
			HX_STACK_LINE(550)
			bool _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(550)
				if ((_this->_cache->exists(emptyKey))){
					HX_STACK_LINE(550)
					::flixel::util::loaders::CachedGraphics _g4 = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(550)
					_g5 = (_g4 != null());
				}
				else{
					HX_STACK_LINE(550)
					_g5 = false;
				}
			}
			HX_STACK_LINE(550)
			if (((_g5 == false))){
				HX_STACK_LINE(552)
				::openfl::display::BitmapData emptyBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(553)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(emptyBar,(this->barWidth - (int)2),(this->barHeight - (int)2),empty,(int)1,(int)1,chunkSize,rotation,null());
				HX_STACK_LINE(554)
				::flixel::FlxG_obj::bitmap->addWithSpaces(emptyBar,(int)0,(int)0,(int)1,(int)1,false,emptyKey);
			}
			HX_STACK_LINE(557)
			bool _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(557)
			{
				HX_STACK_LINE(557)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(557)
				if ((_this->_cache->exists(filledKey))){
					HX_STACK_LINE(557)
					::flixel::util::loaders::CachedGraphics _g6 = _this->_cache->get(filledKey);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(557)
					_g7 = (_g6 != null());
				}
				else{
					HX_STACK_LINE(557)
					_g7 = false;
				}
			}
			HX_STACK_LINE(557)
			if (((_g7 == false))){
				HX_STACK_LINE(559)
				::openfl::display::BitmapData filledBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(560)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(filledBar,(this->barWidth - (int)2),(this->barHeight - (int)2),fill,(int)1,(int)1,chunkSize,rotation,null());
				HX_STACK_LINE(561)
				::flixel::FlxG_obj::bitmap->addWithSpaces(filledBar,(int)0,(int)0,(int)1,(int)1,false,filledKey);
			}
		}
		else{
			HX_STACK_LINE(571)
			bool _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(571)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(571)
				if ((_this->_cache->exists(emptyKey))){
					HX_STACK_LINE(571)
					::flixel::util::loaders::CachedGraphics _g8 = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(571)
					_g9 = (_g8 != null());
				}
				else{
					HX_STACK_LINE(571)
					_g9 = false;
				}
			}
			HX_STACK_LINE(571)
			if (((_g9 == false))){
				HX_STACK_LINE(573)
				::openfl::display::BitmapData emptyBar = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,empty,chunkSize,rotation,null());		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(574)
				::flixel::FlxG_obj::bitmap->addWithSpaces(emptyBar,(int)0,(int)0,(int)1,(int)1,false,emptyKey);
			}
			HX_STACK_LINE(577)
			bool _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(577)
				if ((_this->_cache->exists(filledKey))){
					HX_STACK_LINE(577)
					::flixel::util::loaders::CachedGraphics _g10 = _this->_cache->get(filledKey);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(577)
					_g11 = (_g10 != null());
				}
				else{
					HX_STACK_LINE(577)
					_g11 = false;
				}
			}
			HX_STACK_LINE(577)
			if (((_g11 == false))){
				HX_STACK_LINE(579)
				::openfl::display::BitmapData filledBar = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,fill,chunkSize,rotation,null());		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(580)
				::flixel::FlxG_obj::bitmap->addWithSpaces(filledBar,(int)0,(int)0,(int)1,(int)1,false,filledKey);
			}
		}
		HX_STACK_LINE(589)
		{
			HX_STACK_LINE(589)
			::flixel::util::loaders::CachedGraphics value = ::flixel::FlxG_obj::bitmap->get(emptyKey);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(589)
			this->set_cachedGraphics(value);
		}
		HX_STACK_LINE(590)
		::flixel::util::loaders::CachedGraphics _g12 = ::flixel::FlxG_obj::bitmap->get(filledKey);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(590)
		this->setCachedFrontGraphics(_g12);
		HX_STACK_LINE(592)
		::flixel::system::layer::Region _g13 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(592)
		this->region = _g13;
		HX_STACK_LINE(593)
		int _g14 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(593)
		this->region->width = _g14;
		HX_STACK_LINE(594)
		int _g15 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(594)
		this->region->height = _g15;
		HX_STACK_LINE(595)
		::flixel::system::layer::Region _g16 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(595)
		this->_frontRegion = _g16;
		HX_STACK_LINE(596)
		int _g17 = this->_cachedFrontGraphics->bitmap->get_width();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(596)
		this->_frontRegion->width = _g17;
		HX_STACK_LINE(597)
		int _g18 = this->_cachedFrontGraphics->bitmap->get_height();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(597)
		this->_frontRegion->height = _g18;
		HX_STACK_LINE(598)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxBar_obj,createGradientBar,(void))

Void FlxBar_obj::createImageBar( Dynamic empty,Dynamic fill,hx::Null< int >  __o_emptyBackground,hx::Null< int >  __o_fillBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageBar",0xf0f89039,"flixel.ui.FlxBar.createImageBar","flixel/ui/FlxBar.hx",613,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(614)
		::flixel::util::loaders::CachedGraphics emptyGraphics;		HX_STACK_VAR(emptyGraphics,"emptyGraphics");
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
			HX_STACK_LINE(614)
			emptyGraphics = ::flixel::FlxG_obj::bitmap->addWithSpaces(empty,(int)0,(int)0,(int)1,(int)1,Unique,null());
		}
		HX_STACK_LINE(615)
		::flixel::util::loaders::CachedGraphics filledGraphics;		HX_STACK_VAR(filledGraphics,"filledGraphics");
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
			HX_STACK_LINE(615)
			filledGraphics = ::flixel::FlxG_obj::bitmap->addWithSpaces(fill,(int)0,(int)0,(int)1,(int)1,Unique,null());
		}
		HX_STACK_LINE(617)
		::openfl::display::BitmapData emptyBitmapData;		HX_STACK_VAR(emptyBitmapData,"emptyBitmapData");
		HX_STACK_LINE(617)
		if (((emptyGraphics != null()))){
			HX_STACK_LINE(617)
			emptyBitmapData = emptyGraphics->bitmap;
		}
		else{
			HX_STACK_LINE(617)
			emptyBitmapData = null();
		}
		HX_STACK_LINE(618)
		::openfl::display::BitmapData fillBitmapData;		HX_STACK_VAR(fillBitmapData,"fillBitmapData");
		HX_STACK_LINE(618)
		if (((filledGraphics != null()))){
			HX_STACK_LINE(618)
			fillBitmapData = filledGraphics->bitmap;
		}
		else{
			HX_STACK_LINE(618)
			fillBitmapData = null();
		}
		HX_STACK_LINE(621)
		::String emptyKey = HX_CSTRING("");		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(622)
		::String filledKey = HX_CSTRING("");		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(624)
		if (((empty != null()))){
			HX_STACK_LINE(626)
			if ((::Std_obj::is(empty,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(628)
				::Class _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(628)
				_g = hx::TCast< Class >::cast(empty);
				HX_STACK_LINE(628)
				::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(628)
				hx::AddEq(emptyKey,_g1);
			}
			else{
				HX_STACK_LINE(630)
				if ((::Std_obj::is(empty,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(632)
					::String _g2 = ::Std_obj::string(empty);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(632)
					hx::AddEq(emptyKey,_g2);
				}
			}
		}
		HX_STACK_LINE(636)
		if (((fill != null()))){
			HX_STACK_LINE(638)
			if ((::Std_obj::is(fill,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(640)
				::Class _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(640)
				_g3 = hx::TCast< Class >::cast(fill);
				HX_STACK_LINE(640)
				::String _g4 = ::Type_obj::getClassName(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(640)
				hx::AddEq(filledKey,_g4);
			}
			else{
				HX_STACK_LINE(642)
				if ((::Std_obj::is(fill,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(644)
					::String _g5 = ::Std_obj::string(fill);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(644)
					hx::AddEq(filledKey,_g5);
				}
			}
		}
		HX_STACK_LINE(648)
		int emptyBackgroundA = (int((int(emptyBackground) >> int((int)24))) & int((int)255));		HX_STACK_VAR(emptyBackgroundA,"emptyBackgroundA");
		HX_STACK_LINE(649)
		int emptyBackgroundRGB = (int(emptyBackground) & int((int)16777215));		HX_STACK_VAR(emptyBackgroundRGB,"emptyBackgroundRGB");
		HX_STACK_LINE(650)
		int fillBackgroundA = (int((int(fillBackground) >> int((int)24))) & int((int)255));		HX_STACK_VAR(fillBackgroundA,"fillBackgroundA");
		HX_STACK_LINE(651)
		int fillBackgroundRGB = (int(fillBackground) & int((int)16777215));		HX_STACK_VAR(fillBackgroundRGB,"fillBackgroundRGB");
		HX_STACK_LINE(653)
		hx::AddEq(emptyKey,(((HX_CSTRING("emptyBackground: ") + emptyBackgroundA) + HX_CSTRING(".")) + emptyBackgroundRGB));
		HX_STACK_LINE(654)
		hx::AddEq(filledKey,(((HX_CSTRING("fillBackground: ") + fillBackgroundA) + HX_CSTRING(".")) + fillBackgroundRGB));
		HX_STACK_LINE(657)
		this->barType = (int)3;
		HX_STACK_LINE(659)
		if (((bool((empty == null())) && bool((fill == null()))))){
			HX_STACK_LINE(661)
			return null();
		}
		HX_STACK_LINE(664)
		if (((bool((empty != null())) && bool((fill == null()))))){
			HX_STACK_LINE(677)
			int _g6 = emptyBitmapData->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(677)
			this->barWidth = _g6;
			HX_STACK_LINE(678)
			int _g7 = emptyBitmapData->get_height();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(678)
			this->barHeight = _g7;
			HX_STACK_LINE(680)
			if (((this->barWidth >= this->barHeight))){
				HX_STACK_LINE(682)
				this->_framesPosition = HX_CSTRING("horizontal");
			}
			else{
				HX_STACK_LINE(686)
				this->_framesPosition = HX_CSTRING("vertical");
			}
			HX_STACK_LINE(689)
			bool _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(689)
			{
				HX_STACK_LINE(689)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(689)
				if ((_this->_cache->exists(emptyKey))){
					HX_STACK_LINE(689)
					::flixel::util::loaders::CachedGraphics _g8 = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(689)
					_g9 = (_g8 != null());
				}
				else{
					HX_STACK_LINE(689)
					_g9 = false;
				}
			}
			HX_STACK_LINE(689)
			if (((_g9 == false))){
				HX_STACK_LINE(691)
				::flixel::FlxG_obj::bitmap->addWithSpaces(emptyBitmapData,(int)0,(int)0,(int)1,(int)1,false,emptyKey);
			}
			HX_STACK_LINE(694)
			bool _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(694)
				if ((_this->_cache->exists(filledKey))){
					HX_STACK_LINE(694)
					::flixel::util::loaders::CachedGraphics _g10 = _this->_cache->get(filledKey);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(694)
					_g11 = (_g10 != null());
				}
				else{
					HX_STACK_LINE(694)
					_g11 = false;
				}
			}
			HX_STACK_LINE(694)
			if (((_g11 == false))){
				HX_STACK_LINE(696)
				::openfl::display::BitmapData filledBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,fillBackground,null());		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(697)
				::flixel::FlxG_obj::bitmap->addWithSpaces(filledBar,(int)0,(int)0,(int)1,(int)1,false,filledKey);
			}
		}
		else{
			HX_STACK_LINE(701)
			if (((bool((empty == null())) && bool((fill != null()))))){
				HX_STACK_LINE(714)
				int _g12 = fillBitmapData->get_width();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(714)
				this->barWidth = _g12;
				HX_STACK_LINE(715)
				int _g13 = fillBitmapData->get_height();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(715)
				this->barHeight = _g13;
				HX_STACK_LINE(717)
				if (((this->barWidth >= this->barHeight))){
					HX_STACK_LINE(719)
					this->_framesPosition = HX_CSTRING("horizontal");
				}
				else{
					HX_STACK_LINE(723)
					this->_framesPosition = HX_CSTRING("vertical");
				}
				HX_STACK_LINE(726)
				bool _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(726)
				{
					HX_STACK_LINE(726)
					::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(726)
					if ((_this->_cache->exists(emptyKey))){
						HX_STACK_LINE(726)
						::flixel::util::loaders::CachedGraphics _g14 = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(726)
						_g15 = (_g14 != null());
					}
					else{
						HX_STACK_LINE(726)
						_g15 = false;
					}
				}
				HX_STACK_LINE(726)
				if (((_g15 == false))){
					HX_STACK_LINE(728)
					::openfl::display::BitmapData emptyBar = ::openfl::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,emptyBackground,null());		HX_STACK_VAR(emptyBar,"emptyBar");
					HX_STACK_LINE(729)
					::flixel::FlxG_obj::bitmap->addWithSpaces(emptyBar,(int)0,(int)0,(int)1,(int)1,false,emptyKey);
				}
				HX_STACK_LINE(732)
				bool _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(732)
					if ((_this->_cache->exists(filledKey))){
						HX_STACK_LINE(732)
						::flixel::util::loaders::CachedGraphics _g16 = _this->_cache->get(filledKey);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(732)
						_g17 = (_g16 != null());
					}
					else{
						HX_STACK_LINE(732)
						_g17 = false;
					}
				}
				HX_STACK_LINE(732)
				if (((_g17 == false))){
					HX_STACK_LINE(734)
					::flixel::FlxG_obj::bitmap->addWithSpaces(fillBitmapData,(int)0,(int)0,(int)1,(int)1,false,filledKey);
				}
			}
			else{
				HX_STACK_LINE(738)
				if (((bool((empty != null())) && bool((fill != null()))))){
					HX_STACK_LINE(751)
					int _g18 = emptyBitmapData->get_width();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(751)
					this->barWidth = _g18;
					HX_STACK_LINE(752)
					int _g19 = emptyBitmapData->get_height();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(752)
					this->barHeight = _g19;
					HX_STACK_LINE(754)
					if (((this->barWidth >= this->barHeight))){
						HX_STACK_LINE(756)
						this->_framesPosition = HX_CSTRING("horizontal");
					}
					else{
						HX_STACK_LINE(760)
						this->_framesPosition = HX_CSTRING("vertical");
					}
					HX_STACK_LINE(763)
					bool _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(763)
					{
						HX_STACK_LINE(763)
						::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(763)
						if ((_this->_cache->exists(emptyKey))){
							HX_STACK_LINE(763)
							::flixel::util::loaders::CachedGraphics _g20 = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(763)
							_g21 = (_g20 != null());
						}
						else{
							HX_STACK_LINE(763)
							_g21 = false;
						}
					}
					HX_STACK_LINE(763)
					if (((_g21 == false))){
						HX_STACK_LINE(765)
						::flixel::FlxG_obj::bitmap->addWithSpaces(emptyBitmapData,(int)0,(int)0,(int)1,(int)1,false,emptyKey);
					}
					HX_STACK_LINE(768)
					bool _g23;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(768)
					{
						HX_STACK_LINE(768)
						::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(768)
						if ((_this->_cache->exists(filledKey))){
							HX_STACK_LINE(768)
							::flixel::util::loaders::CachedGraphics _g22 = _this->_cache->get(filledKey);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(768)
							_g23 = (_g22 != null());
						}
						else{
							HX_STACK_LINE(768)
							_g23 = false;
						}
					}
					HX_STACK_LINE(768)
					if (((_g23 == false))){
						HX_STACK_LINE(770)
						::flixel::FlxG_obj::bitmap->addWithSpaces(fillBitmapData,(int)0,(int)0,(int)1,(int)1,false,filledKey);
					}
				}
			}
		}
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			::flixel::util::loaders::CachedGraphics value = ::flixel::FlxG_obj::bitmap->get(emptyKey);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(778)
			this->set_cachedGraphics(value);
		}
		HX_STACK_LINE(779)
		::flixel::util::loaders::CachedGraphics _g24 = ::flixel::FlxG_obj::bitmap->get(filledKey);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(779)
		this->setCachedFrontGraphics(_g24);
		HX_STACK_LINE(781)
		::flixel::system::layer::Region _g25 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(781)
		this->region = _g25;
		HX_STACK_LINE(782)
		int _g26 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(782)
		this->region->width = _g26;
		HX_STACK_LINE(783)
		int _g27 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(783)
		this->region->height = _g27;
		HX_STACK_LINE(784)
		::flixel::system::layer::Region _g28 = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(784)
		this->_frontRegion = _g28;
		HX_STACK_LINE(785)
		int _g29 = this->_cachedFrontGraphics->bitmap->get_width();		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(785)
		this->_frontRegion->width = _g29;
		HX_STACK_LINE(786)
		int _g30 = this->_cachedFrontGraphics->bitmap->get_height();		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(786)
		this->_frontRegion->height = _g30;
		HX_STACK_LINE(787)
		this->updateFrameData();
		HX_STACK_LINE(790)
		if ((this->fillHorizontal)){
			HX_STACK_LINE(792)
			this->pxPerPercent = (Float(this->barWidth) / Float((int)100));
		}
		else{
			HX_STACK_LINE(796)
			this->pxPerPercent = (Float(this->barHeight) / Float((int)100));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createImageBar,(void))

Void FlxBar_obj::setFillDirection( int direction){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setFillDirection",0x4f9f215f,"flixel.ui.FlxBar.setFillDirection","flixel/ui/FlxBar.hx",806,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_LINE(807)
		if (((bool((bool((bool((direction == (int)1)) || bool((direction == (int)2)))) || bool((direction == (int)5)))) || bool((direction == (int)6))))){
			HX_STACK_LINE(809)
			this->fillDirection = direction;
			HX_STACK_LINE(810)
			this->fillHorizontal = true;
		}
		else{
			HX_STACK_LINE(812)
			if (((bool((bool((bool((direction == (int)3)) || bool((direction == (int)4)))) || bool((direction == (int)7)))) || bool((direction == (int)8))))){
				HX_STACK_LINE(814)
				this->fillDirection = direction;
				HX_STACK_LINE(815)
				this->fillHorizontal = false;
			}
		}
		HX_STACK_LINE(819)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,setFillDirection,(void))

Void FlxBar_obj::updateValueFromParent( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateValueFromParent",0x9d60d3b7,"flixel.ui.FlxBar.updateValueFromParent","flixel/ui/FlxBar.hx",824,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(825)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(825)
		{
			HX_STACK_LINE(825)
			Dynamic o = this->parent;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(825)
			if (((o == null()))){
				HX_STACK_LINE(825)
				_g = null();
			}
			else{
				HX_STACK_LINE(825)
				_g = o->__Field(this->parentVariable,true);
			}
		}
		HX_STACK_LINE(825)
		this->updateValue(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateValueFromParent,(void))

Void FlxBar_obj::updateValue( Float newValue){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateValue",0xa537bba3,"flixel.ui.FlxBar.updateValue","flixel/ui/FlxBar.hx",829,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newValue,"newValue")
		HX_STACK_LINE(830)
		if (((newValue > this->max))){
			HX_STACK_LINE(832)
			newValue = this->max;
		}
		HX_STACK_LINE(835)
		if (((newValue < this->min))){
			HX_STACK_LINE(837)
			newValue = this->min;
		}
		HX_STACK_LINE(840)
		this->value = newValue;
		HX_STACK_LINE(842)
		if (((bool((this->value == this->min)) && bool((this->emptyCallback_dyn() != null()))))){
			HX_STACK_LINE(844)
			this->emptyCallback();
		}
		HX_STACK_LINE(847)
		if (((bool((this->value == this->max)) && bool((this->filledCallback_dyn() != null()))))){
			HX_STACK_LINE(849)
			this->filledCallback();
		}
		HX_STACK_LINE(852)
		if (((bool((this->value == this->min)) && bool(this->emptyKill)))){
			HX_STACK_LINE(854)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,updateValue,(void))

Void FlxBar_obj::updateBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateBar",0x52521d85,"flixel.ui.FlxBar.updateBar","flixel/ui/FlxBar.hx",863,0x9c56c8d5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateBar,(void))

Void FlxBar_obj::update( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","update",0xdbe594ee,"flixel.ui.FlxBar.update","flixel/ui/FlxBar.hx",921,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(922)
		if (((this->parent != null()))){
			HX_STACK_LINE(924)
			Dynamic _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(924)
			{
				HX_STACK_LINE(924)
				Dynamic o = this->parent;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(924)
				if (((o == null()))){
					HX_STACK_LINE(924)
					_g = null();
				}
				else{
					HX_STACK_LINE(924)
					_g = o->__Field(this->parentVariable,true);
				}
			}
			HX_STACK_LINE(924)
			if (((_g != this->value))){
				HX_STACK_LINE(926)
				this->updateValueFromParent();
				HX_STACK_LINE(927)
				this->updateBar();
			}
			HX_STACK_LINE(930)
			if (((this->fixedPosition == false))){
				HX_STACK_LINE(932)
				this->set_x((this->parent->__Field(HX_CSTRING("x"),true) + this->positionOffset->x));
				HX_STACK_LINE(933)
				this->set_y((this->parent->__Field(HX_CSTRING("y"),true) + this->positionOffset->y));
			}
		}
		HX_STACK_LINE(937)
		this->super::update();
	}
return null();
}


Float FlxBar_obj::get_percent( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_percent",0x8cbbddd7,"flixel.ui.FlxBar.get_percent","flixel/ui/FlxBar.hx",946,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(954)
	if (((this->value > this->max))){
		HX_STACK_LINE(956)
		return (int)100;
	}
	HX_STACK_LINE(959)
	return ::Math_obj::floor(((Float(this->value) / Float(this->range)) * (int)100));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_percent,return )

Float FlxBar_obj::set_percent( Float newPct){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_percent",0x9728e4e3,"flixel.ui.FlxBar.set_percent","flixel/ui/FlxBar.hx",966,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newPct,"newPct")
	HX_STACK_LINE(967)
	if (((bool((newPct >= (int)0)) && bool((newPct <= (int)100))))){
		HX_STACK_LINE(969)
		this->updateValue((this->pct * newPct));
		HX_STACK_LINE(970)
		this->updateBar();
	}
	HX_STACK_LINE(972)
	return newPct;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_percent,return )

Float FlxBar_obj::set_currentValue( Float newValue){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_currentValue",0x7158bd9a,"flixel.ui.FlxBar.set_currentValue","flixel/ui/FlxBar.hx",981,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(982)
	this->updateValue(newValue);
	HX_STACK_LINE(983)
	this->updateBar();
	HX_STACK_LINE(984)
	return newValue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_currentValue,return )

Float FlxBar_obj::get_currentValue( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_currentValue",0x1b16d026,"flixel.ui.FlxBar.get_currentValue","flixel/ui/FlxBar.hx",992,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(992)
	return this->value;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_currentValue,return )

Void FlxBar_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","draw",0x9cd647a9,"flixel.ui.FlxBar.draw","flixel/ui/FlxBar.hx",997,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(998)
		if (((bool((this->_cachedFrontGraphics == null())) || bool((this->cachedGraphics == null()))))){
			HX_STACK_LINE(1000)
			return null();
		}
		HX_STACK_LINE(1003)
		Float _g = this->get_percent();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1003)
		int _g1 = ::Math_obj::floor(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1003)
		int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1003)
		int percentFrame = ((int)2 * _g2);		HX_STACK_VAR(percentFrame,"percentFrame");
		HX_STACK_LINE(1005)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(1006)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(1007)
		::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(1009)
		{
			HX_STACK_LINE(1009)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1009)
			Array< ::Dynamic > _g11 = this->get_cameras();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1009)
			while((true)){
				HX_STACK_LINE(1009)
				if ((!(((_g3 < _g11->length))))){
					HX_STACK_LINE(1009)
					break;
				}
				HX_STACK_LINE(1009)
				::flixel::FlxCamera camera = _g11->__get(_g3).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(1009)
				++(_g3);
				HX_STACK_LINE(1011)
				if (((  ((!(((bool(!(camera->visible)) || bool(!(camera->exists))))))) ? bool(!(this->isOnScreen(camera))) : bool(true) ))){
					HX_STACK_LINE(1013)
					continue;
				}
				HX_STACK_LINE(1015)
				::flixel::system::layer::DrawStackItem _g31 = camera->getDrawStackItem(this->cachedGraphics,this->isColored,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(1015)
				drawItem = _g31;
				HX_STACK_LINE(1017)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(1018)
				currIndex = drawItem->position;
				HX_STACK_LINE(1020)
				this->_point->set_x((((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x) + this->origin->x));
				HX_STACK_LINE(1021)
				this->_point->set_y((((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y) + this->origin->y));
				HX_STACK_LINE(1023)
				Float csx = (int)1;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(1024)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(1025)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(1026)
				Float csy = (int)1;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(1027)
				Float x1 = (int)0;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(1028)
				Float y1 = (int)0;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(1029)
				Float x2 = (int)0;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(1030)
				Float y2 = (int)0;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(1032)
				if ((!(this->isSimpleRender()))){
					HX_STACK_LINE(1034)
					if ((this->_angleChanged)){
						HX_STACK_LINE(1036)
						Float radians = (-(this->angle) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(1037)
						Float _g4 = ::Math_obj::sin(radians);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1037)
						this->_sinAngle = _g4;
						HX_STACK_LINE(1038)
						Float _g5 = ::Math_obj::cos(radians);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1038)
						this->_cosAngle = _g5;
						HX_STACK_LINE(1039)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(1042)
					csx = (this->_cosAngle * this->scale->x);
					HX_STACK_LINE(1043)
					ssy = (this->_sinAngle * this->scale->y);
					HX_STACK_LINE(1044)
					ssx = (this->_sinAngle * this->scale->x);
					HX_STACK_LINE(1045)
					csy = (this->_cosAngle * this->scale->y);
					HX_STACK_LINE(1047)
					x1 = (this->origin->x - this->_halfWidth);
					HX_STACK_LINE(1048)
					y1 = (this->origin->y - this->_halfHeight);
					HX_STACK_LINE(1049)
					x2 = ((x1 * csx) + (y1 * ssy));
					HX_STACK_LINE(1050)
					y2 = ((-(x1) * ssx) + (y1 * csy));
				}
				HX_STACK_LINE(1054)
				int _g6 = (currIndex)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1054)
				currDrawData[_g6] = (this->_point->x - x2);
				HX_STACK_LINE(1055)
				int _g7 = (currIndex)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1055)
				currDrawData[_g7] = (this->_point->y - y2);
				HX_STACK_LINE(1057)
				int _g8 = (currIndex)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1057)
				currDrawData[_g8] = this->_emptyBarFrameID;
				HX_STACK_LINE(1059)
				int _g9 = (currIndex)++;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1059)
				currDrawData[_g9] = csx;
				HX_STACK_LINE(1060)
				int _g10 = (currIndex)++;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1060)
				currDrawData[_g10] = -(ssx);
				HX_STACK_LINE(1061)
				int _g111 = (currIndex)++;		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(1061)
				currDrawData[_g111] = ssy;
				HX_STACK_LINE(1062)
				int _g12 = (currIndex)++;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(1062)
				currDrawData[_g12] = csy;
				HX_STACK_LINE(1064)
				if ((this->isColored)){
					HX_STACK_LINE(1066)
					int _g13 = (currIndex)++;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(1066)
					currDrawData[_g13] = this->_red;
					HX_STACK_LINE(1067)
					int _g14 = (currIndex)++;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(1067)
					currDrawData[_g14] = this->_green;
					HX_STACK_LINE(1068)
					int _g15 = (currIndex)++;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(1068)
					currDrawData[_g15] = this->_blue;
				}
				HX_STACK_LINE(1070)
				int _g16 = (currIndex)++;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(1070)
				currDrawData[_g16] = this->alpha;
				HX_STACK_LINE(1072)
				drawItem->position = currIndex;
				HX_STACK_LINE(1075)
				::flixel::system::layer::DrawStackItem _g17 = camera->getDrawStackItem(this->_cachedFrontGraphics,this->isColored,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(1075)
				drawItem = _g17;
				HX_STACK_LINE(1077)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(1078)
				currIndex = drawItem->position;
				HX_STACK_LINE(1080)
				if (((percentFrame >= (int)0))){
					HX_STACK_LINE(1082)
					Float currTileX = -(x1);		HX_STACK_VAR(currTileX,"currTileX");
					HX_STACK_LINE(1083)
					Float currTileY = -(y1);		HX_STACK_VAR(currTileY,"currTileY");
					HX_STACK_LINE(1085)
					if ((this->fillHorizontal)){
						HX_STACK_LINE(1087)
						hx::AddEq(currTileX,this->_filledBarFrames->__get(percentFrame));
					}
					else{
						HX_STACK_LINE(1091)
						hx::AddEq(currTileY,this->_filledBarFrames->__get(percentFrame));
					}
					HX_STACK_LINE(1094)
					Float relativeX = ((currTileX * csx) + (currTileY * ssy));		HX_STACK_VAR(relativeX,"relativeX");
					HX_STACK_LINE(1095)
					Float relativeY = ((-(currTileX) * ssx) + (currTileY * csy));		HX_STACK_VAR(relativeY,"relativeY");
					HX_STACK_LINE(1097)
					int _g18 = (currIndex)++;		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(1097)
					currDrawData[_g18] = (this->_point->x + relativeX);
					HX_STACK_LINE(1098)
					int _g19 = (currIndex)++;		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(1098)
					currDrawData[_g19] = (this->_point->y + relativeY);
					HX_STACK_LINE(1100)
					int _g20 = (currIndex)++;		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(1100)
					currDrawData[_g20] = this->_filledBarFrames->__get((percentFrame + (int)1));
					HX_STACK_LINE(1102)
					int _g21 = (currIndex)++;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1102)
					currDrawData[_g21] = csx;
					HX_STACK_LINE(1103)
					int _g22 = (currIndex)++;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(1103)
					currDrawData[_g22] = -(ssx);
					HX_STACK_LINE(1104)
					int _g23 = (currIndex)++;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(1104)
					currDrawData[_g23] = ssy;
					HX_STACK_LINE(1105)
					int _g24 = (currIndex)++;		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(1105)
					currDrawData[_g24] = csy;
					HX_STACK_LINE(1107)
					if ((this->isColored)){
						HX_STACK_LINE(1109)
						int _g25 = (currIndex)++;		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(1109)
						currDrawData[_g25] = this->_red;
						HX_STACK_LINE(1110)
						int _g26 = (currIndex)++;		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(1110)
						currDrawData[_g26] = this->_green;
						HX_STACK_LINE(1111)
						int _g27 = (currIndex)++;		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(1111)
						currDrawData[_g27] = this->_blue;
					}
					HX_STACK_LINE(1113)
					int _g28 = (currIndex)++;		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(1113)
					currDrawData[_g28] = this->alpha;
				}
				HX_STACK_LINE(1116)
				drawItem->position = currIndex;
				HX_STACK_LINE(1119)
				(::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			}
		}
	}
return null();
}


::openfl::display::BitmapData FlxBar_obj::set_pixels( ::openfl::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_pixels",0x3c70e2cf,"flixel.ui.FlxBar.set_pixels","flixel/ui/FlxBar.hx",1126,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(1126)
	return Pixels;
}


bool FlxBar_obj::isSimpleRender( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","isSimpleRender",0x61bbf017,"flixel.ui.FlxBar.isSimpleRender","flixel/ui/FlxBar.hx",1131,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1131)
	return (bool((bool((this->angle == (int)0)) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));
}


Void FlxBar_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateFrameData",0xa3ba5229,"flixel.ui.FlxBar.updateFrameData","flixel/ui/FlxBar.hx",1137,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1138)
		if (((bool((this->cachedGraphics == null())) || bool((this->_cachedFrontGraphics == null()))))){
			HX_STACK_LINE(1140)
			return null();
		}
		HX_STACK_LINE(1143)
		this->_halfWidth = (0.5 * this->barWidth);
		HX_STACK_LINE(1144)
		this->_halfHeight = (0.5 * this->barHeight);
		HX_STACK_LINE(1146)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1146)
		{
			HX_STACK_LINE(1146)
			::flixel::system::layer::TileSheetData _this = this->cachedGraphics->get_tilesheet();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1146)
			::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->barWidth,this->barHeight);		HX_STACK_VAR(tileRect,"tileRect");
			HX_STACK_LINE(1146)
			::openfl::geom::Point point = ::openfl::geom::Point_obj::__new((0.5 * this->barWidth),(0.5 * this->barHeight));		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(1146)
			_g = _this->tileSheet->addTileRectID(tileRect,point);
		}
		HX_STACK_LINE(1146)
		this->_emptyBarFrameID = _g;
		HX_STACK_LINE(1147)
		this->_filledBarFrames = Array_obj< Float >::__new();
		HX_STACK_LINE(1149)
		Float frameRelativePosition;		HX_STACK_VAR(frameRelativePosition,"frameRelativePosition");
		HX_STACK_LINE(1150)
		Float frameX;		HX_STACK_VAR(frameX,"frameX");
		HX_STACK_LINE(1151)
		Float frameY;		HX_STACK_VAR(frameY,"frameY");
		HX_STACK_LINE(1152)
		Float frameWidth = (int)0;		HX_STACK_VAR(frameWidth,"frameWidth");
		HX_STACK_LINE(1153)
		Float frameHeight = (int)0;		HX_STACK_VAR(frameHeight,"frameHeight");
		HX_STACK_LINE(1155)
		{
			HX_STACK_LINE(1155)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1155)
			int _g2 = (int)101;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1155)
			while((true)){
				HX_STACK_LINE(1155)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(1155)
					break;
				}
				HX_STACK_LINE(1155)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1157)
				frameX = (int)0;
				HX_STACK_LINE(1158)
				frameY = (int)0;
				HX_STACK_LINE(1160)
				if (((this->fillDirection == (int)1))){
					HX_STACK_LINE(1162)
					frameWidth = (Float((this->barWidth * i)) / Float((int)100));
					HX_STACK_LINE(1163)
					frameHeight = this->barHeight;
					HX_STACK_LINE(1165)
					this->_filledBarFrames->push((-(this->_halfWidth) + (frameWidth * 0.5)));
				}
				else{
					HX_STACK_LINE(1167)
					if (((this->fillDirection == (int)3))){
						HX_STACK_LINE(1169)
						frameWidth = this->barWidth;
						HX_STACK_LINE(1170)
						frameHeight = (Float((this->barHeight * i)) / Float((int)100));
						HX_STACK_LINE(1172)
						this->_filledBarFrames->push((-(this->_halfHeight) + (frameHeight * 0.5)));
					}
					else{
						HX_STACK_LINE(1174)
						if (((this->fillDirection == (int)4))){
							HX_STACK_LINE(1176)
							frameWidth = this->barWidth;
							HX_STACK_LINE(1177)
							frameHeight = (Float((this->barHeight * i)) / Float((int)100));
							HX_STACK_LINE(1178)
							hx::AddEq(frameY,(this->barHeight - frameHeight));
							HX_STACK_LINE(1180)
							this->_filledBarFrames->push((this->_halfHeight - (0.5 * frameHeight)));
						}
						else{
							HX_STACK_LINE(1182)
							if (((this->fillDirection == (int)2))){
								HX_STACK_LINE(1184)
								frameWidth = (Float((this->barWidth * i)) / Float((int)100));
								HX_STACK_LINE(1185)
								frameHeight = this->barHeight;
								HX_STACK_LINE(1186)
								hx::AddEq(frameX,(this->barWidth - frameWidth));
								HX_STACK_LINE(1188)
								this->_filledBarFrames->push((this->_halfWidth - (0.5 * frameWidth)));
							}
							else{
								HX_STACK_LINE(1190)
								if (((this->fillDirection == (int)5))){
									HX_STACK_LINE(1192)
									frameWidth = (Float((this->barWidth * i)) / Float((int)100));
									HX_STACK_LINE(1193)
									frameHeight = this->barHeight;
									HX_STACK_LINE(1194)
									hx::AddEq(frameX,(0.5 * ((this->barWidth - frameWidth))));
									HX_STACK_LINE(1196)
									this->_filledBarFrames->push((int)0);
								}
								else{
									HX_STACK_LINE(1198)
									if (((this->fillDirection == (int)6))){
										HX_STACK_LINE(1200)
										frameWidth = (Float((this->barWidth * (((int)100 - i)))) / Float((int)100));
										HX_STACK_LINE(1201)
										frameHeight = this->barHeight;
										HX_STACK_LINE(1202)
										hx::AddEq(frameX,(0.5 * ((this->barWidth - frameWidth))));
										HX_STACK_LINE(1204)
										this->_filledBarFrames->push((int)0);
									}
									else{
										HX_STACK_LINE(1206)
										if (((this->fillDirection == (int)7))){
											HX_STACK_LINE(1208)
											frameWidth = this->barWidth;
											HX_STACK_LINE(1209)
											frameHeight = (Float((this->barHeight * i)) / Float((int)100));
											HX_STACK_LINE(1210)
											hx::AddEq(frameY,(0.5 * ((this->barHeight - frameHeight))));
											HX_STACK_LINE(1212)
											this->_filledBarFrames->push((int)0);
										}
										else{
											HX_STACK_LINE(1214)
											if (((this->fillDirection == (int)8))){
												HX_STACK_LINE(1216)
												frameWidth = this->barWidth;
												HX_STACK_LINE(1217)
												frameHeight = (Float((this->barHeight * (((int)100 - i)))) / Float((int)100));
												HX_STACK_LINE(1218)
												hx::AddEq(frameY,(0.5 * ((this->barHeight - frameHeight))));
												HX_STACK_LINE(1220)
												this->_filledBarFrames->push((int)0);
											}
										}
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(1223)
				int _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1223)
				{
					HX_STACK_LINE(1223)
					::flixel::system::layer::TileSheetData _this = this->_cachedFrontGraphics->get_tilesheet();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1223)
					::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::__new(frameX,frameY,frameWidth,frameHeight);		HX_STACK_VAR(tileRect,"tileRect");
					HX_STACK_LINE(1223)
					::openfl::geom::Point point = ::openfl::geom::Point_obj::__new((0.5 * frameWidth),(0.5 * frameHeight));		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(1223)
					_g11 = _this->tileSheet->addTileRectID(tileRect,point);
				}
				HX_STACK_LINE(1223)
				this->_filledBarFrames->push(_g11);
			}
		}
	}
return null();
}


Void FlxBar_obj::setCachedGraphics( ::flixel::util::loaders::CachedGraphics value){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setCachedGraphics",0xa35f0f4a,"flixel.ui.FlxBar.setCachedGraphics","flixel/ui/FlxBar.hx",1231,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1231)
		this->set_cachedGraphics(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,setCachedGraphics,(void))

Void FlxBar_obj::setCachedFrontGraphics( ::flixel::util::loaders::CachedGraphics value){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setCachedFrontGraphics",0x44ca1bb5,"flixel.ui.FlxBar.setCachedFrontGraphics","flixel/ui/FlxBar.hx",1234,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1235)
		if (((bool((this->_cachedFrontGraphics != null())) && bool((this->_cachedFrontGraphics != value))))){
			HX_STACK_LINE(1237)
			::flixel::util::loaders::CachedGraphics _g = this->_cachedFrontGraphics;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1237)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1237)
			_g->set_useCount((_g1 - (int)1));
			HX_STACK_LINE(1237)
			_g1;
		}
		HX_STACK_LINE(1240)
		if (((bool((this->_cachedFrontGraphics != value)) && bool((value != null()))))){
			HX_STACK_LINE(1242)
			::flixel::util::loaders::CachedGraphics _g = value;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1242)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1242)
			_g->set_useCount((_g1 + (int)1));
			HX_STACK_LINE(1242)
			_g1;
		}
		HX_STACK_LINE(1244)
		this->_cachedFrontGraphics = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,setCachedFrontGraphics,(void))

::String FlxBar_obj::toString( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","toString",0x909c22d1,"flixel.ui.FlxBar.toString","flixel/ui/FlxBar.hx",1249,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1251)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1251)
	{
		HX_STACK_LINE(1251)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1251)
		_this->label = HX_CSTRING("min");
		HX_STACK_LINE(1251)
		_this->value = this->min;
		HX_STACK_LINE(1251)
		_g = _this;
	}
	HX_STACK_LINE(1252)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1252)
	{
		HX_STACK_LINE(1252)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1252)
		_this->label = HX_CSTRING("max");
		HX_STACK_LINE(1252)
		_this->value = this->max;
		HX_STACK_LINE(1252)
		_g1 = _this;
	}
	HX_STACK_LINE(1253)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1253)
	{
		HX_STACK_LINE(1253)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1253)
		_this->label = HX_CSTRING("range");
		HX_STACK_LINE(1253)
		_this->value = this->range;
		HX_STACK_LINE(1253)
		_g2 = _this;
	}
	HX_STACK_LINE(1254)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1254)
	{
		HX_STACK_LINE(1254)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1254)
		_this->label = HX_CSTRING("%");
		HX_STACK_LINE(1254)
		_this->value = this->pct;
		HX_STACK_LINE(1254)
		_g3 = _this;
	}
	HX_STACK_LINE(1255)
	::flixel::util::LabelValuePair _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1255)
	{
		HX_STACK_LINE(1255)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1255)
		_this->label = HX_CSTRING("px/%");
		HX_STACK_LINE(1255)
		_this->value = this->pxPerPercent;
		HX_STACK_LINE(1255)
		_g4 = _this;
	}
	HX_STACK_LINE(1256)
	::flixel::util::LabelValuePair _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1256)
	{
		HX_STACK_LINE(1256)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1256)
		_this->label = HX_CSTRING("value");
		HX_STACK_LINE(1256)
		_this->value = this->value;
		HX_STACK_LINE(1256)
		_g5 = _this;
	}
	HX_STACK_LINE(1250)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1250)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g6);
}


int FlxBar_obj::FILL_LEFT_TO_RIGHT;

int FlxBar_obj::FILL_RIGHT_TO_LEFT;

int FlxBar_obj::FILL_TOP_TO_BOTTOM;

int FlxBar_obj::FILL_BOTTOM_TO_TOP;

int FlxBar_obj::FILL_HORIZONTAL_INSIDE_OUT;

int FlxBar_obj::FILL_HORIZONTAL_OUTSIDE_IN;

int FlxBar_obj::FILL_VERTICAL_INSIDE_OUT;

int FlxBar_obj::FILL_VERTICAL_OUTSIDE_IN;

::String FlxBar_obj::FRAMES_POSITION_HORIZONTAL;

::String FlxBar_obj::FRAMES_POSITION_VERTICAL;

int FlxBar_obj::BAR_FILLED;

int FlxBar_obj::BAR_GRADIENT;

int FlxBar_obj::BAR_IMAGE;


FlxBar_obj::FlxBar_obj()
{
}

void FlxBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBar);
	HX_MARK_MEMBER_NAME(barType,"barType");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(parentVariable,"parentVariable");
	HX_MARK_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_MARK_MEMBER_NAME(positionOffset,"positionOffset");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(pct,"pct");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_MARK_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_MARK_MEMBER_NAME(emptyBar,"emptyBar");
	HX_MARK_MEMBER_NAME(emptyBarRect,"emptyBarRect");
	HX_MARK_MEMBER_NAME(emptyBarPoint,"emptyBarPoint");
	HX_MARK_MEMBER_NAME(emptyKill,"emptyKill");
	HX_MARK_MEMBER_NAME(zeroOffset,"zeroOffset");
	HX_MARK_MEMBER_NAME(filledCallback,"filledCallback");
	HX_MARK_MEMBER_NAME(filledBar,"filledBar");
	HX_MARK_MEMBER_NAME(filledBarRect,"filledBarRect");
	HX_MARK_MEMBER_NAME(filledBarPoint,"filledBarPoint");
	HX_MARK_MEMBER_NAME(fillDirection,"fillDirection");
	HX_MARK_MEMBER_NAME(fillHorizontal,"fillHorizontal");
	HX_MARK_MEMBER_NAME(_emptyBarFrameID,"_emptyBarFrameID");
	HX_MARK_MEMBER_NAME(_filledBarFrames,"_filledBarFrames");
	HX_MARK_MEMBER_NAME(_framesPosition,"_framesPosition");
	HX_MARK_MEMBER_NAME(_cachedFrontGraphics,"_cachedFrontGraphics");
	HX_MARK_MEMBER_NAME(_frontRegion,"_frontRegion");
	HX_MARK_MEMBER_NAME(stats,"stats");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(barType,"barType");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(parentVariable,"parentVariable");
	HX_VISIT_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_VISIT_MEMBER_NAME(positionOffset,"positionOffset");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(pct,"pct");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_VISIT_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_VISIT_MEMBER_NAME(emptyBar,"emptyBar");
	HX_VISIT_MEMBER_NAME(emptyBarRect,"emptyBarRect");
	HX_VISIT_MEMBER_NAME(emptyBarPoint,"emptyBarPoint");
	HX_VISIT_MEMBER_NAME(emptyKill,"emptyKill");
	HX_VISIT_MEMBER_NAME(zeroOffset,"zeroOffset");
	HX_VISIT_MEMBER_NAME(filledCallback,"filledCallback");
	HX_VISIT_MEMBER_NAME(filledBar,"filledBar");
	HX_VISIT_MEMBER_NAME(filledBarRect,"filledBarRect");
	HX_VISIT_MEMBER_NAME(filledBarPoint,"filledBarPoint");
	HX_VISIT_MEMBER_NAME(fillDirection,"fillDirection");
	HX_VISIT_MEMBER_NAME(fillHorizontal,"fillHorizontal");
	HX_VISIT_MEMBER_NAME(_emptyBarFrameID,"_emptyBarFrameID");
	HX_VISIT_MEMBER_NAME(_filledBarFrames,"_filledBarFrames");
	HX_VISIT_MEMBER_NAME(_framesPosition,"_framesPosition");
	HX_VISIT_MEMBER_NAME(_cachedFrontGraphics,"_cachedFrontGraphics");
	HX_VISIT_MEMBER_NAME(_frontRegion,"_frontRegion");
	HX_VISIT_MEMBER_NAME(stats,"stats");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pct") ) { return pct; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { return range; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"stats") ) { return inCallProp ? get_stats() : stats; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barType") ) { return barType; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"percent") ) { return get_percent(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { return barWidth; }
		if (HX_FIELD_EQ(inName,"emptyBar") ) { return emptyBar; }
		if (HX_FIELD_EQ(inName,"setRange") ) { return setRange_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { return barHeight; }
		if (HX_FIELD_EQ(inName,"emptyKill") ) { return emptyKill; }
		if (HX_FIELD_EQ(inName,"filledBar") ) { return filledBar; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stats") ) { return get_stats_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBar") ) { return updateBar_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zeroOffset") ) { return zeroOffset; }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackParent") ) { return trackParent_dyn(); }
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { return get_killOnEmpty(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { return pxPerPercent; }
		if (HX_FIELD_EQ(inName,"emptyBarRect") ) { return emptyBarRect; }
		if (HX_FIELD_EQ(inName,"_frontRegion") ) { return _frontRegion; }
		if (HX_FIELD_EQ(inName,"setCallbacks") ) { return setCallbacks_dyn(); }
		if (HX_FIELD_EQ(inName,"currentValue") ) { return get_currentValue(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { return fixedPosition; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { return emptyCallback; }
		if (HX_FIELD_EQ(inName,"emptyBarPoint") ) { return emptyBarPoint; }
		if (HX_FIELD_EQ(inName,"filledBarRect") ) { return filledBarRect; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { return fillDirection; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parentVariable") ) { return parentVariable; }
		if (HX_FIELD_EQ(inName,"positionOffset") ) { return positionOffset; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { return filledCallback; }
		if (HX_FIELD_EQ(inName,"filledBarPoint") ) { return filledBarPoint; }
		if (HX_FIELD_EQ(inName,"fillHorizontal") ) { return fillHorizontal; }
		if (HX_FIELD_EQ(inName,"createImageBar") ) { return createImageBar_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return isSimpleRender_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_framesPosition") ) { return _framesPosition; }
		if (HX_FIELD_EQ(inName,"set_killOnEmpty") ) { return set_killOnEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_killOnEmpty") ) { return get_killOnEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"createFilledBar") ) { return createFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_emptyBarFrameID") ) { return _emptyBarFrameID; }
		if (HX_FIELD_EQ(inName,"_filledBarFrames") ) { return _filledBarFrames; }
		if (HX_FIELD_EQ(inName,"setFillDirection") ) { return setFillDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentValue") ) { return set_currentValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentValue") ) { return get_currentValue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBar") ) { return createGradientBar_dyn(); }
		if (HX_FIELD_EQ(inName,"setCachedGraphics") ) { return setCachedGraphics_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopTrackingParent") ) { return stopTrackingParent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedFrontGraphics") ) { return _cachedFrontGraphics; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateValueFromParent") ) { return updateValueFromParent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setCachedFrontGraphics") ) { return setCachedFrontGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pct") ) { pct=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barType") ) { barType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyBar") ) { emptyBar=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyKill") ) { emptyKill=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledBar") ) { filledBar=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zeroOffset") ) { zeroOffset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { return set_killOnEmpty(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { pxPerPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyBarRect") ) { emptyBarRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frontRegion") ) { _frontRegion=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentValue") ) { return set_currentValue(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { fixedPosition=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { emptyCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyBarPoint") ) { emptyBarPoint=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledBarRect") ) { filledBarRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { fillDirection=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parentVariable") ) { parentVariable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionOffset") ) { positionOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { filledCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledBarPoint") ) { filledBarPoint=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillHorizontal") ) { fillHorizontal=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_framesPosition") ) { _framesPosition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_emptyBarFrameID") ) { _emptyBarFrameID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarFrames") ) { _filledBarFrames=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedFrontGraphics") ) { _cachedFrontGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("barType"));
	outFields->push(HX_CSTRING("barWidth"));
	outFields->push(HX_CSTRING("barHeight"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("parentVariable"));
	outFields->push(HX_CSTRING("fixedPosition"));
	outFields->push(HX_CSTRING("positionOffset"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("range"));
	outFields->push(HX_CSTRING("pct"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("pxPerPercent"));
	outFields->push(HX_CSTRING("emptyBar"));
	outFields->push(HX_CSTRING("emptyBarRect"));
	outFields->push(HX_CSTRING("emptyBarPoint"));
	outFields->push(HX_CSTRING("emptyKill"));
	outFields->push(HX_CSTRING("zeroOffset"));
	outFields->push(HX_CSTRING("filledBar"));
	outFields->push(HX_CSTRING("filledBarRect"));
	outFields->push(HX_CSTRING("filledBarPoint"));
	outFields->push(HX_CSTRING("fillDirection"));
	outFields->push(HX_CSTRING("fillHorizontal"));
	outFields->push(HX_CSTRING("_emptyBarFrameID"));
	outFields->push(HX_CSTRING("_filledBarFrames"));
	outFields->push(HX_CSTRING("_framesPosition"));
	outFields->push(HX_CSTRING("_cachedFrontGraphics"));
	outFields->push(HX_CSTRING("_frontRegion"));
	outFields->push(HX_CSTRING("killOnEmpty"));
	outFields->push(HX_CSTRING("stats"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("currentValue"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FILL_LEFT_TO_RIGHT"),
	HX_CSTRING("FILL_RIGHT_TO_LEFT"),
	HX_CSTRING("FILL_TOP_TO_BOTTOM"),
	HX_CSTRING("FILL_BOTTOM_TO_TOP"),
	HX_CSTRING("FILL_HORIZONTAL_INSIDE_OUT"),
	HX_CSTRING("FILL_HORIZONTAL_OUTSIDE_IN"),
	HX_CSTRING("FILL_VERTICAL_INSIDE_OUT"),
	HX_CSTRING("FILL_VERTICAL_OUTSIDE_IN"),
	HX_CSTRING("FRAMES_POSITION_HORIZONTAL"),
	HX_CSTRING("FRAMES_POSITION_VERTICAL"),
	HX_CSTRING("BAR_FILLED"),
	HX_CSTRING("BAR_GRADIENT"),
	HX_CSTRING("BAR_IMAGE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBar_obj,barType),HX_CSTRING("barType")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barWidth),HX_CSTRING("barWidth")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barHeight),HX_CSTRING("barHeight")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,parent),HX_CSTRING("parent")},
	{hx::fsString,(int)offsetof(FlxBar_obj,parentVariable),HX_CSTRING("parentVariable")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,fixedPosition),HX_CSTRING("fixedPosition")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxBar_obj,positionOffset),HX_CSTRING("positionOffset")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,min),HX_CSTRING("min")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,max),HX_CSTRING("max")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,range),HX_CSTRING("range")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pct),HX_CSTRING("pct")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,value),HX_CSTRING("value")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pxPerPercent),HX_CSTRING("pxPerPercent")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,emptyCallback),HX_CSTRING("emptyCallback")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,emptyBar),HX_CSTRING("emptyBar")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,emptyBarRect),HX_CSTRING("emptyBarRect")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(FlxBar_obj,emptyBarPoint),HX_CSTRING("emptyBarPoint")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,emptyKill),HX_CSTRING("emptyKill")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(FlxBar_obj,zeroOffset),HX_CSTRING("zeroOffset")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,filledCallback),HX_CSTRING("filledCallback")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,filledBar),HX_CSTRING("filledBar")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,filledBarRect),HX_CSTRING("filledBarRect")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(FlxBar_obj,filledBarPoint),HX_CSTRING("filledBarPoint")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,fillDirection),HX_CSTRING("fillDirection")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,fillHorizontal),HX_CSTRING("fillHorizontal")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,_emptyBarFrameID),HX_CSTRING("_emptyBarFrameID")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBar_obj,_filledBarFrames),HX_CSTRING("_filledBarFrames")},
	{hx::fsString,(int)offsetof(FlxBar_obj,_framesPosition),HX_CSTRING("_framesPosition")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(FlxBar_obj,_cachedFrontGraphics),HX_CSTRING("_cachedFrontGraphics")},
	{hx::fsObject /*::flixel::system::layer::Region*/ ,(int)offsetof(FlxBar_obj,_frontRegion),HX_CSTRING("_frontRegion")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxBar_obj,stats),HX_CSTRING("stats")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("barType"),
	HX_CSTRING("barWidth"),
	HX_CSTRING("barHeight"),
	HX_CSTRING("parent"),
	HX_CSTRING("parentVariable"),
	HX_CSTRING("fixedPosition"),
	HX_CSTRING("positionOffset"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("range"),
	HX_CSTRING("pct"),
	HX_CSTRING("value"),
	HX_CSTRING("pxPerPercent"),
	HX_CSTRING("emptyCallback"),
	HX_CSTRING("emptyBar"),
	HX_CSTRING("emptyBarRect"),
	HX_CSTRING("emptyBarPoint"),
	HX_CSTRING("emptyKill"),
	HX_CSTRING("zeroOffset"),
	HX_CSTRING("filledCallback"),
	HX_CSTRING("filledBar"),
	HX_CSTRING("filledBarRect"),
	HX_CSTRING("filledBarPoint"),
	HX_CSTRING("fillDirection"),
	HX_CSTRING("fillHorizontal"),
	HX_CSTRING("_emptyBarFrameID"),
	HX_CSTRING("_filledBarFrames"),
	HX_CSTRING("_framesPosition"),
	HX_CSTRING("_cachedFrontGraphics"),
	HX_CSTRING("_frontRegion"),
	HX_CSTRING("destroy"),
	HX_CSTRING("trackParent"),
	HX_CSTRING("setParent"),
	HX_CSTRING("stopTrackingParent"),
	HX_CSTRING("setCallbacks"),
	HX_CSTRING("set_killOnEmpty"),
	HX_CSTRING("get_killOnEmpty"),
	HX_CSTRING("setRange"),
	HX_CSTRING("stats"),
	HX_CSTRING("get_stats"),
	HX_CSTRING("createFilledBar"),
	HX_CSTRING("createGradientBar"),
	HX_CSTRING("createImageBar"),
	HX_CSTRING("setFillDirection"),
	HX_CSTRING("updateValueFromParent"),
	HX_CSTRING("updateValue"),
	HX_CSTRING("updateBar"),
	HX_CSTRING("update"),
	HX_CSTRING("get_percent"),
	HX_CSTRING("set_percent"),
	HX_CSTRING("set_currentValue"),
	HX_CSTRING("get_currentValue"),
	HX_CSTRING("draw"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("isSimpleRender"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("setCachedGraphics"),
	HX_CSTRING("setCachedFrontGraphics"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_LEFT_TO_RIGHT,"FILL_LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_RIGHT_TO_LEFT,"FILL_RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_TOP_TO_BOTTOM,"FILL_TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_BOTTOM_TO_TOP,"FILL_BOTTOM_TO_TOP");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_INSIDE_OUT,"FILL_HORIZONTAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_OUTSIDE_IN,"FILL_HORIZONTAL_OUTSIDE_IN");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_INSIDE_OUT,"FILL_VERTICAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_OUTSIDE_IN,"FILL_VERTICAL_OUTSIDE_IN");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_HORIZONTAL,"FRAMES_POSITION_HORIZONTAL");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_VERTICAL,"FRAMES_POSITION_VERTICAL");
	HX_MARK_MEMBER_NAME(FlxBar_obj::BAR_FILLED,"BAR_FILLED");
	HX_MARK_MEMBER_NAME(FlxBar_obj::BAR_GRADIENT,"BAR_GRADIENT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::BAR_IMAGE,"BAR_IMAGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_LEFT_TO_RIGHT,"FILL_LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_RIGHT_TO_LEFT,"FILL_RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_TOP_TO_BOTTOM,"FILL_TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_BOTTOM_TO_TOP,"FILL_BOTTOM_TO_TOP");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_INSIDE_OUT,"FILL_HORIZONTAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_OUTSIDE_IN,"FILL_HORIZONTAL_OUTSIDE_IN");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_INSIDE_OUT,"FILL_VERTICAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_OUTSIDE_IN,"FILL_VERTICAL_OUTSIDE_IN");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_HORIZONTAL,"FRAMES_POSITION_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_VERTICAL,"FRAMES_POSITION_VERTICAL");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::BAR_FILLED,"BAR_FILLED");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::BAR_GRADIENT,"BAR_GRADIENT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::BAR_IMAGE,"BAR_IMAGE");
};

#endif

Class FlxBar_obj::__mClass;

void FlxBar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxBar"), hx::TCanCast< FlxBar_obj> ,sStaticFields,sMemberFields,
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

void FlxBar_obj::__boot()
{
	FILL_LEFT_TO_RIGHT= (int)1;
	FILL_RIGHT_TO_LEFT= (int)2;
	FILL_TOP_TO_BOTTOM= (int)3;
	FILL_BOTTOM_TO_TOP= (int)4;
	FILL_HORIZONTAL_INSIDE_OUT= (int)5;
	FILL_HORIZONTAL_OUTSIDE_IN= (int)6;
	FILL_VERTICAL_INSIDE_OUT= (int)7;
	FILL_VERTICAL_OUTSIDE_IN= (int)8;
	FRAMES_POSITION_HORIZONTAL= HX_CSTRING("horizontal");
	FRAMES_POSITION_VERTICAL= HX_CSTRING("vertical");
	BAR_FILLED= (int)1;
	BAR_GRADIENT= (int)2;
	BAR_IMAGE= (int)3;
}

} // end namespace flixel
} // end namespace ui
