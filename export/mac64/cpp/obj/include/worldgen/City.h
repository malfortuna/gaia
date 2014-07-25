#ifndef INCLUDED_worldgen_City
#define INCLUDED_worldgen_City

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(worldgen,City)
namespace worldgen{


class HXCPP_CLASS_ATTRIBUTES  City_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef City_obj OBJ_;
		City_obj();
		Void __construct(::String name,int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< City_obj > __new(::String name,int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~City_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("City"); }

		Array< ::String > oldnames;
		::String name;
		int x;
		int y;
		int population;
		virtual Void changeName( ::String name);
		Dynamic changeName_dyn();

};

} // end namespace worldgen

#endif /* INCLUDED_worldgen_City */ 
