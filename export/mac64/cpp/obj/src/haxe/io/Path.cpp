#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
namespace haxe{
namespace io{

Void Path_obj::__construct(::String path)
{
HX_STACK_FRAME("haxe.io.Path","new",0x1b96d677,"haxe.io.Path.new","/usr/lib/haxe/std/haxe/io/Path.hx",76,0xf85ee938)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(77)
	int c1 = path.lastIndexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(78)
	int c2 = path.lastIndexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(79)
	if (((c1 < c2))){
		HX_STACK_LINE(80)
		::String _g = path.substr((int)0,c2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		this->dir = _g;
		HX_STACK_LINE(81)
		::String _g1 = path.substr((c2 + (int)1),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		path = _g1;
		HX_STACK_LINE(82)
		this->backslash = true;
	}
	else{
		HX_STACK_LINE(83)
		if (((c2 < c1))){
			HX_STACK_LINE(84)
			::String _g2 = path.substr((int)0,c1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(84)
			this->dir = _g2;
			HX_STACK_LINE(85)
			::String _g3 = path.substr((c1 + (int)1),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(85)
			path = _g3;
		}
		else{
			HX_STACK_LINE(87)
			this->dir = null();
		}
	}
	HX_STACK_LINE(88)
	int cp = path.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(cp,"cp");
	HX_STACK_LINE(89)
	if (((cp != (int)-1))){
		HX_STACK_LINE(90)
		::String _g4 = path.substr((cp + (int)1),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(90)
		this->ext = _g4;
		HX_STACK_LINE(91)
		::String _g5 = path.substr((int)0,cp);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(91)
		this->file = _g5;
	}
	else{
		HX_STACK_LINE(93)
		this->ext = null();
		HX_STACK_LINE(94)
		this->file = path;
	}
}
;
	return null();
}

//Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new(::String path)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(path);
	return result;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Path_obj::directory( ::String path){
	HX_STACK_FRAME("haxe.io.Path","directory",0xbcfe23c4,"haxe.io.Path.directory","/usr/lib/haxe/std/haxe/io/Path.hx",141,0xf85ee938)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(142)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(143)
	if (((s->dir == null()))){
		HX_STACK_LINE(144)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(145)
	return s->dir;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,directory,return )

::String Path_obj::addTrailingSlash( ::String path){
	HX_STACK_FRAME("haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","/usr/lib/haxe/std/haxe/io/Path.hx",268,0xf85ee938)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(269)
	if (((path.length == (int)0))){
		HX_STACK_LINE(270)
		return HX_CSTRING("/");
	}
	HX_STACK_LINE(271)
	int c1 = path.lastIndexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(272)
	int c2 = path.lastIndexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(273)
	if (((c1 < c2))){
		HX_STACK_LINE(274)
		if (((c2 != (path.length - (int)1)))){
			HX_STACK_LINE(274)
			return (path + HX_CSTRING("\\"));
		}
		else{
			HX_STACK_LINE(275)
			return path;
		}
	}
	else{
		HX_STACK_LINE(277)
		if (((c1 != (path.length - (int)1)))){
			HX_STACK_LINE(277)
			return (path + HX_CSTRING("/"));
		}
		else{
			HX_STACK_LINE(278)
			return path;
		}
	}
	HX_STACK_LINE(273)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes( ::String path){
	HX_STACK_FRAME("haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","/usr/lib/haxe/std/haxe/io/Path.hx",293,0xf85ee938)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(294)
	while((true)){
		HX_STACK_LINE(295)
		Dynamic _g = path.charCodeAt((path.length - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		Dynamic _switch_1 = (_g);
		if (  ( _switch_1==(int)47) ||  ( _switch_1==(int)92)){
			HX_STACK_LINE(296)
			::String _g1 = path.substr((int)0,(int)-1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(296)
			path = _g1;
		}
		else  {
			HX_STACK_LINE(297)
			break;
		}
;
;
	}
	HX_STACK_LINE(300)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
}

Dynamic Path_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		if (HX_FIELD_EQ(inName,"ext") ) { return ext; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { return directory_dyn(); }
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { return addTrailingSlash_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { return removeTrailingSlashes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Path_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dir"));
	outFields->push(HX_CSTRING("file"));
	outFields->push(HX_CSTRING("ext"));
	outFields->push(HX_CSTRING("backslash"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("directory"),
	HX_CSTRING("addTrailingSlash"),
	HX_CSTRING("removeTrailingSlashes"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Path_obj,dir),HX_CSTRING("dir")},
	{hx::fsString,(int)offsetof(Path_obj,file),HX_CSTRING("file")},
	{hx::fsString,(int)offsetof(Path_obj,ext),HX_CSTRING("ext")},
	{hx::fsBool,(int)offsetof(Path_obj,backslash),HX_CSTRING("backslash")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dir"),
	HX_CSTRING("file"),
	HX_CSTRING("ext"),
	HX_CSTRING("backslash"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

Class Path_obj::__mClass;

void Path_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Path"), hx::TCanCast< Path_obj> ,sStaticFields,sMemberFields,
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

void Path_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
