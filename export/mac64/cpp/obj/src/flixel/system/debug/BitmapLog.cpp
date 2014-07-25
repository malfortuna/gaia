#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_debug_BitmapLog
#include <flixel/system/debug/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowLeft
#include <flixel/system/debug/GraphicArrowLeft.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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

Void BitmapLog_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.BitmapLog","new",0xe9e2bd9f,"flixel.system.debug.BitmapLog.new","flixel/system/debug/BitmapLog.hx",26,0xd4331252)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(46)
	this->_middleMouseDown = false;
	HX_STACK_LINE(39)
	this->_matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	struct _Function_1_1{
		inline static ::flixel::util::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",38,0xd4331252)
			{
				HX_STACK_LINE(38)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(38)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(38)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(38)
				point->_inPool = false;
				HX_STACK_LINE(38)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	this->_curMouseOffset = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::util::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",37,0xd4331252)
			{
				HX_STACK_LINE(37)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(37)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(37)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(37)
				point->_inPool = false;
				HX_STACK_LINE(37)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	this->_lastMousePos = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::flixel::util::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",36,0xd4331252)
			{
				HX_STACK_LINE(36)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(36)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(36)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(36)
				point->_inPool = false;
				HX_STACK_LINE(36)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(36)
	this->_point = _Function_1_3::Block();
	HX_STACK_LINE(33)
	this->_curIndex = (int)0;
	HX_STACK_LINE(32)
	this->_entries = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(28)
	this->zoom = (int)1;
	HX_STACK_LINE(52)
	::flixel::system::debug::GraphicBitmapLog _g = ::flixel::system::debug::GraphicBitmapLog_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	super::__construct(HX_CSTRING("bitmapLog"),_g,null(),null(),null(),null(),null());
	HX_STACK_LINE(54)
	this->minSize->x = (int)165;
	HX_STACK_LINE(55)
	this->minSize->y = (int)31;
	HX_STACK_LINE(57)
	Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(57)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(57)
	Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(57)
	Float _g4 = (_g3 - (int)15);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(57)
	int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(57)
	::openfl::display::BitmapData _g6 = ::openfl::display::BitmapData_obj::__new(_g2,_g5,true,(int)0,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(57)
	::openfl::display::Bitmap _g7 = ::openfl::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(57)
	this->_canvasBitmap = _g7;
	HX_STACK_LINE(58)
	this->_canvasBitmap->set_x((int)0);
	HX_STACK_LINE(59)
	this->_canvasBitmap->set_y((int)15);
	HX_STACK_LINE(60)
	this->addChild(this->_canvasBitmap);
	HX_STACK_LINE(62)
	this->createHeaderUI();
	HX_STACK_LINE(63)
	this->createFooterUI();
	HX_STACK_LINE(65)
	this->setVisible(false);
	HX_STACK_LINE(67)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
	HX_STACK_LINE(69)
	this->addEventListener(::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->onMiddleDown_dyn(),null(),null(),null());
	HX_STACK_LINE(70)
	this->addEventListener(::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->onMiddleUp_dyn(),null(),null(),null());
	HX_STACK_LINE(73)
	::flixel::FlxG_obj::signals->stateSwitched->add(this->clear_dyn());
	HX_STACK_LINE(76)
	this->removeChild(this->_handle);
	HX_STACK_LINE(77)
	this->addChild(this->_handle);
	HX_STACK_LINE(79)
	this->removeChild(this->_shadow);
}
;
	return null();
}

//BitmapLog_obj::~BitmapLog_obj() { }

Dynamic BitmapLog_obj::__CreateEmpty() { return  new BitmapLog_obj; }
hx::ObjectPtr< BitmapLog_obj > BitmapLog_obj::__new()
{  hx::ObjectPtr< BitmapLog_obj > result = new BitmapLog_obj();
	result->__construct();
	return result;}

Dynamic BitmapLog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapLog_obj > result = new BitmapLog_obj();
	result->__construct();
	return result;}

Void BitmapLog_obj::createHeaderUI( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","createHeaderUI",0x82443d5e,"flixel.system.debug.BitmapLog.createHeaderUI","flixel/system/debug/BitmapLog.hx",83,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		::openfl::display::Sprite _g1 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		this->_ui = _g1;
		HX_STACK_LINE(85)
		this->_ui->set_y((int)2);
		HX_STACK_LINE(87)
		::flixel::system::debug::GraphicArrowLeft _g11 = ::flixel::system::debug::GraphicArrowLeft_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(87)
		::flixel::system::ui::FlxSystemButton _g2 = ::flixel::system::ui::FlxSystemButton_obj::__new(_g11,this->previous_dyn(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(87)
		this->_buttonLeft = _g2;
		HX_STACK_LINE(89)
		::openfl::text::TextField _g3 = ::flixel::system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(89)
		this->_dimensionsText = _g3;
		HX_STACK_LINE(91)
		::openfl::text::TextField _g4 = ::flixel::system::debug::DebuggerUtil_obj::createTextField((int)0,(int)-3,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(91)
		this->_counterText = _g4;
		HX_STACK_LINE(92)
		this->_counterText->set_text(HX_CSTRING("0/0"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/BitmapLog.hx",95,0xd4331252)
			{
				HX_STACK_LINE(96)
				{
					HX_STACK_LINE(96)
					_g->__get((int)0).StaticCast< ::flixel::system::debug::BitmapLog >()->set_zoom((int)1);
					HX_STACK_LINE(96)
					_g->__get((int)0).StaticCast< ::flixel::system::debug::BitmapLog >()->_curMouseOffset->set(null(),null());
				}
				HX_STACK_LINE(97)
				_g->__get((int)0).StaticCast< ::flixel::system::debug::BitmapLog >()->refreshCanvas(null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(95)
		::flixel::system::ui::FlxSystemButton _g5 = ::flixel::system::ui::FlxSystemButton_obj::__new(null(), Dynamic(new _Function_1_1(_g)),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(95)
		this->_buttonText = _g5;
		HX_STACK_LINE(99)
		this->_buttonText->addChild(this->_counterText);
		HX_STACK_LINE(101)
		::flixel::system::debug::GraphicArrowRight _g6 = ::flixel::system::debug::GraphicArrowRight_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(101)
		::flixel::system::ui::FlxSystemButton _g7 = ::flixel::system::ui::FlxSystemButton_obj::__new(_g6,this->next_dyn(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(101)
		this->_buttonRight = _g7;
		HX_STACK_LINE(102)
		this->_buttonRight->set_x((int)60);
		HX_STACK_LINE(104)
		this->_ui->addChild(this->_buttonLeft);
		HX_STACK_LINE(105)
		this->_ui->addChild(this->_buttonText);
		HX_STACK_LINE(106)
		this->_ui->addChild(this->_buttonRight);
		HX_STACK_LINE(108)
		this->addChild(this->_ui);
		HX_STACK_LINE(109)
		this->addChild(this->_dimensionsText);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createHeaderUI,(void))

Void BitmapLog_obj::createFooterUI( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","createFooterUI",0x7f1e51ec,"flixel.system.debug.BitmapLog.createFooterUI","flixel/system/debug/BitmapLog.hx",113,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		::openfl::display::BitmapData _g = ::openfl::display::BitmapData_obj::__new((int)1,(int)15,true,(int)-1157627904,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		this->_footer = _g1;
		HX_STACK_LINE(115)
		this->_footer->set_alpha(0.8);
		HX_STACK_LINE(116)
		this->addChild(this->_footer);
		HX_STACK_LINE(118)
		::openfl::text::TextField _g2 = ::flixel::system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(118)
		this->_footerText = _g2;
		HX_STACK_LINE(119)
		this->addChild(this->_footerText);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createFooterUI,(void))

Void BitmapLog_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","destroy",0x2ace25b9,"flixel.system.debug.BitmapLog.destroy","flixel/system/debug/BitmapLog.hx",126,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->super::destroy();
		HX_STACK_LINE(129)
		this->clear();
		HX_STACK_LINE(131)
		this->removeChild(this->_canvasBitmap);
		HX_STACK_LINE(132)
		::flixel::util::FlxDestroyUtil_obj::dispose(this->_canvasBitmap->bitmapData);
		HX_STACK_LINE(133)
		this->_canvasBitmap->set_bitmapData(null());
		HX_STACK_LINE(134)
		this->_canvasBitmap = null();
		HX_STACK_LINE(135)
		this->_entries = null();
		HX_STACK_LINE(137)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null());
		HX_STACK_LINE(139)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->onMiddleDown_dyn(),null());
		HX_STACK_LINE(140)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->onMiddleUp_dyn(),null());
		HX_STACK_LINE(143)
		::flixel::FlxG_obj::signals->stateSwitched->remove(this->clear_dyn());
	}
return null();
}


Void BitmapLog_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","update",0x5b6d2a2a,"flixel.system.debug.BitmapLog.update","flixel/system/debug/BitmapLog.hx",148,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		if ((this->_middleMouseDown)){
			HX_STACK_LINE(150)
			::flixel::util::FlxPoint delta;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				Float X = this->get_mouseX();		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(150)
				Float Y = this->get_mouseY();		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(150)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(150)
				point->_inPool = false;
				HX_STACK_LINE(150)
				delta = point;
			}
			HX_STACK_LINE(151)
			::flixel::util::FlxPoint _g = delta->subtractPoint(this->_lastMousePos);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			this->_curMouseOffset->addPoint(_g);
			HX_STACK_LINE(152)
			this->refreshCanvas(null());
			HX_STACK_LINE(153)
			Float _g1 = this->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(153)
			Float _g2 = this->get_mouseY();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(153)
			this->_lastMousePos->set(_g1,_g2);
		}
	}
return null();
}


Void BitmapLog_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","updateSize",0x504b540b,"flixel.system.debug.BitmapLog.updateSize","flixel/system/debug/BitmapLog.hx",158,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		this->super::updateSize();
		HX_STACK_LINE(161)
		Float _g = this->_header->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		Float _g1 = (_g * (int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(161)
		Float _g2 = (this->_height - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(161)
		this->_background->set_scaleY(_g2);
	}
return null();
}


Void BitmapLog_obj::resize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","resize",0xdce2fe15,"flixel.system.debug.BitmapLog.resize","flixel/system/debug/BitmapLog.hx",165,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(166)
		this->super::resize(Width,Height);
		HX_STACK_LINE(168)
		::openfl::display::BitmapData _g = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_canvasBitmap->bitmapData);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		this->_canvasBitmap->set_bitmapData(_g);
		HX_STACK_LINE(169)
		Float _g1 = this->_canvasBitmap->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		Float _g2 = (this->_width - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(169)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(169)
		Float _g4 = this->_canvasBitmap->get_y();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(169)
		Float _g5 = (this->_height - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(169)
		Float _g6 = this->_footer->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(169)
		Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(169)
		int _g8 = ::Std_obj::_int(_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(169)
		::openfl::display::BitmapData _g9 = ::openfl::display::BitmapData_obj::__new(_g3,_g8,true,(int)0,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(169)
		this->_canvasBitmap->set_bitmapData(_g9);
		HX_STACK_LINE(170)
		this->refreshCanvas(this->_curIndex);
		HX_STACK_LINE(172)
		Float _g10 = this->_header->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(172)
		Float _g11 = this->_ui->get_width();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(172)
		Float _g12 = (_g10 - _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(172)
		Float _g13 = (_g12 + (int)43);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(172)
		this->_ui->set_x(_g13);
		HX_STACK_LINE(174)
		this->_footer->set_width(this->_width);
		HX_STACK_LINE(175)
		Float _g14 = this->_footer->get_height();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(175)
		Float _g15 = (this->_height - _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(175)
		this->_footer->set_y(_g15);
		HX_STACK_LINE(177)
		this->resizeTexts();
	}
return null();
}


Void BitmapLog_obj::resizeTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","resizeTexts",0xdbc990d1,"flixel.system.debug.BitmapLog.resizeTexts","flixel/system/debug/BitmapLog.hx",181,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		Float _g = this->_header->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(182)
		Float _g2 = this->_dimensionsText->get_textWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(182)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(182)
		Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(182)
		this->_dimensionsText->set_x(_g4);
		HX_STACK_LINE(183)
		this->_dimensionsText->set_visible((this->_width > (int)200));
		HX_STACK_LINE(185)
		Float _g5 = this->_footer->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(185)
		Float _g6 = (this->_height - _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(185)
		this->_footerText->set_y(_g6);
		HX_STACK_LINE(186)
		Float _g7 = this->_footerText->get_textWidth();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(186)
		Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(186)
		Float _g9 = ((Float(this->_width) / Float((int)2)) - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(186)
		this->_footerText->set_x(_g9);
		HX_STACK_LINE(187)
		Float _g10 = this->_footer->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(187)
		this->_footerText->set_width(_g10);
		HX_STACK_LINE(188)
		Float _g11 = this->_footerText->get_x();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(188)
		if (((_g11 < (int)0))){
			HX_STACK_LINE(190)
			this->_footerText->set_x((int)0);
		}
		HX_STACK_LINE(193)
		Float _g12 = this->_buttonLeft->get_x();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(193)
		Float _g13 = this->_buttonLeft->get_width();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(193)
		Float start = (_g12 + _g13);		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(194)
		Float _g14 = this->_buttonRight->get_x();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(194)
		Float range = (_g14 - start);		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(195)
		Float _g15 = this->_counterText->get_textWidth();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(195)
		Float _g16 = (Float(_g15) / Float((int)2));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(195)
		Float _g17 = ((int)33 - _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(195)
		this->_buttonText->set_x(_g17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resizeTexts,(void))

Void BitmapLog_obj::next( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","next",0xbc832ed4,"flixel.system.debug.BitmapLog.next","flixel/system/debug/BitmapLog.hx",202,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			this->set_zoom((int)1);
			HX_STACK_LINE(203)
			this->_curMouseOffset->set(null(),null());
		}
		HX_STACK_LINE(204)
		this->refreshCanvas((this->_curIndex + (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,next,(void))

Void BitmapLog_obj::previous( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","previous",0x9c626a98,"flixel.system.debug.BitmapLog.previous","flixel/system/debug/BitmapLog.hx",211,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			this->set_zoom((int)1);
			HX_STACK_LINE(212)
			this->_curMouseOffset->set(null(),null());
		}
		HX_STACK_LINE(213)
		this->refreshCanvas((this->_curIndex - (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,previous,(void))

Void BitmapLog_obj::resetSettings( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","resetSettings",0x02f1fbd1,"flixel.system.debug.BitmapLog.resetSettings","flixel/system/debug/BitmapLog.hx",217,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		this->set_zoom((int)1);
		HX_STACK_LINE(219)
		this->_curMouseOffset->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resetSettings,(void))

bool BitmapLog_obj::add( ::openfl::display::BitmapData bmp,::String __o_name){
::String name = __o_name.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","add",0xe9d8df60,"flixel.system.debug.BitmapLog.add","flixel/system/debug/BitmapLog.hx",226,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmp,"bmp")
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(227)
		if (((bmp == null()))){
			HX_STACK_LINE(229)
			return false;
		}
		HX_STACK_LINE(231)
		this->setVisible(true);
		HX_STACK_LINE(232)
		::openfl::display::BitmapData _g = bmp->clone();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::display::BitmapData &_g,::String &name){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",232,0xd4331252)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("bitmap") , _g,false);
					__result->Add(HX_CSTRING("name") , name,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(232)
		Dynamic _g1 = _Function_1_1::Block(_g,name);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		this->_entries->__Field(HX_CSTRING("push"),true)(_g1);
		HX_STACK_LINE(233)
		return this->refreshCanvas(null());
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLog_obj,add,return )

Void BitmapLog_obj::clearAt( hx::Null< int >  __o_Index){
int Index = __o_Index.Default(-1);
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","clearAt",0xb18ce09f,"flixel.system.debug.BitmapLog.clearAt","flixel/system/debug/BitmapLog.hx",241,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
{
		HX_STACK_LINE(242)
		if (((Index == (int)-1))){
			HX_STACK_LINE(244)
			Index = (this->_entries->__Field(HX_CSTRING("length"),true) - (int)1);
		}
		HX_STACK_LINE(246)
		::flixel::util::FlxDestroyUtil_obj::dispose(this->_entries->__GetItem(Index)->__Field(HX_CSTRING("bitmap"),true));
		HX_STACK_LINE(247)
		hx::IndexRef((this->_entries).mPtr,Index) = null();
		HX_STACK_LINE(248)
		this->_entries->__Field(HX_CSTRING("splice"),true)(Index,(int)1);
		HX_STACK_LINE(250)
		if (((this->_curIndex > (this->_entries->__Field(HX_CSTRING("length"),true) - (int)1)))){
			HX_STACK_LINE(252)
			this->_curIndex = (this->_entries->__Field(HX_CSTRING("length"),true) - (int)1);
		}
		HX_STACK_LINE(255)
		this->refreshCanvas(this->_curIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,clearAt,(void))

Void BitmapLog_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","clear",0xe56f6c8c,"flixel.system.debug.BitmapLog.clear","flixel/system/debug/BitmapLog.hx",259,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(260)
			int _g = this->_entries->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			while((true)){
				HX_STACK_LINE(260)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(260)
					break;
				}
				HX_STACK_LINE(260)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(262)
				::flixel::util::FlxDestroyUtil_obj::dispose(this->_entries->__GetItem(i)->__Field(HX_CSTRING("bitmap"),true));
				HX_STACK_LINE(263)
				hx::IndexRef((this->_entries).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(265)
		this->_entries = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(266)
		::openfl::geom::Rectangle _g = this->_canvasBitmap->bitmapData->get_rect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		this->_canvasBitmap->bitmapData->fillRect(_g,(int)0);
		HX_STACK_LINE(267)
		this->_dimensionsText->set_text(HX_CSTRING(""));
		HX_STACK_LINE(268)
		this->_counterText->set_text(HX_CSTRING("0/0"));
		HX_STACK_LINE(269)
		this->_footerText->set_text(HX_CSTRING(""));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,clear,(void))

bool BitmapLog_obj::refreshCanvas( Dynamic Index){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","refreshCanvas",0xfd928b12,"flixel.system.debug.BitmapLog.refreshCanvas","flixel/system/debug/BitmapLog.hx",273,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(274)
	if (((bool((this->_entries == null())) || bool((this->_entries->__Field(HX_CSTRING("length"),true) <= (int)0))))){
		HX_STACK_LINE(276)
		this->_curIndex = (int)0;
		HX_STACK_LINE(277)
		return false;
	}
	HX_STACK_LINE(280)
	if (((Index == null()))){
		HX_STACK_LINE(282)
		Index = this->_curIndex;
	}
	HX_STACK_LINE(285)
	::openfl::geom::Rectangle _g = this->_canvasBitmap->bitmapData->get_rect();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(285)
	this->_canvasBitmap->bitmapData->fillRect(_g,(int)0);
	HX_STACK_LINE(287)
	if (((Index < (int)0))){
		HX_STACK_LINE(289)
		Index = (this->_entries->__Field(HX_CSTRING("length"),true) - (int)1);
	}
	else{
		HX_STACK_LINE(291)
		if (((Index >= this->_entries->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(293)
			Index = (int)0;
		}
	}
	HX_STACK_LINE(296)
	this->_curIndex = Index;
	HX_STACK_LINE(299)
	int _g1 = this->_canvasBitmap->bitmapData->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(299)
	Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(299)
	int _g3 = this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(299)
	Float _g4 = (_g3 * this->zoom);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(299)
	Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(299)
	Float _g6 = (_g2 - _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(299)
	this->_point->set_x(_g6);
	HX_STACK_LINE(300)
	int _g7 = this->_canvasBitmap->bitmapData->get_height();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(300)
	Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(300)
	int _g9 = this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(300)
	Float _g10 = (_g9 * this->zoom);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(300)
	Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(300)
	Float _g12 = (_g8 - _g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(300)
	this->_point->set_y(_g12);
	HX_STACK_LINE(302)
	this->_point->addPoint(this->_curMouseOffset);
	HX_STACK_LINE(304)
	this->_matrix->identity();
	HX_STACK_LINE(305)
	this->_matrix->scale(this->zoom,this->zoom);
	HX_STACK_LINE(306)
	this->_matrix->translate(this->_point->x,this->_point->y);
	HX_STACK_LINE(308)
	::openfl::geom::Rectangle _g13 = this->_canvasBitmap->bitmapData->get_rect();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(308)
	this->_canvasBitmap->bitmapData->draw(this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true),this->_matrix,null(),null(),_g13,false);
	HX_STACK_LINE(310)
	this->drawBoundingBox(this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true));
	HX_STACK_LINE(311)
	::openfl::geom::Rectangle _g14 = this->_canvasBitmap->bitmapData->get_rect();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(311)
	this->_canvasBitmap->bitmapData->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,this->_matrix,null(),null(),_g14,false);
	HX_STACK_LINE(313)
	this->refreshTexts();
	HX_STACK_LINE(315)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,refreshCanvas,return )

Void BitmapLog_obj::refreshTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","refreshTexts",0xd91a3a2c,"flixel.system.debug.BitmapLog.refreshTexts","flixel/system/debug/BitmapLog.hx",319,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		int _g = this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		::String _g1 = (_g + HX_CSTRING("x"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		int _g2 = this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(320)
		::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(320)
		this->_dimensionsText->set_text(_g3);
		HX_STACK_LINE(321)
		this->_counterText->set_text((((HX_CSTRING("") + ((this->_curIndex + (int)1))) + HX_CSTRING("/")) + this->_entries->__Field(HX_CSTRING("length"),true)));
		HX_STACK_LINE(323)
		::String entryName = this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(entryName,"entryName");
		HX_STACK_LINE(324)
		::String name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(324)
		if (((entryName == HX_CSTRING("")))){
			HX_STACK_LINE(324)
			name = HX_CSTRING("");
		}
		else{
			HX_STACK_LINE(324)
			name = ((HX_CSTRING("\"") + entryName) + HX_CSTRING("\" | "));
		}
		HX_STACK_LINE(325)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			::openfl::display::BitmapData bitmapData = this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true);		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(325)
			int _g4 = bitmapData->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(325)
			int _g5 = bitmapData->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(325)
			int _g6 = (_g4 * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(325)
			_g7 = (_g6 * (int)4);
		}
		HX_STACK_LINE(325)
		::String _g8 = ::flixel::util::FlxStringUtil_obj::formatBytes(_g7,null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(325)
		::String _g9 = (name + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(325)
		this->_footerText->set_text(_g9);
		HX_STACK_LINE(327)
		this->resizeTexts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,refreshTexts,(void))

Void BitmapLog_obj::drawBoundingBox( ::openfl::display::BitmapData bitmap){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","drawBoundingBox",0xb05c8722,"flixel.system.debug.BitmapLog.drawBoundingBox","flixel/system/debug/BitmapLog.hx",331,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_LINE(332)
		::openfl::display::Graphics gfx = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(333)
		gfx->clear();
		HX_STACK_LINE(334)
		gfx->lineStyle((int)1,(int)-65536,0.75,false,::openfl::display::LineScaleMode_obj::NONE,null(),null(),null());
		HX_STACK_LINE(335)
		int _g = bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(335)
		int _g1 = bitmap->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(335)
		gfx->drawRect((int)0,(int)0,_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,drawBoundingBox,(void))

Void BitmapLog_obj::onMouseWheel( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","onMouseWheel",0x77c9bd16,"flixel.system.debug.BitmapLog.onMouseWheel","flixel/system/debug/BitmapLog.hx",339,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			::flixel::system::debug::BitmapLog _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(340)
			_g->set_zoom((_g->zoom + ((((  (((e->delta < (int)0))) ? int((int)-1) : int((int)1) )) * 0.25) * this->zoom)));
		}
		HX_STACK_LINE(341)
		this->refreshCanvas(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMouseWheel,(void))

Void BitmapLog_obj::onMiddleDown( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","onMiddleDown",0x0e5d5b37,"flixel.system.debug.BitmapLog.onMiddleDown","flixel/system/debug/BitmapLog.hx",345,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(346)
		this->_middleMouseDown = true;
		HX_STACK_LINE(347)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(347)
		Float _g1 = this->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(347)
		this->_lastMousePos->set(_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleDown,(void))

Void BitmapLog_obj::onMiddleUp( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","onMiddleUp",0x6933f9f0,"flixel.system.debug.BitmapLog.onMiddleUp","flixel/system/debug/BitmapLog.hx",352,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(352)
		this->_middleMouseDown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleUp,(void))

Float BitmapLog_obj::set_zoom( Float Value){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","set_zoom",0xf7c26671,"flixel.system.debug.BitmapLog.set_zoom","flixel/system/debug/BitmapLog.hx",356,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(357)
	if (((Value < (int)0))){
		HX_STACK_LINE(359)
		Value = (int)0;
	}
	HX_STACK_LINE(361)
	return this->zoom = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,set_zoom,return )

::openfl::display::BitmapData BitmapLog_obj::get__canvas( ){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","get__canvas",0x3be08acd,"flixel.system.debug.BitmapLog.get__canvas","flixel/system/debug/BitmapLog.hx",366,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(366)
	return this->_canvasBitmap->bitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__canvas,return )

Dynamic BitmapLog_obj::get__curEntry( ){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","get__curEntry",0x0843d007,"flixel.system.debug.BitmapLog.get__curEntry","flixel/system/debug/BitmapLog.hx",371,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	return this->_entries->__GetItem(this->_curIndex);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curEntry,return )

::openfl::display::BitmapData BitmapLog_obj::get__curBitmap( ){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","get__curBitmap",0x1efb5aba,"flixel.system.debug.BitmapLog.get__curBitmap","flixel/system/debug/BitmapLog.hx",376,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(376)
	return this->_entries->__GetItem(this->_curIndex)->__Field(HX_CSTRING("bitmap"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curBitmap,return )


BitmapLog_obj::BitmapLog_obj()
{
}

void BitmapLog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapLog);
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_MARK_MEMBER_NAME(_entries,"_entries");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_MARK_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_MARK_MEMBER_NAME(_buttonText,"_buttonText");
	HX_MARK_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_MARK_MEMBER_NAME(_counterText,"_counterText");
	HX_MARK_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_MARK_MEMBER_NAME(_ui,"_ui");
	HX_MARK_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_MARK_MEMBER_NAME(_footer,"_footer");
	HX_MARK_MEMBER_NAME(_footerText,"_footerText");
	::flixel::system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapLog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_VISIT_MEMBER_NAME(_entries,"_entries");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_VISIT_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_VISIT_MEMBER_NAME(_buttonText,"_buttonText");
	HX_VISIT_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_VISIT_MEMBER_NAME(_counterText,"_counterText");
	HX_VISIT_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_VISIT_MEMBER_NAME(_ui,"_ui");
	HX_VISIT_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_VISIT_MEMBER_NAME(_footer,"_footer");
	HX_VISIT_MEMBER_NAME(_footerText,"_footerText");
	::flixel::system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapLog_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { return _ui; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { return get__canvas(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_footer") ) { return _footer; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAt") ) { return clearAt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { return _entries; }
		if (HX_FIELD_EQ(inName,"previous") ) { return previous_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return _curIndex; }
		if (HX_FIELD_EQ(inName,"_curEntry") ) { return get__curEntry(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curBitmap") ) { return get__curBitmap(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleUp") ) { return onMiddleUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { return _buttonLeft; }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { return _buttonText; }
		if (HX_FIELD_EQ(inName,"_footerText") ) { return _footerText; }
		if (HX_FIELD_EQ(inName,"resizeTexts") ) { return resizeTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"get__canvas") ) { return get__canvas_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { return _buttonRight; }
		if (HX_FIELD_EQ(inName,"_counterText") ) { return _counterText; }
		if (HX_FIELD_EQ(inName,"refreshTexts") ) { return refreshTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleDown") ) { return onMiddleDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { return _canvasBitmap; }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { return _lastMousePos; }
		if (HX_FIELD_EQ(inName,"resetSettings") ) { return resetSettings_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshCanvas") ) { return refreshCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"get__curEntry") ) { return get__curEntry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createHeaderUI") ) { return createHeaderUI_dyn(); }
		if (HX_FIELD_EQ(inName,"createFooterUI") ) { return createFooterUI_dyn(); }
		if (HX_FIELD_EQ(inName,"get__curBitmap") ) { return get__curBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { return _curMouseOffset; }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { return _dimensionsText; }
		if (HX_FIELD_EQ(inName,"drawBoundingBox") ) { return drawBoundingBox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { return _middleMouseDown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapLog_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { _ui=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footer") ) { _footer=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { _entries=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { _buttonLeft=inValue.Cast< ::flixel::system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { _buttonText=inValue.Cast< ::flixel::system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footerText") ) { _footerText=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { _buttonRight=inValue.Cast< ::flixel::system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counterText") ) { _counterText=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { _canvasBitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { _lastMousePos=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { _curMouseOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { _dimensionsText=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { _middleMouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapLog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("_canvas"));
	outFields->push(HX_CSTRING("_canvasBitmap"));
	outFields->push(HX_CSTRING("_entries"));
	outFields->push(HX_CSTRING("_curIndex"));
	outFields->push(HX_CSTRING("_curEntry"));
	outFields->push(HX_CSTRING("_curBitmap"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_lastMousePos"));
	outFields->push(HX_CSTRING("_curMouseOffset"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_buttonLeft"));
	outFields->push(HX_CSTRING("_buttonText"));
	outFields->push(HX_CSTRING("_buttonRight"));
	outFields->push(HX_CSTRING("_counterText"));
	outFields->push(HX_CSTRING("_dimensionsText"));
	outFields->push(HX_CSTRING("_ui"));
	outFields->push(HX_CSTRING("_middleMouseDown"));
	outFields->push(HX_CSTRING("_footer"));
	outFields->push(HX_CSTRING("_footerText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BitmapLog_obj,zoom),HX_CSTRING("zoom")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(BitmapLog_obj,_canvasBitmap),HX_CSTRING("_canvasBitmap")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapLog_obj,_entries),HX_CSTRING("_entries")},
	{hx::fsInt,(int)offsetof(BitmapLog_obj,_curIndex),HX_CSTRING("_curIndex")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_lastMousePos),HX_CSTRING("_lastMousePos")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_curMouseOffset),HX_CSTRING("_curMouseOffset")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapLog_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsObject /*::flixel::system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonLeft),HX_CSTRING("_buttonLeft")},
	{hx::fsObject /*::flixel::system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonText),HX_CSTRING("_buttonText")},
	{hx::fsObject /*::flixel::system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonRight),HX_CSTRING("_buttonRight")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_counterText),HX_CSTRING("_counterText")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_dimensionsText),HX_CSTRING("_dimensionsText")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(BitmapLog_obj,_ui),HX_CSTRING("_ui")},
	{hx::fsBool,(int)offsetof(BitmapLog_obj,_middleMouseDown),HX_CSTRING("_middleMouseDown")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(BitmapLog_obj,_footer),HX_CSTRING("_footer")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_footerText),HX_CSTRING("_footerText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zoom"),
	HX_CSTRING("_canvasBitmap"),
	HX_CSTRING("_entries"),
	HX_CSTRING("_curIndex"),
	HX_CSTRING("_point"),
	HX_CSTRING("_lastMousePos"),
	HX_CSTRING("_curMouseOffset"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_buttonLeft"),
	HX_CSTRING("_buttonText"),
	HX_CSTRING("_buttonRight"),
	HX_CSTRING("_counterText"),
	HX_CSTRING("_dimensionsText"),
	HX_CSTRING("_ui"),
	HX_CSTRING("_middleMouseDown"),
	HX_CSTRING("_footer"),
	HX_CSTRING("_footerText"),
	HX_CSTRING("createHeaderUI"),
	HX_CSTRING("createFooterUI"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateSize"),
	HX_CSTRING("resize"),
	HX_CSTRING("resizeTexts"),
	HX_CSTRING("next"),
	HX_CSTRING("previous"),
	HX_CSTRING("resetSettings"),
	HX_CSTRING("add"),
	HX_CSTRING("clearAt"),
	HX_CSTRING("clear"),
	HX_CSTRING("refreshCanvas"),
	HX_CSTRING("refreshTexts"),
	HX_CSTRING("drawBoundingBox"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMiddleDown"),
	HX_CSTRING("onMiddleUp"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("get__canvas"),
	HX_CSTRING("get__curEntry"),
	HX_CSTRING("get__curBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapLog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapLog_obj::__mClass,"__mClass");
};

#endif

Class BitmapLog_obj::__mClass;

void BitmapLog_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.BitmapLog"), hx::TCanCast< BitmapLog_obj> ,sStaticFields,sMemberFields,
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

void BitmapLog_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
