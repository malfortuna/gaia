#ifndef INCLUDED_flixel_system_debug_WatchEntry
#define INCLUDED_flixel_system_debug_WatchEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,debug,WatchEntry)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  WatchEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WatchEntry_obj OBJ_;
		WatchEntry_obj();
		Void __construct(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WatchEntry_obj > __new(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WatchEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< WatchEntry_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("WatchEntry"); }

		Dynamic object;
		::String field;
		::String custom;
		::openfl::text::TextField nameDisplay;
		::openfl::text::TextField valueDisplay;
		bool editing;
		Dynamic oldValue;
		::openfl::text::TextFormat _whiteText;
		::openfl::text::TextFormat _blackText;
		bool quickWatch;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void setY( Float Y);
		Dynamic setY_dyn();

		virtual Void updateWidth( Float NameWidth,Float ValueWidth);
		Dynamic updateWidth_dyn();

		virtual bool updateValue( );
		Dynamic updateValue_dyn();

		virtual Void onMouseUp( ::openfl::events::MouseEvent FlashEvent);
		Dynamic onMouseUp_dyn();

		virtual Void onKeyUp( ::openfl::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void doneEditing( );
		Dynamic doneEditing_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_WatchEntry */ 
