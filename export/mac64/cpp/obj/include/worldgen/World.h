#ifndef INCLUDED_worldgen_World
#define INCLUDED_worldgen_World

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(model,Civ)
HX_DECLARE_CLASS1(worldgen,City)
HX_DECLARE_CLASS1(worldgen,World)
namespace worldgen{


class HXCPP_CLASS_ATTRIBUTES  World_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef World_obj OBJ_;
		World_obj();
		Void __construct(Array< ::Dynamic > raw,Array< ::Dynamic > td);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< World_obj > __new(Array< ::Dynamic > raw,Array< ::Dynamic > td);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~World_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("World"); }

		Array< ::Dynamic > raw_map_data;
		Array< ::Dynamic > tile_data;
		Array< ::Dynamic > rivers;
		Array< ::Dynamic > forests;
		Array< ::Dynamic > metals;
		Array< ::Dynamic > food;
		Array< ::Dynamic > cities;
		Array< ::Dynamic > civs;
		Array< int > colours;
		::haxe::ds::ObjectMap nations;
		int waterline;
		int mountainlimit;
		int hilllimit;
		int plainslimit;
		virtual Void recolourMap( );
		Dynamic recolourMap_dyn();

		virtual ::flixel::FlxSprite getSprite( );
		Dynamic getSprite_dyn();

};

} // end namespace worldgen

#endif /* INCLUDED_worldgen_World */ 
