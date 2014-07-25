#ifndef INCLUDED_RollingMask
#define INCLUDED_RollingMask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(RollingMask)


class HXCPP_CLASS_ATTRIBUTES  RollingMask_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RollingMask_obj OBJ_;
		RollingMask_obj();
		Void __construct(int width,int height,Dynamic __o_particles,Dynamic __o_lifespan);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RollingMask_obj > __new(int width,int height,Dynamic __o_particles,Dynamic __o_lifespan);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RollingMask_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RollingMask"); }

		Array< ::Dynamic > map;
};


#endif /* INCLUDED_RollingMask */ 
