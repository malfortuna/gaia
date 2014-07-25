#ifndef INCLUDED_flixel_util_FlxBitmapUtil
#define INCLUDED_flixel_util_FlxBitmapUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxBitmapUtil)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBitmapUtil_obj OBJ_;
		FlxBitmapUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxBitmapUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxBitmapUtil"); }

		static Void merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::display::BitmapData destBitmapData,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static Dynamic merge_dyn();

		static int mergeColorComponent( int source,int dest,int multiplier);
		static Dynamic mergeColorComponent_dyn();

		static Dynamic compare( ::openfl::display::BitmapData Bitmap1,::openfl::display::BitmapData Bitmap2);
		static Dynamic compare_dyn();

		static Float getMemorySize( ::openfl::display::BitmapData bitmapData);
		static Dynamic getMemorySize_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapUtil */ 
