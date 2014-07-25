#ifndef INCLUDED_culgen_CivGenerator
#define INCLUDED_culgen_CivGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(culgen,CivGenerator)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS1(model,Civ)
HX_DECLARE_CLASS1(worldgen,World)
namespace culgen{


class HXCPP_CLASS_ATTRIBUTES  CivGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CivGenerator_obj OBJ_;
		CivGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CivGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CivGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CivGenerator"); }

		static ::flixel::util::FlxPoint findSettlementSite( ::worldgen::World world,::model::Civ civ);
		static Dynamic findSettlementSite_dyn();

		static Void settleCity( ::worldgen::World world,::model::Civ civ);
		static Dynamic settleCity_dyn();

		static Void assignCities( ::worldgen::World world,Dynamic clusters);
		static Dynamic assignCities_dyn();

		static Void clusterCities( ::worldgen::World world,Dynamic clusters);
		static Dynamic clusterCities_dyn();

		static int countAdjacentOcean( int x,int y,::worldgen::World world);
		static Dynamic countAdjacentOcean_dyn();

		static int countAdjacentRivers( int x,int y,::worldgen::World world);
		static Dynamic countAdjacentRivers_dyn();

};

} // end namespace culgen

#endif /* INCLUDED_culgen_CivGenerator */ 
