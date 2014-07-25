#ifndef INCLUDED_flixel_system_debug_BitmapLog
#define INCLUDED_flixel_system_debug_BitmapLog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/debug/Window.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,system,debug,BitmapLog)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  BitmapLog_obj : public ::flixel::system::debug::Window_obj{
	public:
		typedef ::flixel::system::debug::Window_obj super;
		typedef BitmapLog_obj OBJ_;
		BitmapLog_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapLog_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapLog_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapLog"); }

		Float zoom;
		::openfl::display::Bitmap _canvasBitmap;
		Dynamic _entries;
		int _curIndex;
		::flixel::util::FlxPoint _point;
		::flixel::util::FlxPoint _lastMousePos;
		::flixel::util::FlxPoint _curMouseOffset;
		::openfl::geom::Matrix _matrix;
		::flixel::system::ui::FlxSystemButton _buttonLeft;
		::flixel::system::ui::FlxSystemButton _buttonText;
		::flixel::system::ui::FlxSystemButton _buttonRight;
		::openfl::text::TextField _counterText;
		::openfl::text::TextField _dimensionsText;
		::openfl::display::Sprite _ui;
		bool _middleMouseDown;
		::openfl::display::Bitmap _footer;
		::openfl::text::TextField _footerText;
		virtual Void createHeaderUI( );
		Dynamic createHeaderUI_dyn();

		virtual Void createFooterUI( );
		Dynamic createFooterUI_dyn();

		virtual Void destroy( );

		virtual Void update( );

		virtual Void updateSize( );

		virtual Void resize( Float Width,Float Height);

		virtual Void resizeTexts( );
		Dynamic resizeTexts_dyn();

		virtual Void next( );
		Dynamic next_dyn();

		virtual Void previous( );
		Dynamic previous_dyn();

		virtual Void resetSettings( );
		Dynamic resetSettings_dyn();

		virtual bool add( ::openfl::display::BitmapData bmp,::String name);
		Dynamic add_dyn();

		virtual Void clearAt( hx::Null< int >  Index);
		Dynamic clearAt_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool refreshCanvas( Dynamic Index);
		Dynamic refreshCanvas_dyn();

		virtual Void refreshTexts( );
		Dynamic refreshTexts_dyn();

		virtual Void drawBoundingBox( ::openfl::display::BitmapData bitmap);
		Dynamic drawBoundingBox_dyn();

		virtual Void onMouseWheel( ::openfl::events::MouseEvent e);
		Dynamic onMouseWheel_dyn();

		virtual Void onMiddleDown( ::openfl::events::MouseEvent e);
		Dynamic onMiddleDown_dyn();

		virtual Void onMiddleUp( ::openfl::events::MouseEvent e);
		Dynamic onMiddleUp_dyn();

		virtual Float set_zoom( Float Value);
		Dynamic set_zoom_dyn();

		virtual ::openfl::display::BitmapData get__canvas( );
		Dynamic get__canvas_dyn();

		virtual Dynamic get__curEntry( );
		Dynamic get__curEntry_dyn();

		virtual ::openfl::display::BitmapData get__curBitmap( );
		Dynamic get__curBitmap_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_BitmapLog */ 
