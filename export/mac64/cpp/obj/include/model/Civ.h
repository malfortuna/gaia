#ifndef INCLUDED_model_Civ
#define INCLUDED_model_Civ

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(culgen,Language)
HX_DECLARE_CLASS1(model,Civ)
HX_DECLARE_CLASS1(model,Planet)
HX_DECLARE_CLASS1(worldgen,City)
HX_DECLARE_CLASS1(worldgen,World)
namespace model{


class HXCPP_CLASS_ATTRIBUTES  Civ_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Civ_obj OBJ_;
		Civ_obj();
		Void __construct(::model::Planet planet,::culgen::Language language);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Civ_obj > __new(::model::Planet planet,::culgen::Language language);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Civ_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Civ"); }

		::String name;
		::culgen::Language language;
		Array< ::Dynamic > cities;
		int metals;
		int food;
		int settleRadius;
		virtual Void addCity( ::worldgen::City city,::worldgen::World world);
		Dynamic addCity_dyn();

		virtual Void worldGenTick( );
		Dynamic worldGenTick_dyn();

		virtual int getResourceRating( ::String resource,int x,int y,::worldgen::World world);
		Dynamic getResourceRating_dyn();

		Array< ::String > adjectives;
		Array< ::String > nouns;
};

} // end namespace model

#endif /* INCLUDED_model_Civ */ 
