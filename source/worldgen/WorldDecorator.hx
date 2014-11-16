package worldgen;

import flash.display.BitmapData;
import flash.utils.ByteArray;

class WorldDecorator{

	public static function addTempMap(world:World){
		var step = Math.abs(world.max_temp-world.min_temp)/(world.temp_data[0].length/2);
		//For now, let's sweep top-to-bottom
		for(i in 0...world.temp_data.length){
			for(j in 0...world.temp_data[0].length){
				world.temp_data[i][j] = Std.int(world.max_temp - (Math.abs(world.temp_data[0].length/2-i))*step);
			}
		}
		world.recolourMap();
	}

	public static function addRainMap(world:World){
		var bd = new BitmapData(world.temp_data.length,world.temp_data.length,false,0xffffffff);
        var op = new OptimizedPerlin(Std.random(100000),8,0.6);
        op.fill(bd,Std.int(world.temp_data.length/2),Std.int(world.temp_data.length/2),0);
        var mapVector:flash.Vector<UInt> = bd.getVector(bd.rect); 

        var least = 010000000;
        for(i in 0...world.temp_data.length){
			for(j in 0...world.temp_data[0].length){
				//trace(mapVector[i+(j*world.temp_data[0].length)]);
				//trace(toRGB(mapVector[i+(j*world.temp_data[0].length)]).r);
				world.rain_data[i][j] = Std.int(toRGB(mapVector[i+(j*world.temp_data[0].length)]).r * world.max_rain);
				//trace(world.rain_data[i][j]);
				if(world.rain_data[i][j] < least){
					least = world.rain_data[i][j];
				}
			}
		}
		//trace(least);

		world.recolourMap();
	}
	
	public static function addRivers(world:World){
        var map = world.raw_map_data;
        for(r in 0...20){
            //Pick a river start point
            var rx:Int = Std.random(map.length);
            var ry:Int = Std.random(map[0].length);
            var sx = rx;
            var sy = ry;


            while(map[rx][ry] < world.plainslimit){
            	rx = Std.random(map.length);
           		ry = Std.random(map[0].length);
            }
            
            //Place the river
            var xs = [];
            var ys = [];
            while(map[rx][ry] >= world.waterline){
                xs.push(rx);
                ys.push(ry);
               // trace(rx+","+ry);

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