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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void WatchEntry_obj::__construct(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{
HX_STACK_FRAME("flixel.system.debug.WatchEntry","new",0x24d59cbd,"flixel.system.debug.WatchEntry.new","flixel/system/debug/WatchEntry.hx",19,0x35f5be92)
HX_STACK_THIS(this)
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(NameWidth,"NameWidth")
HX_STACK_ARG(ValueWidth,"ValueWidth")
HX_STACK_ARG(Obj,"Obj")
HX_STACK_ARG(Field,"Field")
HX_STACK_ARG(Custom,"Custom")
{
	HX_STACK_LINE(56)
	this->quickWatch = false;
	HX_STACK_LINE(71)
	this->editing = false;
	HX_STACK_LINE(73)
	if (((bool((bool((Obj == null())) && bool((Field == null())))) && bool((Custom != null()))))){
		HX_STACK_LINE(75)
		this->quickWatch = true;
	}
	HX_STACK_LINE(78)
	this->custom = Custom;
	HX_STACK_LINE(81)
	if ((!(this->quickWatch))){
		HX_STACK_LINE(83)
		this->object = Obj;
		HX_STACK_LINE(84)
		this->field = Field;
		HX_STACK_LINE(86)
		Array< ::String > tempArr = this->field.split(HX_CSTRING("."));		HX_STACK_VAR(tempArr,"tempArr");
		HX_STACK_LINE(87)
		int l = tempArr->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(88)
		Dynamic tempObj = this->object;		HX_STACK_VAR(tempObj,"tempObj");
		HX_STACK_LINE(89)
		::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				if ((!(((_g < l))))){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(92)
				tempVarName = tempArr->__get(i);
				HX_STACK_LINE(94)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(96)
					if (((tempObj == null()))){
						HX_STACK_LINE(96)
						Dynamic();
					}
					else{
						HX_STACK_LINE(96)
						tempObj->__Field(tempVarName,true);
					}
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(100)
							{
								HX_STACK_LINE(100)
								::String _g1 = ::Std_obj::string(tempObj);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(100)
								::String _g11 = (HX_CSTRING("Watch: ") + _g1);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(100)
								::String _g2 = (_g11 + HX_CSTRING(" does not have a field '"));		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(100)
								::String _g3 = (_g2 + tempVarName);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(100)
								Dynamic Data = (_g3 + HX_CSTRING("'"));		HX_STACK_VAR(Data,"Data");
								HX_STACK_LINE(100)
								::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
							}
							HX_STACK_LINE(101)
							tempVarName = null();
							HX_STACK_LINE(102)
							break;
						}
					}
				}
				HX_STACK_LINE(105)
				if (((i < (l - (int)1)))){
					HX_STACK_LINE(107)
					Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(107)
					_g4 = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
					HX_STACK_LINE(107)
					tempObj = _g4;
				}
			}
		}
		HX_STACK_LINE(111)
		this->object = tempObj;
		HX_STACK_LINE(112)
		this->field = tempVarName;
	}
	HX_STACK_LINE(115)
	::String fontName = ::flixel::system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(fontName,"fontName");
	HX_STACK_LINE(117)
	int color = (int)16777215;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(118)
	if ((this->quickWatch)){
		HX_STACK_LINE(120)
		color = (int)10875373;
	}
	HX_STACK_LINE(123)
	::openfl::text::TextFormat _g5 = ::openfl::text::TextFormat_obj::__new(fontName,(int)12,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(123)
	this->_whiteText = _g5;
	HX_STACK_LINE(124)
	::openfl::text::TextFormat _g6 = ::openfl::text::TextFormat_obj::__new(fontName,(int)12,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(124)
	this->_blackText = _g6;
	HX_STACK_LINE(126)
	::openfl::text::TextField _g7 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(126)
	this->nameDisplay = _g7;
	HX_STACK_LINE(127)
	this->nameDisplay->set_y(Y);
	HX_STACK_LINE(128)
	this->nameDisplay->set_multiline(false);
	HX_STACK_LINE(129)
	this->nameDisplay->set_selectable(true);
	HX_STACK_LINE(130)
	this->nameDisplay->set_embedFonts(true);
	HX_STACK_LINE(131)
	this->nameDisplay->set_defaultTextFormat(this->_whiteText);
	HX_STACK_LINE(133)
	::openfl::text::TextField _g8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(133)
	this->valueDisplay = _g8;
	HX_STACK_LINE(134)
	this->valueDisplay->set_y(Y);
	HX_STACK_LINE(135)
	this->valueDisplay->set_height((int)20);
	HX_STACK_LINE(136)
	this->valueDisplay->set_multiline(false);
	HX_STACK_LINE(137)
	this->valueDisplay->set_selectable(true);
	HX_STACK_LINE(138)
	this->valueDisplay->doubleClickEnabled = true;
	HX_STACK_LINE(140)
	if ((!(this->quickWatch))){
		HX_STACK_LINE(142)
		this->valueDisplay->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(143)
		this->valueDisplay->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(145)
	this->valueDisplay->set_background(false);
	HX_STACK_LINE(146)
	this->valueDisplay->set_backgroundColor((int)16777215);
	HX_STACK_LINE(147)
	this->valueDisplay->set_embedFonts(true);
	HX_STACK_LINE(148)
	this->valueDisplay->set_defaultTextFormat(this->_whiteText);
	HX_STACK_LINE(150)
	this->updateWidth(NameWidth,ValueWidth);
}
;
	return null();
}

//WatchEntry_obj::~WatchEntry_obj() { }

Dynamic WatchEntry_obj::__CreateEmpty() { return  new WatchEntry_obj; }
hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{  hx::ObjectPtr< WatchEntry_obj > result = new WatchEntry_obj();
	result->__construct(Y,NameWidth,ValueWidth,Obj,Field,Custom);
	return result;}

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchEntry_obj > result = new WatchEntry_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

hx::Object *WatchEntry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void WatchEntry_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","destroy",0x6821ebd7,"flixel.system.debug.WatchEntry.destroy","flixel/system/debug/WatchEntry.hx",157,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		this->object = null();
		HX_STACK_LINE(159)
		this->oldValue = null();
		HX_STACK_LINE(160)
		this->nameDisplay = null();
		HX_STACK_LINE(161)
		this->field = null();
		HX_STACK_LINE(162)
		this->custom = null();
		HX_STACK_LINE(163)
		if (((this->valueDisplay != null()))){
			HX_STACK_LINE(165)
			this->valueDisplay->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
			HX_STACK_LINE(166)
			this->valueDisplay->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null());
			HX_STACK_LINE(167)
			this->valueDisplay = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))

Void WatchEntry_obj::setY( Float Y){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","setY",0x1961977a,"flixel.system.debug.WatchEntry.setY","flixel/system/debug/WatchEntry.hx",175,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(176)
		this->nameDisplay->set_y(Y);
		HX_STACK_LINE(177)
		this->valueDisplay->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setY,(void))

Void WatchEntry_obj::updateWidth( Float NameWidth,Float ValueWidth){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","updateWidth",0xbedc109a,"flixel.system.debug.WatchEntry.updateWidth","flixel/system/debug/WatchEntry.hx",184,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NameWidth,"NameWidth")
		HX_STACK_ARG(ValueWidth,"ValueWidth")
		HX_STACK_LINE(185)
		this->nameDisplay->set_width(NameWidth);
		HX_STACK_LINE(186)
		this->valueDisplay->set_width(ValueWidth);
		HX_STACK_LINE(187)
		if (((this->custom != null()))){
			HX_STACK_LINE(189)
			this->nameDisplay->set_text(this->custom);
		}
		else{
			HX_STACK_LINE(191)
			if (((this->field != null()))){
				HX_STACK_LINE(193)
				this->nameDisplay->set_text(HX_CSTRING(""));
				HX_STACK_LINE(194)
				if (((NameWidth > (int)120))){
					HX_STACK_LINE(196)
					::String _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(196)
					{
						HX_STACK_LINE(196)
						Dynamic Obj = this->object;		HX_STACK_VAR(Obj,"Obj");
						HX_STACK_LINE(196)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(196)
						if ((::Std_obj::is(Obj,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(196)
							cl = Obj;
						}
						else{
							HX_STACK_LINE(196)
							::Class _g = ::Type_obj::getClass(Obj);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(196)
							cl = _g;
						}
						HX_STACK_LINE(196)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(196)
						if (((s != null()))){
							HX_STACK_LINE(196)
							::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(196)
							s = _g1;
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(196)
								int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(196)
								::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(196)
								s = _g4;
							}
						}
						HX_STACK_LINE(196)
						_g5 = s;
					}
					HX_STACK_LINE(196)
					::String _g6 = (_g5 + HX_CSTRING("."));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(196)
					this->nameDisplay->appendText(_g6);
				}
				HX_STACK_LINE(199)
				this->nameDisplay->appendText(this->field);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateWidth,(void))

bool WatchEntry_obj::updateValue( ){
	HX_STACK_FRAME("flixel.system.debug.WatchEntry","updateValue",0x2631da05,"flixel.system.debug.WatchEntry.updateValue","flixel/system/debug/WatchEntry.hx",208,0x35f5be92)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	if (((bool(this->editing) || bool(this->quickWatch)))){
		HX_STACK_LINE(211)
		return false;
	}
	HX_STACK_LINE(214)
	Dynamic property;		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		Dynamic o = this->object;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(214)
		if (((o == null()))){
			HX_STACK_LINE(214)
			property = null();
		}
		else{
			HX_STACK_LINE(214)
			property = o->__Field(this->field,true);
		}
	}
	HX_STACK_LINE(215)
	::String _g = ::Std_obj::string(property);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(215)
	this->valueDisplay->set_text(_g);
	HX_STACK_LINE(217)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,return )

Void WatchEntry_obj::onMouseUp( ::openfl::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","onMouseUp",0xc94c9c9e,"flixel.system.debug.WatchEntry.onMouseUp","flixel/system/debug/WatchEntry.hx",226,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(227)
		this->editing = true;
		HX_STACK_LINE(229)
		::flixel::FlxG_obj::keys->enabled = false;
		HX_STACK_LINE(231)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			Dynamic o = this->object;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(231)
			if (((o == null()))){
				HX_STACK_LINE(231)
				_g = null();
			}
			else{
				HX_STACK_LINE(231)
				_g = o->__Field(this->field,true);
			}
		}
		HX_STACK_LINE(231)
		this->oldValue = _g;
		HX_STACK_LINE(232)
		this->valueDisplay->set_type(::openfl::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(233)
		this->valueDisplay->setTextFormat(this->_blackText,null(),null());
		HX_STACK_LINE(234)
		this->valueDisplay->set_background(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onMouseUp,(void))

Void WatchEntry_obj::onKeyUp( ::openfl::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","onKeyUp",0xb8d81718,"flixel.system.debug.WatchEntry.onKeyUp","flixel/system/debug/WatchEntry.hx",244,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(244)
		if (((bool((bool((FlashEvent->keyCode == (int)13)) || bool((FlashEvent->keyCode == (int)9)))) || bool((FlashEvent->keyCode == (int)27))))){
			HX_STACK_LINE(246)
			if (((FlashEvent->keyCode == (int)27))){
				HX_STACK_LINE(248)
				this->cancel();
			}
			else{
				HX_STACK_LINE(252)
				this->submit();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onKeyUp,(void))

Void WatchEntry_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","cancel",0xaf52793d,"flixel.system.debug.WatchEntry.cancel","flixel/system/debug/WatchEntry.hx",261,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		Dynamic _g = this->oldValue->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(262)
		this->valueDisplay->set_text(_g);
		HX_STACK_LINE(263)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,cancel,(void))

Void WatchEntry_obj::submit( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","submit",0x9124e3db,"flixel.system.debug.WatchEntry.submit","flixel/system/debug/WatchEntry.hx",270,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		Dynamic property;		HX_STACK_VAR(property,"property");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			Dynamic o = this->object;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(271)
			if (((o == null()))){
				HX_STACK_LINE(271)
				property = null();
			}
			else{
				HX_STACK_LINE(271)
				property = o->__Field(this->field,true);
			}
		}
		HX_STACK_LINE(274)
		if ((::Std_obj::is(property,hx::ClassOf< ::flixel::util::FlxPoint >()))){
			HX_STACK_LINE(275)
			Array< ::String > _g = this->valueDisplay->get_text().split(HX_CSTRING(" |"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(275)
			::String xString = _g->__get((int)0);		HX_STACK_VAR(xString,"xString");
			HX_STACK_LINE(276)
			::String _g1 = xString.substring((int)3,xString.length);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(276)
			xString = _g1;
			HX_STACK_LINE(277)
			Float xValue = ::Std_obj::parseFloat(xString);		HX_STACK_VAR(xValue,"xValue");
			HX_STACK_LINE(279)
			Array< ::String > _g2 = this->valueDisplay->get_text().split(HX_CSTRING("| "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(279)
			::String yString = _g2->__get((int)1);		HX_STACK_VAR(yString,"yString");
			HX_STACK_LINE(280)
			::String _g3 = yString.substring((int)3,yString.length);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(280)
			yString = _g3;
			HX_STACK_LINE(281)
			Float yValue = ::Std_obj::parseFloat(yString);		HX_STACK_VAR(yValue,"yValue");
			HX_STACK_LINE(283)
			if ((!(::Math_obj::isNaN(xValue)))){
				HX_STACK_LINE(285)
				if (((property != null()))){
					HX_STACK_LINE(285)
					property->__SetField(HX_CSTRING("x"),xValue,false);
				}
			}
			HX_STACK_LINE(287)
			if ((!(::Math_obj::isNaN(yValue)))){
				HX_STACK_LINE(289)
				if (((property != null()))){
					HX_STACK_LINE(289)
					property->__SetField(HX_CSTRING("y"),yValue,false);
				}
			}
		}
		else{
			HX_STACK_LINE(294)
			Dynamic o = this->object;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(294)
			Dynamic value = this->valueDisplay->get_text();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(294)
			if (((o != null()))){
				HX_STACK_LINE(294)
				o->__SetField(this->field,value,true);
			}
		}
		HX_STACK_LINE(297)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,submit,(void))

::String WatchEntry_obj::toString( ){
	HX_STACK_FRAME("flixel.system.debug.WatchEntry","toString",0x1d1a132f,"flixel.system.debug.WatchEntry.toString","flixel/system/debug/WatchEntry.hx",301,0x35f5be92)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	::flixel::util::LabelValuePair _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		Dynamic value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			Dynamic Obj = this->object;		HX_STACK_VAR(Obj,"Obj");
			HX_STACK_LINE(303)
			::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(303)
			if ((::Std_obj::is(Obj,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(303)
				cl = Obj;
			}
			else{
				HX_STACK_LINE(303)
				::Class _g = ::Type_obj::getClass(Obj);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(303)
				cl = _g;
			}
			HX_STACK_LINE(303)
			::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(303)
			if (((s != null()))){
				HX_STACK_LINE(303)
				::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(303)
				s = _g1;
				HX_STACK_LINE(303)
				int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(303)
				int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(303)
				::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(303)
				s = _g4;
			}
			HX_STACK_LINE(303)
			value = s;
		}
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(303)
			_this->label = HX_CSTRING("object");
			HX_STACK_LINE(303)
			_this->value = value;
			HX_STACK_LINE(303)
			_g5 = _this;
		}
	}
	HX_STACK_LINE(304)
	::flixel::util::LabelValuePair _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(304)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(304)
		_this->label = HX_CSTRING("field");
		HX_STACK_LINE(304)
		_this->value = this->field;
		HX_STACK_LINE(304)
		_g6 = _this;
	}
	HX_STACK_LINE(302)
	Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new().Add(_g5).Add(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(302)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g7);
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,toString,return )

Void WatchEntry_obj::doneEditing( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","doneEditing",0xedb7c213,"flixel.system.debug.WatchEntry.doneEditing","flixel/system/debug/WatchEntry.hx",311,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		this->valueDisplay->set_type(::openfl::text::TextFieldType_obj::DYNAMIC);
		HX_STACK_LINE(313)
		this->valueDisplay->setTextFormat(this->_whiteText,null(),null());
		HX_STACK_LINE(314)
		this->valueDisplay->set_defaultTextFormat(this->_whiteText);
		HX_STACK_LINE(315)
		this->valueDisplay->set_background(false);
		HX_STACK_LINE(316)
		this->editing = false;
		HX_STACK_LINE(318)
		::flixel::FlxG_obj::keys->enabled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,doneEditing,(void))


WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_MARK_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_MARK_MEMBER_NAME(editing,"editing");
	HX_MARK_MEMBER_NAME(oldValue,"oldValue");
	HX_MARK_MEMBER_NAME(_whiteText,"_whiteText");
	HX_MARK_MEMBER_NAME(_blackText,"_blackText");
	HX_MARK_MEMBER_NAME(quickWatch,"quickWatch");
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(field,"field");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_VISIT_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	HX_VISIT_MEMBER_NAME(oldValue,"oldValue");
	HX_VISIT_MEMBER_NAME(_whiteText,"_whiteText");
	HX_VISIT_MEMBER_NAME(_blackText,"_blackText");
	HX_VISIT_MEMBER_NAME(quickWatch,"quickWatch");
}

Dynamic WatchEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { return oldValue; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_whiteText") ) { return _whiteText; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { return _blackText; }
		if (HX_FIELD_EQ(inName,"quickWatch") ) { return quickWatch; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { return nameDisplay; }
		if (HX_FIELD_EQ(inName,"updateWidth") ) { return updateWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"doneEditing") ) { return doneEditing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { return valueDisplay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WatchEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { oldValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_whiteText") ) { _whiteText=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { _blackText=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quickWatch") ) { quickWatch=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { nameDisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { valueDisplay=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("object"));
	outFields->push(HX_CSTRING("field"));
	outFields->push(HX_CSTRING("custom"));
	outFields->push(HX_CSTRING("nameDisplay"));
	outFields->push(HX_CSTRING("valueDisplay"));
	outFields->push(HX_CSTRING("editing"));
	outFields->push(HX_CSTRING("oldValue"));
	outFields->push(HX_CSTRING("_whiteText"));
	outFields->push(HX_CSTRING("_blackText"));
	outFields->push(HX_CSTRING("quickWatch"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WatchEntry_obj,object),HX_CSTRING("object")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,field),HX_CSTRING("field")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,custom),HX_CSTRING("custom")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(WatchEntry_obj,nameDisplay),HX_CSTRING("nameDisplay")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(WatchEntry_obj,valueDisplay),HX_CSTRING("valueDisplay")},
	{hx::fsBool,(int)offsetof(WatchEntry_obj,editing),HX_CSTRING("editing")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WatchEntry_obj,oldValue),HX_CSTRING("oldValue")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,_whiteText),HX_CSTRING("_whiteText")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,_blackText),HX_CSTRING("_blackText")},
	{hx::fsBool,(int)offsetof(WatchEntry_obj,quickWatch),HX_CSTRING("quickWatch")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("object"),
	HX_CSTRING("field"),
	HX_CSTRING("custom"),
	HX_CSTRING("nameDisplay"),
	HX_CSTRING("valueDisplay"),
	HX_CSTRING("editing"),
	HX_CSTRING("oldValue"),
	HX_CSTRING("_whiteText"),
	HX_CSTRING("_blackText"),
	HX_CSTRING("quickWatch"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setY"),
	HX_CSTRING("updateWidth"),
	HX_CSTRING("updateValue"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("cancel"),
	HX_CSTRING("submit"),
	HX_CSTRING("toString"),
	HX_CSTRING("doneEditing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

#endif

Class WatchEntry_obj::__mClass;

void WatchEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.WatchEntry"), hx::TCanCast< WatchEntry_obj> ,sStaticFields,sMemberFields,
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

void WatchEntry_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
