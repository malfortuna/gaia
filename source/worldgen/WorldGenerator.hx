package worldgen;

import flash.display.BitmapData;
import flash.utils.ByteArray;

class WorldGenerator{
	
	public function new(){

	}

	static public var mapVector:flash.Vector<UInt>;
    static public var mapData:BitmapData;
    static public var map:Array<Array<Int>> = new Array<Array<Int>>();
    static public var mapcolours:Array<Array<Int>> = new Array<Array<Int>>();

    static var octaves:Int = 8;
    static var falloff:Float = 0.6;
    static var size:Int = 25;
    static var width = 150;
    
    static var waterline = 115;
    static var mountainlimit = 245;
	static var hilllimit = 225;
	static var plainslimit = 190;

	static public function generateWorld(){
		//Generate the base bitmap with the Perlin data
		var bd = new BitmapData(width,width,false,0xffffffff);
        var op = new OptimizedPerlin(Std.random(100000),octaves,falloff);
        op.fill(bd,Std.int(width/2),Std.int(width/2),0);
        mapVector = bd.getVector(bd.rect); 
        mapData = bd;

        //Optional step - generate a rolling mask to recentre the map?
        //Based on this technique here: http://www.nolithius.com/game-development/world-generation-breakdown
        var mask:RollingMask = new RollingMask(width,width);
                
        var maxP:Float = 0; var minP:Float = 10000;
        for(i in 0...width-1){
            map.push(new Array<Int>());
            mapcolours.push(new Array<Int>());
            for(j in 0...width-1){
                map[i].push(0);
                mapcolours[i].push(0);
                var rgb = toRGB(mapVector[i+(j*width)]);
                var val = rgb.r*255;
                //val = val * mask.map[i][j];
                if(val < minP){
                    minP = val;
                }
                if(val > maxP){
                    maxP = val;
                }
            }
        }
        var pDelta = maxP-minP;


        var max:Float = 0; var min:Float = 10000;
        for(i in 0...width-1){
            for(j in 0...width-1){
                var col = 0;
                var rgb = toRGB(mapVector[i+(j*width)]);
                var val:Int = Std.int(rgb.r*255);
                val = Std.int((val-minP)/pDelta*255);
                //val = val * mask.map[i][j];
                //trace(val);

                if(val < min){
                    min = val;
                }
                if(val > max){
                    max = val;
                }
 				 if(val < waterline-40){
		                col = 0xff0000FF;
		            }
		            else if(val < waterline){
		                col = 0xff0099FF;
		            }
		            else if(val < waterline+5){
		                col = 0xffFFFF66;
		            }
		            else if(val < plainslimit){
		                col = 0xff33CC33;
		            }
		            else if(val < hilllimit && val < mountainlimit){
		                col = 0xff666633;
		            }
		            else{
		                col = 0xffffffff;
		            }
                mapcolours[i][j] = col;
                map[i][j] = val;
            }
		}

		var world:World = new World(map, mapcolours);

        op.fill(bd,Std.int(width/2),Std.int(width/2),0);	
        mapVector = bd.getVector(bd.rect); 	
        for(i in 0...width-1){
            for(j in 0...width-1){
            	world.metals[i][j] = Std.int(toRGB(mapVector[i+(j*width)]).r*255);
            }
        }

        op.fill(bd,Std.int(width/2),Std.int(width/2),0);	
        mapVector = bd.getVector(bd.rect); 	
        for(i in 0...width-1){
            for(j in 0...width-1){
            	world.food[i][j] = Std.int(toRGB(mapVector[i+(j*width)]).r*255);
            }
        }

        op = new OptimizedPerlin(Std.random(100000),12,0.5);
        op.fill(bd,Std.int(width/2),Std.int(width/2),0);	
        mapVector = bd.getVector(bd.rect); 	
        for(i in 0...width-1){
            for(j in 0...width-1){
            	world.forests[i][j] = Std.int(toRGB(mapVector[i+(j*width)]).r*255);
            }
        }

		return world;
         
	}

	public static function addRivers(world:World){
        var map = world.raw_map_data;
        for(r in 0...20){
            //Pick a river start point
            var rx:Int = Std.random(map.length);
            var ry:Int = Std.random(map[0].length);
            var sx = rx;
            var sy = ry;


            while(map[rx][ry] < plainslimit){
            	rx = Std.random(map.length);
           		ry = Std.random(map[0].length);
            }
            
            //Place the river
            var xs = [];
            var ys = [];
            while(map[rx][ry] >= waterline){
                xs.push(rx);
                ys.push(ry);
                trace(rx+","+ry);

                var mx = rx; var my = ry;
                var lowest = map[mx][my];
                var best = 10000000;
                var bx = -1; var by = -1;

                for(i in -1...2){
                    for(j in -1...2){
                        if(rx+i < 0 || ry+j < 0 || rx+i >= map.length || ry+j >= map[0].length || (i == 0 && j == 0)){
                            
                        }
                        else{
                            if(map[rx+i][ry+j] < lowest){
                                lowest = map[rx+i][ry+j];
                               // trace("lowest "+lowest);
                                mx = rx+i;
                                my = ry+j;
                            }
                            else{
                                if(Math.random() < 0.05 && map[rx+i][ry+j] < map[rx][ry]){
                                    lowest = map[rx+i][ry+j];
                                    //trace("lowest "+lowest);
                                    mx = rx+i;
                                    my = ry+j;
                                }  
                                //else
                                    //trace("not lower: "+map[rx+i][ry+j]+" vs "+lowest);
                            }
                            if(map[rx+i][ry+j] < best){
                            	best = map[rx+i][ry+j];
                            	bx = rx+i;
                            	by = ry+j;
                            }
                        }
                    }
                }
                if(mx == rx && my == ry){
                    //LAKE
                   // trace("LAKE");
                   map[mx][my]++;
                    //break;
                }
                else{
                    rx = mx;
                    ry = my;
                }
            }
           // trace("river made");
            for(xss in 0...xs.length){
            	world.rivers[xs[xss]][ys[xss]] = 1;
                //mapcolours[xs[xss]][ys[xss]] = 0xff0099FF;
            }
		}

		world.recolourMap();
	}

    public static inline function toRGB(int:Int):RGB
    {
        return {
            r: ((int >> 16) & 255) / 255,
            g: ((int >> 8) & 255) / 255,
            b: (int & 255) / 255,
        }
    }

public static function toInt(rgb:RGB) : Int
    {
        return (Math.round(rgb.r * 255) << 16) | (Math.round(rgb.g * 255) << 8) | Math.round(rgb.b * 255);
    }

}


    typedef RGB = {
        var r:Float;
        var g:Float;
        var b:Float;
    }