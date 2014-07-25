#ifndef INCLUDED_flixel_system_layer_TileSheetData
#define INCLUDED_flixel_system_layer_TileSheetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,layer,Region)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetExt)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS3(flixel,util,loaders,TextureAtlasFrame)
HX_DECLARE_CLASS3(flixel,util,loaders,TexturePackerData)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  TileSheetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileSheetData_obj OBJ_;
		TileSheetData_obj();
		Void __construct(::openfl::display::BitmapData Bitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileSheetData_obj > __new(::openfl::display::BitmapData Bitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileSheetData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TileSheetData_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TileSheetData"); }

		::flixel::system::layer::TileSheetExt tileSheet;
		::haxe::ds::StringMap flxSpriteFrames;
		::haxe::ds::StringMap flxFrames;
		Array< ::String > frameNames;
		Array< ::Dynamic > framesArr;
		::openfl::display::BitmapData bitmap;
		virtual ::flixel::system::layer::frames::FlxFrame getFrame( ::String name);
		Dynamic getFrame_dyn();

		virtual ::flixel::system::layer::frames::FlxSpriteFrames getSpriteSheetFrames( ::flixel::system::layer::Region region,::openfl::geom::Point origin);
		Dynamic getSpriteSheetFrames_dyn();

		virtual ::String getSpriteSheetFrameKey( ::openfl::geom::Rectangle rect,::openfl::geom::Point point);
		Dynamic getSpriteSheetFrameKey_dyn();

		virtual ::String getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic getKeyForSpriteSheetFrames_dyn();

		virtual bool containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic containsSpriteSheetFrames_dyn();

		virtual ::flixel::system::layer::frames::FlxFrame addSpriteSheetFrame( ::openfl::geom::Rectangle rect,::openfl::geom::Point point);
		Dynamic addSpriteSheetFrame_dyn();

		virtual bool containsFrame( ::String key);
		Dynamic containsFrame_dyn();

		virtual int addTileRect( ::openfl::geom::Rectangle tileRect,::openfl::geom::Point point);
		Dynamic addTileRect_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onContext( ::openfl::display::BitmapData bitmap);
		Dynamic onContext_dyn();

		virtual ::flixel::system::layer::frames::FlxSpriteFrames getTexturePackerFrames( ::flixel::util::loaders::TexturePackerData data,hx::Null< int >  startX,hx::Null< int >  startY);
		Dynamic getTexturePackerFrames_dyn();

		virtual ::flixel::system::layer::frames::FlxFrame addTexturePackerFrame( ::flixel::util::loaders::TextureAtlasFrame frameData,hx::Null< int >  startX,hx::Null< int >  startY);
		Dynamic addTexturePackerFrame_dyn();

		virtual Void destroyFrameBitmapDatas( );
		Dynamic destroyFrameBitmapDatas_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_TileSheetData */ 
