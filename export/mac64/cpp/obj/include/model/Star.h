#ifndef INCLUDED_model_Star
#define INCLUDED_model_Star

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(model,Planet)
HX_DECLARE_CLASS1(model,Star)
namespace model{


class HXCPP_CLASS_ATTRIBUTES  Star_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Star_obj OBJ_;
		Star_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Star_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Star_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Star"); }

		Float x;
		Float y;
		int type;
		int spec;
		Array< ::Dynamic > planets;
};

} // end namespace model

#endif /* INCLUDED_model_Star */ 
