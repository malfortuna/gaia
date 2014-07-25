#include <hxcpp.h>

#ifndef INCLUDED_worldgen_City
#include <worldgen/City.h>
#endif
namespace worldgen{

Void City_obj::__construct(::String name,int x,int y)
{
HX_STACK_FRAME("worldgen.City","new",0xfadad52d,"worldgen.City.new","worldgen/City.hx",3,0xd0b52102)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(5)
	this->oldnames = Array_obj< ::String >::__new();
	HX_STACK_LINE(13)
	this->name = name;
	HX_STACK_LINE(14)
	this->x = x;
	HX_STACK_LINE(15)
	this->y = y;
	HX_STACK_LINE(17)
	this->population = (int)10;
}
;
	return null();
}

//City_obj::~City_obj() { }

Dynamic City_obj::__CreateEmpty() { return  new City_obj; }
hx::ObjectPtr< City_obj > City_obj::__new(::String name,int x,int y)
{  hx::ObjectPtr< City_obj > result = new City_obj();
	result->__construct(name,x,y);
	return result;}

Dynamic City_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< City_obj > result = new City_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void City_obj::changeName( ::String name){
{
		HX_STACK_FRAME("worldgen.City","changeName",0x2ecf86ae,"worldgen.City.changeName","worldgen/City.hx",20,0xd0b52102)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(21)
		this->oldnames->push(this->name);
		HX_STACK_LINE(22)
		this->name = name;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(City_obj,changeName,(void))


City_obj::City_obj()
{
}

void City_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(City);
	HX_MARK_MEMBER_NAME(oldnames,"oldnames");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(population,"population");
	HX_MARK_END_CLASS();
}

void City_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(oldnames,"oldnames");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(population,"population");
}

Dynamic City_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldnames") ) { return oldnames; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"population") ) { return population; }
		if (HX_FIELD_EQ(inName,"changeName") ) { return changeName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic City_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldnames") ) { oldnames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"population") ) { population=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void City_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("oldnames"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("population"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(City_obj,oldnames),HX_CSTRING("oldnames")},
	{hx::fsString,(int)offsetof(City_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(City_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(City_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(City_obj,population),HX_CSTRING("population")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("oldnames"),
	HX_CSTRING("name"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("population"),
	HX_CSTRING("changeName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(City_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(City_obj::__mClass,"__mClass");
};

#endif

Class City_obj::__mClass;

void City_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("worldgen.City"), hx::TCanCast< City_obj> ,sStaticFields,sMemberFields,
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

void City_obj::__boot()
{
}

} // end namespace worldgen
