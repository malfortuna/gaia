#ifndef INCLUDED_model_Universe
#define INCLUDED_model_Universe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(model,Civ)
HX_DECLARE_CLASS1(model,Planet)
HX_DECLARE_CLASS1(model,Star)
HX_DECLARE_CLASS1(model,Universe)
namespace model{


class HXCPP_CLASS_ATTRIBUTES  Universe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Universe_obj OBJ_;
		Universe_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Universe_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Universe_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Universe"); }

		Array< ::Dynamic > stars;
		Array< ::Dynamic > planets;
		Array< ::Dynamic > civs;
		int date;
		virtual ::model::Civ getCivByName( ::String name);
		Dynamic getCivByName_dyn();

};

} // end namespace model

#endif /* INCLUDED_model_Universe */ 
