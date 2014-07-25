#ifndef INCLUDED_model_Planet
#define INCLUDED_model_Planet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(model,Civ)
HX_DECLARE_CLASS1(model,Planet)
HX_DECLARE_CLASS1(model,Star)
namespace model{


class HXCPP_CLASS_ATTRIBUTES  Planet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Planet_obj OBJ_;
		Planet_obj();
		Void __construct(Float x,Float y,::model::Star s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Planet_obj > __new(Float x,Float y,::model::Star s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Planet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Planet"); }

		::String name;
		Float x;
		Float y;
		int size;
		::model::Civ settledBy;
		::model::Star star;
		virtual Void settle( ::model::Civ civ);
		Dynamic settle_dyn();

		Array< ::String > names;
};

} // end namespace model

#endif /* INCLUDED_model_Planet */ 
