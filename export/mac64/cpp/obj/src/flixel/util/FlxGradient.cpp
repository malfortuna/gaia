#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxGradient_obj::__construct()
{
	return null();
}

//FlxGradient_obj::~FlxGradient_obj() { }

Dynamic FlxGradient_obj::__CreateEmpty() { return  new FlxGradient_obj; }
hx::ObjectPtr< FlxGradient_obj > FlxGradient_obj::__new()
{  hx::ObjectPtr< FlxGradient_obj > result = new FlxGradient_obj();
	result->__construct();
	return result;}

Dynamic FlxGradient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGradient_obj > result = new FlxGradient_obj();
	result->__construct();
	return result;}

Dynamic FlxGradient_obj::createGradientMatrix( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientMatrix",0x11545e53,"flixel.util.FlxGradient.createGradientMatrix","flixel/util/FlxGradient.hx",24,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(25)
		::openfl::geom::Matrix gradientMatrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(gradientMatrix,"gradientMatrix");
		HX_STACK_LINE(28)
		Float rot = (rotation * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rot,"rot");
		HX_STACK_LINE(31)
		if (((chunkSize == (int)1))){
			HX_STACK_LINE(34)
			gradientMatrix->createGradientBox(width,height,rot,(int)0,(int)0);
		}
		else{
			HX_STACK_LINE(40)
			gradientMatrix->createGradientBox(width,(Float(height) / Float(chunkSize)),rot,(int)0,(int)0);
		}
		HX_STACK_LINE(46)
		Array< Float > alpha = Array_obj< Float >::__new();		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int _g = colors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int ai = (_g1)++;		HX_STACK_VAR(ai,"ai");
				struct _Function_3_1{
					inline static Float Block( int &ai,Array< int > &colors){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",50,0x5a5037d6)
						{
							HX_STACK_LINE(50)
							int f = (int((int(colors->__get(ai)) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(50)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(50)
				alpha->push(_Function_3_1::Block(ai,colors));
			}
		}
		HX_STACK_LINE(53)
		Array< int > ratio = Array_obj< int >::__new();		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(55)
		if (((colors->length == (int)2))){
			HX_STACK_LINE(57)
			ratio[(int)0] = (int)0;
			HX_STACK_LINE(58)
			ratio[(int)1] = (int)255;
		}
		else{
			HX_STACK_LINE(63)
			int spread = ::Std_obj::_int((Float((int)255) / Float(((colors->length - (int)1)))));		HX_STACK_VAR(spread,"spread");
			HX_STACK_LINE(65)
			ratio->push((int)0);
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(67)
				int _g = (colors->length - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				while((true)){
					HX_STACK_LINE(67)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(67)
						break;
					}
					HX_STACK_LINE(67)
					int ri = (_g1)++;		HX_STACK_VAR(ri,"ri");
					HX_STACK_LINE(69)
					ratio->push((ri * spread));
				}
			}
			HX_STACK_LINE(72)
			ratio->push((int)255);
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< int > &ratio,Array< Float > &alpha,::openfl::geom::Matrix &gradientMatrix){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",75,0x5a5037d6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("matrix") , gradientMatrix,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					__result->Add(HX_CSTRING("ratio") , ratio,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		return _Function_1_1::Block(ratio,alpha,gradientMatrix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGradient_obj,createGradientMatrix,return )

Array< int > FlxGradient_obj::createGradientArray( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientArray",0xc5836dc7,"flixel.util.FlxGradient.createGradientArray","flixel/util/FlxGradient.hx",79,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(80)
		::openfl::display::BitmapData data = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(81)
		Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(83)
			int _g = data->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(85)
				int _g2 = data->getPixel32((int)0,y);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				result->push(_g2);
			}
		}
		HX_STACK_LINE(88)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientArray,return )

::flixel::FlxSprite FlxGradient_obj::createGradientFlxSprite( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientFlxSprite",0xca14a545,"flixel.util.FlxGradient.createGradientFlxSprite","flixel/util/FlxGradient.hx",104,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(105)
		::openfl::display::BitmapData data = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(106)
		::flixel::FlxSprite dest = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(107)
		dest->set_pixels(data);
		HX_STACK_LINE(108)
		return dest;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientFlxSprite,return )

::openfl::display::BitmapData FlxGradient_obj::createGradientBitmapData( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientBitmapData",0xa3b74ecb,"flixel.util.FlxGradient.createGradientBitmapData","flixel/util/FlxGradient.hx",112,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(114)
		if (((width < (int)1))){
			HX_STACK_LINE(116)
			width = (int)1;
		}
		HX_STACK_LINE(119)
		if (((height < (int)1))){
			HX_STACK_LINE(121)
			height = (int)1;
		}
		HX_STACK_LINE(125)
		::String key = ((((HX_CSTRING("Gradient: ") + width) + HX_CSTRING(" x ")) + height) + HX_CSTRING(", colors: ["));		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(126)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(127)
		int rgb;		HX_STACK_VAR(rgb,"rgb");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			while((true)){
				HX_STACK_LINE(128)
				if ((!(((_g < colors->length))))){
					HX_STACK_LINE(128)
					break;
				}
				HX_STACK_LINE(128)
				int col = colors->__get(_g);		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(128)
				++(_g);
				HX_STACK_LINE(130)
				a = (int((int(col) >> int((int)24))) & int((int)255));
				HX_STACK_LINE(131)
				rgb = (int(col) & int((int)16777215));
				HX_STACK_LINE(133)
				key = ((((key + rgb) + HX_CSTRING("_")) + a) + HX_CSTRING(", "));
			}
		}
		HX_STACK_LINE(135)
		key = ((((key + HX_CSTRING("], chunkSize: ")) + chunkSize) + HX_CSTRING(", rotation: ")) + rotation);
		struct _Function_1_1{
			inline static bool Block( ::String &key){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",137,0x5a5037d6)
				{
					HX_STACK_LINE(137)
					::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static bool Block( ::flixel::system::frontEnds::BitmapFrontEnd _this,::String &key){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",137,0x5a5037d6)
							{
								HX_STACK_LINE(137)
								::flixel::util::loaders::CachedGraphics _g = _this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(137)
								return (_g != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(137)
					return (  ((_this->_cache->exists(key))) ? bool(_Function_2_1::Block(_this,key)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(137)
		if ((_Function_1_1::Block(key))){
			HX_STACK_LINE(139)
			return ::flixel::FlxG_obj::bitmap->get(key)->bitmap;
		}
		HX_STACK_LINE(143)
		Dynamic gradient = ::flixel::util::FlxGradient_obj::createGradientMatrix(width,height,colors,chunkSize,rotation);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(145)
		::openfl::display::Shape s = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(147)
		if ((interpolate)){
			HX_STACK_LINE(150)
			s->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,colors,gradient->__Field(HX_CSTRING("alpha"),true),gradient->__Field(HX_CSTRING("ratio"),true),gradient->__Field(HX_CSTRING("matrix"),true),::openfl::display::SpreadMethod_obj::PAD,::openfl::display::InterpolationMethod_obj::RGB,(int)0);
		}
		else{
			HX_STACK_LINE(156)
			s->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,colors,gradient->__Field(HX_CSTRING("alpha"),true),gradient->__Field(HX_CSTRING("ratio"),true),gradient->__Field(HX_CSTRING("matrix"),true),::openfl::display::SpreadMethod_obj::PAD,::openfl::display::InterpolationMethod_obj::LINEAR_RGB,(int)0);
		}
		HX_STACK_LINE(160)
		if (((chunkSize == (int)1))){
			HX_STACK_LINE(162)
			s->get_graphics()->drawRect((int)0,(int)0,width,height);
		}
		else{
			HX_STACK_LINE(166)
			s->get_graphics()->drawRect((int)0,(int)0,width,(Float(height) / Float(chunkSize)));
		}
		HX_STACK_LINE(169)
		::openfl::display::BitmapData data = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(171)
		if (((chunkSize == (int)1))){
			HX_STACK_LINE(173)
			data->draw(s,null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(177)
			int _g1 = ::Std_obj::_int((Float(height) / Float(chunkSize)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(177)
			::openfl::display::BitmapData _g2 = ::openfl::display::BitmapData_obj::__new(width,_g1,true,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(177)
			::openfl::display::Bitmap tempBitmap = ::openfl::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(tempBitmap,"tempBitmap");
			HX_STACK_LINE(178)
			tempBitmap->bitmapData->draw(s,null(),null(),null(),null(),null());
			HX_STACK_LINE(179)
			tempBitmap->set_scaleY(chunkSize);
			HX_STACK_LINE(181)
			::openfl::geom::Matrix sM = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(sM,"sM");
			HX_STACK_LINE(182)
			Float _g3 = tempBitmap->get_scaleX();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(182)
			Float _g4 = tempBitmap->get_scaleY();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(182)
			sM->scale(_g3,_g4);
			HX_STACK_LINE(184)
			data->draw(tempBitmap,sM,null(),null(),null(),null());
		}
		HX_STACK_LINE(188)
		::flixel::FlxG_obj::bitmap->addWithSpaces(data,(int)0,(int)0,(int)1,(int)1,false,key);
		HX_STACK_LINE(191)
		return data;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientBitmapData,return )

::flixel::FlxSprite FlxGradient_obj::overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnFlxSprite",0xe400659e,"flixel.util.FlxGradient.overlayGradientOnFlxSprite","flixel/util/FlxGradient.hx",210,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(211)
		Float _g = dest->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		if (((width > _g))){
			HX_STACK_LINE(213)
			Float _g1 = dest->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(213)
			int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(213)
			width = _g2;
		}
		HX_STACK_LINE(216)
		Float _g3 = dest->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(216)
		if (((height > _g3))){
			HX_STACK_LINE(218)
			Float _g4 = dest->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(218)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(218)
			height = _g5;
		}
		HX_STACK_LINE(221)
		::flixel::FlxSprite source = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(222)
		dest->stamp(source,destX,destY);
		HX_STACK_LINE(223)
		source->destroy();
		HX_STACK_LINE(224)
		return dest;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnFlxSprite,return )

::openfl::display::BitmapData FlxGradient_obj::overlayGradientOnBitmapData( ::openfl::display::BitmapData dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnBitmapData",0x3813dc52,"flixel.util.FlxGradient.overlayGradientOnBitmapData","flixel/util/FlxGradient.hx",243,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(244)
		int _g = dest->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(244)
		if (((width > _g))){
			HX_STACK_LINE(246)
			int _g1 = dest->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(246)
			width = _g1;
		}
		HX_STACK_LINE(249)
		int _g2 = dest->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(249)
		if (((height > _g2))){
			HX_STACK_LINE(251)
			int _g3 = dest->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(251)
			height = _g3;
		}
		HX_STACK_LINE(254)
		::openfl::display::BitmapData source = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(255)
		int _g4 = source->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(255)
		int _g5 = source->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(255)
		::openfl::geom::Rectangle _g6 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(255)
		::openfl::geom::Point _g7 = ::openfl::geom::Point_obj::__new(destX,destY);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(255)
		dest->copyPixels(source,_g6,_g7,null(),null(),true);
		HX_STACK_LINE(256)
		source->dispose();
		HX_STACK_LINE(257)
		return dest;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnBitmapData,return )


FlxGradient_obj::FlxGradient_obj()
{
}

Dynamic FlxGradient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createGradientArray") ) { return createGradientArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGradientMatrix") ) { return createGradientMatrix_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFlxSprite") ) { return createGradientFlxSprite_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createGradientBitmapData") ) { return createGradientBitmapData_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"overlayGradientOnFlxSprite") ) { return overlayGradientOnFlxSprite_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"overlayGradientOnBitmapData") ) { return overlayGradientOnBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGradient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGradient_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createGradientMatrix"),
	HX_CSTRING("createGradientArray"),
	HX_CSTRING("createGradientFlxSprite"),
	HX_CSTRING("createGradientBitmapData"),
	HX_CSTRING("overlayGradientOnFlxSprite"),
	HX_CSTRING("overlayGradientOnBitmapData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#endif

Class FlxGradient_obj::__mClass;

void FlxGradient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxGradient"), hx::TCanCast< FlxGradient_obj> ,sStaticFields,sMemberFields,
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

void FlxGradient_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
