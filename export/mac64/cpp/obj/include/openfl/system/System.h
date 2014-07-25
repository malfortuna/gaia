#ifndef INCLUDED_openfl_system_System
#define INCLUDED_openfl_system_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,system,System)
namespace openfl{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  System_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< System_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("System"); }

		static ::String deviceID;
		static int totalMemory;
		static Void exit( hx::Null< int >  code);
		static Dynamic exit_dyn();

		static Void gc( );
		static Dynamic gc_dyn();

		static ::String get_deviceID( );
		static Dynamic get_deviceID_dyn();

		static int get_totalMemory( );
		static Dynamic get_totalMemory_dyn();

		static Dynamic lime_get_unique_device_identifier;
		static Dynamic &lime_get_unique_device_identifier_dyn() { return lime_get_unique_device_identifier;}
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_System */ 
