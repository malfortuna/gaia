#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxList
#include <flixel/system/FlxList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_StatsGraph
#include <flixel/system/debug/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Stats_GraphicMaximizeButton
#include <flixel/system/debug/_Stats/GraphicMaximizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Stats_GraphicMinimizeButton
#include <flixel/system/debug/_Stats/GraphicMinimizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Stats_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.Stats","new",0x4140b8e9,"flixel.system.debug.Stats.new","flixel/system/debug/Stats.hx",28,0xa5a2e9c8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(94)
	this->_drawCallsMarker = (int)0;
	HX_STACK_LINE(92)
	this->drawCallsCount = (int)0;
	HX_STACK_LINE(87)
	this->_paused = true;
	HX_STACK_LINE(85)
	this->_activeObjectMarker = (int)0;
	HX_STACK_LINE(82)
	this->_visibleObjectMarker = (int)0;
	HX_STACK_LINE(79)
	this->_drawMarker = (int)0;
	HX_STACK_LINE(76)
	this->_updateMarker = (int)0;
	HX_STACK_LINE(73)
	this->_updateTimer = (int)0;
	HX_STACK_LINE(72)
	this->_lastTime = (int)0;
	HX_STACK_LINE(70)
	this->drawTime = (int)0;
	HX_STACK_LINE(69)
	this->updateTime = (int)0;
	HX_STACK_LINE(68)
	this->activeCount = (int)0;
	HX_STACK_LINE(67)
	this->visibleCount = (int)0;
	HX_STACK_LINE(66)
	this->flashPlayerFramerate = (int)0;
	HX_STACK_LINE(55)
	this->_itvTime = (int)0;
	HX_STACK_LINE(102)
	::flixel::system::debug::GraphicStats _g = ::flixel::system::debug::GraphicStats_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(102)
	super::__construct(HX_CSTRING("stats"),_g,(int)0,(int)0,false,null(),null());
	HX_STACK_LINE(104)
	this->minSize->y = (int)195;
	HX_STACK_LINE(105)
	this->resize((int)160,(int)195);
	HX_STACK_LINE(107)
	this->start();
	HX_STACK_LINE(109)
	this->_update = Array_obj< int >::__new();
	HX_STACK_LINE(110)
	this->_draw = Array_obj< int >::__new();
	HX_STACK_LINE(111)
	this->_activeObject = Array_obj< int >::__new();
	HX_STACK_LINE(112)
	this->_visibleObject = Array_obj< int >::__new();
	HX_STACK_LINE(115)
	this->_drawCalls = Array_obj< int >::__new();
	HX_STACK_LINE(118)
	int gutter = (int)5;		HX_STACK_VAR(gutter,"gutter");
	HX_STACK_LINE(119)
	int graphX = gutter;		HX_STACK_VAR(graphX,"graphX");
	HX_STACK_LINE(120)
	Float _g1 = this->_header->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(120)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(120)
	int graphY = (_g2 + gutter);		HX_STACK_VAR(graphY,"graphY");
	HX_STACK_LINE(121)
	int graphHeight = (int)40;		HX_STACK_VAR(graphHeight,"graphHeight");
	HX_STACK_LINE(122)
	int graphWidth = (int)140;		HX_STACK_VAR(graphWidth,"graphWidth");
	HX_STACK_LINE(124)
	::flixel::system::debug::StatsGraph _g3 = ::flixel::system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-6881536,HX_CSTRING("fps"),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(124)
	this->fpsGraph = _g3;
	HX_STACK_LINE(125)
	this->addChild(this->fpsGraph);
	HX_STACK_LINE(126)
	this->fpsGraph->maxValue = ::flixel::FlxG_obj::drawFramerate;
	HX_STACK_LINE(127)
	this->fpsGraph->minValue = (int)0;
	HX_STACK_LINE(129)
	Float _g4 = this->_header->get_height();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(129)
	int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(129)
	int _g6 = (_g5 + graphHeight);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(129)
	int _g7 = (_g6 + (int)20);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(129)
	graphY = _g7;
	HX_STACK_LINE(131)
	::flixel::system::debug::StatsGraph _g8 = ::flixel::system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-16737025,HX_CSTRING("MB"),null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(131)
	this->memoryGraph = _g8;
	HX_STACK_LINE(132)
	this->addChild(this->memoryGraph);
	HX_STACK_LINE(134)
	Float _g9 = this->_header->get_height();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(134)
	int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(134)
	int _g11 = (_g10 + gutter);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(134)
	graphY = _g11;
	HX_STACK_LINE(135)
	hx::AddEq(graphX,((gutter + graphWidth) + (int)20));
	HX_STACK_LINE(136)
	hx::SubEq(graphWidth,(int)10);
	HX_STACK_LINE(138)
	::flixel::system::debug::StatsGraph _g12 = ::flixel::system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-2305024,HX_CSTRING("ms"),(int)35,HX_CSTRING("Update"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(138)
	this->updateTimeGraph = _g12;
	HX_STACK_LINE(139)
	this->updateTimeGraph->set_visible(false);
	HX_STACK_LINE(140)
	this->addChild(this->updateTimeGraph);
	HX_STACK_LINE(142)
	Float _g13 = this->_header->get_height();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(142)
	int _g14 = ::Std_obj::_int(_g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(142)
	int _g15 = (_g14 + graphHeight);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(142)
	int _g16 = (_g15 + (int)20);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(142)
	graphY = _g16;
	HX_STACK_LINE(144)
	::flixel::system::debug::StatsGraph _g17 = ::flixel::system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-4784128,HX_CSTRING("ms"),(int)35,HX_CSTRING("Draw"));		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(144)
	this->drawTimeGraph = _g17;
	HX_STACK_LINE(145)
	this->drawTimeGraph->set_visible(false);
	HX_STACK_LINE(146)
	this->addChild(this->drawTimeGraph);
	HX_STACK_LINE(148)
	::openfl::text::TextField _g18 = ::flixel::system::debug::DebuggerUtil_obj::createTextField(gutter,((graphHeight * (int)2) + (int)45),(int)-1426063361,(int)11);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(148)
	::openfl::text::TextField _g19 = this->_leftTextField = _g18;		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(148)
	this->addChild(_g19);
	HX_STACK_LINE(149)
	::openfl::text::TextField _g20 = ::flixel::system::debug::DebuggerUtil_obj::createTextField((gutter + (int)70),((graphHeight * (int)2) + (int)45),(int)-1,(int)11);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(149)
	::openfl::text::TextField _g21 = this->_rightTextField = _g20;		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(149)
	this->addChild(_g21);
	HX_STACK_LINE(151)
	bool _g22 = this->_rightTextField->set_multiline(true);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(151)
	this->_leftTextField->set_multiline(_g22);
	HX_STACK_LINE(152)
	bool _g23 = this->_rightTextField->set_wordWrap(true);		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(152)
	this->_leftTextField->set_wordWrap(_g23);
	HX_STACK_LINE(154)
	this->_leftTextField->set_text(HX_CSTRING("Update: \nDraw:\nDrawTiles:\nQuadTrees: \nLists:"));
	HX_STACK_LINE(156)
	::flixel::system::debug::_Stats::GraphicMaximizeButton _g24 = ::flixel::system::debug::_Stats::GraphicMaximizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(156)
	::flixel::system::ui::FlxSystemButton _g25 = ::flixel::system::ui::FlxSystemButton_obj::__new(_g24,this->toggleSize_dyn(),null());		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(156)
	this->_toggleSizeButton = _g25;
	HX_STACK_LINE(157)
	this->_toggleSizeButton->set_alpha(0.8);
	HX_STACK_LINE(158)
	this->addChild(this->_toggleSizeButton);
	HX_STACK_LINE(160)
	this->updateSize();
}
;
	return null();
}

//Stats_obj::~Stats_obj() { }

Dynamic Stats_obj::__CreateEmpty() { return  new Stats_obj; }
hx::ObjectPtr< Stats_obj > Stats_obj::__new()
{  hx::ObjectPtr< Stats_obj > result = new Stats_obj();
	result->__construct();
	return result;}

Dynamic Stats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stats_obj > result = new Stats_obj();
	result->__construct();
	return result;}

Void Stats_obj::start( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","start",0x886a512b,"flixel.system.debug.Stats.start","flixel/system/debug/Stats.hx",168,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		if ((this->_paused)){
			HX_STACK_LINE(170)
			this->_paused = false;
			HX_STACK_LINE(171)
			int _g = this->_itvTime = ::flixel::FlxG_obj::game->ticks;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			this->_initTime = _g;
			HX_STACK_LINE(172)
			int _g1 = this->_frameCount = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(172)
			this->_totalCount = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,start,(void))

Void Stats_obj::stop( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","stop",0xdaba7f59,"flixel.system.debug.Stats.stop","flixel/system/debug/Stats.hx",181,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		this->_paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,stop,(void))

Void Stats_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","destroy",0x23ec8e03,"flixel.system.debug.Stats.destroy","flixel/system/debug/Stats.hx",188,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		if (((this->fpsGraph != null()))){
			HX_STACK_LINE(191)
			this->fpsGraph->destroy();
			HX_STACK_LINE(192)
			this->removeChild(this->fpsGraph);
		}
		HX_STACK_LINE(194)
		this->fpsGraph = null();
		HX_STACK_LINE(196)
		if (((this->memoryGraph != null()))){
			HX_STACK_LINE(198)
			this->removeChild(this->memoryGraph);
		}
		HX_STACK_LINE(200)
		this->memoryGraph = null();
		HX_STACK_LINE(202)
		if (((this->_leftTextField != null()))){
			HX_STACK_LINE(204)
			this->removeChild(this->_leftTextField);
		}
		HX_STACK_LINE(206)
		this->_leftTextField = null();
		HX_STACK_LINE(208)
		if (((this->_rightTextField != null()))){
			HX_STACK_LINE(210)
			this->removeChild(this->_rightTextField);
		}
		HX_STACK_LINE(212)
		this->_rightTextField = null();
		HX_STACK_LINE(214)
		this->_update = null();
		HX_STACK_LINE(215)
		this->_draw = null();
		HX_STACK_LINE(216)
		this->_activeObject = null();
		HX_STACK_LINE(217)
		this->_visibleObject = null();
		HX_STACK_LINE(220)
		this->_drawCalls = null();
		HX_STACK_LINE(223)
		this->super::destroy();
	}
return null();
}


Void Stats_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","update",0x55a7d920,"flixel.system.debug.Stats.update","flixel/system/debug/Stats.hx",231,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		if ((this->_paused)){
			HX_STACK_LINE(234)
			return null();
		}
		HX_STACK_LINE(236)
		int time = this->_currentTime = ::flixel::FlxG_obj::game->ticks;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(238)
		int elapsed = (time - this->_lastTime);		HX_STACK_VAR(elapsed,"elapsed");
		HX_STACK_LINE(240)
		if (((elapsed > (int)250))){
			HX_STACK_LINE(242)
			elapsed = (int)250;
		}
		HX_STACK_LINE(244)
		this->_lastTime = time;
		HX_STACK_LINE(246)
		hx::AddEq(this->_updateTimer,elapsed);
		HX_STACK_LINE(248)
		(this->_frameCount)++;
		HX_STACK_LINE(249)
		(this->_totalCount)++;
		HX_STACK_LINE(251)
		if (((this->_updateTimer > (int)250))){
			HX_STACK_LINE(253)
			this->fpsGraph->update((Float(this->_frameCount) / Float(((Float(((this->_currentTime - this->_itvTime))) / Float((int)1000))))),(Float(this->_totalCount) / Float(((Float(((this->_currentTime - this->_initTime))) / Float((int)1000))))));
			HX_STACK_LINE(254)
			int _g = ::openfl::system::System_obj::get_totalMemory();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			Float _g1 = (Float(_g) / Float((int)1024));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			Float _g2 = (Float(_g1) / Float((int)1000));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(254)
			this->memoryGraph->update(_g2,null());
			HX_STACK_LINE(255)
			this->updateTexts();
			HX_STACK_LINE(257)
			this->_frameCount = (int)0;
			HX_STACK_LINE(258)
			this->_itvTime = this->_currentTime;
			HX_STACK_LINE(260)
			this->updateTime = (int)0;
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(261)
				int _g3 = this->_updateMarker;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(261)
				while((true)){
					HX_STACK_LINE(261)
					if ((!(((_g11 < _g3))))){
						HX_STACK_LINE(261)
						break;
					}
					HX_STACK_LINE(261)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(263)
					hx::AddEq(this->updateTime,this->_update->__get(i));
				}
			}
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(266)
				int _g3 = this->_activeObjectMarker;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(266)
				while((true)){
					HX_STACK_LINE(266)
					if ((!(((_g11 < _g3))))){
						HX_STACK_LINE(266)
						break;
					}
					HX_STACK_LINE(266)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(268)
					hx::AddEq(this->activeCount,this->_activeObject->__get(i));
				}
			}
			HX_STACK_LINE(270)
			int _g3 = ::Std_obj::_int((Float(this->activeCount) / Float(this->_activeObjectMarker)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(270)
			this->activeCount = _g3;
			HX_STACK_LINE(272)
			this->drawTime = (int)0;
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(273)
				int _g4 = this->_drawMarker;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(273)
				while((true)){
					HX_STACK_LINE(273)
					if ((!(((_g11 < _g4))))){
						HX_STACK_LINE(273)
						break;
					}
					HX_STACK_LINE(273)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(275)
					hx::AddEq(this->drawTime,this->_draw->__get(i));
				}
			}
			HX_STACK_LINE(278)
			{
				HX_STACK_LINE(278)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(278)
				int _g4 = this->_visibleObjectMarker;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(278)
				while((true)){
					HX_STACK_LINE(278)
					if ((!(((_g11 < _g4))))){
						HX_STACK_LINE(278)
						break;
					}
					HX_STACK_LINE(278)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(280)
					hx::AddEq(this->visibleCount,this->_visibleObject->__get(i));
				}
			}
			HX_STACK_LINE(282)
			int _g4 = ::Std_obj::_int((Float(this->visibleCount) / Float(this->_visibleObjectMarker)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(282)
			this->visibleCount = _g4;
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(285)
				int _g5 = this->_drawCallsMarker;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(285)
				while((true)){
					HX_STACK_LINE(285)
					if ((!(((_g11 < _g5))))){
						HX_STACK_LINE(285)
						break;
					}
					HX_STACK_LINE(285)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(287)
					hx::AddEq(this->drawCallsCount,this->_drawCalls->__get(i));
				}
			}
			HX_STACK_LINE(289)
			int _g5 = ::Std_obj::_int((Float(this->drawCallsCount) / Float(this->_drawCallsMarker)));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(289)
			this->drawCallsCount = _g5;
			HX_STACK_LINE(292)
			this->_updateMarker = (int)0;
			HX_STACK_LINE(293)
			this->_drawMarker = (int)0;
			HX_STACK_LINE(294)
			this->_activeObjectMarker = (int)0;
			HX_STACK_LINE(295)
			this->_visibleObjectMarker = (int)0;
			HX_STACK_LINE(297)
			this->_drawCallsMarker = (int)0;
			HX_STACK_LINE(300)
			hx::SubEq(this->_updateTimer,(int)250);
		}
	}
return null();
}


Void Stats_obj::updateTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","updateTexts",0xaa77cde6,"flixel.system.debug.Stats.updateTexts","flixel/system/debug/Stats.hx",305,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		Float updTime = ::flixel::util::FlxMath_obj::roundDecimal((Float(this->updateTime) / Float(this->_updateMarker)),(int)1);		HX_STACK_VAR(updTime,"updTime");
		HX_STACK_LINE(307)
		Float drwTime = ::flixel::util::FlxMath_obj::roundDecimal((Float(this->drawTime) / Float(this->_drawMarker)),(int)1);		HX_STACK_VAR(drwTime,"drwTime");
		HX_STACK_LINE(309)
		this->drawTimeGraph->update(drwTime,null());
		HX_STACK_LINE(310)
		this->updateTimeGraph->update(updTime,null());
		HX_STACK_LINE(312)
		this->_rightTextField->set_text(((((((((((((this->activeCount + HX_CSTRING(" (")) + updTime) + HX_CSTRING("ms)\n")) + this->visibleCount) + HX_CSTRING(" (")) + drwTime) + HX_CSTRING("ms)\n")) + this->drawCallsCount) + HX_CSTRING("\n")) + ::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES) + HX_CSTRING("\n")) + ::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,updateTexts,(void))

Float Stats_obj::currentFps( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","currentFps",0x0f27b7c7,"flixel.system.debug.Stats.currentFps","flixel/system/debug/Stats.hx",326,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	return (Float(this->_frameCount) / Float(((Float(((this->_currentTime - this->_itvTime))) / Float((int)1000)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentFps,return )

Float Stats_obj::averageFps( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","averageFps",0xceceb123,"flixel.system.debug.Stats.averageFps","flixel/system/debug/Stats.hx",334,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	return (Float(this->_totalCount) / Float(((Float(((this->_currentTime - this->_initTime))) / Float((int)1000)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,averageFps,return )

Float Stats_obj::runningTime( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","runningTime",0xc36deb35,"flixel.system.debug.Stats.runningTime","flixel/system/debug/Stats.hx",342,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(342)
	return (Float(((this->_currentTime - this->_initTime))) / Float((int)1000));
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,runningTime,return )

Float Stats_obj::intervalTime( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","intervalTime",0x2b393649,"flixel.system.debug.Stats.intervalTime","flixel/system/debug/Stats.hx",350,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	return (Float(((this->_currentTime - this->_itvTime))) / Float((int)1000));
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,intervalTime,return )

Float Stats_obj::currentMem( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","currentMem",0x0f2cfdf3,"flixel.system.debug.Stats.currentMem","flixel/system/debug/Stats.hx",357,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	int _g = ::openfl::system::System_obj::get_totalMemory();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(358)
	Float _g1 = (Float(_g) / Float((int)1024));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(358)
	return (Float(_g1) / Float((int)1000));
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentMem,return )

Void Stats_obj::flixelUpdate( int Time){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","flixelUpdate",0xcd6ea7dc,"flixel.system.debug.Stats.flixelUpdate","flixel/system/debug/Stats.hx",367,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Time,"Time")
		HX_STACK_LINE(368)
		if ((this->_paused)){
			HX_STACK_LINE(369)
			return null();
		}
		HX_STACK_LINE(370)
		int _g = (this->_updateMarker)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		this->_update[_g] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelUpdate,(void))

Void Stats_obj::flixelDraw( int Time){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","flixelDraw",0x95df2317,"flixel.system.debug.Stats.flixelDraw","flixel/system/debug/Stats.hx",379,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Time,"Time")
		HX_STACK_LINE(380)
		if ((this->_paused)){
			HX_STACK_LINE(381)
			return null();
		}
		HX_STACK_LINE(382)
		int _g = (this->_drawMarker)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(382)
		this->_draw[_g] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelDraw,(void))

Void Stats_obj::activeObjects( int Count){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","activeObjects",0xe23f0177,"flixel.system.debug.Stats.activeObjects","flixel/system/debug/Stats.hx",391,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Count,"Count")
		HX_STACK_LINE(392)
		if ((this->_paused)){
			HX_STACK_LINE(393)
			return null();
		}
		HX_STACK_LINE(394)
		int _g = (this->_activeObjectMarker)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(394)
		this->_activeObject[_g] = Count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,activeObjects,(void))

Void Stats_obj::visibleObjects( int Count){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","visibleObjects",0xb04fac99,"flixel.system.debug.Stats.visibleObjects","flixel/system/debug/Stats.hx",403,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Count,"Count")
		HX_STACK_LINE(404)
		if ((this->_paused)){
			HX_STACK_LINE(405)
			return null();
		}
		HX_STACK_LINE(406)
		int _g = (this->_visibleObjectMarker)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(406)
		this->_visibleObject[_g] = Count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,visibleObjects,(void))

Void Stats_obj::drawCalls( int Drawcalls){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","drawCalls",0x77ae1cba,"flixel.system.debug.Stats.drawCalls","flixel/system/debug/Stats.hx",416,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Drawcalls,"Drawcalls")
		HX_STACK_LINE(417)
		if ((this->_paused)){
			HX_STACK_LINE(418)
			return null();
		}
		HX_STACK_LINE(419)
		int _g = (this->_drawCallsMarker)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		this->_drawCalls[_g] = Drawcalls;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,drawCalls,(void))

Void Stats_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","onFocus",0x9a2d5f42,"flixel.system.debug.Stats.onFocus","flixel/system/debug/Stats.hx",428,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		this->_paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocus,(void))

Void Stats_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","onFocusLost",0xf8cbfe46,"flixel.system.debug.Stats.onFocusLost","flixel/system/debug/Stats.hx",436,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		this->_paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocusLost,(void))

Void Stats_obj::toggleSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","toggleSize",0x2c09110c,"flixel.system.debug.Stats.toggleSize","flixel/system/debug/Stats.hx",440,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(441)
		if (((this->_width == (int)160))){
			HX_STACK_LINE(443)
			this->resize((int)320,this->_height);
			HX_STACK_LINE(444)
			{
				HX_STACK_LINE(444)
				::flixel::system::debug::Stats _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(444)
				Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(444)
				Float _g11 = (_g1 - (int)160);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(444)
				_g->set_x(_g11);
			}
			HX_STACK_LINE(445)
			this->drawTimeGraph->set_visible(true);
			HX_STACK_LINE(446)
			this->updateTimeGraph->set_visible(true);
			HX_STACK_LINE(447)
			::flixel::system::debug::_Stats::GraphicMinimizeButton _g2 = ::flixel::system::debug::_Stats::GraphicMinimizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(447)
			this->_toggleSizeButton->changeIcon(_g2);
		}
		else{
			HX_STACK_LINE(451)
			this->resize((int)160,this->_height);
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				::flixel::system::debug::Stats _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(452)
				Float _g3 = _g->get_x();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(452)
				Float _g4 = (_g3 + (int)160);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(452)
				_g->set_x(_g4);
			}
			HX_STACK_LINE(453)
			this->drawTimeGraph->set_visible(false);
			HX_STACK_LINE(454)
			this->updateTimeGraph->set_visible(false);
			HX_STACK_LINE(455)
			::flixel::system::debug::_Stats::GraphicMaximizeButton _g5 = ::flixel::system::debug::_Stats::GraphicMaximizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(455)
			this->_toggleSizeButton->changeIcon(_g5);
		}
		HX_STACK_LINE(458)
		this->updateSize();
		HX_STACK_LINE(459)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,toggleSize,(void))

Void Stats_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","updateSize",0x4d07b601,"flixel.system.debug.Stats.updateSize","flixel/system/debug/Stats.hx",463,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(464)
		this->super::updateSize();
		HX_STACK_LINE(465)
		if (((this->_toggleSizeButton != null()))){
			HX_STACK_LINE(467)
			Float _g = this->_toggleSizeButton->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			Float _g1 = (this->_width - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(467)
			Float _g2 = (_g1 - (int)3);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(467)
			this->_toggleSizeButton->set_x(_g2);
			HX_STACK_LINE(468)
			this->_toggleSizeButton->set_y((int)3);
		}
	}
return null();
}


int Stats_obj::UPDATE_DELAY;

int Stats_obj::INITIAL_WIDTH;

int Stats_obj::MIN_HEIGHT;

int Stats_obj::FPS_COLOR;

int Stats_obj::MEMORY_COLOR;

int Stats_obj::DRAW_TIME_COLOR;

int Stats_obj::UPDATE_TIME_COLOR;

int Stats_obj::LABEL_COLOR;

int Stats_obj::TEXT_SIZE;

int Stats_obj::DECIMALS;


Stats_obj::Stats_obj()
{
}

void Stats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stats);
	HX_MARK_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_MARK_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_MARK_MEMBER_NAME(_itvTime,"_itvTime");
	HX_MARK_MEMBER_NAME(_initTime,"_initTime");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_totalCount,"_totalCount");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_MARK_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_MARK_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_MARK_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_MARK_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_MARK_MEMBER_NAME(visibleCount,"visibleCount");
	HX_MARK_MEMBER_NAME(activeCount,"activeCount");
	HX_MARK_MEMBER_NAME(updateTime,"updateTime");
	HX_MARK_MEMBER_NAME(drawTime,"drawTime");
	HX_MARK_MEMBER_NAME(_lastTime,"_lastTime");
	HX_MARK_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_MARK_MEMBER_NAME(_draw,"_draw");
	HX_MARK_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_MARK_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_MARK_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_MARK_MEMBER_NAME(_activeObject,"_activeObject");
	HX_MARK_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	HX_MARK_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_MARK_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_MARK_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	::flixel::system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stats_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_VISIT_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_VISIT_MEMBER_NAME(_itvTime,"_itvTime");
	HX_VISIT_MEMBER_NAME(_initTime,"_initTime");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_totalCount,"_totalCount");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_VISIT_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_VISIT_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_VISIT_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_VISIT_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_VISIT_MEMBER_NAME(visibleCount,"visibleCount");
	HX_VISIT_MEMBER_NAME(activeCount,"activeCount");
	HX_VISIT_MEMBER_NAME(updateTime,"updateTime");
	HX_VISIT_MEMBER_NAME(drawTime,"drawTime");
	HX_VISIT_MEMBER_NAME(_lastTime,"_lastTime");
	HX_VISIT_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_VISIT_MEMBER_NAME(_draw,"_draw");
	HX_VISIT_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_VISIT_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_VISIT_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_VISIT_MEMBER_NAME(_activeObject,"_activeObject");
	HX_VISIT_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	HX_VISIT_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_VISIT_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_VISIT_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	::flixel::system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stats_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return _update; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { return _itvTime; }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { return fpsGraph; }
		if (HX_FIELD_EQ(inName,"drawTime") ) { return drawTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_initTime") ) { return _initTime; }
		if (HX_FIELD_EQ(inName,"_lastTime") ) { return _lastTime; }
		if (HX_FIELD_EQ(inName,"drawCalls") ) { return drawCalls_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { return updateTime; }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { return _drawCalls; }
		if (HX_FIELD_EQ(inName,"currentFps") ) { return currentFps_dyn(); }
		if (HX_FIELD_EQ(inName,"averageFps") ) { return averageFps_dyn(); }
		if (HX_FIELD_EQ(inName,"currentMem") ) { return currentMem_dyn(); }
		if (HX_FIELD_EQ(inName,"flixelDraw") ) { return flixelDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleSize") ) { return toggleSize_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		if (HX_FIELD_EQ(inName,"_totalCount") ) { return _totalCount; }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { return memoryGraph; }
		if (HX_FIELD_EQ(inName,"activeCount") ) { return activeCount; }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { return _drawMarker; }
		if (HX_FIELD_EQ(inName,"updateTexts") ) { return updateTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"runningTime") ) { return runningTime_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return _currentTime; }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { return visibleCount; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { return _updateTimer; }
		if (HX_FIELD_EQ(inName,"intervalTime") ) { return intervalTime_dyn(); }
		if (HX_FIELD_EQ(inName,"flixelUpdate") ) { return flixelUpdate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { return drawTimeGraph; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { return _updateMarker; }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { return _activeObject; }
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return activeObjects_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { return _leftTextField; }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { return _visibleObject; }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { return drawCallsCount; }
		if (HX_FIELD_EQ(inName,"visibleObjects") ) { return visibleObjects_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { return _rightTextField; }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { return updateTimeGraph; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { return _drawCallsMarker; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { return _toggleSizeButton; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { return _activeObjectMarker; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { return flashPlayerFramerate; }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { return _visibleObjectMarker; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stats_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { _draw=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { _itvTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { fpsGraph=inValue.Cast< ::flixel::system::debug::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawTime") ) { drawTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_initTime") ) { _initTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastTime") ) { _lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { updateTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { _drawCalls=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_totalCount") ) { _totalCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { memoryGraph=inValue.Cast< ::flixel::system::debug::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeCount") ) { activeCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { _drawMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { visibleCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { _updateTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { drawTimeGraph=inValue.Cast< ::flixel::system::debug::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { _updateMarker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { _activeObject=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { _leftTextField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { _visibleObject=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { drawCallsCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { _rightTextField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { updateTimeGraph=inValue.Cast< ::flixel::system::debug::StatsGraph >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { _drawCallsMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { _toggleSizeButton=inValue.Cast< ::flixel::system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { _activeObjectMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { flashPlayerFramerate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { _visibleObjectMarker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_leftTextField"));
	outFields->push(HX_CSTRING("_rightTextField"));
	outFields->push(HX_CSTRING("_itvTime"));
	outFields->push(HX_CSTRING("_initTime"));
	outFields->push(HX_CSTRING("_frameCount"));
	outFields->push(HX_CSTRING("_totalCount"));
	outFields->push(HX_CSTRING("_currentTime"));
	outFields->push(HX_CSTRING("fpsGraph"));
	outFields->push(HX_CSTRING("memoryGraph"));
	outFields->push(HX_CSTRING("drawTimeGraph"));
	outFields->push(HX_CSTRING("updateTimeGraph"));
	outFields->push(HX_CSTRING("flashPlayerFramerate"));
	outFields->push(HX_CSTRING("visibleCount"));
	outFields->push(HX_CSTRING("activeCount"));
	outFields->push(HX_CSTRING("updateTime"));
	outFields->push(HX_CSTRING("drawTime"));
	outFields->push(HX_CSTRING("_lastTime"));
	outFields->push(HX_CSTRING("_updateTimer"));
	outFields->push(HX_CSTRING("_update"));
	outFields->push(HX_CSTRING("_updateMarker"));
	outFields->push(HX_CSTRING("_draw"));
	outFields->push(HX_CSTRING("_drawMarker"));
	outFields->push(HX_CSTRING("_visibleObject"));
	outFields->push(HX_CSTRING("_visibleObjectMarker"));
	outFields->push(HX_CSTRING("_activeObject"));
	outFields->push(HX_CSTRING("_activeObjectMarker"));
	outFields->push(HX_CSTRING("_paused"));
	outFields->push(HX_CSTRING("_toggleSizeButton"));
	outFields->push(HX_CSTRING("drawCallsCount"));
	outFields->push(HX_CSTRING("_drawCalls"));
	outFields->push(HX_CSTRING("_drawCallsMarker"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("UPDATE_DELAY"),
	HX_CSTRING("INITIAL_WIDTH"),
	HX_CSTRING("MIN_HEIGHT"),
	HX_CSTRING("FPS_COLOR"),
	HX_CSTRING("MEMORY_COLOR"),
	HX_CSTRING("DRAW_TIME_COLOR"),
	HX_CSTRING("UPDATE_TIME_COLOR"),
	HX_CSTRING("LABEL_COLOR"),
	HX_CSTRING("TEXT_SIZE"),
	HX_CSTRING("DECIMALS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Stats_obj,_leftTextField),HX_CSTRING("_leftTextField")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Stats_obj,_rightTextField),HX_CSTRING("_rightTextField")},
	{hx::fsInt,(int)offsetof(Stats_obj,_itvTime),HX_CSTRING("_itvTime")},
	{hx::fsInt,(int)offsetof(Stats_obj,_initTime),HX_CSTRING("_initTime")},
	{hx::fsInt,(int)offsetof(Stats_obj,_frameCount),HX_CSTRING("_frameCount")},
	{hx::fsInt,(int)offsetof(Stats_obj,_totalCount),HX_CSTRING("_totalCount")},
	{hx::fsInt,(int)offsetof(Stats_obj,_currentTime),HX_CSTRING("_currentTime")},
	{hx::fsObject /*::flixel::system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,fpsGraph),HX_CSTRING("fpsGraph")},
	{hx::fsObject /*::flixel::system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,memoryGraph),HX_CSTRING("memoryGraph")},
	{hx::fsObject /*::flixel::system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,drawTimeGraph),HX_CSTRING("drawTimeGraph")},
	{hx::fsObject /*::flixel::system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,updateTimeGraph),HX_CSTRING("updateTimeGraph")},
	{hx::fsFloat,(int)offsetof(Stats_obj,flashPlayerFramerate),HX_CSTRING("flashPlayerFramerate")},
	{hx::fsInt,(int)offsetof(Stats_obj,visibleCount),HX_CSTRING("visibleCount")},
	{hx::fsInt,(int)offsetof(Stats_obj,activeCount),HX_CSTRING("activeCount")},
	{hx::fsInt,(int)offsetof(Stats_obj,updateTime),HX_CSTRING("updateTime")},
	{hx::fsInt,(int)offsetof(Stats_obj,drawTime),HX_CSTRING("drawTime")},
	{hx::fsInt,(int)offsetof(Stats_obj,_lastTime),HX_CSTRING("_lastTime")},
	{hx::fsInt,(int)offsetof(Stats_obj,_updateTimer),HX_CSTRING("_updateTimer")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_update),HX_CSTRING("_update")},
	{hx::fsInt,(int)offsetof(Stats_obj,_updateMarker),HX_CSTRING("_updateMarker")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_draw),HX_CSTRING("_draw")},
	{hx::fsInt,(int)offsetof(Stats_obj,_drawMarker),HX_CSTRING("_drawMarker")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_visibleObject),HX_CSTRING("_visibleObject")},
	{hx::fsInt,(int)offsetof(Stats_obj,_visibleObjectMarker),HX_CSTRING("_visibleObjectMarker")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_activeObject),HX_CSTRING("_activeObject")},
	{hx::fsInt,(int)offsetof(Stats_obj,_activeObjectMarker),HX_CSTRING("_activeObjectMarker")},
	{hx::fsBool,(int)offsetof(Stats_obj,_paused),HX_CSTRING("_paused")},
	{hx::fsObject /*::flixel::system::ui::FlxSystemButton*/ ,(int)offsetof(Stats_obj,_toggleSizeButton),HX_CSTRING("_toggleSizeButton")},
	{hx::fsInt,(int)offsetof(Stats_obj,drawCallsCount),HX_CSTRING("drawCallsCount")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_drawCalls),HX_CSTRING("_drawCalls")},
	{hx::fsInt,(int)offsetof(Stats_obj,_drawCallsMarker),HX_CSTRING("_drawCallsMarker")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_leftTextField"),
	HX_CSTRING("_rightTextField"),
	HX_CSTRING("_itvTime"),
	HX_CSTRING("_initTime"),
	HX_CSTRING("_frameCount"),
	HX_CSTRING("_totalCount"),
	HX_CSTRING("_currentTime"),
	HX_CSTRING("fpsGraph"),
	HX_CSTRING("memoryGraph"),
	HX_CSTRING("drawTimeGraph"),
	HX_CSTRING("updateTimeGraph"),
	HX_CSTRING("flashPlayerFramerate"),
	HX_CSTRING("visibleCount"),
	HX_CSTRING("activeCount"),
	HX_CSTRING("updateTime"),
	HX_CSTRING("drawTime"),
	HX_CSTRING("_lastTime"),
	HX_CSTRING("_updateTimer"),
	HX_CSTRING("_update"),
	HX_CSTRING("_updateMarker"),
	HX_CSTRING("_draw"),
	HX_CSTRING("_drawMarker"),
	HX_CSTRING("_visibleObject"),
	HX_CSTRING("_visibleObjectMarker"),
	HX_CSTRING("_activeObject"),
	HX_CSTRING("_activeObjectMarker"),
	HX_CSTRING("_paused"),
	HX_CSTRING("_toggleSizeButton"),
	HX_CSTRING("drawCallsCount"),
	HX_CSTRING("_drawCalls"),
	HX_CSTRING("_drawCallsMarker"),
	HX_CSTRING("start"),
	HX_CSTRING("stop"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateTexts"),
	HX_CSTRING("currentFps"),
	HX_CSTRING("averageFps"),
	HX_CSTRING("runningTime"),
	HX_CSTRING("intervalTime"),
	HX_CSTRING("currentMem"),
	HX_CSTRING("flixelUpdate"),
	HX_CSTRING("flixelDraw"),
	HX_CSTRING("activeObjects"),
	HX_CSTRING("visibleObjects"),
	HX_CSTRING("drawCalls"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("toggleSize"),
	HX_CSTRING("updateSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_MARK_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_MARK_MEMBER_NAME(Stats_obj::MIN_HEIGHT,"MIN_HEIGHT");
	HX_MARK_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_MARK_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_VISIT_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_VISIT_MEMBER_NAME(Stats_obj::MIN_HEIGHT,"MIN_HEIGHT");
	HX_VISIT_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_VISIT_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#endif

Class Stats_obj::__mClass;

void Stats_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Stats"), hx::TCanCast< Stats_obj> ,sStaticFields,sMemberFields,
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

void Stats_obj::__boot()
{
	UPDATE_DELAY= (int)250;
	INITIAL_WIDTH= (int)160;
	MIN_HEIGHT= (int)195;
	FPS_COLOR= (int)-6881536;
	MEMORY_COLOR= (int)-16737025;
	DRAW_TIME_COLOR= (int)-4784128;
	UPDATE_TIME_COLOR= (int)-2305024;
	LABEL_COLOR= (int)-1426063361;
	TEXT_SIZE= (int)11;
	DECIMALS= (int)1;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
