#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_debug_BitmapLog
#include <flixel/system/debug/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#include <flixel/system/debug/ButtonAlignment.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#include <flixel/system/debug/DebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Log
#include <flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tracker
#include <flixel/system/debug/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicDrawDebug
#include <flixel/system/debug/_FlxDebugger/GraphicDrawDebug.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel
#include <flixel/system/debug/_FlxDebugger/GraphicFlixel.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void FlxDebugger_obj::__construct(Float Width,Float Height)
{
HX_STACK_FRAME("flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",57,0xd9fc0a74)
HX_STACK_THIS(this)
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(78)
	this->hasMouse = false;
	HX_STACK_LINE(404)
	super::__construct();
	HX_STACK_LINE(405)
	this->set_visible(false);
	HX_STACK_LINE(406)
	this->_layout = ::flixel::system::debug::DebuggerLayout_obj::STANDARD;
	HX_STACK_LINE(407)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(407)
	this->_screen = _g;
	HX_STACK_LINE(408)
	this->_windows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(410)
	::openfl::display::Sprite _g1 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(410)
	this->_topBar = _g1;
	HX_STACK_LINE(411)
	this->_topBar->get_graphics()->beginFill((int)0,0.66666666666666663);
	HX_STACK_LINE(412)
	int _g2 = ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(412)
	this->_topBar->get_graphics()->drawRect((int)0,(int)0,_g2,(int)20);
	HX_STACK_LINE(413)
	this->_topBar->get_graphics()->endFill();
	HX_STACK_LINE(414)
	this->addChild(this->_topBar);
	HX_STACK_LINE(416)
	::openfl::text::TextField txt = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(417)
	txt->set_height((int)20);
	HX_STACK_LINE(418)
	txt->set_selectable(false);
	HX_STACK_LINE(419)
	txt->set_y((int)-9);
	HX_STACK_LINE(420)
	txt->set_multiline(false);
	HX_STACK_LINE(421)
	txt->set_embedFonts(true);
	HX_STACK_LINE(422)
	::openfl::text::TextFormat format = ::openfl::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)-1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(423)
	txt->set_defaultTextFormat(format);
	HX_STACK_LINE(424)
	txt->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(425)
	::String _g3 = ::Std_obj::string(::flixel::FlxG_obj::VERSION);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(425)
	txt->set_text(_g3);
	HX_STACK_LINE(427)
	this->_leftButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(428)
	this->_rightButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(429)
	this->_middleButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		::flixel::system::debug::Log _g4 = ::flixel::system::debug::Log_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(431)
		::flixel::system::debug::Window window = this->log = _g4;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(431)
		this->_windows->push(window);
		HX_STACK_LINE(431)
		this->addChild(window);
		HX_STACK_LINE(431)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(431)
			this->updateBounds();
			HX_STACK_LINE(431)
			window->bound();
		}
		HX_STACK_LINE(431)
		window;
	}
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		::flixel::system::debug::BitmapLog _g5 = ::flixel::system::debug::BitmapLog_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(432)
		::flixel::system::debug::Window window = this->bitmapLog = _g5;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(432)
		this->_windows->push(window);
		HX_STACK_LINE(432)
		this->addChild(window);
		HX_STACK_LINE(432)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(432)
			this->updateBounds();
			HX_STACK_LINE(432)
			window->bound();
		}
		HX_STACK_LINE(432)
		window;
	}
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		::flixel::system::debug::Watch _g6 = ::flixel::system::debug::Watch_obj::__new(null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(433)
		::flixel::system::debug::Window window = this->watch = _g6;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(433)
		this->_windows->push(window);
		HX_STACK_LINE(433)
		this->addChild(window);
		HX_STACK_LINE(433)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(433)
			this->updateBounds();
			HX_STACK_LINE(433)
			window->bound();
		}
		HX_STACK_LINE(433)
		window;
	}
	HX_STACK_LINE(434)
	{
		HX_STACK_LINE(434)
		::flixel::system::debug::Console _g7 = ::flixel::system::debug::Console_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(434)
		::flixel::system::debug::Window window = this->console = _g7;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(434)
		this->_windows->push(window);
		HX_STACK_LINE(434)
		this->addChild(window);
		HX_STACK_LINE(434)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(434)
			this->updateBounds();
			HX_STACK_LINE(434)
			window->bound();
		}
		HX_STACK_LINE(434)
		window;
	}
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(435)
		::flixel::system::debug::Stats _g8 = ::flixel::system::debug::Stats_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(435)
		::flixel::system::debug::Window window = this->stats = _g8;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(435)
		this->_windows->push(window);
		HX_STACK_LINE(435)
		this->addChild(window);
		HX_STACK_LINE(435)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(435)
			this->updateBounds();
			HX_STACK_LINE(435)
			window->bound();
		}
		HX_STACK_LINE(435)
		window;
	}
	HX_STACK_LINE(437)
	::flixel::system::debug::VCR _g9 = ::flixel::system::debug::VCR_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(437)
	this->vcr = _g9;
	HX_STACK_LINE(439)
	::flixel::system::debug::_FlxDebugger::GraphicFlixel _g10 = ::flixel::system::debug::_FlxDebugger::GraphicFlixel_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(439)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::LEFT,_g10,this->openHomepage_dyn(),null(),null());
	HX_STACK_LINE(440)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::LEFT,null(),this->openHomepage_dyn(),null(),null())->addChild(txt);
	HX_STACK_LINE(442)
	this->addWindowToggleButton(this->bitmapLog,hx::ClassOf< ::flixel::system::debug::GraphicBitmapLog >());
	HX_STACK_LINE(443)
	this->addWindowToggleButton(this->log,hx::ClassOf< ::flixel::system::debug::GraphicLog >());
	HX_STACK_LINE(445)
	this->addWindowToggleButton(this->watch,hx::ClassOf< ::flixel::system::debug::GraphicWatch >());
	HX_STACK_LINE(446)
	this->addWindowToggleButton(this->console,hx::ClassOf< ::flixel::system::debug::GraphicConsole >());
	HX_STACK_LINE(447)
	this->addWindowToggleButton(this->stats,hx::ClassOf< ::flixel::system::debug::GraphicStats >());
	HX_STACK_LINE(449)
	::flixel::system::debug::_FlxDebugger::GraphicDrawDebug _g11 = ::flixel::system::debug::_FlxDebugger::GraphicDrawDebug_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(449)
	Array< ::Dynamic > drawDebugButton = Array_obj< ::Dynamic >::__new().Add(this->addButton(::flixel::system::debug::ButtonAlignment_obj::RIGHT,_g11,this->toggleDrawDebug_dyn(),true,null()));		HX_STACK_VAR(drawDebugButton,"drawDebugButton");
	HX_STACK_LINE(450)
	drawDebugButton->__get((int)0).StaticCast< ::flixel::system::ui::FlxSystemButton >()->set_toggled(!(::flixel::FlxG_obj::debugger->drawDebug));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,drawDebugButton)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/FlxDebugger.hx",451,0xd9fc0a74)
		{
			HX_STACK_LINE(451)
			drawDebugButton->__get((int)0).StaticCast< ::flixel::system::ui::FlxSystemButton >()->set_toggled(::flixel::FlxG_obj::debugger->drawDebug);
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(451)
	::flixel::FlxG_obj::debugger->drawDebugChanged->add( Dynamic(new _Function_1_1(drawDebugButton)));
	HX_STACK_LINE(457)
	this->onResize(Width,Height);
	HX_STACK_LINE(459)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
	HX_STACK_LINE(460)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
	HX_STACK_LINE(462)
	::flixel::FlxG_obj::signals->stateSwitched->add(::flixel::system::debug::Tracker_obj::onStateSwitch_dyn());
}
;
	return null();
}

//FlxDebugger_obj::~FlxDebugger_obj() { }

Dynamic FlxDebugger_obj::__CreateEmpty() { return  new FlxDebugger_obj; }
hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new(Float Width,Float Height)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(Width,Height);
	return result;}

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxDebugger_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","destroy",0x0aa38497,"flixel.system.debug.FlxDebugger.destroy","flixel/system/debug/FlxDebugger.hx",114,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->_screen = null();
		HX_STACK_LINE(117)
		Array< ::Dynamic > _g = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_leftButtons);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		this->_leftButtons = _g;
		HX_STACK_LINE(118)
		Array< ::Dynamic > _g1 = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_middleButtons);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		this->_middleButtons = _g1;
		HX_STACK_LINE(119)
		Array< ::Dynamic > _g2 = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_rightButtons);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(119)
		this->_rightButtons = _g2;
		HX_STACK_LINE(121)
		this->removeChild(this->_topBar);
		HX_STACK_LINE(122)
		this->_topBar = null();
		HX_STACK_LINE(124)
		if (((this->log != null()))){
			HX_STACK_LINE(126)
			this->removeChild(this->log);
			HX_STACK_LINE(127)
			this->log->destroy();
			HX_STACK_LINE(128)
			this->log = null();
		}
		HX_STACK_LINE(130)
		if (((this->watch != null()))){
			HX_STACK_LINE(132)
			this->removeChild(this->watch);
			HX_STACK_LINE(133)
			this->watch->destroy();
			HX_STACK_LINE(134)
			this->watch = null();
		}
		HX_STACK_LINE(136)
		if (((this->bitmapLog != null()))){
			HX_STACK_LINE(138)
			this->removeChild(this->bitmapLog);
			HX_STACK_LINE(139)
			this->bitmapLog->destroy();
			HX_STACK_LINE(140)
			this->bitmapLog = null();
		}
		HX_STACK_LINE(142)
		if (((this->stats != null()))){
			HX_STACK_LINE(144)
			this->removeChild(this->stats);
			HX_STACK_LINE(145)
			this->stats->destroy();
			HX_STACK_LINE(146)
			this->stats = null();
		}
		HX_STACK_LINE(148)
		if (((this->console != null()))){
			HX_STACK_LINE(150)
			this->removeChild(this->console);
			HX_STACK_LINE(151)
			this->console->destroy();
			HX_STACK_LINE(152)
			this->console = null();
		}
		HX_STACK_LINE(155)
		this->_windows = null();
		HX_STACK_LINE(157)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
		HX_STACK_LINE(158)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,destroy,(void))

Void FlxDebugger_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","update",0x10a9d10c,"flixel.system.debug.FlxDebugger.update","flixel/system/debug/FlxDebugger.hx",163,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Array< ::Dynamic > _g1 = this->_windows;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			::flixel::system::debug::Window window = _g1->__get(_g).StaticCast< ::flixel::system::debug::Window >();		HX_STACK_VAR(window,"window");
			HX_STACK_LINE(163)
			++(_g);
			HX_STACK_LINE(165)
			window->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,update,(void))

Void FlxDebugger_obj::setLayout( ::flixel::system::debug::DebuggerLayout Layout){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","setLayout",0x62385cc9,"flixel.system.debug.FlxDebugger.setLayout","flixel/system/debug/FlxDebugger.hx",175,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Layout,"Layout")
		HX_STACK_LINE(176)
		this->_layout = Layout;
		HX_STACK_LINE(177)
		this->resetLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,setLayout,(void))

Void FlxDebugger_obj::resetLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetLayout",0xf3cb1bf6,"flixel.system.debug.FlxDebugger.resetLayout","flixel/system/debug/FlxDebugger.hx",186,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::flixel::system::debug::DebuggerLayout _g = this->_layout;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(189)
				this->log->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(190)
				this->log->reposition((int)0,this->_screen->y);
				HX_STACK_LINE(191)
				this->console->resize(((Float(this->_screen->x) / Float((int)2)) - (int)8),(int)35);
				HX_STACK_LINE(192)
				Float _g1 = this->log->get_x();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(192)
				Float _g11 = this->log->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(192)
				Float _g2 = (_g1 + _g11);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(192)
				Float _g3 = (_g2 + (int)2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(192)
				this->console->reposition(_g3,this->_screen->y);
				HX_STACK_LINE(193)
				this->watch->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(194)
				this->watch->reposition(this->_screen->x,this->_screen->y);
				HX_STACK_LINE(195)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(196)
				this->bitmapLog->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(197)
				this->bitmapLog->reposition((int)0,((this->_screen->y - (int)136) - (int)4));
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(199)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(200)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(201)
				this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
				HX_STACK_LINE(202)
				Float _g4 = this->log->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(202)
				Float _g5 = (this->_screen->y - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(202)
				Float _g6 = this->console->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(202)
				Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(202)
				Float _g8 = (_g7 - 3.);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(202)
				this->log->reposition((int)0,_g8);
				HX_STACK_LINE(203)
				this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
				HX_STACK_LINE(204)
				Float _g9 = this->watch->get_height();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(204)
				Float _g10 = (this->_screen->y - _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(204)
				Float _g11 = this->console->get_height();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(204)
				Float _g12 = (_g10 - _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(204)
				Float _g13 = (_g12 - 3.);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(204)
				this->watch->reposition(this->_screen->x,_g13);
				HX_STACK_LINE(205)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(206)
				this->bitmapLog->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(((this->_screen->y - (int)4) - (Float(this->_screen->y) / Float((int)2))) - (int)70));
				HX_STACK_LINE(207)
				this->bitmapLog->reposition((int)0,3.);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(209)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(210)
				this->console->reposition((int)0,(int)0);
				HX_STACK_LINE(211)
				this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(212)
				Float _g14 = this->console->get_height();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(212)
				Float _g15 = (_g14 + (int)2);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(212)
				Float _g16 = (_g15 + (int)15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(212)
				this->log->reposition((int)0,_g16);
				HX_STACK_LINE(213)
				this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(214)
				Float _g17 = this->console->get_height();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(214)
				Float _g18 = (_g17 + (int)2);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(214)
				Float _g19 = (_g18 + (int)15);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(214)
				this->watch->reposition(this->_screen->x,_g19);
				HX_STACK_LINE(215)
				this->stats->reposition(this->_screen->x,this->_screen->y);
				HX_STACK_LINE(216)
				this->bitmapLog->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(217)
				Float _g20 = this->console->get_height();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(217)
				Float _g21 = (_g20 + (int)4);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(217)
				Float _g22 = (_g21 + (int)15);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(217)
				Float _g23 = (_g22 + (Float(this->_screen->y) / Float((int)4)));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(217)
				Float _g24 = (_g23 + (int)2);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(217)
				this->bitmapLog->reposition((int)0,_g24);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(219)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(220)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(221)
				Float _g25 = this->console->get_height();		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(221)
				Float _g26 = (Float(_g25) / Float((int)2));		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(221)
				Float _g27 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g26);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(221)
				Float _g28 = (_g27 - (int)2);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(221)
				this->log->resize((Float(this->_screen->x) / Float((int)3)),_g28);
				HX_STACK_LINE(222)
				this->log->reposition((int)0,(int)0);
				HX_STACK_LINE(223)
				Float _g29 = this->console->get_height();		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(223)
				Float _g30 = (Float(_g29) / Float((int)2));		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(223)
				Float _g31 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g30);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(223)
				this->watch->resize((Float(this->_screen->x) / Float((int)3)),_g31);
				HX_STACK_LINE(224)
				Float _g32 = this->log->get_y();		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(224)
				Float _g33 = this->log->get_height();		HX_STACK_VAR(_g33,"_g33");
				HX_STACK_LINE(224)
				Float _g34 = (_g32 + _g33);		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(224)
				Float _g35 = (_g34 + (int)2);		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(224)
				this->watch->reposition((int)0,_g35);
				HX_STACK_LINE(225)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(226)
				Float _g36 = this->console->get_height();		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(226)
				Float _g37 = (Float(_g36) / Float((int)2));		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(226)
				Float _g38 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g37);		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(226)
				Float _g39 = (_g38 - (int)2);		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(226)
				this->bitmapLog->resize((Float(this->_screen->x) / Float((int)3)),_g39);
				HX_STACK_LINE(227)
				this->bitmapLog->reposition(((Float(this->_screen->x) / Float((int)3)) + (int)4),(int)0);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(229)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(230)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(231)
				Float _g40 = this->console->get_height();		HX_STACK_VAR(_g40,"_g40");
				HX_STACK_LINE(231)
				Float _g41 = (Float(_g40) / Float((int)2));		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(231)
				Float _g42 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g41);		HX_STACK_VAR(_g42,"_g42");
				HX_STACK_LINE(231)
				Float _g43 = (_g42 - (int)2);		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(231)
				this->log->resize((Float(this->_screen->x) / Float((int)3)),_g43);
				HX_STACK_LINE(232)
				this->log->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(233)
				Float _g44 = this->console->get_height();		HX_STACK_VAR(_g44,"_g44");
				HX_STACK_LINE(233)
				Float _g45 = (Float(_g44) / Float((int)2));		HX_STACK_VAR(_g45,"_g45");
				HX_STACK_LINE(233)
				Float _g46 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g45);		HX_STACK_VAR(_g46,"_g46");
				HX_STACK_LINE(233)
				this->watch->resize((Float(this->_screen->x) / Float((int)3)),_g46);
				HX_STACK_LINE(234)
				Float _g47 = this->log->get_y();		HX_STACK_VAR(_g47,"_g47");
				HX_STACK_LINE(234)
				Float _g48 = this->log->get_height();		HX_STACK_VAR(_g48,"_g48");
				HX_STACK_LINE(234)
				Float _g49 = (_g47 + _g48);		HX_STACK_VAR(_g49,"_g49");
				HX_STACK_LINE(234)
				Float _g50 = (_g49 + (int)2);		HX_STACK_VAR(_g50,"_g50");
				HX_STACK_LINE(234)
				this->watch->reposition(this->_screen->x,_g50);
				HX_STACK_LINE(235)
				this->stats->reposition((int)0,(int)0);
				HX_STACK_LINE(236)
				Float _g51 = this->console->get_height();		HX_STACK_VAR(_g51,"_g51");
				HX_STACK_LINE(236)
				Float _g52 = (Float(_g51) / Float((int)2));		HX_STACK_VAR(_g52,"_g52");
				HX_STACK_LINE(236)
				Float _g53 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g52);		HX_STACK_VAR(_g53,"_g53");
				HX_STACK_LINE(236)
				Float _g54 = (_g53 - (int)2);		HX_STACK_VAR(_g54,"_g54");
				HX_STACK_LINE(236)
				this->bitmapLog->resize((Float(this->_screen->x) / Float((int)3)),_g54);
				HX_STACK_LINE(237)
				this->bitmapLog->reposition(((this->_screen->x - (int)4) - ((Float(this->_screen->x) / Float((int)3)) * (int)2)),(int)0);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(239)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(240)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(241)
				this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(242)
				Float _g55 = this->log->get_height();		HX_STACK_VAR(_g55,"_g55");
				HX_STACK_LINE(242)
				Float _g56 = (this->_screen->y - _g55);		HX_STACK_VAR(_g56,"_g56");
				HX_STACK_LINE(242)
				Float _g57 = this->console->get_height();		HX_STACK_VAR(_g57,"_g57");
				HX_STACK_LINE(242)
				Float _g58 = (_g56 - _g57);		HX_STACK_VAR(_g58,"_g58");
				HX_STACK_LINE(242)
				Float _g59 = (_g58 - 3.);		HX_STACK_VAR(_g59,"_g59");
				HX_STACK_LINE(242)
				this->log->reposition((int)0,_g59);
				HX_STACK_LINE(243)
				this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(244)
				Float _g60 = this->watch->get_height();		HX_STACK_VAR(_g60,"_g60");
				HX_STACK_LINE(244)
				Float _g61 = (this->_screen->y - _g60);		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(244)
				Float _g62 = this->console->get_height();		HX_STACK_VAR(_g62,"_g62");
				HX_STACK_LINE(244)
				Float _g63 = (_g61 - _g62);		HX_STACK_VAR(_g63,"_g63");
				HX_STACK_LINE(244)
				Float _g64 = (_g63 - 3.);		HX_STACK_VAR(_g64,"_g64");
				HX_STACK_LINE(244)
				this->watch->reposition(this->_screen->x,_g64);
				HX_STACK_LINE(245)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(246)
				this->bitmapLog->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(247)
				Float _g65 = this->log->get_y();		HX_STACK_VAR(_g65,"_g65");
				HX_STACK_LINE(247)
				Float _g66 = (_g65 - (int)2);		HX_STACK_VAR(_g66,"_g66");
				HX_STACK_LINE(247)
				Float _g67 = this->bitmapLog->get_height();		HX_STACK_VAR(_g67,"_g67");
				HX_STACK_LINE(247)
				Float _g68 = (_g66 - _g67);		HX_STACK_VAR(_g68,"_g68");
				HX_STACK_LINE(247)
				this->bitmapLog->reposition((int)0,_g68);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetLayout,(void))

Void FlxDebugger_obj::onResize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onResize",0x5bb7a236,"flixel.system.debug.FlxDebugger.onResize","flixel/system/debug/FlxDebugger.hx",252,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(253)
		this->_screen->x = Width;
		HX_STACK_LINE(254)
		this->_screen->y = Height;
		HX_STACK_LINE(256)
		this->updateBounds();
		HX_STACK_LINE(257)
		int _g = ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		this->_topBar->set_width(_g);
		HX_STACK_LINE(258)
		this->resetButtonLayout();
		HX_STACK_LINE(259)
		this->resetLayout();
		HX_STACK_LINE(260)
		Float _g1 = ::flixel::FlxG_obj::game->get_scaleX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(260)
		Float _g2 = (Float((int)1) / Float(_g1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(260)
		this->set_scaleX(_g2);
		HX_STACK_LINE(261)
		Float _g3 = ::flixel::FlxG_obj::game->get_scaleY();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(261)
		Float _g4 = (Float((int)1) / Float(_g3));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(261)
		this->set_scaleY(_g4);
		HX_STACK_LINE(262)
		Float _g5 = -(::flixel::FlxG_obj::game->get_x());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(262)
		Float _g6 = this->get_scaleX();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(262)
		Float _g7 = (_g5 * _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(262)
		this->set_x(_g7);
		HX_STACK_LINE(263)
		Float _g8 = -(::flixel::FlxG_obj::game->get_y());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(263)
		Float _g9 = this->get_scaleY();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(263)
		Float _g10 = (_g8 * _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(263)
		this->set_y(_g10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,onResize,(void))

Void FlxDebugger_obj::updateBounds( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","updateBounds",0x09101ca1,"flixel.system.debug.FlxDebugger.updateBounds","flixel/system/debug/FlxDebugger.hx",267,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)2,21.,(this->_screen->x - (int)4),((this->_screen->y - (int)4) - (int)20));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(268)
		this->_screenBounds = _g;
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(269)
			Array< ::Dynamic > _g11 = this->_windows;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(269)
			while((true)){
				HX_STACK_LINE(269)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(269)
					break;
				}
				HX_STACK_LINE(269)
				::flixel::system::debug::Window window = _g11->__get(_g1).StaticCast< ::flixel::system::debug::Window >();		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(269)
				++(_g1);
				HX_STACK_LINE(271)
				window->updateBounds(this->_screenBounds);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,updateBounds,(void))

Float FlxDebugger_obj::hAlignButtons( Array< ::Dynamic > Sprites,hx::Null< Float >  __o_Padding,hx::Null< bool >  __o_Set,hx::Null< Float >  __o_LeftOffset){
Float Padding = __o_Padding.Default(0);
bool Set = __o_Set.Default(true);
Float LeftOffset = __o_LeftOffset.Default(0);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","hAlignButtons",0x74a569e1,"flixel.system.debug.FlxDebugger.hAlignButtons","flixel/system/debug/FlxDebugger.hx",279,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprites,"Sprites")
	HX_STACK_ARG(Padding,"Padding")
	HX_STACK_ARG(Set,"Set")
	HX_STACK_ARG(LeftOffset,"LeftOffset")
{
		HX_STACK_LINE(280)
		Float width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(281)
		Float last = LeftOffset;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(283)
			int _g = Sprites->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(283)
			while((true)){
				HX_STACK_LINE(283)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(283)
					break;
				}
				HX_STACK_LINE(283)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(285)
				::openfl::display::Sprite o = Sprites->__get(i).StaticCast< ::flixel::system::ui::FlxSystemButton >();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(286)
				Float _g2 = o->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(286)
				Float _g11 = (_g2 + Padding);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(286)
				hx::AddEq(width,_g11);
				HX_STACK_LINE(287)
				if ((Set)){
					HX_STACK_LINE(288)
					o->set_x(last);
				}
				HX_STACK_LINE(290)
				Float _g21 = o->get_x();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(290)
				Float _g3 = o->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(290)
				Float _g4 = (_g21 + _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(290)
				Float _g5 = (_g4 + Padding);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(290)
				last = _g5;
			}
		}
		HX_STACK_LINE(293)
		return width;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxDebugger_obj,hAlignButtons,return )

Void FlxDebugger_obj::resetButtonLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetButtonLayout",0x30f7f488,"flixel.system.debug.FlxDebugger.resetButtonLayout","flixel/system/debug/FlxDebugger.hx",300,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		this->hAlignButtons(this->_leftButtons,(int)10,true,(int)10);
		HX_STACK_LINE(303)
		int _g = ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		Float _g1 = (_g * 0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		Float _g2 = this->hAlignButtons(this->_middleButtons,(int)10,false,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(303)
		Float _g3 = (_g2 * 0.5);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(303)
		Float offset = (_g1 - _g3);		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(304)
		this->hAlignButtons(this->_middleButtons,(int)10,true,offset);
		HX_STACK_LINE(306)
		int _g4 = ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(306)
		Float _g5 = this->hAlignButtons(this->_rightButtons,(int)10,false,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(306)
		Float offset1 = (_g4 - _g5);		HX_STACK_VAR(offset1,"offset1");
		HX_STACK_LINE(307)
		this->hAlignButtons(this->_rightButtons,(int)10,true,offset1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetButtonLayout,(void))

::flixel::system::ui::FlxSystemButton FlxDebugger_obj::addButton( ::flixel::system::debug::ButtonAlignment Position,::openfl::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(false);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addButton",0x3bdccfd0,"flixel.system.debug.FlxDebugger.addButton","flixel/system/debug/FlxDebugger.hx",321,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Position,"Position")
	HX_STACK_ARG(Icon,"Icon")
	HX_STACK_ARG(UpHandler,"UpHandler")
	HX_STACK_ARG(ToggleMode,"ToggleMode")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(322)
		::flixel::system::ui::FlxSystemButton button = ::flixel::system::ui::FlxSystemButton_obj::__new(Icon,UpHandler,ToggleMode);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(324)
		Array< ::Dynamic > array;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(325)
		switch( (int)(Position->__Index())){
			case (int)0: {
				HX_STACK_LINE(328)
				array = this->_leftButtons;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(330)
				array = this->_middleButtons;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(332)
				array = this->_rightButtons;
			}
			;break;
		}
		HX_STACK_LINE(335)
		Float _g = button->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(335)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(335)
		Float _g2 = (10. - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(335)
		button->set_y(_g2);
		HX_STACK_LINE(336)
		array->push(button);
		HX_STACK_LINE(337)
		this->addChild(button);
		HX_STACK_LINE(339)
		if ((UpdateLayout)){
			HX_STACK_LINE(341)
			this->resetButtonLayout();
		}
		HX_STACK_LINE(344)
		return button;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxDebugger_obj,addButton,return )

Void FlxDebugger_obj::removeButton( ::flixel::system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeButton",0xec3cec99,"flixel.system.debug.FlxDebugger.removeButton","flixel/system/debug/FlxDebugger.hx",354,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Button,"Button")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(355)
		this->removeChild(Button);
		HX_STACK_LINE(356)
		Button->destroy();
		HX_STACK_LINE(357)
		this->removeButtonFromArray(this->_leftButtons,Button);
		HX_STACK_LINE(358)
		this->removeButtonFromArray(this->_middleButtons,Button);
		HX_STACK_LINE(359)
		this->removeButtonFromArray(this->_rightButtons,Button);
		HX_STACK_LINE(361)
		if ((UpdateLayout)){
			HX_STACK_LINE(363)
			this->resetButtonLayout();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButton,(void))

Void FlxDebugger_obj::addWindowToggleButton( ::flixel::system::debug::Window window,::Class icon){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindowToggleButton",0x07784794,"flixel.system.debug.FlxDebugger.addWindowToggleButton","flixel/system/debug/FlxDebugger.hx",368,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(icon,"icon")
		HX_STACK_LINE(369)
		::openfl::display::BitmapData _g = ::Type_obj::createInstance(icon,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(369)
		::flixel::system::ui::FlxSystemButton button = this->addButton(::flixel::system::debug::ButtonAlignment_obj::RIGHT,_g,window->toggleVisible_dyn(),true,true);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(370)
		window->toggleButton = button;
		HX_STACK_LINE(371)
		bool _g1 = !(window->get_visible());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(371)
		button->set_toggled(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,addWindowToggleButton,(void))

::flixel::system::debug::Window FlxDebugger_obj::addWindow( ::flixel::system::debug::Window window){
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindow",0xb48901ce,"flixel.system.debug.FlxDebugger.addWindow","flixel/system/debug/FlxDebugger.hx",375,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(window,"window")
	HX_STACK_LINE(376)
	this->_windows->push(window);
	HX_STACK_LINE(377)
	this->addChild(window);
	HX_STACK_LINE(378)
	if (((this->_screenBounds != null()))){
		HX_STACK_LINE(380)
		this->updateBounds();
		HX_STACK_LINE(381)
		window->bound();
	}
	HX_STACK_LINE(383)
	return window;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,addWindow,return )

Void FlxDebugger_obj::removeWindow( ::flixel::system::debug::Window window){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeWindow",0x64e91e97,"flixel.system.debug.FlxDebugger.removeWindow","flixel/system/debug/FlxDebugger.hx",387,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(388)
		if ((this->contains(window))){
			HX_STACK_LINE(390)
			this->removeChild(window);
		}
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			Array< ::Dynamic > array = this->_windows;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(392)
			int index = array->indexOf(window,null());		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(392)
			if (((index != (int)-1))){
				HX_STACK_LINE(392)
				array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::system::debug::Window >();
				HX_STACK_LINE(392)
				array->pop().StaticCast< ::flixel::system::debug::Window >();
				HX_STACK_LINE(392)
				array;
			}
			else{
				HX_STACK_LINE(392)
				array;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,removeWindow,(void))

Void FlxDebugger_obj::onMouseOver( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOver",0x134e1717,"flixel.system.debug.FlxDebugger.onMouseOver","flixel/system/debug/FlxDebugger.hx",469,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(470)
		this->hasMouse = true;
		HX_STACK_LINE(472)
		::flixel::FlxG_obj::mouse->set_useSystemCursor(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOver,(void))

Void FlxDebugger_obj::onMouseOut( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOut",0x752e442b,"flixel.system.debug.FlxDebugger.onMouseOut","flixel/system/debug/FlxDebugger.hx",480,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(481)
		this->hasMouse = false;
		HX_STACK_LINE(484)
		if ((!(::flixel::FlxG_obj::vcr->paused))){
			HX_STACK_LINE(486)
			::flixel::FlxG_obj::mouse->set_useSystemCursor(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOut,(void))

Void FlxDebugger_obj::removeButtonFromArray( Array< ::Dynamic > Arr,::flixel::system::ui::FlxSystemButton Button){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeButtonFromArray",0xbb326ff6,"flixel.system.debug.FlxDebugger.removeButtonFromArray","flixel/system/debug/FlxDebugger.hx",492,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Arr,"Arr")
		HX_STACK_ARG(Button,"Button")
		HX_STACK_LINE(493)
		int index = Arr->indexOf(Button,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(494)
		if (((index != (int)-1))){
			HX_STACK_LINE(496)
			Arr->splice(index,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButtonFromArray,(void))

Void FlxDebugger_obj::toggleDrawDebug( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","toggleDrawDebug",0x1fb0d218,"flixel.system.debug.FlxDebugger.toggleDrawDebug","flixel/system/debug/FlxDebugger.hx",502,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(502)
		::flixel::system::frontEnds::DebuggerFrontEnd _this = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(502)
		bool Value = !(::flixel::FlxG_obj::debugger->drawDebug);		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(502)
		if (((Value != _this->drawDebug))){
			HX_STACK_LINE(502)
			_this->drawDebugChanged->dispatch();
		}
		HX_STACK_LINE(502)
		_this->drawDebug = Value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,toggleDrawDebug,(void))

Void FlxDebugger_obj::openHomepage( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","openHomepage",0x2c4a291b,"flixel.system.debug.FlxDebugger.openHomepage","flixel/system/debug/FlxDebugger.hx",507,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(507)
		::String prefix = HX_CSTRING("");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(507)
		if ((!(::EReg_obj::__new(HX_CSTRING("^https?://"),HX_CSTRING(""))->match(HX_CSTRING("http://www.haxeflixel.com"))))){
			HX_STACK_LINE(507)
			prefix = HX_CSTRING("http://");
		}
		HX_STACK_LINE(507)
		::openfl::net::URLRequest _g = ::openfl::net::URLRequest_obj::__new((prefix + HX_CSTRING("http://www.haxeflixel.com")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(507)
		::openfl::Lib_obj::getURL(_g,HX_CSTRING("_blank"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openHomepage,(void))

int FlxDebugger_obj::GUTTER;

int FlxDebugger_obj::TOP_HEIGHT;


FlxDebugger_obj::FlxDebugger_obj()
{
}

void FlxDebugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDebugger);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(watch,"watch");
	HX_MARK_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(vcr,"vcr");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(hasMouse,"hasMouse");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_MARK_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_MARK_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_MARK_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_MARK_MEMBER_NAME(_topBar,"_topBar");
	HX_MARK_MEMBER_NAME(_windows,"_windows");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDebugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(watch,"watch");
	HX_VISIT_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(vcr,"vcr");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(hasMouse,"hasMouse");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_VISIT_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_VISIT_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_VISIT_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_VISIT_MEMBER_NAME(_topBar,"_topBar");
	HX_VISIT_MEMBER_NAME(_windows,"_windows");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDebugger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { return _topBar; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { return hasMouse; }
		if (HX_FIELD_EQ(inName,"_windows") ) { return _windows; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { return bitmapLog; }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { return _leftButtons; }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"openHomepage") ) { return openHomepage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { return _screenBounds; }
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { return _rightButtons; }
		if (HX_FIELD_EQ(inName,"hAlignButtons") ) { return hAlignButtons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { return _middleButtons; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleDrawDebug") ) { return toggleDrawDebug_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetButtonLayout") ) { return resetButtonLayout_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addWindowToggleButton") ) { return addWindowToggleButton_dyn(); }
		if (HX_FIELD_EQ(inName,"removeButtonFromArray") ) { return removeButtonFromArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDebugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::system::debug::Log >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::system::debug::VCR >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::flixel::system::debug::Stats >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::system::debug::Watch >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::system::debug::Console >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< ::flixel::system::debug::DebuggerLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { _topBar=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { hasMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_windows") ) { _windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=inValue.Cast< ::flixel::system::debug::BitmapLog >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { _leftButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { _screenBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { _rightButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { _middleButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDebugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stats"));
	outFields->push(HX_CSTRING("log"));
	outFields->push(HX_CSTRING("watch"));
	outFields->push(HX_CSTRING("bitmapLog"));
	outFields->push(HX_CSTRING("vcr"));
	outFields->push(HX_CSTRING("console"));
	outFields->push(HX_CSTRING("hasMouse"));
	outFields->push(HX_CSTRING("_layout"));
	outFields->push(HX_CSTRING("_screen"));
	outFields->push(HX_CSTRING("_screenBounds"));
	outFields->push(HX_CSTRING("_middleButtons"));
	outFields->push(HX_CSTRING("_leftButtons"));
	outFields->push(HX_CSTRING("_rightButtons"));
	outFields->push(HX_CSTRING("_topBar"));
	outFields->push(HX_CSTRING("_windows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GUTTER"),
	HX_CSTRING("TOP_HEIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::debug::Stats*/ ,(int)offsetof(FlxDebugger_obj,stats),HX_CSTRING("stats")},
	{hx::fsObject /*::flixel::system::debug::Log*/ ,(int)offsetof(FlxDebugger_obj,log),HX_CSTRING("log")},
	{hx::fsObject /*::flixel::system::debug::Watch*/ ,(int)offsetof(FlxDebugger_obj,watch),HX_CSTRING("watch")},
	{hx::fsObject /*::flixel::system::debug::BitmapLog*/ ,(int)offsetof(FlxDebugger_obj,bitmapLog),HX_CSTRING("bitmapLog")},
	{hx::fsObject /*::flixel::system::debug::VCR*/ ,(int)offsetof(FlxDebugger_obj,vcr),HX_CSTRING("vcr")},
	{hx::fsObject /*::flixel::system::debug::Console*/ ,(int)offsetof(FlxDebugger_obj,console),HX_CSTRING("console")},
	{hx::fsBool,(int)offsetof(FlxDebugger_obj,hasMouse),HX_CSTRING("hasMouse")},
	{hx::fsObject /*::flixel::system::debug::DebuggerLayout*/ ,(int)offsetof(FlxDebugger_obj,_layout),HX_CSTRING("_layout")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(FlxDebugger_obj,_screen),HX_CSTRING("_screen")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(FlxDebugger_obj,_screenBounds),HX_CSTRING("_screenBounds")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_middleButtons),HX_CSTRING("_middleButtons")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_leftButtons),HX_CSTRING("_leftButtons")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_rightButtons),HX_CSTRING("_rightButtons")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(FlxDebugger_obj,_topBar),HX_CSTRING("_topBar")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_windows),HX_CSTRING("_windows")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("stats"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("bitmapLog"),
	HX_CSTRING("vcr"),
	HX_CSTRING("console"),
	HX_CSTRING("hasMouse"),
	HX_CSTRING("_layout"),
	HX_CSTRING("_screen"),
	HX_CSTRING("_screenBounds"),
	HX_CSTRING("_middleButtons"),
	HX_CSTRING("_leftButtons"),
	HX_CSTRING("_rightButtons"),
	HX_CSTRING("_topBar"),
	HX_CSTRING("_windows"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("setLayout"),
	HX_CSTRING("resetLayout"),
	HX_CSTRING("onResize"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("hAlignButtons"),
	HX_CSTRING("resetButtonLayout"),
	HX_CSTRING("addButton"),
	HX_CSTRING("removeButton"),
	HX_CSTRING("addWindowToggleButton"),
	HX_CSTRING("addWindow"),
	HX_CSTRING("removeWindow"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("removeButtonFromArray"),
	HX_CSTRING("toggleDrawDebug"),
	HX_CSTRING("openHomepage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#endif

Class FlxDebugger_obj::__mClass;

void FlxDebugger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.FlxDebugger"), hx::TCanCast< FlxDebugger_obj> ,sStaticFields,sMemberFields,
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

void FlxDebugger_obj::__boot()
{
	GUTTER= (int)2;
	TOP_HEIGHT= (int)20;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
