#ifndef INCLUDED_behaviour_CivBehaviour
#define INCLUDED_behaviour_CivBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(behaviour,CivBehaviour)
HX_DECLARE_CLASS1(model,Civ)
namespace behaviour{


class HXCPP_CLASS_ATTRIBUTES  CivBehaviour_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CivBehaviour_obj OBJ_;
		CivBehaviour_obj();
		Void __construct(::model::Civ civ);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CivBehaviour_obj > __new(::model::Civ civ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CivBehaviour_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CivBehaviour"); }

		::model::Civ civ;
		virtual Void tick( );
		Dynamic tick_dyn();

};

} // end namespace behaviour

#endif /* INCLUDED_behaviour_CivBehaviour */ 
