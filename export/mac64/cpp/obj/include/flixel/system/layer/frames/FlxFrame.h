#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#define INCLUDED_flixel_system_layer_frames_FlxFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FrameType)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace flixel{
namespace system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxFrame_obj OBJ_;
		FlxFrame_obj();
		Void __construct(::flixel::system::layer::TileSheetData tileSheet);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxFrame_obj > __new(::flixel::system::layer::TileSheetData tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxFrame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxFrame"); }

		::String name;
		::openfl::geom::Rectangle frame;
		bool trimmed;
		int tileID;
		Float additionalAngle;
		::flixel::util::FlxPoint sourceSize;
		::flixel::util::FlxPoint offset;
		::flixel::util::FlxPoint center;
		::flixel::system::layer::frames::FrameType type;
		::openfl::display::BitmapData _bitmapData;
		::openfl::display::BitmapData _hReversedBitmapData;
		::openfl::display::BitmapData _vReversedBitmapData;
		::openfl::display::BitmapData _hvReversedBitmapData;
		::flixel::system::layer::TileSheetData _tileSheet;
		virtual ::openfl::display::BitmapData paintOnBitmap( ::openfl::display::BitmapData bmd);
		Dynamic paintOnBitmap_dyn();

		virtual ::openfl::display::BitmapData getBitmap( );
		Dynamic getBitmap_dyn();

		virtual ::openfl::display::BitmapData getHReversedBitmap( );
		Dynamic getHReversedBitmap_dyn();

		virtual ::openfl::display::BitmapData getVReversedBitmap( );
		Dynamic getVReversedBitmap_dyn();

		virtual ::openfl::display::BitmapData getHVReversedBitmap( );
		Dynamic getHVReversedBitmap_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void destroyBitmapDatas( );
		Dynamic destroyBitmapDatas_dyn();

		static ::openfl::geom::Point POINT;
		static ::openfl::geom::Matrix MATRIX;
		static ::openfl::geom::Rectangle RECT;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxFrame */ 
