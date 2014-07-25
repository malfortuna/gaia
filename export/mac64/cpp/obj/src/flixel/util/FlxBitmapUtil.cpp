#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapUtil
#include <flixel/util/FlxBitmapUtil.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxBitmapUtil_obj::__construct()
{
	return null();
}

//FlxBitmapUtil_obj::~FlxBitmapUtil_obj() { }

Dynamic FlxBitmapUtil_obj::__CreateEmpty() { return  new FlxBitmapUtil_obj; }
hx::ObjectPtr< FlxBitmapUtil_obj > FlxBitmapUtil_obj::__new()
{  hx::ObjectPtr< FlxBitmapUtil_obj > result = new FlxBitmapUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxBitmapUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapUtil_obj > result = new FlxBitmapUtil_obj();
	result->__construct();
	return result;}

Void FlxBitmapUtil_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::display::BitmapData destBitmapData,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapUtil","merge",0xc3f58073,"flixel.util.FlxBitmapUtil.merge","flixel/util/FlxBitmapUtil.hx",10,0x286986d5)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destBitmapData,"destBitmapData")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(14)
		int _g = destBitmapData->get_width();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( ::openfl::geom::Point &destPoint,::openfl::display::BitmapData &destBitmapData){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapUtil.hx",15,0x286986d5)
				{
					HX_STACK_LINE(15)
					int _g1 = destBitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(15)
					return (destPoint->y >= _g1);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::openfl::geom::Rectangle &sourceRect,::openfl::display::BitmapData &sourceBitmapData){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapUtil.hx",16,0x286986d5)
				{
					HX_STACK_LINE(16)
					int _g2 = sourceBitmapData->get_width();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(16)
					return (sourceRect->x >= _g2);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( ::openfl::geom::Rectangle &sourceRect,::openfl::display::BitmapData &sourceBitmapData){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapUtil.hx",17,0x286986d5)
				{
					HX_STACK_LINE(17)
					int _g3 = sourceBitmapData->get_height();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(17)
					return (sourceRect->y >= _g3);
				}
				return null();
			}
		};
		HX_STACK_LINE(14)
		if (((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((destPoint->x >= _g))))) ? bool(_Function_1_1::Block(destPoint,destBitmapData)) : bool(true) ))))) ? bool(_Function_1_2::Block(sourceRect,sourceBitmapData)) : bool(true) ))))) ? bool(_Function_1_3::Block(sourceRect,sourceBitmapData)) : bool(true) ))))) ? bool(((sourceRect->x + sourceRect->width) <= (int)0)) : bool(true) ))))) ? bool(((sourceRect->y + sourceRect->height) <= (int)0)) : bool(true) ))){
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(25)
		while((true)){
			HX_STACK_LINE(25)
			int _g4 = sourceBitmapData->get_width();		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static bool Block( ::openfl::geom::Rectangle &sourceRect,::openfl::display::BitmapData &sourceBitmapData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapUtil.hx",26,0x286986d5)
					{
						HX_STACK_LINE(26)
						int _g5 = sourceBitmapData->get_height();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(26)
						return ((sourceRect->y + sourceRect->height) > _g5);
					}
					return null();
				}
			};
			HX_STACK_LINE(25)
			if ((!(((  ((!(((  ((!(((  ((!(((  ((!(((  ((!((((sourceRect->x + sourceRect->width) > _g4))))) ? bool(_Function_2_1::Block(sourceRect,sourceBitmapData)) : bool(true) ))))) ? bool((sourceRect->x < (int)0)) : bool(true) ))))) ? bool((sourceRect->y < (int)0)) : bool(true) ))))) ? bool((destPoint->x < (int)0)) : bool(true) ))))) ? bool((destPoint->y < (int)0)) : bool(true) ))))){
				HX_STACK_LINE(25)
				break;
			}
			HX_STACK_LINE(32)
			int _g6 = sourceBitmapData->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(32)
			if ((((sourceRect->x + sourceRect->width) > _g6))){
				HX_STACK_LINE(32)
				int _g7 = sourceBitmapData->get_width();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(32)
				Float _g8 = (_g7 - sourceRect->x);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(32)
				sourceRect->width = _g8;
			}
			HX_STACK_LINE(33)
			int _g9 = sourceBitmapData->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(33)
			if ((((sourceRect->y + sourceRect->height) > _g9))){
				HX_STACK_LINE(33)
				int _g10 = sourceBitmapData->get_height();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(33)
				Float _g11 = (_g10 - sourceRect->y);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(33)
				sourceRect->height = _g11;
			}
			HX_STACK_LINE(35)
			if (((sourceRect->x < (int)0))){
				HX_STACK_LINE(37)
				destPoint->x = (destPoint->x - sourceRect->x);
				HX_STACK_LINE(38)
				sourceRect->width = (sourceRect->width + sourceRect->x);
				HX_STACK_LINE(39)
				sourceRect->x = (int)0;
			}
			HX_STACK_LINE(42)
			if (((sourceRect->y < (int)0))){
				HX_STACK_LINE(44)
				destPoint->y = (destPoint->y - sourceRect->y);
				HX_STACK_LINE(45)
				sourceRect->height = (sourceRect->height + sourceRect->y);
				HX_STACK_LINE(46)
				sourceRect->y = (int)0;
			}
			HX_STACK_LINE(49)
			int _g12 = destBitmapData->get_width();		HX_STACK_VAR(_g12,"_g12");
			struct _Function_2_2{
				inline static bool Block( ::openfl::geom::Point &destPoint,::openfl::display::BitmapData &destBitmapData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapUtil.hx",49,0x286986d5)
					{
						HX_STACK_LINE(49)
						int _g13 = destBitmapData->get_height();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(49)
						return (destPoint->y >= _g13);
					}
					return null();
				}
			};
			HX_STACK_LINE(49)
			if (((  ((!(((destPoint->x >= _g12))))) ? bool(_Function_2_2::Block(destPoint,destBitmapData)) : bool(true) ))){
				HX_STACK_LINE(49)
				return null();
			}
			HX_STACK_LINE(51)
			if (((destPoint->x < (int)0))){
				HX_STACK_LINE(53)
				sourceRect->x = (sourceRect->x - destPoint->x);
				HX_STACK_LINE(54)
				sourceRect->width = (sourceRect->width + destPoint->x);
				HX_STACK_LINE(55)
				destPoint->x = (int)0;
			}
			HX_STACK_LINE(58)
			if (((destPoint->y < (int)0))){
				HX_STACK_LINE(60)
				sourceRect->y = (sourceRect->y - destPoint->y);
				HX_STACK_LINE(61)
				sourceRect->height = (sourceRect->height + destPoint->y);
				HX_STACK_LINE(62)
				destPoint->y = (int)0;
			}
		}
		HX_STACK_LINE(66)
		if (((bool((sourceRect->width <= (int)0)) || bool((sourceRect->height <= (int)0))))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(68)
		int startSourceX = ::Math_obj::round(sourceRect->x);		HX_STACK_VAR(startSourceX,"startSourceX");
		HX_STACK_LINE(69)
		int startSourceY = ::Math_obj::round(sourceRect->y);		HX_STACK_VAR(startSourceY,"startSourceY");
		HX_STACK_LINE(71)
		int width = ::Math_obj::round(sourceRect->width);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(72)
		int height = ::Math_obj::round(sourceRect->height);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(74)
		int sourceX = startSourceX;		HX_STACK_VAR(sourceX,"sourceX");
		HX_STACK_LINE(75)
		int sourceY = startSourceY;		HX_STACK_VAR(sourceY,"sourceY");
		HX_STACK_LINE(77)
		int destX = ::Math_obj::round(destPoint->x);		HX_STACK_VAR(destX,"destX");
		HX_STACK_LINE(78)
		int destY = ::Math_obj::round(destPoint->y);		HX_STACK_VAR(destY,"destY");
		HX_STACK_LINE(80)
		int currX = destX;		HX_STACK_VAR(currX,"currX");
		HX_STACK_LINE(81)
		int currY = destY;		HX_STACK_VAR(currY,"currY");
		HX_STACK_LINE(83)
		int sourceColor;		HX_STACK_VAR(sourceColor,"sourceColor");
		HX_STACK_LINE(84)
		int destColor;		HX_STACK_VAR(destColor,"destColor");
		HX_STACK_LINE(86)
		int sourceRed;		HX_STACK_VAR(sourceRed,"sourceRed");
		HX_STACK_LINE(87)
		int sourceGreen;		HX_STACK_VAR(sourceGreen,"sourceGreen");
		HX_STACK_LINE(88)
		int sourceBlue;		HX_STACK_VAR(sourceBlue,"sourceBlue");
		HX_STACK_LINE(89)
		int sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
		HX_STACK_LINE(91)
		int destRed;		HX_STACK_VAR(destRed,"destRed");
		HX_STACK_LINE(92)
		int destGreen;		HX_STACK_VAR(destGreen,"destGreen");
		HX_STACK_LINE(93)
		int destBlue;		HX_STACK_VAR(destBlue,"destBlue");
		HX_STACK_LINE(94)
		int destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
		HX_STACK_LINE(96)
		int resultRed;		HX_STACK_VAR(resultRed,"resultRed");
		HX_STACK_LINE(97)
		int resultGreen;		HX_STACK_VAR(resultGreen,"resultGreen");
		HX_STACK_LINE(98)
		int resultBlue;		HX_STACK_VAR(resultBlue,"resultBlue");
		HX_STACK_LINE(99)
		int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
		HX_STACK_LINE(101)
		int resultColor = (int)0;		HX_STACK_VAR(resultColor,"resultColor");
		HX_STACK_LINE(102)
		destBitmapData->lock();
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g1 < width))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(107)
					while((true)){
						HX_STACK_LINE(107)
						if ((!(((_g11 < height))))){
							HX_STACK_LINE(107)
							break;
						}
						HX_STACK_LINE(107)
						int j = (_g11)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(109)
						sourceX = (startSourceX + i);
						HX_STACK_LINE(110)
						sourceY = (startSourceY + j);
						HX_STACK_LINE(112)
						currX = (destX + i);
						HX_STACK_LINE(113)
						currY = (destY + j);
						HX_STACK_LINE(115)
						int _g14 = sourceBitmapData->getPixel32(sourceX,sourceY);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(115)
						sourceColor = _g14;
						HX_STACK_LINE(116)
						int _g15 = destBitmapData->getPixel32(currX,currY);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(116)
						destColor = _g15;
						HX_STACK_LINE(119)
						sourceRed = (int((int(sourceColor) >> int((int)16))) & int((int)255));
						HX_STACK_LINE(120)
						sourceGreen = (int((int(sourceColor) >> int((int)8))) & int((int)255));
						HX_STACK_LINE(121)
						sourceBlue = (int(sourceColor) & int((int)255));
						HX_STACK_LINE(122)
						sourceAlpha = (int((int(sourceColor) >> int((int)24))) & int((int)255));
						HX_STACK_LINE(124)
						destRed = (int((int(destColor) >> int((int)16))) & int((int)255));
						HX_STACK_LINE(125)
						destGreen = (int((int(destColor) >> int((int)8))) & int((int)255));
						HX_STACK_LINE(126)
						destBlue = (int(destColor) & int((int)255));
						HX_STACK_LINE(127)
						destAlpha = (int((int(destColor) >> int((int)24))) & int((int)255));
						HX_STACK_LINE(130)
						int _g16 = ::Std_obj::_int((Float((((sourceRed * redMultiplier) + (destRed * (((int)256 - redMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(130)
						resultRed = _g16;
						HX_STACK_LINE(131)
						int _g17 = ::Std_obj::_int((Float((((sourceGreen * greenMultiplier) + (destGreen * (((int)256 - greenMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(131)
						resultGreen = _g17;
						HX_STACK_LINE(132)
						int _g18 = ::Std_obj::_int((Float((((sourceBlue * blueMultiplier) + (destBlue * (((int)256 - blueMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(132)
						resultBlue = _g18;
						HX_STACK_LINE(133)
						int _g19 = ::Std_obj::_int((Float((((sourceAlpha * alphaMultiplier) + (destAlpha * (((int)256 - alphaMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(133)
						resultAlpha = _g19;
						HX_STACK_LINE(136)
						resultColor = (int((int((int((int(resultAlpha) << int((int)24))) | int((int(resultRed) << int((int)16))))) | int((int(resultGreen) << int((int)8))))) | int(resultBlue));
						HX_STACK_LINE(139)
						destBitmapData->setPixel32(currX,currY,resultColor);
					}
				}
			}
		}
		HX_STACK_LINE(142)
		destBitmapData->unlock(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxBitmapUtil_obj,merge,(void))

int FlxBitmapUtil_obj::mergeColorComponent( int source,int dest,int multiplier){
	HX_STACK_FRAME("flixel.util.FlxBitmapUtil","mergeColorComponent",0xc4f472ad,"flixel.util.FlxBitmapUtil.mergeColorComponent","flixel/util/FlxBitmapUtil.hx",148,0x286986d5)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(multiplier,"multiplier")
	HX_STACK_LINE(148)
	return ::Std_obj::_int((Float((((source * multiplier) + (dest * (((int)256 - multiplier)))))) / Float((int)256)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapUtil_obj,mergeColorComponent,return )

Dynamic FlxBitmapUtil_obj::compare( ::openfl::display::BitmapData Bitmap1,::openfl::display::BitmapData Bitmap2){
	HX_STACK_FRAME("flixel.util.FlxBitmapUtil","compare",0x51571b20,"flixel.util.FlxBitmapUtil.compare","flixel/util/FlxBitmapUtil.hx",152,0x286986d5)
	HX_STACK_ARG(Bitmap1,"Bitmap1")
	HX_STACK_ARG(Bitmap2,"Bitmap2")
	HX_STACK_LINE(156)
	if (((Bitmap1 == Bitmap2))){
		HX_STACK_LINE(158)
		return (int)0;
	}
	HX_STACK_LINE(160)
	int _g = Bitmap1->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(160)
	int _g1 = Bitmap2->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(160)
	if (((_g != _g1))){
		HX_STACK_LINE(162)
		return (int)-3;
	}
	else{
		HX_STACK_LINE(164)
		int _g2 = Bitmap1->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(164)
		int _g3 = Bitmap2->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(164)
		if (((_g2 != _g3))){
			HX_STACK_LINE(166)
			return (int)-4;
		}
		else{
			HX_STACK_LINE(170)
			int width = Bitmap1->get_width();		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(171)
			int height = Bitmap1->get_height();		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(172)
			::openfl::display::BitmapData result = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(173)
			bool identical = true;		HX_STACK_VAR(identical,"identical");
			HX_STACK_LINE(175)
			int pixel1;		HX_STACK_VAR(pixel1,"pixel1");
			HX_STACK_LINE(175)
			int pixel2;		HX_STACK_VAR(pixel2,"pixel2");
			HX_STACK_LINE(176)
			int rgb1;		HX_STACK_VAR(rgb1,"rgb1");
			HX_STACK_LINE(176)
			int rgb2;		HX_STACK_VAR(rgb2,"rgb2");
			HX_STACK_LINE(177)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(177)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(177)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(178)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(178)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(178)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(179)
			int alpha1;		HX_STACK_VAR(alpha1,"alpha1");
			HX_STACK_LINE(179)
			int alpha2;		HX_STACK_VAR(alpha2,"alpha2");
			HX_STACK_LINE(180)
			int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
			HX_STACK_LINE(180)
			int resultColor;		HX_STACK_VAR(resultColor,"resultColor");
			HX_STACK_LINE(181)
			int resultR;		HX_STACK_VAR(resultR,"resultR");
			HX_STACK_LINE(181)
			int resultG;		HX_STACK_VAR(resultG,"resultG");
			HX_STACK_LINE(181)
			int resultB;		HX_STACK_VAR(resultB,"resultB");
			HX_STACK_LINE(182)
			int diffR;		HX_STACK_VAR(diffR,"diffR");
			HX_STACK_LINE(182)
			int diffG;		HX_STACK_VAR(diffG,"diffG");
			HX_STACK_LINE(182)
			int diffB;		HX_STACK_VAR(diffB,"diffB");
			HX_STACK_LINE(182)
			int diffA;		HX_STACK_VAR(diffA,"diffA");
			HX_STACK_LINE(183)
			bool checkAlpha = true;		HX_STACK_VAR(checkAlpha,"checkAlpha");
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(185)
				while((true)){
					HX_STACK_LINE(185)
					if ((!(((_g4 < width))))){
						HX_STACK_LINE(185)
						break;
					}
					HX_STACK_LINE(185)
					int i = (_g4)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(187)
					{
						HX_STACK_LINE(187)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(187)
						while((true)){
							HX_STACK_LINE(187)
							if ((!(((_g11 < height))))){
								HX_STACK_LINE(187)
								break;
							}
							HX_STACK_LINE(187)
							int j = (_g11)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(189)
							int _g41 = Bitmap1->getPixel32(i,j);		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(189)
							pixel1 = _g41;
							HX_STACK_LINE(190)
							int _g5 = Bitmap2->getPixel32(i,j);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(190)
							pixel2 = _g5;
							HX_STACK_LINE(192)
							if (((pixel1 != pixel2))){
								HX_STACK_LINE(194)
								identical = false;
								HX_STACK_LINE(195)
								checkAlpha = true;
								HX_STACK_LINE(197)
								rgb1 = (int(pixel1) & int((int)16777215));
								HX_STACK_LINE(198)
								rgb2 = (int(pixel2) & int((int)16777215));
								HX_STACK_LINE(200)
								if (((rgb1 != rgb2))){
									HX_STACK_LINE(202)
									r1 = (int((int(pixel1) >> int((int)16))) & int((int)255));
									HX_STACK_LINE(203)
									g1 = (int((int(pixel1) >> int((int)8))) & int((int)255));
									HX_STACK_LINE(204)
									b1 = (int(pixel1) & int((int)255));
									HX_STACK_LINE(206)
									r2 = (int((int(pixel2) >> int((int)16))) & int((int)255));
									HX_STACK_LINE(207)
									g2 = (int((int(pixel2) >> int((int)8))) & int((int)255));
									HX_STACK_LINE(208)
									b2 = (int(pixel2) & int((int)255));
									HX_STACK_LINE(210)
									diffR = (r1 - r2);
									HX_STACK_LINE(211)
									diffG = (g1 - g2);
									HX_STACK_LINE(212)
									diffB = (b1 - b2);
									HX_STACK_LINE(214)
									if (((diffR >= (int)0))){
										HX_STACK_LINE(214)
										resultR = diffR;
									}
									else{
										HX_STACK_LINE(214)
										resultR = ((int)256 + diffR);
									}
									HX_STACK_LINE(215)
									if (((diffG >= (int)0))){
										HX_STACK_LINE(215)
										resultG = diffG;
									}
									else{
										HX_STACK_LINE(215)
										resultG = ((int)256 + diffG);
									}
									HX_STACK_LINE(216)
									if (((diffB >= (int)0))){
										HX_STACK_LINE(216)
										resultB = diffB;
									}
									else{
										HX_STACK_LINE(216)
										resultB = ((int)256 + diffB);
									}
									HX_STACK_LINE(218)
									resultColor = (int((int((int((int)-16777216) | int((int(resultR) << int((int)16))))) | int((int(resultG) << int((int)8))))) | int(resultB));
									HX_STACK_LINE(219)
									result->setPixel32(i,j,resultColor);
									HX_STACK_LINE(221)
									checkAlpha = false;
								}
								HX_STACK_LINE(224)
								if ((checkAlpha)){
									HX_STACK_LINE(226)
									alpha1 = (int((int(pixel1) >> int((int)24))) & int((int)255));
									HX_STACK_LINE(227)
									alpha2 = (int((int(pixel2) >> int((int)24))) & int((int)255));
									HX_STACK_LINE(228)
									diffA = (alpha1 - alpha2);
									HX_STACK_LINE(229)
									if (((diffA >= (int)0))){
										HX_STACK_LINE(229)
										resultAlpha = diffA;
									}
									else{
										HX_STACK_LINE(229)
										resultAlpha = ((int)256 + diffA);
									}
									HX_STACK_LINE(230)
									resultColor = (int((int((int(resultAlpha) | int((int)16711680))) | int((int)65280))) | int((int)255));
									HX_STACK_LINE(232)
									if (((alpha1 != alpha2))){
										HX_STACK_LINE(234)
										result->setPixel32(i,j,resultColor);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(241)
			if ((!(identical))){
				HX_STACK_LINE(243)
				return result;
			}
		}
	}
	HX_STACK_LINE(247)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapUtil_obj,compare,return )

Float FlxBitmapUtil_obj::getMemorySize( ::openfl::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.util.FlxBitmapUtil","getMemorySize",0x69329953,"flixel.util.FlxBitmapUtil.getMemorySize","flixel/util/FlxBitmapUtil.hx",255,0x286986d5)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(256)
	int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(256)
	int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(256)
	int _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(256)
	return (_g2 * (int)4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapUtil_obj,getMemorySize,return )


FlxBitmapUtil_obj::FlxBitmapUtil_obj()
{
}

Dynamic FlxBitmapUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMemorySize") ) { return getMemorySize_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeColorComponent") ) { return mergeColorComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("merge"),
	HX_CSTRING("mergeColorComponent"),
	HX_CSTRING("compare"),
	HX_CSTRING("getMemorySize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxBitmapUtil_obj::__mClass;

void FlxBitmapUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxBitmapUtil"), hx::TCanCast< FlxBitmapUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxBitmapUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
