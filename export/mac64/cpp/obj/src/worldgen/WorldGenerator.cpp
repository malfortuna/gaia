#include <hxcpp.h>

#ifndef INCLUDED_RollingMask
#include <RollingMask.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OptimizedPerlin
#include <openfl/display/OptimizedPerlin.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_worldgen_World
#include <worldgen/World.h>
#endif
#ifndef INCLUDED_worldgen_WorldGenerator
#include <worldgen/WorldGenerator.h>
#endif
namespace worldgen{

Void WorldGenerator_obj::__construct()
{
HX_STACK_FRAME("worldgen.WorldGenerator","new",0x4538b223,"worldgen.WorldGenerator.new","worldgen/WorldGenerator.hx",8,0x820e118c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//WorldGenerator_obj::~WorldGenerator_obj() { }

Dynamic WorldGenerator_obj::__CreateEmpty() { return  new WorldGenerator_obj; }
hx::ObjectPtr< WorldGenerator_obj > WorldGenerator_obj::__new()
{  hx::ObjectPtr< WorldGenerator_obj > result = new WorldGenerator_obj();
	result->__construct();
	return result;}

Dynamic WorldGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WorldGenerator_obj > result = new WorldGenerator_obj();
	result->__construct();
	return result;}

Array< int > WorldGenerator_obj::mapVector;

::openfl::display::BitmapData WorldGenerator_obj::mapData;

Array< ::Dynamic > WorldGenerator_obj::map;

Array< ::Dynamic > WorldGenerator_obj::mapcolours;

int WorldGenerator_obj::octaves;

Float WorldGenerator_obj::falloff;

int WorldGenerator_obj::size;

int WorldGenerator_obj::width;

int WorldGenerator_obj::waterline;

int WorldGenerator_obj::mountainlimit;

int WorldGenerator_obj::hilllimit;

int WorldGenerator_obj::plainslimit;

::worldgen::World WorldGenerator_obj::generateWorld( ){
	HX_STACK_FRAME("worldgen.WorldGenerator","generateWorld",0xe4753a60,"worldgen.WorldGenerator.generateWorld","worldgen/WorldGenerator.hx",27,0x820e118c)
	HX_STACK_LINE(29)
	::openfl::display::BitmapData bd = ::openfl::display::BitmapData_obj::__new(::worldgen::WorldGenerator_obj::width,::worldgen::WorldGenerator_obj::width,false,(int)-1,null());		HX_STACK_VAR(bd,"bd");
	HX_STACK_LINE(30)
	int _g = ::Std_obj::random((int)100000);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	::openfl::display::OptimizedPerlin op = ::openfl::display::OptimizedPerlin_obj::__new(_g,::worldgen::WorldGenerator_obj::octaves,::worldgen::WorldGenerator_obj::falloff);		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(31)
	int _g1 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(31)
	int _g2 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	op->fill(bd,_g1,_g2,(int)0,null());
	HX_STACK_LINE(32)
	::openfl::geom::Rectangle _g3 = bd->get_rect();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(32)
	Array< int > _g4 = bd->getVector(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(32)
	::worldgen::WorldGenerator_obj::mapVector = _g4;
	HX_STACK_LINE(33)
	::worldgen::WorldGenerator_obj::mapData = bd;
	HX_STACK_LINE(37)
	::RollingMask mask = ::RollingMask_obj::__new(::worldgen::WorldGenerator_obj::width,::worldgen::WorldGenerator_obj::width,null(),null());		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(39)
	Float maxP = (int)0;		HX_STACK_VAR(maxP,"maxP");
	HX_STACK_LINE(39)
	Float minP = (int)10000;		HX_STACK_VAR(minP,"minP");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(40)
		int _g5 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			if ((!(((_g11 < _g5))))){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(41)
			Array< int > _g51 = Array_obj< int >::__new();		HX_STACK_VAR(_g51,"_g51");
			HX_STACK_LINE(41)
			::worldgen::WorldGenerator_obj::map->push(_g51);
			HX_STACK_LINE(42)
			Array< int > _g6 = Array_obj< int >::__new();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(42)
			::worldgen::WorldGenerator_obj::mapcolours->push(_g6);
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(43)
				int _g21 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(43)
				while((true)){
					HX_STACK_LINE(43)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(43)
						break;
					}
					HX_STACK_LINE(43)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(44)
					::worldgen::WorldGenerator_obj::map->__get(i).StaticCast< Array< int > >()->push((int)0);
					HX_STACK_LINE(45)
					::worldgen::WorldGenerator_obj::mapcolours->__get(i).StaticCast< Array< int > >()->push((int)0);
					HX_STACK_LINE(46)
					Dynamic rgb;		HX_STACK_VAR(rgb,"rgb");
					HX_STACK_LINE(46)
					{
						HX_STACK_LINE(46)
						int _int = ::worldgen::WorldGenerator_obj::mapVector->__get((i + (j * ::worldgen::WorldGenerator_obj::width)));		HX_STACK_VAR(_int,"int");
						struct _Function_6_1{
							inline static Dynamic Block( int &_int){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",46,0x820e118c)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("r") , (Float(((int((int(_int) >> int((int)16))) & int((int)255)))) / Float((int)255)),false);
									__result->Add(HX_CSTRING("g") , (Float(((int((int(_int) >> int((int)8))) & int((int)255)))) / Float((int)255)),false);
									__result->Add(HX_CSTRING("b") , (Float(((int(_int) & int((int)255)))) / Float((int)255)),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(46)
						rgb = _Function_6_1::Block(_int);
					}
					HX_STACK_LINE(47)
					Float val = (rgb->__Field(HX_CSTRING("r"),true) * (int)255);		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(49)
					if (((val < minP))){
						HX_STACK_LINE(50)
						minP = val;
					}
					HX_STACK_LINE(52)
					if (((val > maxP))){
						HX_STACK_LINE(53)
						maxP = val;
					}
				}
			}
		}
	}
	HX_STACK_LINE(57)
	Float pDelta = (maxP - minP);		HX_STACK_VAR(pDelta,"pDelta");
	HX_STACK_LINE(60)
	Float max = (int)0;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(60)
	Float min = (int)10000;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(61)
		int _g5 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			if ((!(((_g11 < _g5))))){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(61)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(62)
				int _g21 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(62)
				while((true)){
					HX_STACK_LINE(62)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(62)
						break;
					}
					HX_STACK_LINE(62)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(63)
					int col = (int)0;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(64)
					Dynamic rgb;		HX_STACK_VAR(rgb,"rgb");
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(64)
						int _int = ::worldgen::WorldGenerator_obj::mapVector->__get((i + (j * ::worldgen::WorldGenerator_obj::width)));		HX_STACK_VAR(_int,"int");
						struct _Function_6_1{
							inline static Dynamic Block( int &_int){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",64,0x820e118c)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("r") , (Float(((int((int(_int) >> int((int)16))) & int((int)255)))) / Float((int)255)),false);
									__result->Add(HX_CSTRING("g") , (Float(((int((int(_int) >> int((int)8))) & int((int)255)))) / Float((int)255)),false);
									__result->Add(HX_CSTRING("b") , (Float(((int(_int) & int((int)255)))) / Float((int)255)),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(64)
						rgb = _Function_6_1::Block(_int);
					}
					HX_STACK_LINE(65)
					int val = ::Std_obj::_int((rgb->__Field(HX_CSTRING("r"),true) * (int)255));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(66)
					int _g7 = ::Std_obj::_int(((Float(((val - minP))) / Float(pDelta)) * (int)255));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(66)
					val = _g7;
					HX_STACK_LINE(70)
					if (((val < min))){
						HX_STACK_LINE(71)
						min = val;
					}
					HX_STACK_LINE(73)
					if (((val > max))){
						HX_STACK_LINE(74)
						max = val;
					}
					HX_STACK_LINE(76)
					if (((val < (::worldgen::WorldGenerator_obj::waterline - (int)40)))){
						HX_STACK_LINE(77)
						col = (int)-16776961;
					}
					else{
						HX_STACK_LINE(79)
						if (((val < ::worldgen::WorldGenerator_obj::waterline))){
							HX_STACK_LINE(80)
							col = (int)-16737793;
						}
						else{
							HX_STACK_LINE(82)
							if (((val < (::worldgen::WorldGenerator_obj::waterline + (int)5)))){
								HX_STACK_LINE(83)
								col = (int)-154;
							}
							else{
								HX_STACK_LINE(85)
								if (((val < ::worldgen::WorldGenerator_obj::plainslimit))){
									HX_STACK_LINE(86)
									col = (int)-13382605;
								}
								else{
									HX_STACK_LINE(88)
									if (((bool((val < ::worldgen::WorldGenerator_obj::hilllimit)) && bool((val < ::worldgen::WorldGenerator_obj::mountainlimit))))){
										HX_STACK_LINE(89)
										col = (int)-10066381;
									}
									else{
										HX_STACK_LINE(92)
										col = (int)-1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(94)
					::worldgen::WorldGenerator_obj::mapcolours->__get(i).StaticCast< Array< int > >()[j] = col;
					HX_STACK_LINE(95)
					::worldgen::WorldGenerator_obj::map->__get(i).StaticCast< Array< int > >()[j] = val;
				}
			}
		}
	}
	HX_STACK_LINE(99)
	::worldgen::World world = ::worldgen::World_obj::__new(::worldgen::WorldGenerator_obj::map,::worldgen::WorldGenerator_obj::mapcolours);		HX_STACK_VAR(world,"world");
	HX_STACK_LINE(101)
	int _g8 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(101)
	int _g9 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(101)
	op->fill(bd,_g8,_g9,(int)0,null());
	HX_STACK_LINE(102)
	::openfl::geom::Rectangle _g10 = bd->get_rect();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(102)
	Array< int > _g11 = bd->getVector(_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(102)
	::worldgen::WorldGenerator_obj::mapVector = _g11;
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(103)
		int _g5 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			if ((!(((_g12 < _g5))))){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			int i = (_g12)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(104)
				int _g21 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(104)
				while((true)){
					HX_STACK_LINE(104)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(104)
						break;
					}
					HX_STACK_LINE(104)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					struct _Function_5_1{
						inline static Dynamic Block( int &i,int &j){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",105,0x820e118c)
							{
								HX_STACK_LINE(105)
								int _int = ::worldgen::WorldGenerator_obj::mapVector->__get((i + (j * ::worldgen::WorldGenerator_obj::width)));		HX_STACK_VAR(_int,"int");
								struct _Function_6_1{
									inline static Dynamic Block( int &_int){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",105,0x820e118c)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("r") , (Float(((int((int(_int) >> int((int)16))) & int((int)255)))) / Float((int)255)),false);
											__result->Add(HX_CSTRING("g") , (Float(((int((int(_int) >> int((int)8))) & int((int)255)))) / Float((int)255)),false);
											__result->Add(HX_CSTRING("b") , (Float(((int(_int) & int((int)255)))) / Float((int)255)),false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(105)
								return _Function_6_1::Block(_int);
							}
							return null();
						}
					};
					HX_STACK_LINE(105)
					world->metals->__get(i).StaticCast< Array< int > >()[j] = ::Std_obj::_int(((_Function_5_1::Block(i,j))->__Field(HX_CSTRING("r"),true) * (int)255));
				}
			}
		}
	}
	HX_STACK_LINE(109)
	int _g12 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(109)
	int _g13 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(109)
	op->fill(bd,_g12,_g13,(int)0,null());
	HX_STACK_LINE(110)
	::openfl::geom::Rectangle _g14 = bd->get_rect();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(110)
	Array< int > _g15 = bd->getVector(_g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(110)
	::worldgen::WorldGenerator_obj::mapVector = _g15;
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		int _g16 = (int)0;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(111)
		int _g5 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			if ((!(((_g16 < _g5))))){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(111)
			int i = (_g16)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(112)
				int _g21 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					struct _Function_5_1{
						inline static Dynamic Block( int &i,int &j){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",113,0x820e118c)
							{
								HX_STACK_LINE(113)
								int _int = ::worldgen::WorldGenerator_obj::mapVector->__get((i + (j * ::worldgen::WorldGenerator_obj::width)));		HX_STACK_VAR(_int,"int");
								struct _Function_6_1{
									inline static Dynamic Block( int &_int){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",113,0x820e118c)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("r") , (Float(((int((int(_int) >> int((int)16))) & int((int)255)))) / Float((int)255)),false);
											__result->Add(HX_CSTRING("g") , (Float(((int((int(_int) >> int((int)8))) & int((int)255)))) / Float((int)255)),false);
											__result->Add(HX_CSTRING("b") , (Float(((int(_int) & int((int)255)))) / Float((int)255)),false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(113)
								return _Function_6_1::Block(_int);
							}
							return null();
						}
					};
					HX_STACK_LINE(113)
					world->food->__get(i).StaticCast< Array< int > >()[j] = ::Std_obj::_int(((_Function_5_1::Block(i,j))->__Field(HX_CSTRING("r"),true) * (int)255));
				}
			}
		}
	}
	HX_STACK_LINE(117)
	int _g16 = ::Std_obj::random((int)100000);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(117)
	::openfl::display::OptimizedPerlin _g17 = ::openfl::display::OptimizedPerlin_obj::__new(_g16,(int)12,0.5);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(117)
	op = _g17;
	HX_STACK_LINE(118)
	int _g18 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(118)
	int _g19 = ::Std_obj::_int((Float(::worldgen::WorldGenerator_obj::width) / Float((int)2)));		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(118)
	op->fill(bd,_g18,_g19,(int)0,null());
	HX_STACK_LINE(119)
	::openfl::geom::Rectangle _g20 = bd->get_rect();		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(119)
	Array< int > _g21 = bd->getVector(_g20);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(119)
	::worldgen::WorldGenerator_obj::mapVector = _g21;
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		int _g110 = (int)0;		HX_STACK_VAR(_g110,"_g110");
		HX_STACK_LINE(120)
		int _g5 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			if ((!(((_g110 < _g5))))){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			int i = (_g110)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(121)
				int _g22 = (::worldgen::WorldGenerator_obj::width - (int)1);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(121)
				while((true)){
					HX_STACK_LINE(121)
					if ((!(((_g31 < _g22))))){
						HX_STACK_LINE(121)
						break;
					}
					HX_STACK_LINE(121)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					struct _Function_5_1{
						inline static Dynamic Block( int &i,int &j){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",122,0x820e118c)
							{
								HX_STACK_LINE(122)
								int _int = ::worldgen::WorldGenerator_obj::mapVector->__get((i + (j * ::worldgen::WorldGenerator_obj::width)));		HX_STACK_VAR(_int,"int");
								struct _Function_6_1{
									inline static Dynamic Block( int &_int){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",122,0x820e118c)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("r") , (Float(((int((int(_int) >> int((int)16))) & int((int)255)))) / Float((int)255)),false);
											__result->Add(HX_CSTRING("g") , (Float(((int((int(_int) >> int((int)8))) & int((int)255)))) / Float((int)255)),false);
											__result->Add(HX_CSTRING("b") , (Float(((int(_int) & int((int)255)))) / Float((int)255)),false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(122)
								return _Function_6_1::Block(_int);
							}
							return null();
						}
					};
					HX_STACK_LINE(122)
					world->forests->__get(i).StaticCast< Array< int > >()[j] = ::Std_obj::_int(((_Function_5_1::Block(i,j))->__Field(HX_CSTRING("r"),true) * (int)255));
				}
			}
		}
	}
	HX_STACK_LINE(126)
	return world;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WorldGenerator_obj,generateWorld,return )

Void WorldGenerator_obj::addRivers( ::worldgen::World world){
{
		HX_STACK_FRAME("worldgen.WorldGenerator","addRivers",0x224f8aeb,"worldgen.WorldGenerator.addRivers","worldgen/WorldGenerator.hx",130,0x820e118c)
		HX_STACK_ARG(world,"world")
		HX_STACK_LINE(131)
		Array< ::Dynamic > map = world->raw_map_data;		HX_STACK_VAR(map,"map");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				if ((!(((_g < (int)20))))){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				int r = (_g)++;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(134)
				int rx = ::Std_obj::random(map->length);		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(135)
				int ry = ::Std_obj::random(map->__get((int)0).StaticCast< Array< int > >()->length);		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(136)
				int sx = rx;		HX_STACK_VAR(sx,"sx");
				HX_STACK_LINE(137)
				int sy = ry;		HX_STACK_VAR(sy,"sy");
				HX_STACK_LINE(140)
				while((true)){
					HX_STACK_LINE(140)
					if ((!(((map->__get(rx).StaticCast< Array< int > >()->__get(ry) < ::worldgen::WorldGenerator_obj::plainslimit))))){
						HX_STACK_LINE(140)
						break;
					}
					HX_STACK_LINE(141)
					int _g1 = ::Std_obj::random(map->length);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(141)
					rx = _g1;
					HX_STACK_LINE(142)
					int _g11 = ::Std_obj::random(map->__get((int)0).StaticCast< Array< int > >()->length);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(142)
					ry = _g11;
				}
				HX_STACK_LINE(146)
				Array< int > xs = Array_obj< int >::__new();		HX_STACK_VAR(xs,"xs");
				HX_STACK_LINE(147)
				Array< int > ys = Array_obj< int >::__new();		HX_STACK_VAR(ys,"ys");
				HX_STACK_LINE(148)
				while((true)){
					HX_STACK_LINE(148)
					if ((!(((map->__get(rx).StaticCast< Array< int > >()->__get(ry) >= ::worldgen::WorldGenerator_obj::waterline))))){
						HX_STACK_LINE(148)
						break;
					}
					HX_STACK_LINE(149)
					xs->push(rx);
					HX_STACK_LINE(150)
					ys->push(ry);
					HX_STACK_LINE(151)
					::haxe::Log_obj::trace(((rx + HX_CSTRING(",")) + ry),hx::SourceInfo(HX_CSTRING("WorldGenerator.hx"),151,HX_CSTRING("worldgen.WorldGenerator"),HX_CSTRING("addRivers")));
					HX_STACK_LINE(153)
					int mx = rx;		HX_STACK_VAR(mx,"mx");
					HX_STACK_LINE(153)
					int my = ry;		HX_STACK_VAR(my,"my");
					HX_STACK_LINE(154)
					int lowest = map->__get(mx).StaticCast< Array< int > >()->__get(my);		HX_STACK_VAR(lowest,"lowest");
					HX_STACK_LINE(155)
					int best = (int)10000000;		HX_STACK_VAR(best,"best");
					HX_STACK_LINE(156)
					int bx = (int)-1;		HX_STACK_VAR(bx,"bx");
					HX_STACK_LINE(156)
					int by = (int)-1;		HX_STACK_VAR(by,"by");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						int _g1 = (int)-1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(158)
						while((true)){
							HX_STACK_LINE(158)
							if ((!(((_g1 < (int)2))))){
								HX_STACK_LINE(158)
								break;
							}
							HX_STACK_LINE(158)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(159)
							{
								HX_STACK_LINE(159)
								int _g2 = (int)-1;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(159)
								while((true)){
									HX_STACK_LINE(159)
									if ((!(((_g2 < (int)2))))){
										HX_STACK_LINE(159)
										break;
									}
									HX_STACK_LINE(159)
									int j = (_g2)++;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(160)
									if (((bool((bool((bool((bool(((rx + i) < (int)0)) || bool(((ry + j) < (int)0)))) || bool(((rx + i) >= map->length)))) || bool(((ry + j) >= map->__get((int)0).StaticCast< Array< int > >()->length)))) || bool((bool((i == (int)0)) && bool((j == (int)0))))))){
									}
									else{
										HX_STACK_LINE(164)
										if (((map->__get((rx + i)).StaticCast< Array< int > >()->__get((ry + j)) < lowest))){
											HX_STACK_LINE(165)
											lowest = map->__get((rx + i)).StaticCast< Array< int > >()->__get((ry + j));
											HX_STACK_LINE(167)
											mx = (rx + i);
											HX_STACK_LINE(168)
											my = (ry + j);
										}
										else{
											HX_STACK_LINE(171)
											Float _g21 = ::Math_obj::random();		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(171)
											if (((  (((_g21 < 0.05))) ? bool((map->__get((rx + i)).StaticCast< Array< int > >()->__get((ry + j)) < map->__get(rx).StaticCast< Array< int > >()->__get(ry))) : bool(false) ))){
												HX_STACK_LINE(172)
												lowest = map->__get((rx + i)).StaticCast< Array< int > >()->__get((ry + j));
												HX_STACK_LINE(174)
												mx = (rx + i);
												HX_STACK_LINE(175)
												my = (ry + j);
											}
										}
										HX_STACK_LINE(180)
										if (((map->__get((rx + i)).StaticCast< Array< int > >()->__get((ry + j)) < best))){
											HX_STACK_LINE(181)
											best = map->__get((rx + i)).StaticCast< Array< int > >()->__get((ry + j));
											HX_STACK_LINE(182)
											bx = (rx + i);
											HX_STACK_LINE(183)
											by = (ry + j);
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(188)
					if (((bool((mx == rx)) && bool((my == ry))))){
						HX_STACK_LINE(191)
						(map->__get(mx).StaticCast< Array< int > >()[my])++;
					}
					else{
						HX_STACK_LINE(195)
						rx = mx;
						HX_STACK_LINE(196)
						ry = my;
					}
				}
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(200)
					int _g1 = xs->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(200)
					while((true)){
						HX_STACK_LINE(200)
						if ((!(((_g2 < _g1))))){
							HX_STACK_LINE(200)
							break;
						}
						HX_STACK_LINE(200)
						int xss = (_g2)++;		HX_STACK_VAR(xss,"xss");
						HX_STACK_LINE(201)
						world->rivers->__get(xs->__get(xss)).StaticCast< Array< int > >()[ys->__get(xss)] = (int)1;
					}
				}
			}
		}
		HX_STACK_LINE(206)
		world->recolourMap();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WorldGenerator_obj,addRivers,(void))

Dynamic WorldGenerator_obj::toRGB( int _int){
	HX_STACK_FRAME("worldgen.WorldGenerator","toRGB",0x054b88d5,"worldgen.WorldGenerator.toRGB","worldgen/WorldGenerator.hx",211,0x820e118c)
	HX_STACK_ARG(_int,"int")
	struct _Function_1_1{
		inline static Dynamic Block( int &_int){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","worldgen/WorldGenerator.hx",211,0x820e118c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , (Float(((int((int(_int) >> int((int)16))) & int((int)255)))) / Float((int)255)),false);
				__result->Add(HX_CSTRING("g") , (Float(((int((int(_int) >> int((int)8))) & int((int)255)))) / Float((int)255)),false);
				__result->Add(HX_CSTRING("b") , (Float(((int(_int) & int((int)255)))) / Float((int)255)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(211)
	return _Function_1_1::Block(_int);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WorldGenerator_obj,toRGB,return )

int WorldGenerator_obj::toInt( Dynamic rgb){
	HX_STACK_FRAME("worldgen.WorldGenerator","toInt",0x0544d6b7,"worldgen.WorldGenerator.toInt","worldgen/WorldGenerator.hx",219,0x820e118c)
	HX_STACK_ARG(rgb,"rgb")
	HX_STACK_LINE(220)
	int _g = ::Math_obj::round((rgb->__Field(HX_CSTRING("r"),true) * (int)255));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(220)
	int _g1 = (int(_g) << int((int)16));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(220)
	int _g2 = ::Math_obj::round((rgb->__Field(HX_CSTRING("g"),true) * (int)255));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(220)
	int _g3 = (int(_g2) << int((int)8));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(220)
	int _g4 = (int(_g1) | int(_g3));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(220)
	int _g5 = ::Math_obj::round((rgb->__Field(HX_CSTRING("b"),true) * (int)255));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(220)
	return (int(_g4) | int(_g5));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WorldGenerator_obj,toInt,return )


WorldGenerator_obj::WorldGenerator_obj()
{
}

Dynamic WorldGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"toRGB") ) { return toRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapData") ) { return mapData; }
		if (HX_FIELD_EQ(inName,"octaves") ) { return octaves; }
		if (HX_FIELD_EQ(inName,"falloff") ) { return falloff; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mapVector") ) { return mapVector; }
		if (HX_FIELD_EQ(inName,"waterline") ) { return waterline; }
		if (HX_FIELD_EQ(inName,"hilllimit") ) { return hilllimit; }
		if (HX_FIELD_EQ(inName,"addRivers") ) { return addRivers_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapcolours") ) { return mapcolours; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"plainslimit") ) { return plainslimit; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mountainlimit") ) { return mountainlimit; }
		if (HX_FIELD_EQ(inName,"generateWorld") ) { return generateWorld_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WorldGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapData") ) { mapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"falloff") ) { falloff=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mapVector") ) { mapVector=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waterline") ) { waterline=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hilllimit") ) { hilllimit=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapcolours") ) { mapcolours=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"plainslimit") ) { plainslimit=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mountainlimit") ) { mountainlimit=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WorldGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("mapVector"),
	HX_CSTRING("mapData"),
	HX_CSTRING("map"),
	HX_CSTRING("mapcolours"),
	HX_CSTRING("octaves"),
	HX_CSTRING("falloff"),
	HX_CSTRING("size"),
	HX_CSTRING("width"),
	HX_CSTRING("waterline"),
	HX_CSTRING("mountainlimit"),
	HX_CSTRING("hilllimit"),
	HX_CSTRING("plainslimit"),
	HX_CSTRING("generateWorld"),
	HX_CSTRING("addRivers"),
	HX_CSTRING("toRGB"),
	HX_CSTRING("toInt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::mapVector,"mapVector");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::mapData,"mapData");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::map,"map");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::mapcolours,"mapcolours");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::octaves,"octaves");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::falloff,"falloff");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::size,"size");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::width,"width");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::waterline,"waterline");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::mountainlimit,"mountainlimit");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::hilllimit,"hilllimit");
	HX_MARK_MEMBER_NAME(WorldGenerator_obj::plainslimit,"plainslimit");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::mapVector,"mapVector");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::mapData,"mapData");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::map,"map");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::mapcolours,"mapcolours");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::octaves,"octaves");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::falloff,"falloff");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::size,"size");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::width,"width");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::waterline,"waterline");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::mountainlimit,"mountainlimit");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::hilllimit,"hilllimit");
	HX_VISIT_MEMBER_NAME(WorldGenerator_obj::plainslimit,"plainslimit");
};

#endif

Class WorldGenerator_obj::__mClass;

void WorldGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("worldgen.WorldGenerator"), hx::TCanCast< WorldGenerator_obj> ,sStaticFields,sMemberFields,
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

void WorldGenerator_obj::__boot()
{
	map= Array_obj< ::Dynamic >::__new();
	mapcolours= Array_obj< ::Dynamic >::__new();
	octaves= (int)8;
	falloff= 0.6;
	size= (int)25;
	width= (int)150;
	waterline= (int)115;
	mountainlimit= (int)245;
	hilllimit= (int)225;
	plainslimit= (int)190;
}

} // end namespace worldgen
