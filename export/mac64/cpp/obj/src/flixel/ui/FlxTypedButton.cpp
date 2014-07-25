#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_GraphicButton
#include <flixel/ui/_FlxTypedButton/GraphicButton.h>
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
namespace flixel{
namespace ui{

Void FlxTypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxTypedButton","new",0xc7e33f04,"flixel.ui.FlxTypedButton.new","flixel/ui/FlxTypedButton.hx",19,0x752be24c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(72)
	this->_pressedMouse = false;
	HX_STACK_LINE(42)
	this->allowHighlightOnMobile = false;
	HX_STACK_LINE(37)
	this->allowSwiping = true;
	HX_STACK_LINE(83)
	super::__construct(X,Y,null());
	HX_STACK_LINE(85)
	this->loadGraphic(hx::ClassOf< ::flixel::ui::_FlxTypedButton::GraphicButton >(),true,(int)80,(int)20,null(),null());
	HX_STACK_LINE(87)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent _g = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(OnClick,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(87)
	this->onUp = _g;
	HX_STACK_LINE(88)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent _g1 = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(88)
	this->onDown = _g1;
	HX_STACK_LINE(89)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent _g2 = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(89)
	this->onOver = _g2;
	HX_STACK_LINE(90)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent _g3 = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(90)
	this->onOut = _g3;
	HX_STACK_LINE(92)
	this->labelAlphas = Array_obj< Float >::__new().Add(0.8).Add(1.0).Add(0.5);
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(93)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(93)
		point->_inPool = false;
		HX_STACK_LINE(93)
		_g4 = point;
	}
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(93)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(93)
		point->_inPool = false;
		HX_STACK_LINE(93)
		_g5 = point;
	}
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)0,(int)1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(93)
		point->_inPool = false;
		HX_STACK_LINE(93)
		_g6 = point;
	}
	HX_STACK_LINE(93)
	Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new().Add(_g4).Add(_g5).Add(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(93)
	this->labelOffsets = _g7;
	HX_STACK_LINE(95)
	this->set_status((int)0);
	HX_STACK_LINE(98)
	this->scrollFactor->set(null(),null());
	HX_STACK_LINE(101)
	::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->onUpEventListener_dyn(),null(),null(),null());
}
;
	return null();
}

//FlxTypedButton_obj::~FlxTypedButton_obj() { }

Dynamic FlxTypedButton_obj::__CreateEmpty() { return  new FlxTypedButton_obj; }
hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(__o_X,__o_Y,OnClick);
	return result;}

Dynamic FlxTypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxTypedButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","destroy",0xe11bbd9e,"flixel.ui.FlxTypedButton.destroy","flixel/ui/FlxTypedButton.hx",109,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		Dynamic _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->label);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		this->set_label(_g);
		HX_STACK_LINE(112)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onUp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		this->onUp = _g1;
		HX_STACK_LINE(113)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onDown);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(113)
		this->onDown = _g2;
		HX_STACK_LINE(114)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onOver);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(114)
		this->onOver = _g3;
		HX_STACK_LINE(115)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onOut);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(115)
		this->onOut = _g4;
		HX_STACK_LINE(117)
		Array< ::Dynamic > _g5 = ::flixel::util::FlxDestroyUtil_obj::putArray(this->labelOffsets);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(117)
		this->labelOffsets = _g5;
		HX_STACK_LINE(119)
		this->labelAlphas = null();
		HX_STACK_LINE(120)
		this->_pressedTouch = null();
		HX_STACK_LINE(123)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->onUpEventListener_dyn(),null());
		HX_STACK_LINE(126)
		this->super::destroy();
	}
return null();
}


Void FlxTypedButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","update",0xc4b5d5e5,"flixel.ui.FlxTypedButton.update","flixel/ui/FlxTypedButton.hx",133,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		this->super::update();
		HX_STACK_LINE(136)
		if ((!(this->visible))){
			HX_STACK_LINE(138)
			return null();
		}
		HX_STACK_LINE(143)
		this->updateButton();
		HX_STACK_LINE(147)
		int nextFrame = this->status;		HX_STACK_VAR(nextFrame,"nextFrame");
		HX_STACK_LINE(157)
		this->animation->set_frameIndex(nextFrame);
	}
return null();
}


Void FlxTypedButton_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","draw",0x18618ce0,"flixel.ui.FlxTypedButton.draw","flixel/ui/FlxTypedButton.hx",164,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		this->super::draw();
		HX_STACK_LINE(167)
		if (((bool((this->label != null())) && bool(this->label->__Field(HX_CSTRING("visible"),true))))){
			HX_STACK_LINE(169)
			Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			this->label->__Field(HX_CSTRING("set_cameras"),true)(_g);
			HX_STACK_LINE(170)
			this->label->__Field(HX_CSTRING("draw"),true)();
		}
	}
return null();
}


Void FlxTypedButton_obj::drawDebug( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","drawDebug",0xd8c08953,"flixel.ui.FlxTypedButton.drawDebug","flixel/ui/FlxTypedButton.hx",179,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		this->super::drawDebug();
		HX_STACK_LINE(182)
		if (((this->label != null()))){
			HX_STACK_LINE(184)
			this->label->__Field(HX_CSTRING("drawDebug"),true)();
		}
	}
return null();
}


Void FlxTypedButton_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateButton",0x576ba5b7,"flixel.ui.FlxTypedButton.updateButton","flixel/ui/FlxTypedButton.hx",194,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		bool overlapFound = false;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			while((true)){
				HX_STACK_LINE(199)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(199)
					break;
				}
				HX_STACK_LINE(199)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(199)
				++(_g);
				HX_STACK_LINE(202)
				::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
				HX_STACK_LINE(204)
				if ((this->overlapsPoint(this->_point,true,camera))){
					HX_STACK_LINE(206)
					overlapFound = true;
					struct _Function_4_1{
						inline static bool Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxTypedButton.hx",207,0x752be24c)
							{
								HX_STACK_LINE(207)
								::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(207)
								return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
							}
							return null();
						}
					};
					HX_STACK_LINE(207)
					this->updateStatus(true,_Function_4_1::Block(),(::flixel::FlxG_obj::mouse->_leftButton->current > (int)0),null());
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(213)
					Array< ::Dynamic > _g3 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(213)
					while((true)){
						HX_STACK_LINE(213)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(213)
							break;
						}
						HX_STACK_LINE(213)
						::flixel::input::touch::FlxTouch touch = _g3->__get(_g2).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(213)
						++(_g2);
						HX_STACK_LINE(215)
						touch->getWorldPosition(camera,this->_point);
						HX_STACK_LINE(217)
						if ((this->overlapsPoint(this->_point,true,camera))){
							HX_STACK_LINE(219)
							overlapFound = true;
							HX_STACK_LINE(220)
							this->updateStatus(true,(touch->_current == (int)2),(touch->_current > (int)0),touch);
							HX_STACK_LINE(221)
							break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(227)
		if ((!(overlapFound))){
			HX_STACK_LINE(229)
			this->updateStatus(false,false,false,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

Void FlxTypedButton_obj::updateStatus( bool Overlap,bool JustPressed,bool Pressed,::flixel::input::touch::FlxTouch Touch){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateStatus",0x83872af7,"flixel.ui.FlxTypedButton.updateStatus","flixel/ui/FlxTypedButton.hx",242,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Overlap,"Overlap")
		HX_STACK_ARG(JustPressed,"JustPressed")
		HX_STACK_ARG(Pressed,"Pressed")
		HX_STACK_ARG(Touch,"Touch")
		HX_STACK_LINE(243)
		if ((Overlap)){
			HX_STACK_LINE(245)
			if ((JustPressed)){
				HX_STACK_LINE(247)
				this->_pressedTouch = Touch;
				HX_STACK_LINE(248)
				if (((Touch == null()))){
					HX_STACK_LINE(250)
					this->_pressedMouse = true;
				}
				HX_STACK_LINE(252)
				this->onDownHandler();
			}
			else{
				HX_STACK_LINE(254)
				if (((this->status == (int)0))){
					HX_STACK_LINE(257)
					if (((bool(this->allowSwiping) && bool(Pressed)))){
						HX_STACK_LINE(259)
						this->onDownHandler();
					}
					else{
						HX_STACK_LINE(263)
						this->onOverHandler();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(267)
			if (((this->status != (int)0))){
				HX_STACK_LINE(269)
				this->onOutHandler();
			}
		}
		HX_STACK_LINE(274)
		if (((bool((this->_pressedTouch != null())) && bool((this->_pressedTouch->_current == (int)-1))))){
			HX_STACK_LINE(276)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_obj,updateStatus,(void))

Void FlxTypedButton_obj::onUpEventListener( ::openfl::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpEventListener",0x0f960298,"flixel.ui.FlxTypedButton.onUpEventListener","flixel/ui/FlxTypedButton.hx",288,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(288)
		if (((bool((bool((bool(this->visible) && bool(this->exists))) && bool(this->active))) && bool((this->status == (int)2))))){
			HX_STACK_LINE(290)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,onUpEventListener,(void))

Void FlxTypedButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpHandler",0xf0255834,"flixel.ui.FlxTypedButton.onUpHandler","flixel/ui/FlxTypedButton.hx",299,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		this->set_status((int)0);
		HX_STACK_LINE(301)
		this->_pressedMouse = false;
		HX_STACK_LINE(302)
		this->_pressedTouch = null();
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onUp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(304)
			if (((_this->callback != null()))){
				HX_STACK_LINE(304)
				_this->callback();
			}
			HX_STACK_LINE(304)
			if (((_this->sound != null()))){
				HX_STACK_LINE(304)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onUpHandler,(void))

Void FlxTypedButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onDownHandler",0x6003504d,"flixel.ui.FlxTypedButton.onDownHandler","flixel/ui/FlxTypedButton.hx",311,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		this->set_status((int)2);
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onDown;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(314)
			if (((_this->callback != null()))){
				HX_STACK_LINE(314)
				_this->callback();
			}
			HX_STACK_LINE(314)
			if (((_this->sound != null()))){
				HX_STACK_LINE(314)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onDownHandler,(void))

Void FlxTypedButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOverHandler",0x3b6b999b,"flixel.ui.FlxTypedButton.onOverHandler","flixel/ui/FlxTypedButton.hx",321,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		this->set_status((int)1);
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onOver;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(324)
			if (((_this->callback != null()))){
				HX_STACK_LINE(324)
				_this->callback();
			}
			HX_STACK_LINE(324)
			if (((_this->sound != null()))){
				HX_STACK_LINE(324)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOverHandler,(void))

Void FlxTypedButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOutHandler",0x1cacc3b7,"flixel.ui.FlxTypedButton.onOutHandler","flixel/ui/FlxTypedButton.hx",331,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		this->set_status((int)0);
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onOut;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(334)
			if (((_this->callback != null()))){
				HX_STACK_LINE(334)
				_this->callback();
			}
			HX_STACK_LINE(334)
			if (((_this->sound != null()))){
				HX_STACK_LINE(334)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOutHandler,(void))

Dynamic FlxTypedButton_obj::set_label( Dynamic Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_label",0xd03f57fb,"flixel.ui.FlxTypedButton.set_label","flixel/ui/FlxTypedButton.hx",338,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(339)
	if (((Value != null()))){
		HX_STACK_LINE(342)
		Value->__Field(HX_CSTRING("scrollFactor"),true)->__Field(HX_CSTRING("put"),true)();
		HX_STACK_LINE(343)
		Value->__FieldRef(HX_CSTRING("scrollFactor")) = this->scrollFactor;
	}
	HX_STACK_LINE(345)
	return this->label = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_label,return )

int FlxTypedButton_obj::set_status( int Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_status",0x23ac634b,"flixel.ui.FlxTypedButton.set_status","flixel/ui/FlxTypedButton.hx",349,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(350)
	if (((bool((this->labelAlphas->length > Value)) && bool((this->label != null()))))){
		HX_STACK_LINE(352)
		this->label->__Field(HX_CSTRING("set_alpha"),true)((this->alpha * this->labelAlphas->__get(Value)));
	}
	HX_STACK_LINE(354)
	return this->status = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_status,return )

Float FlxTypedButton_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_x",0xd772faff,"flixel.ui.FlxTypedButton.set_x","flixel/ui/FlxTypedButton.hx",358,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(359)
	this->super::set_x(Value);
	HX_STACK_LINE(361)
	if (((this->label != null()))){
		HX_STACK_LINE(363)
		this->label->__Field(HX_CSTRING("set_x"),true)((this->x + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->x));
	}
	HX_STACK_LINE(365)
	return this->x;
}


Float FlxTypedButton_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_y",0xd772fb00,"flixel.ui.FlxTypedButton.set_y","flixel/ui/FlxTypedButton.hx",369,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(370)
	this->super::set_y(Value);
	HX_STACK_LINE(372)
	if (((this->label != null()))){
		HX_STACK_LINE(374)
		this->label->__Field(HX_CSTRING("set_y"),true)((this->y + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->y));
	}
	HX_STACK_LINE(376)
	return this->y;
}



FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_MARK_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_MARK_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_MARK_MEMBER_NAME(allowHighlightOnMobile,"allowHighlightOnMobile");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(_pressedTouch,"_pressedTouch");
	HX_MARK_MEMBER_NAME(_pressedMouse,"_pressedMouse");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_VISIT_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_VISIT_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_VISIT_MEMBER_NAME(allowHighlightOnMobile,"allowHighlightOnMobile");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(_pressedTouch,"_pressedTouch");
	HX_VISIT_MEMBER_NAME(_pressedMouse,"_pressedMouse");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"set_label") ) { return set_label_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_status") ) { return set_status_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { return labelAlphas; }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { return labelOffsets; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { return allowSwiping; }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"updateStatus") ) { return updateStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedTouch") ) { return _pressedTouch; }
		if (HX_FIELD_EQ(inName,"_pressedMouse") ) { return _pressedMouse; }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onUpEventListener") ) { return onUpEventListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowHighlightOnMobile") ) { return allowHighlightOnMobile; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp) return set_label(inValue);label=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp) return set_status(inValue);status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { labelAlphas=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { labelOffsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { allowSwiping=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedTouch") ) { _pressedTouch=inValue.Cast< ::flixel::input::touch::FlxTouch >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressedMouse") ) { _pressedMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowHighlightOnMobile") ) { allowHighlightOnMobile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("labelOffsets"));
	outFields->push(HX_CSTRING("labelAlphas"));
	outFields->push(HX_CSTRING("allowSwiping"));
	outFields->push(HX_CSTRING("allowHighlightOnMobile"));
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("onUp"));
	outFields->push(HX_CSTRING("onDown"));
	outFields->push(HX_CSTRING("onOver"));
	outFields->push(HX_CSTRING("onOut"));
	outFields->push(HX_CSTRING("_pressedTouch"));
	outFields->push(HX_CSTRING("_pressedMouse"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedButton_obj,label),HX_CSTRING("label")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTypedButton_obj,labelOffsets),HX_CSTRING("labelOffsets")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxTypedButton_obj,labelAlphas),HX_CSTRING("labelAlphas")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,allowSwiping),HX_CSTRING("allowSwiping")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,allowHighlightOnMobile),HX_CSTRING("allowHighlightOnMobile")},
	{hx::fsInt,(int)offsetof(FlxTypedButton_obj,status),HX_CSTRING("status")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onUp),HX_CSTRING("onUp")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onDown),HX_CSTRING("onDown")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOver),HX_CSTRING("onOver")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOut),HX_CSTRING("onOut")},
	{hx::fsObject /*::flixel::input::touch::FlxTouch*/ ,(int)offsetof(FlxTypedButton_obj,_pressedTouch),HX_CSTRING("_pressedTouch")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,_pressedMouse),HX_CSTRING("_pressedMouse")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("label"),
	HX_CSTRING("labelOffsets"),
	HX_CSTRING("labelAlphas"),
	HX_CSTRING("allowSwiping"),
	HX_CSTRING("allowHighlightOnMobile"),
	HX_CSTRING("status"),
	HX_CSTRING("onUp"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onOver"),
	HX_CSTRING("onOut"),
	HX_CSTRING("_pressedTouch"),
	HX_CSTRING("_pressedMouse"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("updateStatus"),
	HX_CSTRING("onUpEventListener"),
	HX_CSTRING("onUpHandler"),
	HX_CSTRING("onDownHandler"),
	HX_CSTRING("onOverHandler"),
	HX_CSTRING("onOutHandler"),
	HX_CSTRING("set_label"),
	HX_CSTRING("set_status"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxTypedButton"), hx::TCanCast< FlxTypedButton_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace ui
