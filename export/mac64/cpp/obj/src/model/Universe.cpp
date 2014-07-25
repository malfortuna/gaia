#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
namespace model{

Void Universe_obj::__construct()
{
HX_STACK_FRAME("model.Universe","new",0x80b83f3c,"model.Universe.new","model/Universe.hx",3,0x6277e953)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	this->civs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(6)
	this->planets = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(5)
	this->stars = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(12)
	int _g = ::Std_obj::random((int)1000);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	int _g1 = (_g + (int)4000);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(12)
	this->date = _g1;
}
;
	return null();
}

//Universe_obj::~Universe_obj() { }

Dynamic Universe_obj::__CreateEmpty() { return  new Universe_obj; }
hx::ObjectPtr< Universe_obj > Universe_obj::__new()
{  hx::ObjectPtr< Universe_obj > result = new Universe_obj();
	result->__construct();
	return result;}

Dynamic Universe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Universe_obj > result = new Universe_obj();
	result->__construct();
	return result;}

::model::Civ Universe_obj::getCivByName( ::String name){
	HX_STACK_FRAME("model.Universe","getCivByName",0x18c73920,"model.Universe.getCivByName","model/Universe.hx",15,0x6277e953)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		Array< ::Dynamic > _g1 = this->civs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(16)
		while((true)){
			HX_STACK_LINE(16)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(16)
				break;
			}
			HX_STACK_LINE(16)
			::model::Civ civ = _g1->__get(_g).StaticCast< ::model::Civ >();		HX_STACK_VAR(civ,"civ");
			HX_STACK_LINE(16)
			++(_g);
			HX_STACK_LINE(17)
			if (((civ->name == name))){
				HX_STACK_LINE(18)
				return civ;
			}
		}
	}
	HX_STACK_LINE(21)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Universe_obj,getCivByName,return )


Universe_obj::Universe_obj()
{
}

void Universe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Universe);
	HX_MARK_MEMBER_NAME(stars,"stars");
	HX_MARK_MEMBER_NAME(planets,"planets");
	HX_MARK_MEMBER_NAME(civs,"civs");
	HX_MARK_MEMBER_NAME(date,"date");
	HX_MARK_END_CLASS();
}

void Universe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stars,"stars");
	HX_VISIT_MEMBER_NAME(planets,"planets");
	HX_VISIT_MEMBER_NAME(civs,"civs");
	HX_VISIT_MEMBER_NAME(date,"date");
}

Dynamic Universe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"civs") ) { return civs; }
		if (HX_FIELD_EQ(inName,"date") ) { return date; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stars") ) { return stars; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { return planets; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getCivByName") ) { return getCivByName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Universe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"civs") ) { civs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"date") ) { date=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stars") ) { stars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { planets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Universe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stars"));
	outFields->push(HX_CSTRING("planets"));
	outFields->push(HX_CSTRING("civs"));
	outFields->push(HX_CSTRING("date"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Universe_obj,stars),HX_CSTRING("stars")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Universe_obj,planets),HX_CSTRING("planets")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Universe_obj,civs),HX_CSTRING("civs")},
	{hx::fsInt,(int)offsetof(Universe_obj,date),HX_CSTRING("date")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("stars"),
	HX_CSTRING("planets"),
	HX_CSTRING("civs"),
	HX_CSTRING("date"),
	HX_CSTRING("getCivByName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Universe_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Universe_obj::__mClass,"__mClass");
};

#endif

Class Universe_obj::__mClass;

void Universe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.Universe"), hx::TCanCast< Universe_obj> ,sStaticFields,sMemberFields,
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

void Universe_obj::__boot()
{
}

} // end namespace model
