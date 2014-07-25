#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_model_Planet
#include <model/Planet.h>
#endif
#ifndef INCLUDED_model_Star
#include <model/Star.h>
#endif
namespace model{

Void Star_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("model.Star","new",0x9db20f49,"model.Star.new","model/Star.hx",3,0xe98b9e66)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(10)
	this->planets = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(13)
	this->x = x;
	HX_STACK_LINE(14)
	this->y = y;
	HX_STACK_LINE(15)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	Float c = (_g * (int)100);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(16)
	if (((c == (int)0))){
		HX_STACK_LINE(17)
		this->type = (int)0;
		HX_STACK_LINE(18)
		this->spec = (int)-13382401;
	}
	else{
		HX_STACK_LINE(20)
		if (((c < 0.131))){
			HX_STACK_LINE(21)
			this->type = (int)1;
			HX_STACK_LINE(22)
			this->spec = (int)-10027009;
		}
		else{
			HX_STACK_LINE(24)
			if (((c < 0.731))){
				HX_STACK_LINE(25)
				this->type = (int)2;
				HX_STACK_LINE(26)
				this->spec = (int)-1;
			}
			else{
				HX_STACK_LINE(28)
				if (((c < 3.731))){
					HX_STACK_LINE(29)
					this->type = (int)3;
					HX_STACK_LINE(30)
					this->spec = (int)-103;
				}
				else{
					HX_STACK_LINE(32)
					if (((c < 11.331))){
						HX_STACK_LINE(33)
						this->type = (int)4;
						HX_STACK_LINE(34)
						this->spec = (int)-231;
					}
					else{
						HX_STACK_LINE(36)
						if (((c < 23.431))){
							HX_STACK_LINE(37)
							this->type = (int)5;
							HX_STACK_LINE(38)
							this->spec = (int)-26368;
						}
						else{
							HX_STACK_LINE(40)
							if (((c < 99.8309999999999889))){
								HX_STACK_LINE(41)
								this->type = (int)6;
								HX_STACK_LINE(42)
								this->spec = (int)-52480;
							}
							else{
								HX_STACK_LINE(45)
								this->type = (int)7;
								HX_STACK_LINE(46)
								this->spec = (int)-3394816;
							}
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

//Star_obj::~Star_obj() { }

Dynamic Star_obj::__CreateEmpty() { return  new Star_obj; }
hx::ObjectPtr< Star_obj > Star_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(x,y);
	return result;}

Dynamic Star_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Star_obj::Star_obj()
{
}

void Star_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Star);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(spec,"spec");
	HX_MARK_MEMBER_NAME(planets,"planets");
	HX_MARK_END_CLASS();
}

void Star_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(spec,"spec");
	HX_VISIT_MEMBER_NAME(planets,"planets");
}

Dynamic Star_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"spec") ) { return spec; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { return planets; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Star_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spec") ) { spec=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { planets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Star_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("spec"));
	outFields->push(HX_CSTRING("planets"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Star_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Star_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(Star_obj,type),HX_CSTRING("type")},
	{hx::fsInt,(int)offsetof(Star_obj,spec),HX_CSTRING("spec")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Star_obj,planets),HX_CSTRING("planets")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("type"),
	HX_CSTRING("spec"),
	HX_CSTRING("planets"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#endif

Class Star_obj::__mClass;

void Star_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.Star"), hx::TCanCast< Star_obj> ,sStaticFields,sMemberFields,
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

void Star_obj::__boot()
{
}

} // end namespace model
