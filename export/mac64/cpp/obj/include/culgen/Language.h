#ifndef INCLUDED_culgen_Language
#define INCLUDED_culgen_Language

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(culgen,Language)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace culgen{


class HXCPP_CLASS_ATTRIBUTES  Language_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Language_obj OBJ_;
		Language_obj();
		Void __construct(Array< ::String > cons,Array< ::String > vows);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Language_obj > __new(Array< ::String > cons,Array< ::String > vows);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Language_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Language"); }

		::String name;
		::haxe::ds::StringMap to_english;
		::haxe::ds::StringMap to_language;
		Array< ::String > consonant_phonemes;
		Array< ::String > vowel_phonemes;
		virtual ::String toLanguage( ::String word);
		Dynamic toLanguage_dyn();

		virtual ::String generateRandom( Dynamic length);
		Dynamic generateRandom_dyn();

		virtual ::String getRandomConsonant( );
		Dynamic getRandomConsonant_dyn();

		virtual ::String getRandomVowel( );
		Dynamic getRandomVowel_dyn();

};

} // end namespace culgen

#endif /* INCLUDED_culgen_Language */ 
