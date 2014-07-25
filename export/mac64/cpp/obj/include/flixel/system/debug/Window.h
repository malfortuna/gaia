#ifndef INCLUDED_flixel_system_debug_Window
#define INCLUDED_flixel_system_debug_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSystemButton)
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
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(::String Title,::openfl::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Window_obj > __new(::String Title,::openfl::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Window"); }

		::openfl::geom::Point minSize;
		::openfl::geom::Point maxSize;
		::flixel::system::ui::FlxSystemButton toggleButton;
		int _width;
		int _height;
		::openfl::geom::Rectangle _bounds;
		::openfl::display::Bitmap _background;
		::openfl::display::Bitmap _header;
		::openfl::display::Bitmap _shadow;
		::openfl::text::TextField _title;
		::openfl::display::Bitmap _handle;
		::flixel::system::ui::FlxSystemButton _closeButton;
		bool _overHeader;
		bool _overHandle;
		::openfl::geom::Point _drag;
		bool _dragging;
		bool _resizing;
		bool _resizable;
		int _id;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void resize( Float Width,Float Height);
		Dynamic resize_dyn();

		virtual Void reposition( Float X,Float Y);
		Dynamic reposition_dyn();

		virtual Void updateBounds( ::openfl::geom::Rectangle Bounds);
		Dynamic updateBounds_dyn();

		virtual Void setVisible( bool Value);
		Dynamic setVisible_dyn();

		virtual Void toggleVisible( );
		Dynamic toggleVisible_dyn();

		virtual Void putOnTop( );
		Dynamic putOnTop_dyn();

		virtual Void loadSaveData( );
		Dynamic loadSaveData_dyn();

		virtual Void initSaveData( );
		Dynamic initSaveData_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void init( ::openfl::events::Event E);
		Dynamic init_dyn();

		virtual Void onMouseMove( ::openfl::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseDown( ::openfl::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseUp( ::openfl::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void bound( );
		Dynamic bound_dyn();

		virtual Void updateSize( );
		Dynamic updateSize_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		static int BG_COLOR;
		static int HEADER_COLOR;
		static Float HEADER_ALPHA;
		static int HEADER_HEIGHT;
		static int WINDOW_AMOUNT;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Window */ 
