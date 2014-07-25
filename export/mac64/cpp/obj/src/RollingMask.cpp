#include <hxcpp.h>

#ifndef INCLUDED_RollingMask
#include <RollingMask.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void RollingMask_obj::__construct(int width,int height,Dynamic __o_particles,Dynamic __o_lifespan)
{
HX_STACK_FRAME("RollingMask","new",0x5186c663,"RollingMask.new","RollingMask.hx",5,0x02a9566d)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_particles,"particles")
HX_STACK_ARG(__o_lifespan,"lifespan")
Dynamic particles = __o_particles.Default(3000);
Dynamic lifespan = __o_lifespan.Default(50);
{
	HX_STACK_LINE(6)
	Float max = (int)0;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(7)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(7)
	this->map = _g;
	HX_STACK_LINE(9)
	{
		HX_STACK_LINE(9)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(9)
		while((true)){
			HX_STACK_LINE(9)
			if ((!(((_g1 < height))))){
				HX_STACK_LINE(9)
				break;
			}
			HX_STACK_LINE(9)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(10)
			Array< Float > _g11 = Array_obj< Float >::__new();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(10)
			this->map->push(_g11);
			HX_STACK_LINE(11)
			{
				HX_STACK_LINE(11)
				int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(11)
				while((true)){
					HX_STACK_LINE(11)
					if ((!(((_g12 < width))))){
						HX_STACK_LINE(11)
						break;
					}
					HX_STACK_LINE(11)
					int i = (_g12)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(12)
					this->map->__get(j).StaticCast< Array< Float > >()->push((int)0);
				}
			}
		}
	}
	HX_STACK_LINE(17)
	int px;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(17)
	int py;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(17)
	int lx;		HX_STACK_VAR(lx,"lx");
	HX_STACK_LINE(17)
	int ly;		HX_STACK_VAR(ly,"ly");
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(18)
		while((true)){
			HX_STACK_LINE(18)
			if ((!(((_g1 < particles))))){
				HX_STACK_LINE(18)
				break;
			}
			HX_STACK_LINE(18)
			int p = (_g1)++;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(20)
			int _g2 = ::Std_obj::_int((Float(width) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(20)
			int _g3 = (_g2 - (int)10);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(20)
			int _g4 = ::Std_obj::random((int)20);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(20)
			int _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(20)
			px = _g5;
			HX_STACK_LINE(21)
			int _g6 = ::Std_obj::_int((Float(height) / Float((int)2)));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(21)
			int _g7 = (_g6 - (int)10);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(21)
			int _g8 = ::Std_obj::random((int)20);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(21)
			int _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(21)
			py = _g9;
			HX_STACK_LINE(22)
			{
				HX_STACK_LINE(22)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(22)
				while((true)){
					HX_STACK_LINE(22)
					if ((!(((_g11 < lifespan))))){
						HX_STACK_LINE(22)
						break;
					}
					HX_STACK_LINE(22)
					int l = (_g11)++;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(23)
					(this->map->__get(px).StaticCast< Array< Float > >()[py])++;
					HX_STACK_LINE(24)
					if (((this->map->__get(px).StaticCast< Array< Float > >()->__get(py) > max))){
						HX_STACK_LINE(25)
						max = this->map->__get(px).StaticCast< Array< Float > >()->__get(py);
					}
					HX_STACK_LINE(27)
					{
						HX_STACK_LINE(27)
						int _g21 = (int)-1;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(27)
						while((true)){
							HX_STACK_LINE(27)
							if ((!(((_g21 < (int)2))))){
								HX_STACK_LINE(27)
								break;
							}
							HX_STACK_LINE(27)
							int i = (_g21)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(28)
							lx = px;
							HX_STACK_LINE(29)
							ly = py;
							HX_STACK_LINE(30)
							{
								HX_STACK_LINE(30)
								int _g31 = (int)-1;		HX_STACK_VAR(_g31,"_g31");
								HX_STACK_LINE(30)
								while((true)){
									HX_STACK_LINE(30)
									if ((!(((_g31 < (int)2))))){
										HX_STACK_LINE(30)
										break;
									}
									HX_STACK_LINE(30)
									int j = (_g31)++;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(31)
									if (((bool((bool((bool((bool(((px + j) < (int)0)) || bool(((px + j) >= width)))) || bool(((py + i) < (int)0)))) || bool(((py + i) >= height)))) || bool((bool((i == j)) && bool((i == (int)0))))))){
										HX_STACK_LINE(32)
										continue;
									}
									HX_STACK_LINE(34)
									if (((this->map->__get((px + j)).StaticCast< Array< Float > >()->__get((py + i)) < this->map->__get(lx).StaticCast< Array< Float > >()->__get(ly)))){
										HX_STACK_LINE(35)
										lx = (px + j);
										HX_STACK_LINE(36)
										ly = (py + i);
									}
								}
							}
							HX_STACK_LINE(39)
							px = lx;
							HX_STACK_LINE(40)
							py = ly;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			if ((!(((_g1 < height))))){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(46)
				while((true)){
					HX_STACK_LINE(46)
					if ((!(((_g11 < width))))){
						HX_STACK_LINE(46)
						break;
					}
					HX_STACK_LINE(46)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(47)
					this->map->__get(i).StaticCast< Array< Float > >()[j] = (Float(this->map->__get(i).StaticCast< Array< Float > >()->__get(j)) / Float(max));
				}
			}
		}
	}
	HX_STACK_LINE(50)
	::haxe::Log_obj::trace(this->map,hx::SourceInfo(HX_CSTRING("RollingMask.hx"),50,HX_CSTRING("RollingMask"),HX_CSTRING("new")));
}
;
	return null();
}

//RollingMask_obj::~RollingMask_obj() { }

Dynamic RollingMask_obj::__CreateEmpty() { return  new RollingMask_obj; }
hx::ObjectPtr< RollingMask_obj > RollingMask_obj::__new(int width,int height,Dynamic __o_particles,Dynamic __o_lifespan)
{  hx::ObjectPtr< RollingMask_obj > result = new RollingMask_obj();
	result->__construct(width,height,__o_particles,__o_lifespan);
	return result;}

Dynamic RollingMask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RollingMask_obj > result = new RollingMask_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


RollingMask_obj::RollingMask_obj()
{
}

void RollingMask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RollingMask);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void RollingMask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
}

Dynamic RollingMask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RollingMask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RollingMask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RollingMask_obj,map),HX_CSTRING("map")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RollingMask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RollingMask_obj::__mClass,"__mClass");
};

#endif

Class RollingMask_obj::__mClass;

void RollingMask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("RollingMask"), hx::TCanCast< RollingMask_obj> ,sStaticFields,sMemberFields,
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

void RollingMask_obj::__boot()
{
}

