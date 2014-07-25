#ifndef INCLUDED_worldgen_WorldGenerator
#define INCLUDED_worldgen_WorldGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS1(worldgen,World)
HX_DECLARE_CLASS1(worldgen,WorldGenerator)
namespace worldgen{


class HXCPP_CLASS_ATTRIBUTES  WorldGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WorldGenerator_obj OBJ_;
		WorldGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WorldGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WorldGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WorldGenerator"); }

		static Array< int > mapVector;
		static ::openfl::display::BitmapData mapData;
		static Array< ::Dynamic > map;
		static Array< ::Dynamic > mapcolours;
		static int octaves;
		static Float falloff;
		static int size;
		static int width;
		static int waterline;
		static int mountainlimit;
		static int hilllimit;
		static int plainslimit;
		static ::worldgen::World generateWorld( );
		static Dynamic generateWorld_dyn();

		static Void addRivers( ::worldgen::World world);
		static Dynamic addRivers_dyn();

		static Dynamic toRGB( int _int);
		static Dynamic toRGB_dyn();

		static int toInt( Dynamic rgb);
		static Dynamic toInt_dyn();

};

} // end namespace worldgen

#endif /* INCLUDED_worldgen_WorldGenerator */ 
