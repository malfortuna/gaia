#include <hxcpp.h>

#ifndef INCLUDED_behaviour_CivBehaviour
#include <behaviour/CivBehaviour.h>
#endif
#ifndef INCLUDED_model_Civ
#include <model/Civ.h>
#endif
namespace behaviour{

Void CivBehaviour_obj::__construct(::model::Civ civ)
{
HX_STACK_FRAME("behaviour.CivBehaviour","new",0x79c171f0,"behaviour.CivBehaviour.new","behaviour/CivBehaviour.hx",10,0x092b449f)
HX_STACK_THIS(this)
HX_STACK_ARG(civ,"civ")
{
	HX_STACK_LINE(10)
	this->civ = civ;
}
;
	return null();
}

//CivBehaviour_obj::~CivBehaviour_obj() { }

Dynamic CivBehaviour_obj::__CreateEmpty() { return  new CivBehaviour_obj; }
hx::ObjectPtr< CivBehaviour_obj > CivBehaviour_obj::__new(::model::Civ civ)
{  hx::ObjectPtr< CivBehaviour_obj > result = new CivBehaviour_obj();
	result->__construct(civ);
	return result;}

Dynamic CivBehaviour_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CivBehaviour_obj > result = new CivBehaviour_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CivBehaviour_obj::tick( ){
{
		HX_STACK_FRAME("behaviour.CivBehaviour","tick",0x137c7fcd,"behaviour.CivBehaviour.tick","behaviour/CivBehaviour.hx",13,0x092b449f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CivBehaviour_obj,tick,(void))


CivBehaviour_obj::CivBehaviour_obj()
{
}

void CivBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CivBehaviour);
	HX_MARK_MEMBER_NAME(civ,"civ");
	HX_MARK_END_CLASS();
}

void CivBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(civ,"civ");
}

Dynamic CivBehaviour_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"civ") ) { return civ; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CivBehaviour_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"civ") ) { civ=inValue.Cast< ::model::Civ >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CivBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("civ"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::Civ*/ ,(int)offsetof(CivBehaviour_obj,civ),HX_CSTRING("civ")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("civ"),
	HX_CSTRING("tick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CivBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CivBehaviour_obj::__mClass,"__mClass");
};

#endif

Class CivBehaviour_obj::__mClass;

void CivBehaviour_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("behaviour.CivBehaviour"), hx::TCanCast< CivBehaviour_obj> ,sStaticFields,sMemberFields,
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

void CivBehaviour_obj::__boot()
{
}

} // end namespace behaviour
