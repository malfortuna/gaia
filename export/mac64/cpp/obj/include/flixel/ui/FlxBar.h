#ifndef INCLUDED_flixel_ui_FlxBar
#define INCLUDED_flixel_ui_FlxBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,layer,Region)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxBar_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxBar_obj OBJ_;
		FlxBar_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_border);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxBar_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_border);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBar_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxBar"); }

		int barType;
		int barWidth;
		int barHeight;
		Dynamic parent;
		::String parentVariable;
		bool fixedPosition;
		::flixel::util::FlxPoint positionOffset;
		Float min;
		Float max;
		Float range;
		Float pct;
		Float value;
		Float pxPerPercent;
		Dynamic emptyCallback;
		Dynamic &emptyCallback_dyn() { return emptyCallback;}
		::openfl::display::BitmapData emptyBar;
		::openfl::geom::Rectangle emptyBarRect;
		::openfl::geom::Point emptyBarPoint;
		bool emptyKill;
		::openfl::geom::Point zeroOffset;
		Dynamic filledCallback;
		Dynamic &filledCallback_dyn() { return filledCallback;}
		::openfl::display::BitmapData filledBar;
		::openfl::geom::Rectangle filledBarRect;
		::openfl::geom::Point filledBarPoint;
		int fillDirection;
		bool fillHorizontal;
		int _emptyBarFrameID;
		Array< Float > _filledBarFrames;
		::String _framesPosition;
		::flixel::util::loaders::CachedGraphics _cachedFrontGraphics;
		::flixel::system::layer::Region _frontRegion;
		virtual Void destroy( );

		virtual Void trackParent( int offsetX,int offsetY);
		Dynamic trackParent_dyn();

		virtual Void setParent( Dynamic parentRef,::String variable,hx::Null< bool >  track,hx::Null< int >  offsetX,hx::Null< int >  offsetY);
		Dynamic setParent_dyn();

		virtual Void stopTrackingParent( int posX,int posY);
		Dynamic stopTrackingParent_dyn();

		virtual Void setCallbacks( Dynamic onEmpty,Dynamic onFilled,hx::Null< bool >  killOnEmpty);
		Dynamic setCallbacks_dyn();

		virtual bool set_killOnEmpty( bool value);
		Dynamic set_killOnEmpty_dyn();

		virtual bool get_killOnEmpty( );
		Dynamic get_killOnEmpty_dyn();

		virtual Void setRange( Float min,Float max);
		Dynamic setRange_dyn();

		::haxe::ds::StringMap stats;
		virtual ::haxe::ds::StringMap get_stats( );
		Dynamic get_stats_dyn();

		virtual Void createFilledBar( int empty,int fill,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createFilledBar_dyn();

		virtual Void createGradientBar( Array< int > empty,Array< int > fill,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createGradientBar_dyn();

		virtual Void createImageBar( Dynamic empty,Dynamic fill,hx::Null< int >  emptyBackground,hx::Null< int >  fillBackground);
		Dynamic createImageBar_dyn();

		virtual Void setFillDirection( int direction);
		Dynamic setFillDirection_dyn();

		virtual Void updateValueFromParent( );
		Dynamic updateValueFromParent_dyn();

		virtual Void updateValue( Float newValue);
		Dynamic updateValue_dyn();

		virtual Void updateBar( );
		Dynamic updateBar_dyn();

		virtual Void update( );

		virtual Float get_percent( );
		Dynamic get_percent_dyn();

		virtual Float set_percent( Float newPct);
		Dynamic set_percent_dyn();

		virtual Float set_currentValue( Float newValue);
		Dynamic set_currentValue_dyn();

		virtual Float get_currentValue( );
		Dynamic get_currentValue_dyn();

		virtual Void draw( );

		virtual ::openfl::display::BitmapData set_pixels( ::openfl::display::BitmapData Pixels);

		virtual bool isSimpleRender( );

		virtual Void updateFrameData( );

		virtual Void setCachedGraphics( ::flixel::util::loaders::CachedGraphics value);
		Dynamic setCachedGraphics_dyn();

		virtual Void setCachedFrontGraphics( ::flixel::util::loaders::CachedGraphics value);
		Dynamic setCachedFrontGraphics_dyn();

		virtual ::String toString( );

		static int FILL_LEFT_TO_RIGHT;
		static int FILL_RIGHT_TO_LEFT;
		static int FILL_TOP_TO_BOTTOM;
		static int FILL_BOTTOM_TO_TOP;
		static int FILL_HORIZONTAL_INSIDE_OUT;
		static int FILL_HORIZONTAL_OUTSIDE_IN;
		static int FILL_VERTICAL_INSIDE_OUT;
		static int FILL_VERTICAL_OUTSIDE_IN;
		static ::String FRAMES_POSITION_HORIZONTAL;
		static ::String FRAMES_POSITION_VERTICAL;
		static int BAR_FILLED;
		static int BAR_GRADIENT;
		static int BAR_IMAGE;
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxBar */ 
