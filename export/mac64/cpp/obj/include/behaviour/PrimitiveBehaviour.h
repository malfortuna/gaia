#ifndef INCLUDED_behaviour_PrimitiveBehaviour
#define INCLUDED_behaviour_PrimitiveBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <behaviour/CivBehaviour.h>
HX_DECLARE_CLASS1(behaviour,CivBehaviour)
HX_DECLARE_CLASS1(behaviour,PrimitiveBehaviour)
HX_DECLARE_CLASS1(model,Civ)
namespace behaviour{


class HXCPP_CLASS_ATTRIBUTES  PrimitiveBehaviour_obj : public ::behaviour::CivBehaviour_obj{
	public:
		typedef ::behaviour::CivBehaviour_obj super;
		typedef PrimitiveBehaviour_obj OBJ_;
		PrimitiveBehaviour_obj();
		Void __construct(::model::Civ civ);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PrimitiveBehaviour_obj > __new(::model::Civ civ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PrimitiveBehaviour_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PrimitiveBehaviour"); }

		Float behaviour_expansionist;
		Float behaviour_scholarly;
		Float behaviour_militaristic;
		virtual Void tick( );

};

} // end namespace behaviour

#endif /* INCLUDED_behaviour_PrimitiveBehaviour */ 
