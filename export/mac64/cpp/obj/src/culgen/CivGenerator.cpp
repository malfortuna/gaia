#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_culgen_CivGenerator
#include <culgen/CivGenerator.h>
#endif
#ifndef INCLUDED_culgen_Language
#include <culgen/Language.h>
#endif
#ifndef INCLUDED_culgen_LanguageGenerator
#include <culgen/LanguageGenerator.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_model_Civ
#include <model/Civ.h>
#endif
#ifndef INCLUDED_worldgen_City
#include <worldgen/City.h>
#endif
#ifndef INCLUDED_worldgen_World
#include <worldgen/World.h>
#endif
namespace culgen{

Void CivGenerator_obj::__construct()
{
	return null();
}

//CivGenerator_obj::~CivGenerator_obj() { }

Dynamic CivGenerator_obj::__CreateEmpty() { return  new CivGenerator_obj; }
hx::ObjectPtr< CivGenerator_obj > CivGenerator_obj::__new()
{  hx::ObjectPtr< CivGenerator_obj > result = new CivGenerator_obj();
	result->__construct();
	return result;}

Dynamic CivGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CivGenerator_obj > result = new CivGenerator_obj();
	result->__construct();
	return result;}

::flixel::util::FlxPoint CivGenerator_obj::findSettlementSite( ::worldgen::World world,::model::Civ civ){
	HX_STACK_FRAME("culgen.CivGenerator","findSettlementSite",0x76641c1c,"culgen.CivGenerator.findSettlementSite","culgen/CivGenerator.hx",10,0x2b966362)
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(civ,"civ")
	HX_STACK_LINE(11)
	Array< ::Dynamic > bestSites = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(bestSites,"bestSites");
	HX_STACK_LINE(12)
	Float bestSiteScore = (int)0;		HX_STACK_VAR(bestSiteScore,"bestSiteScore");
	HX_STACK_LINE(13)
	int siteScore = (int)0;		HX_STACK_VAR(siteScore,"siteScore");
	HX_STACK_LINE(14)
	::haxe::Log_obj::trace(HX_CSTRING("finding a settlement site"),hx::SourceInfo(HX_CSTRING("CivGenerator.hx"),14,HX_CSTRING("culgen.CivGenerator"),HX_CSTRING("findSettlementSite")));
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		int _g = world->raw_map_data->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		while((true)){
			HX_STACK_LINE(15)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(15)
				break;
			}
			HX_STACK_LINE(15)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(16)
			{
				HX_STACK_LINE(16)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(16)
				int _g2 = world->raw_map_data->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(16)
				while((true)){
					HX_STACK_LINE(16)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(16)
						break;
					}
					HX_STACK_LINE(16)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(17)
					siteScore = (int)0;
					HX_STACK_LINE(19)
					if (((bool((world->raw_map_data->__get(i).StaticCast< Array< int > >()->__get(j) <= world->waterline)) || bool((world->rivers->__get(i).StaticCast< Array< int > >()->__get(j) > (int)0))))){
						HX_STACK_LINE(21)
						continue;
					}
					HX_STACK_LINE(24)
					if (((world->cities->length > (int)0))){
						HX_STACK_LINE(25)
						int cx = (int)0;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(25)
						int cy = (int)0;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(26)
						{
							HX_STACK_LINE(26)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(26)
							Array< ::Dynamic > _g5 = world->cities;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(26)
							while((true)){
								HX_STACK_LINE(26)
								if ((!(((_g4 < _g5->length))))){
									HX_STACK_LINE(26)
									break;
								}
								HX_STACK_LINE(26)
								::worldgen::City city = _g5->__get(_g4).StaticCast< ::worldgen::City >();		HX_STACK_VAR(city,"city");
								HX_STACK_LINE(26)
								++(_g4);
								HX_STACK_LINE(27)
								hx::AddEq(cx,city->x);
								HX_STACK_LINE(28)
								hx::AddEq(cy,city->y);
								HX_STACK_LINE(29)
								if (((bool((city->x == i)) && bool((city->y == j))))){
									HX_STACK_LINE(30)
									hx::SubEq(siteScore,(int)100);
								}
								HX_STACK_LINE(32)
								Float _g6 = ::Math_obj::pow((city->x - i),(int)2);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(32)
								Float _g11 = ::Math_obj::pow((city->y - j),(int)2);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(32)
								Float _g21 = (_g6 + _g11);		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(32)
								Float dist = ::Math_obj::sqrt(_g21);		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(33)
								if (((dist < (int)50))){
									HX_STACK_LINE(34)
									int _g31 = ::Std_obj::_int(((int)50 - dist));		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(34)
									int _g41 = ((int)2 * _g31);		HX_STACK_VAR(_g41,"_g41");
									HX_STACK_LINE(34)
									hx::SubEq(siteScore,_g41);
								}
							}
						}
						HX_STACK_LINE(37)
						int _g5 = ::Std_obj::_int((Float(cx) / Float(world->cities->length)));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(37)
						cx = _g5;
						HX_STACK_LINE(38)
						int _g6 = ::Std_obj::_int((Float(cy) / Float(world->cities->length)));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(38)
						cy = _g6;
					}
					HX_STACK_LINE(42)
					if (((world->raw_map_data->__get(i).StaticCast< Array< int > >()->__get(j) < world->plainslimit))){
						HX_STACK_LINE(43)
						hx::AddEq(siteScore,(int)20);
					}
					else{
						HX_STACK_LINE(44)
						if (((world->raw_map_data->__get(i).StaticCast< Array< int > >()->__get(j) < world->hilllimit))){
							HX_STACK_LINE(45)
							hx::AddEq(siteScore,(int)0);
						}
						else{
							HX_STACK_LINE(46)
							if (((world->raw_map_data->__get(i).StaticCast< Array< int > >()->__get(j) < world->mountainlimit))){
								HX_STACK_LINE(47)
								hx::SubEq(siteScore,(int)20);
							}
						}
					}
					HX_STACK_LINE(48)
					int _g7 = ::culgen::CivGenerator_obj::countAdjacentRivers(i,j,world);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(48)
					int _g8 = ((int)5 * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(48)
					hx::AddEq(siteScore,_g8);
					HX_STACK_LINE(49)
					int _g9 = ::culgen::CivGenerator_obj::countAdjacentOcean(i,j,world);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(49)
					int _g10 = ((int)3 * _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(49)
					hx::AddEq(siteScore,_g10);
					HX_STACK_LINE(51)
					if (((siteScore > bestSiteScore))){
						HX_STACK_LINE(52)
						::flixel::util::FlxPoint _g11 = ::flixel::util::FlxPoint_obj::__new(i,j);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(52)
						Array< ::Dynamic > _g12 = Array_obj< ::Dynamic >::__new().Add(_g11);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(52)
						bestSites = _g12;
						HX_STACK_LINE(53)
						bestSiteScore = siteScore;
					}
					else{
						HX_STACK_LINE(55)
						if (((siteScore == bestSiteScore))){
							HX_STACK_LINE(56)
							::flixel::util::FlxPoint _g13 = ::flixel::util::FlxPoint_obj::__new(i,j);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(56)
							bestSites->push(_g13);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(60)
	if (((bestSites->length == (int)0))){
		HX_STACK_LINE(61)
		return null();
	}
	HX_STACK_LINE(62)
	int _g14 = ::Std_obj::random(bestSites->length);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(62)
	return bestSites->__get(_g14).StaticCast< ::flixel::util::FlxPoint >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CivGenerator_obj,findSettlementSite,return )

Void CivGenerator_obj::settleCity( ::worldgen::World world,::model::Civ civ){
{
		HX_STACK_FRAME("culgen.CivGenerator","settleCity",0x01d98309,"culgen.CivGenerator.settleCity","culgen/CivGenerator.hx",65,0x2b966362)
		HX_STACK_ARG(world,"world")
		HX_STACK_ARG(civ,"civ")
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint site = ::culgen::CivGenerator_obj::findSettlementSite(world,civ);		HX_STACK_VAR(site,"site");
		HX_STACK_LINE(67)
		if (((site == null()))){
			HX_STACK_LINE(68)
			return null();
		}
		HX_STACK_LINE(70)
		if (((civ != null()))){
			HX_STACK_LINE(71)
			int _g = ::Std_obj::random((int)2);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			int _g1 = ((int)2 + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			::String _g2 = civ->language->generateRandom(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(71)
			int _g3 = ::Std_obj::_int(site->x);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(71)
			int _g4 = ::Std_obj::_int(site->y);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(71)
			::worldgen::City _g5 = ::worldgen::City_obj::__new(_g2,_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(71)
			civ->addCity(_g5,world);
		}
		else{
			HX_STACK_LINE(73)
			int _g6 = ::Std_obj::random((int)2);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(73)
			int _g7 = ((int)2 + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(73)
			::String _g8 = ::culgen::LanguageGenerator_obj::generateLanguage()->generateRandom(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(73)
			int _g9 = ::Std_obj::_int(site->x);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(73)
			int _g10 = ::Std_obj::_int(site->y);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(73)
			::worldgen::City city = ::worldgen::City_obj::__new(_g8,_g9,_g10);		HX_STACK_VAR(city,"city");
			HX_STACK_LINE(74)
			world->cities->push(city);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CivGenerator_obj,settleCity,(void))

Void CivGenerator_obj::assignCities( ::worldgen::World world,Dynamic __o_clusters){
Dynamic clusters = __o_clusters.Default(3);
	HX_STACK_FRAME("culgen.CivGenerator","assignCities",0x41ca6b4b,"culgen.CivGenerator.assignCities","culgen/CivGenerator.hx",79,0x2b966362)
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(clusters,"clusters")
{
		HX_STACK_LINE(80)
		::culgen::CivGenerator_obj::clusterCities(world,clusters);
		HX_STACK_LINE(81)
		::haxe::Log_obj::trace(world->cities,hx::SourceInfo(HX_CSTRING("CivGenerator.hx"),81,HX_CSTRING("culgen.CivGenerator"),HX_CSTRING("assignCities")));
		HX_STACK_LINE(82)
		::haxe::Log_obj::trace(world->civs,hx::SourceInfo(HX_CSTRING("CivGenerator.hx"),82,HX_CSTRING("culgen.CivGenerator"),HX_CSTRING("assignCities")));
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			Array< ::Dynamic > _g1 = world->cities;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				::worldgen::City city = _g1->__get(_g).StaticCast< ::worldgen::City >();		HX_STACK_VAR(city,"city");
				HX_STACK_LINE(84)
				++(_g);
				HX_STACK_LINE(85)
				Dynamic _g2 = world->nations->get(city);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				world->civs->__get(_g2).StaticCast< ::model::Civ >()->addCity(city,world);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CivGenerator_obj,assignCities,(void))

Void CivGenerator_obj::clusterCities( ::worldgen::World world,Dynamic __o_clusters){
Dynamic clusters = __o_clusters.Default(3);
	HX_STACK_FRAME("culgen.CivGenerator","clusterCities",0x697b5510,"culgen.CivGenerator.clusterCities","culgen/CivGenerator.hx",89,0x2b966362)
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(clusters,"clusters")
{
		HX_STACK_LINE(90)
		Array< ::Dynamic > means = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(means,"means");
		HX_STACK_LINE(91)
		Array< ::Dynamic > assignment = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(assignment,"assignment");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				if ((!(((_g < clusters))))){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(94)
				int _g1 = ::Std_obj::random(world->raw_map_data->length);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(94)
				int _g11 = ::Std_obj::random(world->raw_map_data->__get((int)0).StaticCast< Array< int > >()->length);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(94)
				::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new(_g1,_g11);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(94)
				means->push(_g2);
				HX_STACK_LINE(95)
				Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(95)
				assignment->push(_g3);
			}
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			Array< ::Dynamic > _g1 = world->cities;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				::worldgen::City city = _g1->__get(_g).StaticCast< ::worldgen::City >();		HX_STACK_VAR(city,"city");
				HX_STACK_LINE(99)
				++(_g);
				HX_STACK_LINE(100)
				Float nearestDistance = 123123123123;		HX_STACK_VAR(nearestDistance,"nearestDistance");
				HX_STACK_LINE(101)
				int nearestMean = (int)-1;		HX_STACK_VAR(nearestMean,"nearestMean");
				HX_STACK_LINE(103)
				{
					HX_STACK_LINE(103)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(103)
					int _g2 = means->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(103)
					while((true)){
						HX_STACK_LINE(103)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(103)
							break;
						}
						HX_STACK_LINE(103)
						int meanindex = (_g3)++;		HX_STACK_VAR(meanindex,"meanindex");
						HX_STACK_LINE(104)
						::flixel::util::FlxPoint mean = means->__get(meanindex).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(mean,"mean");
						HX_STACK_LINE(105)
						Float _g4 = ::Math_obj::pow((mean->x - city->x),(int)2);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(105)
						Float _g5 = ::Math_obj::pow((mean->y - city->y),(int)2);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(105)
						Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(105)
						Float dist = ::Math_obj::sqrt(_g6);		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(106)
						if (((dist < nearestDistance))){
							HX_STACK_LINE(107)
							nearestMean = meanindex;
							HX_STACK_LINE(108)
							nearestDistance = dist;
						}
					}
				}
				HX_STACK_LINE(112)
				assignment->__get(nearestMean).StaticCast< Array< ::Dynamic > >()->push(city);
			}
		}
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			while((true)){
				HX_STACK_LINE(115)
				if ((!(((_g < (int)40))))){
					HX_STACK_LINE(115)
					break;
				}
				HX_STACK_LINE(115)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(117)
				{
					HX_STACK_LINE(117)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(117)
					int _g1 = assignment->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(117)
					while((true)){
						HX_STACK_LINE(117)
						if ((!(((_g2 < _g1))))){
							HX_STACK_LINE(117)
							break;
						}
						HX_STACK_LINE(117)
						int cin = (_g2)++;		HX_STACK_VAR(cin,"cin");
						HX_STACK_LINE(118)
						Array< ::Dynamic > cluster = assignment->__get(cin).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(cluster,"cluster");
						HX_STACK_LINE(119)
						if (((cluster->length == (int)0))){
							HX_STACK_LINE(120)
							continue;
						}
						HX_STACK_LINE(121)
						int sumx = (int)0;		HX_STACK_VAR(sumx,"sumx");
						HX_STACK_LINE(122)
						int sumy = (int)0;		HX_STACK_VAR(sumy,"sumy");
						HX_STACK_LINE(123)
						{
							HX_STACK_LINE(123)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(123)
							while((true)){
								HX_STACK_LINE(123)
								if ((!(((_g3 < cluster->length))))){
									HX_STACK_LINE(123)
									break;
								}
								HX_STACK_LINE(123)
								::worldgen::City city = cluster->__get(_g3).StaticCast< ::worldgen::City >();		HX_STACK_VAR(city,"city");
								HX_STACK_LINE(123)
								++(_g3);
								HX_STACK_LINE(124)
								hx::AddEq(sumx,city->x);
								HX_STACK_LINE(125)
								hx::AddEq(sumy,city->y);
							}
						}
						HX_STACK_LINE(127)
						int _g7 = ::Std_obj::_int((Float(sumx) / Float(cluster->length)));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(127)
						int _g8 = ::Std_obj::_int((Float(sumy) / Float(cluster->length)));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(127)
						means[cin] = ::flixel::util::FlxPoint_obj::__new(_g7,_g8);
					}
				}
				HX_STACK_LINE(129)
				Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(129)
				assignment = _g9;
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(130)
					while((true)){
						HX_STACK_LINE(130)
						if ((!(((_g1 < clusters))))){
							HX_STACK_LINE(130)
							break;
						}
						HX_STACK_LINE(130)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(131)
						Array< ::Dynamic > _g10 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(131)
						assignment->push(_g10);
					}
				}
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(134)
					Array< ::Dynamic > _g2 = world->cities;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(134)
					while((true)){
						HX_STACK_LINE(134)
						if ((!(((_g1 < _g2->length))))){
							HX_STACK_LINE(134)
							break;
						}
						HX_STACK_LINE(134)
						::worldgen::City city = _g2->__get(_g1).StaticCast< ::worldgen::City >();		HX_STACK_VAR(city,"city");
						HX_STACK_LINE(134)
						++(_g1);
						HX_STACK_LINE(135)
						Float nearestDistance = 123123123123;		HX_STACK_VAR(nearestDistance,"nearestDistance");
						HX_STACK_LINE(136)
						int nearestMean = (int)-1;		HX_STACK_VAR(nearestMean,"nearestMean");
						HX_STACK_LINE(138)
						{
							HX_STACK_LINE(138)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(138)
							int _g3 = means->length;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(138)
							while((true)){
								HX_STACK_LINE(138)
								if ((!(((_g4 < _g3))))){
									HX_STACK_LINE(138)
									break;
								}
								HX_STACK_LINE(138)
								int meanindex = (_g4)++;		HX_STACK_VAR(meanindex,"meanindex");
								HX_STACK_LINE(139)
								::flixel::util::FlxPoint mean = means->__get(meanindex).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(mean,"mean");
								HX_STACK_LINE(140)
								Float _g11 = ::Math_obj::pow((mean->x - city->x),(int)2);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(140)
								Float _g12 = ::Math_obj::pow((mean->y - city->y),(int)2);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(140)
								Float _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(140)
								Float dist = ::Math_obj::sqrt(_g13);		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(141)
								if (((dist < nearestDistance))){
									HX_STACK_LINE(142)
									nearestMean = meanindex;
									HX_STACK_LINE(143)
									nearestDistance = dist;
								}
							}
						}
						HX_STACK_LINE(147)
						assignment->__get(nearestMean).StaticCast< Array< ::Dynamic > >()->push(city);
					}
				}
			}
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			int _g = assignment->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				int cin = (_g1)++;		HX_STACK_VAR(cin,"cin");
				HX_STACK_LINE(152)
				Array< ::Dynamic > cluster = assignment->__get(cin).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(cluster,"cluster");
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(153)
					while((true)){
						HX_STACK_LINE(153)
						if ((!(((_g2 < cluster->length))))){
							HX_STACK_LINE(153)
							break;
						}
						HX_STACK_LINE(153)
						::worldgen::City city = cluster->__get(_g2).StaticCast< ::worldgen::City >();		HX_STACK_VAR(city,"city");
						HX_STACK_LINE(153)
						++(_g2);
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							world->nations->set(city,cin);
							HX_STACK_LINE(154)
							cin;
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CivGenerator_obj,clusterCities,(void))

int CivGenerator_obj::countAdjacentOcean( int x,int y,::worldgen::World world){
	HX_STACK_FRAME("culgen.CivGenerator","countAdjacentOcean",0xa02c4ec0,"culgen.CivGenerator.countAdjacentOcean","culgen/CivGenerator.hx",159,0x2b966362)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(world,"world")
	HX_STACK_LINE(160)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		int _g = (int)-1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		while((true)){
			HX_STACK_LINE(161)
			if ((!(((_g < (int)2))))){
				HX_STACK_LINE(161)
				break;
			}
			HX_STACK_LINE(161)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				int _g1 = (int)-1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(162)
				while((true)){
					HX_STACK_LINE(162)
					if ((!(((_g1 < (int)2))))){
						HX_STACK_LINE(162)
						break;
					}
					HX_STACK_LINE(162)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(163)
					if (((bool((bool((bool((bool(((x + i) < (int)0)) || bool(((y + j) < (int)0)))) || bool(((x + i) >= world->rivers->length)))) || bool(((y + j) >= world->rivers->__get((int)0).StaticCast< Array< int > >()->length)))) || bool((bool((i == (int)0)) && bool((j == (int)0))))))){
					}
					else{
						HX_STACK_LINE(167)
						if (((world->raw_map_data->__get((x + i)).StaticCast< Array< int > >()->__get((y + j)) < world->waterline))){
							HX_STACK_LINE(168)
							(count)++;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(173)
	return count;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CivGenerator_obj,countAdjacentOcean,return )

int CivGenerator_obj::countAdjacentRivers( int x,int y,::worldgen::World world){
	HX_STACK_FRAME("culgen.CivGenerator","countAdjacentRivers",0x3951d6e5,"culgen.CivGenerator.countAdjacentRivers","culgen/CivGenerator.hx",176,0x2b966362)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(world,"world")
	HX_STACK_LINE(177)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		int _g = (int)-1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		while((true)){
			HX_STACK_LINE(178)
			if ((!(((_g < (int)2))))){
				HX_STACK_LINE(178)
				break;
			}
			HX_STACK_LINE(178)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				int _g1 = (int)-1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(179)
				while((true)){
					HX_STACK_LINE(179)
					if ((!(((_g1 < (int)2))))){
						HX_STACK_LINE(179)
						break;
					}
					HX_STACK_LINE(179)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(180)
					if (((bool((bool((bool((bool(((x + i) < (int)0)) || bool(((y + j) < (int)0)))) || bool(((x + i) >= world->rivers->length)))) || bool(((y + j) >= world->rivers->__get((int)0).StaticCast< Array< int > >()->length)))) || bool((bool((i == (int)0)) && bool((j == (int)0))))))){
					}
					else{
						HX_STACK_LINE(184)
						if (((world->rivers->__get((x + i)).StaticCast< Array< int > >()->__get((y + j)) > (int)0))){
							HX_STACK_LINE(185)
							(count)++;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(190)
	return count;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CivGenerator_obj,countAdjacentRivers,return )


CivGenerator_obj::CivGenerator_obj()
{
}

Dynamic CivGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"settleCity") ) { return settleCity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assignCities") ) { return assignCities_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clusterCities") ) { return clusterCities_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"findSettlementSite") ) { return findSettlementSite_dyn(); }
		if (HX_FIELD_EQ(inName,"countAdjacentOcean") ) { return countAdjacentOcean_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"countAdjacentRivers") ) { return countAdjacentRivers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CivGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CivGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("findSettlementSite"),
	HX_CSTRING("settleCity"),
	HX_CSTRING("assignCities"),
	HX_CSTRING("clusterCities"),
	HX_CSTRING("countAdjacentOcean"),
	HX_CSTRING("countAdjacentRivers"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CivGenerator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CivGenerator_obj::__mClass,"__mClass");
};

#endif

Class CivGenerator_obj::__mClass;

void CivGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("culgen.CivGenerator"), hx::TCanCast< CivGenerator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void CivGenerator_obj::__boot()
{
}

} // end namespace culgen
