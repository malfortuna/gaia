#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
namespace model{

Void Planet_obj::__construct(Float x,Float y,::model::Star s)
{
HX_STACK_FRAME("model.Planet","new",0xc8b1c44f,"model.Planet.new","model/Planet.hx",6,0xf167f1e0)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(49)
	this->names = Array_obj< ::String >::__new().Add(HX_CSTRING("Deimos")).Add(HX_CSTRING("Phobos")).Add(HX_CSTRING("Metis")).Add(HX_CSTRING("Adrastea")).Add(HX_CSTRING("Amalthea")).Add(HX_CSTRING("Thebe")).Add(HX_CSTRING("Io")).Add(HX_CSTRING("Europa")).Add(HX_CSTRING("Ganymede")).Add(HX_CSTRING("Callisto")).Add(HX_CSTRING("Themisto")).Add(HX_CSTRING("Leda")).Add(HX_CSTRING("Himalia")).Add(HX_CSTRING("Lysithea")).Add(HX_CSTRING("Elara")).Add(HX_CSTRING("S/2000 J11")).Add(HX_CSTRING("S/2003 J12")).Add(HX_CSTRING("Carpo")).Add(HX_CSTRING("Euporie")).Add(HX_CSTRING("S/2003 J3")).Add(HX_CSTRING("S/2003 J18")).Add(HX_CSTRING("Orthosie")).Add(HX_CSTRING("Euanthe")).Add(HX_CSTRING("Harpalyke")).Add(HX_CSTRING("Praxidike")).Add(HX_CSTRING("Thyone")).Add(HX_CSTRING("S/2003 J16")).Add(HX_CSTRING("Iocaste")).Add(HX_CSTRING("Mneme")).Add(HX_CSTRING("Hermippe")).Add(HX_CSTRING("Thelxinoe")).Add(HX_CSTRING("Helike")).Add(HX_CSTRING("Ananke")).Add(HX_CSTRING("S/2003 J15")).Add(HX_CSTRING("Eurydome")).Add(HX_CSTRING("Arche")).Add(HX_CSTRING("Herse")).Add(HX_CSTRING("Pasithee")).Add(HX_CSTRING("S/2003 J10")).Add(HX_CSTRING("Chaldene")).Add(HX_CSTRING("Isonoe")).Add(HX_CSTRING("Erinome")).Add(HX_CSTRING("Kale")).Add(HX_CSTRING("Aitne")).Add(HX_CSTRING("Taygete")).Add(HX_CSTRING("S/2003 J9")).Add(HX_CSTRING("Carme")).Add(HX_CSTRING("Sponde")).Add(HX_CSTRING("Megaclite")).Add(HX_CSTRING("S/2003 J5")).Add(HX_CSTRING("S/2003 J19")).Add(HX_CSTRING("S/2003 J23")).Add(HX_CSTRING("Kalyke")).Add(HX_CSTRING("Kore")).Add(HX_CSTRING("Pasiphae")).Add(HX_CSTRING("Eukelade")).Add(HX_CSTRING("S/2003 J4")).Add(HX_CSTRING("Sinope")).Add(HX_CSTRING("Hegemone")).Add(HX_CSTRING("Aoede")).Add(HX_CSTRING("Kallichore")).Add(HX_CSTRING("Autonoe")).Add(HX_CSTRING("Callirrhoe")).Add(HX_CSTRING("Cyllene")).Add(HX_CSTRING("S/2003 J2")).Add(HX_CSTRING("Tarqeq")).Add(HX_CSTRING("Pan")).Add(HX_CSTRING("Daphnis")).Add(HX_CSTRING("Atlas")).Add(HX_CSTRING("Prometheus")).Add(HX_CSTRING("Pandora")).Add(HX_CSTRING("Epimetheus")).Add(HX_CSTRING("Janus")).Add(HX_CSTRING("Aegaeon")).Add(HX_CSTRING("Mimas")).Add(HX_CSTRING("Methone")).Add(HX_CSTRING("Anthe")).Add(HX_CSTRING("Pallene")).Add(HX_CSTRING("Enceladus")).Add(HX_CSTRING("Tethys")).Add(HX_CSTRING("Calypso")).Add(HX_CSTRING("Telesto")).Add(HX_CSTRING("Polydeuces")).Add(HX_CSTRING("Dione")).Add(HX_CSTRING("Helene")).Add(HX_CSTRING("Rhea")).Add(HX_CSTRING("Titan")).Add(HX_CSTRING("Hyperion")).Add(HX_CSTRING("Iapetus")).Add(HX_CSTRING("Kiviuq")).Add(HX_CSTRING("Ijiraq")).Add(HX_CSTRING("Phoebe")).Add(HX_CSTRING("Paaliaq")).Add(HX_CSTRING("Skathi")).Add(HX_CSTRING("Albiorix")).Add(HX_CSTRING("S/2007 S2")).Add(HX_CSTRING("Bebhionn")).Add(HX_CSTRING("Erriapo")).Add(HX_CSTRING("Siarnaq")).Add(HX_CSTRING("Skoll")).Add(HX_CSTRING("Tarvos")).Add(HX_CSTRING("Greip")).Add(HX_CSTRING("S/2004 S13")).Add(HX_CSTRING("Hyrrokkin")).Add(HX_CSTRING("Mundilfari")).Add(HX_CSTRING("S/2006 S1")).Add(HX_CSTRING("Jarnsaxa")).Add(HX_CSTRING("Narvi")).Add(HX_CSTRING("Bergelmir")).Add(HX_CSTRING("S/2004 S17")).Add(HX_CSTRING("Suttungr")).Add(HX_CSTRING("Hati")).Add(HX_CSTRING("S/2004 S12")).Add(HX_CSTRING("Bestla")).Add(HX_CSTRING("Farbauti")).Add(HX_CSTRING("Thrymr")).Add(HX_CSTRING("S/2007 S3")).Add(HX_CSTRING("Aegir")).Add(HX_CSTRING("S/2004 S7")).Add(HX_CSTRING("S/2006 S3")).Add(HX_CSTRING("Kari")).Add(HX_CSTRING("Fenrir")).Add(HX_CSTRING("Surtur")).Add(HX_CSTRING("Ymir")).Add(HX_CSTRING("Loge")).Add(HX_CSTRING("Fornjot")).Add(HX_CSTRING("Cordelia")).Add(HX_CSTRING("Ophelia")).Add(HX_CSTRING("Bianca")).Add(HX_CSTRING("Cressida")).Add(HX_CSTRING("Desdemona")).Add(HX_CSTRING("Juliet")).Add(HX_CSTRING("Portia")).Add(HX_CSTRING("Rosalind")).Add(HX_CSTRING("Cupid")).Add(HX_CSTRING("Belinda")).Add(HX_CSTRING("Perdita")).Add(HX_CSTRING("Puck")).Add(HX_CSTRING("Mab")).Add(HX_CSTRING("Miranda")).Add(HX_CSTRING("Ariel")).Add(HX_CSTRING("Umbriel")).Add(HX_CSTRING("Titania")).Add(HX_CSTRING("Oberon")).Add(HX_CSTRING("Francisco")).Add(HX_CSTRING("Caliban")).Add(HX_CSTRING("Stephano")).Add(HX_CSTRING("Trinculo")).Add(HX_CSTRING("Sycorax")).Add(HX_CSTRING("Margaret")).Add(HX_CSTRING("Prospero")).Add(HX_CSTRING("Setebos")).Add(HX_CSTRING("Ferdinand")).Add(HX_CSTRING("Naiad")).Add(HX_CSTRING("Thalassa")).Add(HX_CSTRING("Despina")).Add(HX_CSTRING("Galatea")).Add(HX_CSTRING("Larissa")).Add(HX_CSTRING("Proteus")).Add(HX_CSTRING("Triton")).Add(HX_CSTRING("Nereid")).Add(HX_CSTRING("Halimede")).Add(HX_CSTRING("Sao")).Add(HX_CSTRING("Laomedeia")).Add(HX_CSTRING("Psamathe")).Add(HX_CSTRING("Neso")).Add(HX_CSTRING("Charon")).Add(HX_CSTRING("Styx")).Add(HX_CSTRING("Nix")).Add(HX_CSTRING("Kerberos")).Add(HX_CSTRING("Hydra")).Add(HX_CSTRING("Namaka")).Add(HX_CSTRING("Hi'iaka"));
	HX_STACK_LINE(17)
	int _g = ::Std_obj::random(this->names->length);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	::String _g1 = this->names->__get(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(17)
	this->name = _g1;
	HX_STACK_LINE(18)
	this->y = y;
	HX_STACK_LINE(19)
	this->x = x;
	HX_STACK_LINE(21)
	this->star = s;
	HX_STACK_LINE(22)
	int _g2 = ::Std_obj::random((int)7);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(22)
	int _g3 = ((int)3 + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(22)
	this->size = _g3;
	HX_STACK_LINE(24)
	::Reg_obj::state->logMessage((((this->name + HX_CSTRING(" faded in, a class ")) + this->size) + HX_CSTRING(" planet.")));
}
;
	return null();
}

//Planet_obj::~Planet_obj() { }

Dynamic Planet_obj::__CreateEmpty() { return  new Planet_obj; }
hx::ObjectPtr< Planet_obj > Planet_obj::__new(Float x,Float y,::model::Star s)
{  hx::ObjectPtr< Planet_obj > result = new Planet_obj();
	result->__construct(x,y,s);
	return result;}

Dynamic Planet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Planet_obj > result = new Planet_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Planet_obj::settle( ::model::Civ civ){
{
		HX_STACK_FRAME("model.Planet","settle",0xbc1e24fc,"model.Planet.settle","model/Planet.hx",27,0xf167f1e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(civ,"civ")
		HX_STACK_LINE(28)
		this->settledBy = civ;
		HX_STACK_LINE(29)
		::Reg_obj::state->logMessage(((civ->name + HX_CSTRING(" collected on the planet ")) + this->name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Planet_obj,settle,(void))


Planet_obj::Planet_obj()
{
}

void Planet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Planet);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(settledBy,"settledBy");
	HX_MARK_MEMBER_NAME(star,"star");
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_END_CLASS();
}

void Planet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(settledBy,"settledBy");
	HX_VISIT_MEMBER_NAME(star,"star");
	HX_VISIT_MEMBER_NAME(names,"names");
}

Dynamic Planet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"star") ) { return star; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return names; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"settle") ) { return settle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"settledBy") ) { return settledBy; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Planet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"star") ) { star=inValue.Cast< ::model::Star >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { names=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"settledBy") ) { settledBy=inValue.Cast< ::model::Civ >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Planet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("settledBy"));
	outFields->push(HX_CSTRING("star"));
	outFields->push(HX_CSTRING("names"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Planet_obj,name),HX_CSTRING("name")},
	{hx::fsFloat,(int)offsetof(Planet_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Planet_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(Planet_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*::model::Civ*/ ,(int)offsetof(Planet_obj,settledBy),HX_CSTRING("settledBy")},
	{hx::fsObject /*::model::Star*/ ,(int)offsetof(Planet_obj,star),HX_CSTRING("star")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Planet_obj,names),HX_CSTRING("names")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("size"),
	HX_CSTRING("settledBy"),
	HX_CSTRING("star"),
	HX_CSTRING("settle"),
	HX_CSTRING("names"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Planet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Planet_obj::__mClass,"__mClass");
};

#endif

Class Planet_obj::__mClass;

void Planet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.Planet"), hx::TCanCast< Planet_obj> ,sStaticFields,sMemberFields,
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

void Planet_obj::__boot()
{
}

} // end namespace model
