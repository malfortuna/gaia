#ifndef INCLUDED_culgen_Vocab
#define INCLUDED_culgen_Vocab

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(culgen,Vocab)
namespace culgen{


class HXCPP_CLASS_ATTRIBUTES  Vocab_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vocab_obj OBJ_;
		Vocab_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vocab_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vocab_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vocab"); }

		static Array< ::String > words;
		static ::String getWord( );
		static Dynamic getWord_dyn();

		static ::String words_raw;
};

} // end namespace culgen

#endif /* INCLUDED_culgen_Vocab */ 
