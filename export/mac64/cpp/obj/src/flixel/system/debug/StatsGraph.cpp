#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_StatsGraph
#include <flixel/system/debug/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void StatsGraph_obj::__construct(int X,int Y,int Width,int Height,int GraphColor,::String Unit,hx::Null< int >  __o_LabelWidth,::String Label)
{
HX_STACK_FRAME("flixel.system.debug.StatsGraph","new",0x163af7c9,"flixel.system.debug.StatsGraph.new","flixel/system/debug/StatsGraph.hx",15,0x92e18906)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(GraphColor,"GraphColor")
HX_STACK_ARG(Unit,"Unit")
HX_STACK_ARG(__o_LabelWidth,"LabelWidth")
HX_STACK_ARG(Label,"Label")
int LabelWidth = __o_LabelWidth.Default(45);
{
	HX_STACK_LINE(27)
	this->maxValue = 5e-324;
	HX_STACK_LINE(26)
	this->minValue = 1.79e+308;
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(43)
	this->set_x(X);
	HX_STACK_LINE(44)
	this->set_y(Y);
	HX_STACK_LINE(45)
	this->_width = (Width - LabelWidth);
	HX_STACK_LINE(46)
	this->_height = Height;
	HX_STACK_LINE(47)
	this->graphColor = GraphColor;
	HX_STACK_LINE(48)
	this->_unit = Unit;
	HX_STACK_LINE(49)
	this->_labelWidth = LabelWidth;
	HX_STACK_LINE(50)
	if (((Label == null()))){
		HX_STACK_LINE(50)
		this->_label = HX_CSTRING("");
	}
	else{
		HX_STACK_LINE(50)
		this->_label = Label;
	}
	HX_STACK_LINE(52)
	this->history = Array_obj< Float >::__new();
	HX_STACK_LINE(54)
	::openfl::display::Shape _g = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	this->_axis = _g;
	HX_STACK_LINE(55)
	this->_axis->set_x((this->_labelWidth + (int)10));
	HX_STACK_LINE(57)
	::openfl::text::TextField _g1 = ::flixel::system::debug::DebuggerUtil_obj::createTextField((int)0,(int)0,(int)-1426063361,(int)11);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(57)
	this->maxLabel = _g1;
	HX_STACK_LINE(58)
	::openfl::text::TextField _g2 = ::flixel::system::debug::DebuggerUtil_obj::createTextField((int)0,((Float(this->_height) / Float((int)2)) - 5.5),this->graphColor,(int)11);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(58)
	this->curLabel = _g2;
	HX_STACK_LINE(59)
	::openfl::text::TextField _g3 = ::flixel::system::debug::DebuggerUtil_obj::createTextField((int)0,(this->_height - (int)11),(int)-1426063361,(int)11);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(59)
	this->minLabel = _g3;
	HX_STACK_LINE(61)
	::openfl::text::TextField _g4 = ::flixel::system::debug::DebuggerUtil_obj::createTextField((this->_labelWidth + (int)20),(((Float(this->_height) / Float((int)2)) - 5.5) - (int)10),(int)-1426063361,(int)11);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(61)
	this->avgLabel = _g4;
	HX_STACK_LINE(62)
	this->avgLabel->set_width(this->_width);
	HX_STACK_LINE(63)
	this->avgLabel->get_defaultTextFormat()->align = ::openfl::text::TextFormatAlign_obj::CENTER;
	HX_STACK_LINE(64)
	this->avgLabel->set_alpha(0.5);
	HX_STACK_LINE(66)
	this->addChild(this->_axis);
	HX_STACK_LINE(67)
	this->addChild(this->maxLabel);
	HX_STACK_LINE(68)
	this->addChild(this->curLabel);
	HX_STACK_LINE(69)
	this->addChild(this->minLabel);
	HX_STACK_LINE(70)
	this->addChild(this->avgLabel);
	HX_STACK_LINE(72)
	this->drawAxis();
}
;
	return null();
}

//StatsGraph_obj::~StatsGraph_obj() { }

Dynamic StatsGraph_obj::__CreateEmpty() { return  new StatsGraph_obj; }
hx::ObjectPtr< StatsGraph_obj > StatsGraph_obj::__new(int X,int Y,int Width,int Height,int GraphColor,::String Unit,hx::Null< int >  __o_LabelWidth,::String Label)
{  hx::ObjectPtr< StatsGraph_obj > result = new StatsGraph_obj();
	result->__construct(X,Y,Width,Height,GraphColor,Unit,__o_LabelWidth,Label);
	return result;}

Dynamic StatsGraph_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatsGraph_obj > result = new StatsGraph_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void StatsGraph_obj::drawAxis( ){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","drawAxis",0x602722bc,"flixel.system.debug.StatsGraph.drawAxis","flixel/system/debug/StatsGraph.hx",79,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::openfl::display::Graphics gfx = this->_axis->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(81)
		gfx->clear();
		HX_STACK_LINE(82)
		gfx->beginFill((int)0,null());
		HX_STACK_LINE(83)
		gfx->lineStyle((int)1,(int)16777215,0.5,null(),null(),null(),null(),null());
		HX_STACK_LINE(86)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(87)
		gfx->lineTo((int)0,this->_height);
		HX_STACK_LINE(90)
		gfx->moveTo((int)0,this->_height);
		HX_STACK_LINE(91)
		gfx->lineTo(this->_width,this->_height);
		HX_STACK_LINE(93)
		gfx->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawAxis,(void))

Void StatsGraph_obj::drawGraph( ){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","drawGraph",0x328160d3,"flixel.system.debug.StatsGraph.drawGraph","flixel/system/debug/StatsGraph.hx",100,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::openfl::display::Graphics gfx = this->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(102)
		gfx->clear();
		HX_STACK_LINE(103)
		gfx->lineStyle((int)1,this->graphColor,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(104)
		Float _g = this->_axis->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		Float _g1 = this->_axis->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		gfx->moveTo(_g,_g1);
		HX_STACK_LINE(106)
		Float inc = (Float(this->_width) / Float((int)29));		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(107)
		Float range = (this->maxValue - this->minValue);		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(108)
		Float value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(110)
			int _g2 = this->history->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(112)
				value = (Float(((this->history->__get(i) - this->minValue))) / Float(range));
				HX_STACK_LINE(113)
				Float _g21 = this->_axis->get_x();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(113)
				Float _g3 = (_g21 + (i * inc));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(113)
				gfx->lineTo(_g3,((-(value) * this->_height) + this->_height));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawGraph,(void))

Void StatsGraph_obj::update( Float Value,Dynamic Average){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","update",0xe8382640,"flixel.system.debug.StatsGraph.update","flixel/system/debug/StatsGraph.hx",118,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_ARG(Average,"Average")
		HX_STACK_LINE(119)
		this->history->unshift(Value);
		HX_STACK_LINE(121)
		if (((this->history->length > (int)30))){
			HX_STACK_LINE(122)
			this->history->pop();
		}
		HX_STACK_LINE(125)
		Float _g = ::Math_obj::max(this->maxValue,Value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		this->maxValue = _g;
		HX_STACK_LINE(126)
		Float _g1 = ::Math_obj::min(this->minValue,Value);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		this->minValue = _g1;
		HX_STACK_LINE(128)
		Float _g2 = ::flixel::util::FlxMath_obj::roundDecimal(this->minValue,(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(128)
		::String _g3 = (_g2 + HX_CSTRING(" "));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(128)
		::String _g4 = (_g3 + this->_unit);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(128)
		this->minLabel->set_text(_g4);
		HX_STACK_LINE(129)
		Float _g5 = ::flixel::util::FlxMath_obj::roundDecimal(Value,(int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(129)
		::String _g6 = (_g5 + HX_CSTRING(" "));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(129)
		::String _g7 = (_g6 + this->_unit);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(129)
		this->curLabel->set_text(_g7);
		HX_STACK_LINE(130)
		Float _g8 = ::flixel::util::FlxMath_obj::roundDecimal(this->maxValue,(int)1);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(130)
		::String _g9 = (_g8 + HX_CSTRING(" "));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(130)
		::String _g10 = (_g9 + this->_unit);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(130)
		this->maxLabel->set_text(_g10);
		HX_STACK_LINE(132)
		if (((Average == null()))){
			HX_STACK_LINE(133)
			Float _g11 = this->average();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(133)
			Average = _g11;
		}
		HX_STACK_LINE(135)
		Float _g12 = ::flixel::util::FlxMath_obj::roundDecimal(Average,(int)1);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(135)
		::String _g13 = ((this->_label + HX_CSTRING("\nAvg: ")) + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(135)
		::String _g14 = (_g13 + HX_CSTRING(" "));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(135)
		::String _g15 = (_g14 + this->_unit);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(135)
		this->avgLabel->set_text(_g15);
		HX_STACK_LINE(137)
		this->drawGraph();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StatsGraph_obj,update,(void))

Float StatsGraph_obj::average( ){
	HX_STACK_FRAME("flixel.system.debug.StatsGraph","average",0x0df50146,"flixel.system.debug.StatsGraph.average","flixel/system/debug/StatsGraph.hx",141,0x92e18906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< Float > _g1 = this->history;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			Float value = _g1->__get(_g);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(144)
			hx::AddEq(sum,value);
		}
	}
	HX_STACK_LINE(146)
	return (Float(sum) / Float(this->history->length));
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,average,return )

Void StatsGraph_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","destroy",0xcf9fbce3,"flixel.system.debug.StatsGraph.destroy","flixel/system/debug/StatsGraph.hx",150,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		if (((this->_axis != null()))){
			HX_STACK_LINE(153)
			this->removeChild(this->_axis);
			HX_STACK_LINE(154)
			this->_axis = null();
		}
		HX_STACK_LINE(157)
		if (((this->minLabel != null()))){
			HX_STACK_LINE(159)
			this->removeChild(this->minLabel);
			HX_STACK_LINE(160)
			this->minLabel = null();
		}
		HX_STACK_LINE(162)
		if (((this->curLabel != null()))){
			HX_STACK_LINE(164)
			this->removeChild(this->curLabel);
			HX_STACK_LINE(165)
			this->curLabel = null();
		}
		HX_STACK_LINE(167)
		if (((this->maxLabel != null()))){
			HX_STACK_LINE(169)
			this->removeChild(this->maxLabel);
			HX_STACK_LINE(170)
			this->maxLabel = null();
		}
		HX_STACK_LINE(172)
		if (((this->avgLabel != null()))){
			HX_STACK_LINE(174)
			this->removeChild(this->avgLabel);
			HX_STACK_LINE(175)
			this->avgLabel = null();
		}
		HX_STACK_LINE(178)
		this->history = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,destroy,(void))

int StatsGraph_obj::AXIS_COLOR;

Float StatsGraph_obj::AXIS_ALPHA;

int StatsGraph_obj::HISTORY_MAX;


StatsGraph_obj::StatsGraph_obj()
{
}

void StatsGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsGraph);
	HX_MARK_MEMBER_NAME(minLabel,"minLabel");
	HX_MARK_MEMBER_NAME(curLabel,"curLabel");
	HX_MARK_MEMBER_NAME(maxLabel,"maxLabel");
	HX_MARK_MEMBER_NAME(avgLabel,"avgLabel");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(graphColor,"graphColor");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(_axis,"_axis");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_unit,"_unit");
	HX_MARK_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_MARK_MEMBER_NAME(_label,"_label");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minLabel,"minLabel");
	HX_VISIT_MEMBER_NAME(curLabel,"curLabel");
	HX_VISIT_MEMBER_NAME(maxLabel,"maxLabel");
	HX_VISIT_MEMBER_NAME(avgLabel,"avgLabel");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(graphColor,"graphColor");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(_axis,"_axis");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_unit,"_unit");
	HX_VISIT_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatsGraph_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return _axis; }
		if (HX_FIELD_EQ(inName,"_unit") ) { return _unit; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"average") ) { return average_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { return minLabel; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { return curLabel; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { return maxLabel; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { return avgLabel; }
		if (HX_FIELD_EQ(inName,"minValue") ) { return minValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return maxValue; }
		if (HX_FIELD_EQ(inName,"drawAxis") ) { return drawAxis_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGraph") ) { return drawGraph_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { return graphColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { return _labelWidth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatsGraph_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unit") ) { _unit=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { minLabel=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { curLabel=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { maxLabel=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { avgLabel=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { graphColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { _labelWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatsGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("minLabel"));
	outFields->push(HX_CSTRING("curLabel"));
	outFields->push(HX_CSTRING("maxLabel"));
	outFields->push(HX_CSTRING("avgLabel"));
	outFields->push(HX_CSTRING("minValue"));
	outFields->push(HX_CSTRING("maxValue"));
	outFields->push(HX_CSTRING("graphColor"));
	outFields->push(HX_CSTRING("history"));
	outFields->push(HX_CSTRING("_axis"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_unit"));
	outFields->push(HX_CSTRING("_labelWidth"));
	outFields->push(HX_CSTRING("_label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("AXIS_COLOR"),
	HX_CSTRING("AXIS_ALPHA"),
	HX_CSTRING("HISTORY_MAX"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,minLabel),HX_CSTRING("minLabel")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,curLabel),HX_CSTRING("curLabel")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,maxLabel),HX_CSTRING("maxLabel")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,avgLabel),HX_CSTRING("avgLabel")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,minValue),HX_CSTRING("minValue")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,maxValue),HX_CSTRING("maxValue")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,graphColor),HX_CSTRING("graphColor")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(StatsGraph_obj,history),HX_CSTRING("history")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(StatsGraph_obj,_axis),HX_CSTRING("_axis")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_height),HX_CSTRING("_height")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_unit),HX_CSTRING("_unit")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_labelWidth),HX_CSTRING("_labelWidth")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_label),HX_CSTRING("_label")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("minLabel"),
	HX_CSTRING("curLabel"),
	HX_CSTRING("maxLabel"),
	HX_CSTRING("avgLabel"),
	HX_CSTRING("minValue"),
	HX_CSTRING("maxValue"),
	HX_CSTRING("graphColor"),
	HX_CSTRING("history"),
	HX_CSTRING("_axis"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_unit"),
	HX_CSTRING("_labelWidth"),
	HX_CSTRING("_label"),
	HX_CSTRING("drawAxis"),
	HX_CSTRING("drawGraph"),
	HX_CSTRING("update"),
	HX_CSTRING("average"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#endif

Class StatsGraph_obj::__mClass;

void StatsGraph_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.StatsGraph"), hx::TCanCast< StatsGraph_obj> ,sStaticFields,sMemberFields,
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

void StatsGraph_obj::__boot()
{
	AXIS_COLOR= (int)16777215;
	AXIS_ALPHA= 0.5;
	HISTORY_MAX= (int)30;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
