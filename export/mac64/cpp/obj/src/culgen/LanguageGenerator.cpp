#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_culgen_Language
#include <culgen/Language.h>
#endif
#ifndef INCLUDED_culgen_LanguageGenerator
#include <culgen/LanguageGenerator.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace culgen{

Void LanguageGenerator_obj::__construct()
{
	return null();
}

//LanguageGenerator_obj::~LanguageGenerator_obj() { }

Dynamic LanguageGenerator_obj::__CreateEmpty() { return  new LanguageGenerator_obj; }
hx::ObjectPtr< LanguageGenerator_obj > LanguageGenerator_obj::__new()
{  hx::ObjectPtr< LanguageGenerator_obj > result = new LanguageGenerator_obj();
	result->__construct();
	return result;}

Dynamic LanguageGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LanguageGenerator_obj > result = new LanguageGenerator_obj();
	result->__construct();
	return result;}

int LanguageGenerator_obj::min_tongue;

int LanguageGenerator_obj::max_tongue;

int LanguageGenerator_obj::min_softness;

int LanguageGenerator_obj::max_softness;

int LanguageGenerator_obj::min_expressiveness;

int LanguageGenerator_obj::max_expressiveness;

int LanguageGenerator_obj::min_length;

int LanguageGenerator_obj::max_length;

Array< ::Dynamic > LanguageGenerator_obj::cons_phonemes;

Array< ::Dynamic > LanguageGenerator_obj::vow_phonemes;

Array< ::String > LanguageGenerator_obj::syllable_patterns;

::culgen::Language LanguageGenerator_obj::generateLanguage( ){
	HX_STACK_FRAME("culgen.LanguageGenerator","generateLanguage",0x2f2a23d8,"culgen.LanguageGenerator.generateLanguage","culgen/LanguageGenerator.hx",36,0xaa7c277c)
	HX_STACK_LINE(37)
	::culgen::LanguageGenerator_obj::min_tongue = (int)0;
	HX_STACK_LINE(37)
	::culgen::LanguageGenerator_obj::max_tongue = (int)7;
	HX_STACK_LINE(38)
	::culgen::LanguageGenerator_obj::min_softness = (int)0;
	HX_STACK_LINE(38)
	::culgen::LanguageGenerator_obj::max_softness = (int)5;
	HX_STACK_LINE(39)
	::culgen::LanguageGenerator_obj::min_expressiveness = (int)0;
	HX_STACK_LINE(39)
	::culgen::LanguageGenerator_obj::max_expressiveness = (int)3;
	HX_STACK_LINE(40)
	::culgen::LanguageGenerator_obj::min_length = (int)0;
	HX_STACK_LINE(40)
	::culgen::LanguageGenerator_obj::max_length = (int)5;
	HX_STACK_LINE(42)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	if (((_g < 0.2))){
		HX_STACK_LINE(44)
		hx::AddEq(::culgen::LanguageGenerator_obj::min_tongue,(int)2);
	}
	else{
		HX_STACK_LINE(46)
		Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		if (((_g1 < 0.2))){
			HX_STACK_LINE(48)
			(::culgen::LanguageGenerator_obj::min_tongue)++;
			HX_STACK_LINE(49)
			hx::SubEq(::culgen::LanguageGenerator_obj::max_tongue,(int)2);
		}
	}
	HX_STACK_LINE(52)
	Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(52)
	if (((_g2 < 0.2))){
		HX_STACK_LINE(54)
		(::culgen::LanguageGenerator_obj::min_softness)++;
		HX_STACK_LINE(55)
		(::culgen::LanguageGenerator_obj::min_expressiveness)++;
	}
	else{
		HX_STACK_LINE(57)
		Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(57)
		if (((_g3 < 0.2))){
			HX_STACK_LINE(59)
			hx::SubEq(::culgen::LanguageGenerator_obj::max_softness,(int)2);
			HX_STACK_LINE(60)
			(::culgen::LanguageGenerator_obj::max_expressiveness)--;
			HX_STACK_LINE(61)
			hx::SubEq(::culgen::LanguageGenerator_obj::max_length,(int)2);
		}
	}
	HX_STACK_LINE(64)
	Array< ::String > consonants = Array_obj< ::String >::__new();		HX_STACK_VAR(consonants,"consonants");
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		int _g1 = ::culgen::LanguageGenerator_obj::min_tongue;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		int _g3 = ::culgen::LanguageGenerator_obj::max_tongue;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(65)
		while((true)){
			HX_STACK_LINE(65)
			if ((!(((_g1 < _g3))))){
				HX_STACK_LINE(65)
				break;
			}
			HX_STACK_LINE(65)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				int _g31 = ::culgen::LanguageGenerator_obj::min_softness;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(66)
				int _g21 = ::culgen::LanguageGenerator_obj::max_softness;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(66)
				while((true)){
					HX_STACK_LINE(66)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(66)
						break;
					}
					HX_STACK_LINE(66)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(67)
						Array< ::String > _g5 = ::culgen::LanguageGenerator_obj::cons_phonemes->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< Array< ::String > >();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(67)
						while((true)){
							HX_STACK_LINE(67)
							if ((!(((_g4 < _g5->length))))){
								HX_STACK_LINE(67)
								break;
							}
							HX_STACK_LINE(67)
							::String cons = _g5->__get(_g4);		HX_STACK_VAR(cons,"cons");
							HX_STACK_LINE(67)
							++(_g4);
							HX_STACK_LINE(69)
							consonants->push(cons);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(73)
	Array< ::String > vowels = Array_obj< ::String >::__new();		HX_STACK_VAR(vowels,"vowels");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g1 = ::culgen::LanguageGenerator_obj::min_expressiveness;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		int _g3 = ::culgen::LanguageGenerator_obj::max_expressiveness;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			if ((!(((_g1 < _g3))))){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				int _g31 = ::culgen::LanguageGenerator_obj::min_length;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(75)
				int _g21 = ::culgen::LanguageGenerator_obj::max_length;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(75)
				while((true)){
					HX_STACK_LINE(75)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(75)
						break;
					}
					HX_STACK_LINE(75)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(77)
					if (((::culgen::LanguageGenerator_obj::vow_phonemes->__get(i).StaticCast< Array< ::String > >()->__get(j).length > (int)0))){
						HX_STACK_LINE(78)
						vowels->push(::culgen::LanguageGenerator_obj::vow_phonemes->__get(i).StaticCast< Array< ::String > >()->__get(j));
					}
				}
			}
		}
	}
	HX_STACK_LINE(82)
	return ::culgen::Language_obj::__new(consonants,vowels);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LanguageGenerator_obj,generateLanguage,return )

Void LanguageGenerator_obj::test( ){
{
		HX_STACK_FRAME("culgen.LanguageGenerator","test",0xe71fbefd,"culgen.LanguageGenerator.test","culgen/LanguageGenerator.hx",85,0xaa7c277c)
		HX_STACK_LINE(86)
		::String word = HX_CSTRING("");		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(87)
			int _g = ::Std_obj::random((int)2);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			int _g2 = ((int)2 + _g);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(87)
			while((true)){
				HX_STACK_LINE(87)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(87)
					break;
				}
				HX_STACK_LINE(87)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(88)
				Float _g11 = ::Math_obj::random();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(88)
				if (((_g11 < 0.5))){
					HX_STACK_LINE(90)
					::String _g21 = ::culgen::LanguageGenerator_obj::getRandomConsonant();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(90)
					hx::AddEq(word,_g21);
					HX_STACK_LINE(91)
					::String _g3 = ::culgen::LanguageGenerator_obj::getRandomVowel();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(91)
					hx::AddEq(word,_g3);
				}
				else{
					HX_STACK_LINE(94)
					::String _g4 = ::culgen::LanguageGenerator_obj::getRandomVowel();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(94)
					hx::AddEq(word,_g4);
					HX_STACK_LINE(95)
					::String _g5 = ::culgen::LanguageGenerator_obj::getRandomConsonant();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(95)
					hx::AddEq(word,_g5);
				}
			}
		}
		HX_STACK_LINE(98)
		::haxe::Log_obj::trace((word + HX_CSTRING(" - Species of bird")),hx::SourceInfo(HX_CSTRING("LanguageGenerator.hx"),98,HX_CSTRING("culgen.LanguageGenerator"),HX_CSTRING("test")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LanguageGenerator_obj,test,(void))

::String LanguageGenerator_obj::getRandomConsonant( ){
	HX_STACK_FRAME("culgen.LanguageGenerator","getRandomConsonant",0xc4692509,"culgen.LanguageGenerator.getRandomConsonant","culgen/LanguageGenerator.hx",101,0xaa7c277c)
	HX_STACK_LINE(102)
	int _g = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_tongue - ::culgen::LanguageGenerator_obj::min_tongue));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(102)
	int lab = (_g + ::culgen::LanguageGenerator_obj::min_tongue);		HX_STACK_VAR(lab,"lab");
	HX_STACK_LINE(103)
	int _g1 = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_softness - ::culgen::LanguageGenerator_obj::min_softness));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(103)
	int soft = (_g1 + ::culgen::LanguageGenerator_obj::min_softness);		HX_STACK_VAR(soft,"soft");
	HX_STACK_LINE(104)
	while((true)){
		HX_STACK_LINE(104)
		if ((!(((::culgen::LanguageGenerator_obj::cons_phonemes->__get(soft).StaticCast< Array< ::Dynamic > >()->__get(lab).StaticCast< Array< ::String > >()->length == (int)0))))){
			HX_STACK_LINE(104)
			break;
		}
		HX_STACK_LINE(105)
		int _g2 = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_tongue - ::culgen::LanguageGenerator_obj::min_tongue));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(105)
		int _g3 = (_g2 + ::culgen::LanguageGenerator_obj::min_tongue);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(105)
		lab = _g3;
		HX_STACK_LINE(106)
		int _g4 = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_softness - ::culgen::LanguageGenerator_obj::min_softness));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(106)
		int _g5 = (_g4 + ::culgen::LanguageGenerator_obj::min_softness);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(106)
		soft = _g5;
	}
	HX_STACK_LINE(108)
	int _g6 = ::Std_obj::random(::culgen::LanguageGenerator_obj::cons_phonemes->__get(soft).StaticCast< Array< ::Dynamic > >()->__get(lab).StaticCast< Array< ::String > >()->length);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(108)
	return ::culgen::LanguageGenerator_obj::cons_phonemes->__get(soft).StaticCast< Array< ::Dynamic > >()->__get(lab).StaticCast< Array< ::String > >()->__get(_g6);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LanguageGenerator_obj,getRandomConsonant,return )

::String LanguageGenerator_obj::getRandomVowel( ){
	HX_STACK_FRAME("culgen.LanguageGenerator","getRandomVowel",0x973c5777,"culgen.LanguageGenerator.getRandomVowel","culgen/LanguageGenerator.hx",111,0xaa7c277c)
	HX_STACK_LINE(112)
	int _g = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_expressiveness - ::culgen::LanguageGenerator_obj::min_expressiveness));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(112)
	int exp = (_g + ::culgen::LanguageGenerator_obj::min_expressiveness);		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(113)
	int _g1 = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_length - ::culgen::LanguageGenerator_obj::min_length));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(113)
	int len = (_g1 + ::culgen::LanguageGenerator_obj::min_length);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(114)
	while((true)){
		HX_STACK_LINE(114)
		if ((!(((::culgen::LanguageGenerator_obj::vow_phonemes->__get(exp).StaticCast< Array< ::String > >()->__get(len) == HX_CSTRING("")))))){
			HX_STACK_LINE(114)
			break;
		}
		HX_STACK_LINE(115)
		int _g2 = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_expressiveness - ::culgen::LanguageGenerator_obj::min_expressiveness));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(115)
		int _g3 = (_g2 + ::culgen::LanguageGenerator_obj::min_expressiveness);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(115)
		exp = _g3;
		HX_STACK_LINE(116)
		int _g4 = ::Std_obj::random((::culgen::LanguageGenerator_obj::max_length - ::culgen::LanguageGenerator_obj::min_length));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(116)
		int _g5 = (_g4 + ::culgen::LanguageGenerator_obj::min_length);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(116)
		len = _g5;
	}
	HX_STACK_LINE(118)
	return ::culgen::LanguageGenerator_obj::vow_phonemes->__get(exp).StaticCast< Array< ::String > >()->__get(len).toLowerCase();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LanguageGenerator_obj,getRandomVowel,return )


LanguageGenerator_obj::LanguageGenerator_obj()
{
}

Dynamic LanguageGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"min_tongue") ) { return min_tongue; }
		if (HX_FIELD_EQ(inName,"max_tongue") ) { return max_tongue; }
		if (HX_FIELD_EQ(inName,"min_length") ) { return min_length; }
		if (HX_FIELD_EQ(inName,"max_length") ) { return max_length; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"min_softness") ) { return min_softness; }
		if (HX_FIELD_EQ(inName,"max_softness") ) { return max_softness; }
		if (HX_FIELD_EQ(inName,"vow_phonemes") ) { return vow_phonemes; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cons_phonemes") ) { return cons_phonemes; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRandomVowel") ) { return getRandomVowel_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"generateLanguage") ) { return generateLanguage_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"syllable_patterns") ) { return syllable_patterns; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"min_expressiveness") ) { return min_expressiveness; }
		if (HX_FIELD_EQ(inName,"max_expressiveness") ) { return max_expressiveness; }
		if (HX_FIELD_EQ(inName,"getRandomConsonant") ) { return getRandomConsonant_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LanguageGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"min_tongue") ) { min_tongue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_tongue") ) { max_tongue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min_length") ) { min_length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_length") ) { max_length=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"min_softness") ) { min_softness=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_softness") ) { max_softness=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vow_phonemes") ) { vow_phonemes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cons_phonemes") ) { cons_phonemes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"syllable_patterns") ) { syllable_patterns=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"min_expressiveness") ) { min_expressiveness=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_expressiveness") ) { max_expressiveness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LanguageGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("min_tongue"),
	HX_CSTRING("max_tongue"),
	HX_CSTRING("min_softness"),
	HX_CSTRING("max_softness"),
	HX_CSTRING("min_expressiveness"),
	HX_CSTRING("max_expressiveness"),
	HX_CSTRING("min_length"),
	HX_CSTRING("max_length"),
	HX_CSTRING("cons_phonemes"),
	HX_CSTRING("vow_phonemes"),
	HX_CSTRING("syllable_patterns"),
	HX_CSTRING("generateLanguage"),
	HX_CSTRING("test"),
	HX_CSTRING("getRandomConsonant"),
	HX_CSTRING("getRandomVowel"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::min_tongue,"min_tongue");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::max_tongue,"max_tongue");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::min_softness,"min_softness");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::max_softness,"max_softness");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::min_expressiveness,"min_expressiveness");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::max_expressiveness,"max_expressiveness");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::min_length,"min_length");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::max_length,"max_length");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::cons_phonemes,"cons_phonemes");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::vow_phonemes,"vow_phonemes");
	HX_MARK_MEMBER_NAME(LanguageGenerator_obj::syllable_patterns,"syllable_patterns");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::min_tongue,"min_tongue");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::max_tongue,"max_tongue");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::min_softness,"min_softness");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::max_softness,"max_softness");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::min_expressiveness,"min_expressiveness");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::max_expressiveness,"max_expressiveness");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::min_length,"min_length");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::max_length,"max_length");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::cons_phonemes,"cons_phonemes");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::vow_phonemes,"vow_phonemes");
	HX_VISIT_MEMBER_NAME(LanguageGenerator_obj::syllable_patterns,"syllable_patterns");
};

#endif

Class LanguageGenerator_obj::__mClass;

void LanguageGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("culgen.LanguageGenerator"), hx::TCanCast< LanguageGenerator_obj> ,sStaticFields,sMemberFields,
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

void LanguageGenerator_obj::__boot()
{
	min_tongue= (int)0;
	max_tongue= (int)7;
	min_softness= (int)0;
	max_softness= (int)5;
	min_expressiveness= (int)0;
	max_expressiveness= (int)3;
	min_length= (int)0;
	max_length= (int)5;
	cons_phonemes= Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_CSTRING("p")).Add(HX_CSTRING("b"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("t")).Add(HX_CSTRING("d"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("k")).Add(HX_CSTRING("g"))).Add(Array_obj< ::String >::__new())).Add(Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_CSTRING("m"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("n"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("ng"))).Add(Array_obj< ::String >::__new())).Add(Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("ch")).Add(HX_CSTRING("j"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new())).Add(Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("f")).Add(HX_CSTRING("v"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("th"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("s")).Add(HX_CSTRING("z"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("shh")).Add(HX_CSTRING("sh"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("chk"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("h")))).Add(Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("r"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("yj"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("w"))).Add(Array_obj< ::String >::__new())).Add(Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("l"))).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()).Add(Array_obj< ::String >::__new()));
	vow_phonemes= Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_CSTRING("A")).Add(HX_CSTRING("AA")).Add(HX_CSTRING("O")).Add(HX_CSTRING("OR")).Add(HX_CSTRING("")).Add(HX_CSTRING(""))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("I")).Add(HX_CSTRING("EE")).Add(HX_CSTRING("E")).Add(HX_CSTRING("OO")).Add(HX_CSTRING("")).Add(HX_CSTRING(""))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("AY")).Add(HX_CSTRING("EI")).Add(HX_CSTRING("OI")).Add(HX_CSTRING("OA")).Add(HX_CSTRING("OW")).Add(HX_CSTRING("UR"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("AR")).Add(HX_CSTRING("OR")).Add(HX_CSTRING("EAR")).Add(HX_CSTRING("AIR")).Add(HX_CSTRING("YUR")).Add(HX_CSTRING("")));
	syllable_patterns= Array_obj< ::String >::__new().Add(HX_CSTRING("CV")).Add(HX_CSTRING("VC"));
}

} // end namespace culgen
