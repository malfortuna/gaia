#include <hxcpp.h>

#ifndef INCLUDED_behaviour_CivBehaviour
#include <behaviour/CivBehaviour.h>
#endif
#ifndef INCLUDED_behaviour_PrimitiveBehaviour
#include <behaviour/PrimitiveBehaviour.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_model_Civ
#include <model/Civ.h>
#endif
namespace behaviour{

Void PrimitiveBehaviour_obj::__construct(::model::Civ civ)
{
HX_STACK_FRAME("behaviour.PrimitiveBehaviour","new",0xd0189cb9,"behaviour.PrimitiveBehaviour.new","behaviour/PrimitiveBehaviour.hx",5,0xccb36736)
HX_STACK_THIS(this)
HX_STACK_ARG(civ,"civ")
{
	HX_STACK_LINE(9)
	this->behaviour_militaristic = 0.5;
	HX_STACK_LINE(8)
	this->behaviour_scholarly = 0.5;
	HX_STACK_LINE(7)
	this->behaviour_expansionist = 0.5;
	HX_STACK_LINE(12)
	super::__construct(civ);
	HX_STACK_LINE(14)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	this->behaviour_expansionist = _g;
	HX_STACK_LINE(15)
	Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(15)
	this->behaviour_scholarly = _g1;
	HX_STACK_LINE(16)
	Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(16)
	this->behaviour_militaristic = _g2;
}
;
	return null();
}

//PrimitiveBehaviour_obj::~PrimitiveBehaviour_obj() { }

Dynamic PrimitiveBehaviour_obj::__CreateEmpty() { return  new PrimitiveBehaviour_obj; }
hx::ObjectPtr< PrimitiveBehaviour_obj > PrimitiveBehaviour_obj::__new(::model::Civ civ)
{  hx::ObjectPtr< PrimitiveBehaviour_obj > result = new PrimitiveBehaviour_obj();
	result->__construct(civ);
	return result;}

Dynamic PrimitiveBehaviour_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrimitiveBehaviour_obj > result = new PrimitiveBehaviour_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PrimitiveBehaviour_obj::tick( ){
{
		HX_STACK_FRAME("behaviour.PrimitiveBehaviour","tick",0x496ac4e4,"behaviour.PrimitiveBehaviour.tick","behaviour/PrimitiveBehaviour.hx",21,0xccb36736)
		HX_STACK_THIS(this)
	}
return null();
}



PrimitiveBehaviour_obj::PrimitiveBehaviour_obj()
{
}

Dynamic PrimitiveBehaviour_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"behaviour_scholarly") ) { return behaviour_scholarly; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"behaviour_expansionist") ) { return behaviour_expansionist; }
		if (HX_FIELD_EQ(inName,"behaviour_militaristic") ) { return behaviour_militaristic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrimitiveBehaviour_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"behaviour_scholarly") ) { behaviour_scholarly=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"behaviour_expansionist") ) { behaviour_expansionist=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviour_militaristic") ) { behaviour_militaristic=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PrimitiveBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("behaviour_expansionist"));
	outFields->push(HX_CSTRING("behaviour_scholarly"));
	outFields->push(HX_CSTRING("behaviour_militaristic"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PrimitiveBehaviour_obj,behaviour_expansionist),HX_CSTRING("behaviour_expansionist")},
	{hx::fsFloat,(int)offsetof(PrimitiveBehaviour_obj,behaviour_scholarly),HX_CSTRING("behaviour_scholarly")},
	{hx::fsFloat,(int)offsetof(PrimitiveBehaviour_obj,behaviour_militaristic),HX_CSTRING("behaviour_militaristic")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("behaviour_expansionist"),
	HX_CSTRING("behaviour_scholarly"),
	HX_CSTRING("behaviour_militaristic"),
	HX_CSTRING("tick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrimitiveBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrimitiveBehaviour_obj::__mClass,"__mClass");
};

#endif

Class PrimitiveBehaviour_obj::__mClass;

void PrimitiveBehaviour_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("behaviour.PrimitiveBehaviour"), hx::TCanCast< PrimitiveBehaviour_obj> ,sStaticFields,sMemberFields,
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

void PrimitiveBehaviour_obj::__boot()
{
}

} // end namespace behaviour
