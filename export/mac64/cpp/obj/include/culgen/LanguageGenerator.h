#ifndef INCLUDED_culgen_LanguageGenerator
#define INCLUDED_culgen_LanguageGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(culgen,Language)
HX_DECLARE_CLASS1(culgen,LanguageGenerator)
namespace culgen{


class HXCPP_CLASS_ATTRIBUTES  LanguageGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LanguageGenerator_obj OBJ_;
		LanguageGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LanguageGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LanguageGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LanguageGenerator"); }

		static int min_tongue;
		static int max_tongue;
		static int min_softness;
		static int max_softness;
		static int min_expressiveness;
		static int max_expressiveness;
		static int min_length;
		static int max_length;
		static Array< ::Dynamic > cons_phonemes;
		static Array< ::Dynamic > vow_phonemes;
		static Array< ::String > syllable_patterns;
		static ::culgen::Language generateLanguage( );
		static Dynamic generateLanguage_dyn();

		static Void test( );
		static Dynamic test_dyn();

		static ::String getRandomConsonant( );
		static Dynamic getRandomConsonant_dyn();

		static ::String getRandomVowel( );
		static Dynamic getRandomVowel_dyn();

};

} // end namespace culgen

#endif /* INCLUDED_culgen_LanguageGenerator */ 
