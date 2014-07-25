#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_culgen_Language
#include <culgen/Language.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace culgen{

Void Language_obj::__construct(Array< ::String > cons,Array< ::String > vows)
{
HX_STACK_FRAME("culgen.Language","new",0xe8310582,"culgen.Language.new","culgen/Language.hx",3,0xe93f0dcd)
HX_STACK_THIS(this)
HX_STACK_ARG(cons,"cons")
HX_STACK_ARG(vows,"vows")
{
	HX_STACK_LINE(11)
	this->vowel_phonemes = Array_obj< ::String >::__new();
	HX_STACK_LINE(10)
	this->consonant_phonemes = Array_obj< ::String >::__new();
	HX_STACK_LINE(8)
	this->to_language = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(7)
	this->to_english = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(14)
	Array< ::String > _g = this->consonant_phonemes->concat(cons);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	this->consonant_phonemes = _g;
	HX_STACK_LINE(15)
	Array< ::String > _g1 = this->vowel_phonemes->concat(vows);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(15)
	this->vowel_phonemes = _g1;
	HX_STACK_LINE(17)
	::String _g2 = this->generateRandom(null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(17)
	this->name = _g2;
}
;
	return null();
}

//Language_obj::~Language_obj() { }

Dynamic Language_obj::__CreateEmpty() { return  new Language_obj; }
hx::ObjectPtr< Language_obj > Language_obj::__new(Array< ::String > cons,Array< ::String > vows)
{  hx::ObjectPtr< Language_obj > result = new Language_obj();
	result->__construct(cons,vows);
	return result;}

Dynamic Language_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Language_obj > result = new Language_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Language_obj::toLanguage( ::String word){
	HX_STACK_FRAME("culgen.Language","toLanguage",0x7444a811,"culgen.Language.toLanguage","culgen/Language.hx",21,0xe93f0dcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(word,"word")
	HX_STACK_LINE(21)
	if ((this->to_language->exists(word))){
		HX_STACK_LINE(22)
		return this->to_language->get(word);
	}
	else{
		HX_STACK_LINE(25)
		::String translation = this->generateRandom(null());		HX_STACK_VAR(translation,"translation");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			this->to_language->set(word,translation);
			HX_STACK_LINE(26)
			translation;
		}
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			this->to_english->set(translation,word);
			HX_STACK_LINE(27)
			word;
		}
		HX_STACK_LINE(28)
		return translation;
	}
	HX_STACK_LINE(21)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Language_obj,toLanguage,return )

::String Language_obj::generateRandom( Dynamic __o_length){
Dynamic length = __o_length.Default(0);
	HX_STACK_FRAME("culgen.Language","generateRandom",0x36aa4536,"culgen.Language.generateRandom","culgen/Language.hx",33,0xe93f0dcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(34)
		::String word = HX_CSTRING("");		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(35)
		if (((length < (int)1))){
			HX_STACK_LINE(36)
			int _g = ::Std_obj::random((int)3);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			int _g1 = ((int)2 + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(36)
			length = _g1;
		}
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				if ((!(((_g < length))))){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(39)
				::String _g2 = this->getRandomConsonant();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(39)
				hx::AddEq(word,_g2);
				HX_STACK_LINE(40)
				::String _g3 = this->getRandomVowel();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(40)
				hx::AddEq(word,_g3);
			}
		}
		HX_STACK_LINE(47)
		return word.toLowerCase();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Language_obj,generateRandom,return )

::String Language_obj::getRandomConsonant( ){
	HX_STACK_FRAME("culgen.Language","getRandomConsonant",0x2998da3c,"culgen.Language.getRandomConsonant","culgen/Language.hx",50,0xe93f0dcd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	int _g = ::Std_obj::random(this->consonant_phonemes->length);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	return this->consonant_phonemes->__get(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Language_obj,getRandomConsonant,return )

::String Language_obj::getRandomVowel( ){
	HX_STACK_FRAME("culgen.Language","getRandomVowel",0xa596b72a,"culgen.Language.getRandomVowel","culgen/Language.hx",54,0xe93f0dcd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	int _g = ::Std_obj::random(this->vowel_phonemes->length);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	return this->vowel_phonemes->__get(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Language_obj,getRandomVowel,return )


Language_obj::Language_obj()
{
}

void Language_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Language);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(to_english,"to_english");
	HX_MARK_MEMBER_NAME(to_language,"to_language");
	HX_MARK_MEMBER_NAME(consonant_phonemes,"consonant_phonemes");
	HX_MARK_MEMBER_NAME(vowel_phonemes,"vowel_phonemes");
	HX_MARK_END_CLASS();
}

void Language_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(to_english,"to_english");
	HX_VISIT_MEMBER_NAME(to_language,"to_language");
	HX_VISIT_MEMBER_NAME(consonant_phonemes,"consonant_phonemes");
	HX_VISIT_MEMBER_NAME(vowel_phonemes,"vowel_phonemes");
}

Dynamic Language_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to_english") ) { return to_english; }
		if (HX_FIELD_EQ(inName,"toLanguage") ) { return toLanguage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"to_language") ) { return to_language; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vowel_phonemes") ) { return vowel_phonemes; }
		if (HX_FIELD_EQ(inName,"generateRandom") ) { return generateRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandomVowel") ) { return getRandomVowel_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"consonant_phonemes") ) { return consonant_phonemes; }
		if (HX_FIELD_EQ(inName,"getRandomConsonant") ) { return getRandomConsonant_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Language_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to_english") ) { to_english=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"to_language") ) { to_language=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vowel_phonemes") ) { vowel_phonemes=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"consonant_phonemes") ) { consonant_phonemes=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Language_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("to_english"));
	outFields->push(HX_CSTRING("to_language"));
	outFields->push(HX_CSTRING("consonant_phonemes"));
	outFields->push(HX_CSTRING("vowel_phonemes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Language_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Language_obj,to_english),HX_CSTRING("to_english")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Language_obj,to_language),HX_CSTRING("to_language")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Language_obj,consonant_phonemes),HX_CSTRING("consonant_phonemes")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Language_obj,vowel_phonemes),HX_CSTRING("vowel_phonemes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("to_english"),
	HX_CSTRING("to_language"),
	HX_CSTRING("consonant_phonemes"),
	HX_CSTRING("vowel_phonemes"),
	HX_CSTRING("toLanguage"),
	HX_CSTRING("generateRandom"),
	HX_CSTRING("getRandomConsonant"),
	HX_CSTRING("getRandomVowel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Language_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Language_obj::__mClass,"__mClass");
};

#endif

Class Language_obj::__mClass;

void Language_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("culgen.Language"), hx::TCanCast< Language_obj> ,sStaticFields,sMemberFields,
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

void Language_obj::__boot()
{
}

} // end namespace culgen
