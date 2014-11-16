package worldgen;

import flash.display.BitmapData;
import flash.utils.ByteArray;

class WorldGenerator{
	
	// public function new(){

	// }

	// static public var mapVector:flash.Vector<UInt>;
 //    static public var mapData:BitmapData;
 //    static public var map:Array<Array<Int>> = new Array<Array<Int>>();
 //    static public var mapcolours:Array<Array<Int>> = new Array<Array<Int>>();

 //    static var octaves:Int = 8;
 //    static var falloff:Float = 0.6;
 //    static var size:Int = 25;
 //    static var width = 150;
    
 //    static var waterline = 115;
 //    static var mountainlimit = 245;
	// static var hilllimit = 225;
	// static var plainslimit = 190;

	// static public function generateWorld(){
	// 	//Generate the base bitmap with the Perlin data
	// 	var bd = new BitmapData(width,width,false,0xffffffff);
 //        var op = new OptimizedPerlin(Std.random(100000),octaves,falloff);
 //        op.fill(bd,Std.int(width/2),Std.int(width/2),0);
 //        mapVector = bd.getVector(bd.rect); 
 //        mapData = bd;

 //        //Optional step - generate a rolling mask to recentre the map?
 //        //Based on this technique here: http://www.nolithius.com/game-development/world-generation-breakdown
 //        var mask:RollingMask = new RollingMask(width,width);
                
 //        var maxP:Float = 0; var minP:Float = 10000;
 //        for(i in 0...width-1){
 //            map.push(new Array<Int>());
 //            mapcolours.push(new Array<Int>());
 //            for(j in 0...width-1){
 //                map[i].push(0);
 //                mapcolours[i].push(0);
 //                var rgb = toRGB(mapVector[i+(j*width)]);
 //                var val = rgb.r*255;
 //                //val = val * mask.map[i][j];
 //                if(val < minP){
 //                    minP = val;
 //                }
 //                if(val > maxP){
 //                    maxP = val;
 //                }
 //            }
 //        }
 //        var pDelta = maxP-minP;


 //        var max:Float = 0; var min:Float = 10000;
 //        for(i in 0...width-1){
 //            for(j in 0...width-1){
 //                var col = 0;
 //                var rgb = toRGB(mapVector[i+(j*width)]);
 //                var val:Int = Std.int(rgb.r*255);
 //                val = Std.int((val-minP)/pDelta*255);
 //                //val = val * mask.map[i][j];
 //                //trace(val);

 //                if(val < min){
 //                    min = val;
 //                }
 //                if(val > max){
 //                    max = val;
 //                }
 // 				 if(val < waterline-40){
	// 	                col = 0xff0000FF;
	// 	            }
	// 	            else if(val < waterline){
	// 	                col = 0xff0099FF;
	// 	            }
	// 	            else if(val < waterline+5){
	// 	                col = 0xffFFFF66;
	// 	            }
	// 	            else if(val < plainslimit){
	// 	                col = 0xff33CC33;
	// 	            }
	// 	            else if(val < hilllimit && val < mountainlimit){
	// 	                col = 0xff666633;
	// 	            }
	// 	            else{
	// 	                col = 0xffffffff;
	// 	            }
 //                mapcolours[i][j] = col;
 //                map[i][j] = val;
 //            }
	// 	}

	// 	var world:World = new World(map, mapcolours);

 //        op.fill(bd,Std.int(width/2),Std.int(width/2),0);	
 //        mapVector = bd.getVector(bd.rect); 	
 //        for(i in 0...width-1){
 //            for(j in 0...width-1){
 //            	world.metals[i][j] = Std.int(toRGB(mapVector[i+(j*width)]).r*255);
 //            }
 //        }

 //        op.fill(bd,Std.int(width/2),Std.int(width/2),0);	
 //        mapVector = bd.getVector(bd.rect); 	
 //        for(i in 0...width-1){
 //            for(j in 0...width-1){
 //            	world.food[i][j] = Std.int(toRGB(mapVector[i+(j*width)]).r*255);
 //            }
 //        }

 //        op = new OptimizedPerlin(Std.random(100000),12,0.5);
 //        op.fill(bd,Std.int(width/2),Std.int(width/2),0);	
 //        mapVector = bd.getVector(bd.rect); 	
 //        for(i in 0...width-1){
 //            for(j in 0...width-1){
 //            	world.forests[i][j] = Std.int(toRGB(mapVector[i+(j*width)]).r*255);
 //            }
 //        }

	// 	return world;
         
	// }

}	

//     public static inline function toRGB(int:Int):RGB
//     {
//         return {
//             r: ((int >> 16) & 255) / 255,
//             g: ((int >> 8) & 255) / 255,
//             b: (int & 255) / 255,
//         }
//     }

// public static function toInt(rgb:RGB) : Int
//     {
//         return (Math.round(rgb.r * 255) << 16) | (Math.round(rgb.g * 255) << 8) | Math.round(rgb.b * 255);
//     }

// }


//     typedef RGB = {
//         var r:Float;
//         var g:Float;
//         var b:Float;
//     }