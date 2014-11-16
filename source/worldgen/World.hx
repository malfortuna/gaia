package worldgen;

import flixel.FlxSprite;
import worldgen.*;
import model.*;

class World{
	
	//Tiles
	public var raw_map_data:Array<Array<Int>> = new Array<Array<Int>>();
	public var tile_data:Array<Array<Int>> = new Array<Array<Int>>();
	public var temp_data:Array<Array<Int>> = new Array<Array<Int>>();
	public var max_temp = 45;
	public var min_temp = -15;
	public var rain_data:Array<Array<Int>> = new Array<Array<Int>>();
	public var max_rain = 100;
	//TODO
	public var rivers:Array<Array<Int>> = new Array<Array<Int>>();
	public var forests:Array<Array<Int>> = new Array<Array<Int>>();
	public var metals:Array<Array<Int>> = new Array<Array<Int>>();
	public var food:Array<Array<Int>> = new Array<Array<Int>>();
	//Biomes?
	//Climate?
	//Rainfall?

	//Socio-political
	public var cities:Array<City> = new Array<City>();
	public var civs:Array<Civ> = new Array<Civ>();
	//Maps and administration
	public var colours:Array<Int> = new Array<Int>();
	public var nations:Map<City, Int> = new Map<City, Int>();

	public function new(raw:Array<Array<Int>>,?td:Array<Array<Int>>){

		colours.push(0xffff0000);
		colours.push(0xff00ff00);
		colours.push(0xff0055ff);

		for(i in 0...raw.length){
			raw_map_data.push(new Array<Int>());
			rivers.push(new Array<Int>());
			forests.push(new Array<Int>());
			metals.push(new Array<Int>());
			food.push(new Array<Int>());
			tile_data.push(new Array<Int>());
			temp_data.push(new Array<Int>());
			rain_data.push(new Array<Int>());
				
			for(j in 0...raw[0].length){
				trace(raw[i][j]);
				raw_map_data[i].push(raw[i][j]);
				rivers[i].push(0);
				forests[i].push(0);
				metals[i].push(0);
				food[i].push(0);
				temp_data[i].push(0);
				rain_data[i].push(0);
				if(td != null)
					tile_data[i].push(td[i][j]);
				else
					tile_data[i].push(0);
			}
			
		}
		if(td == null){
			recolourMap();
		}
	}

	public var waterline = 115+(35);
	public var mountainlimit = 245;
	public var hilllimit = 225+5;
	public var plainslimit = 190+10;

	public function recolourMap(){
		for(i in 0...raw_map_data.length){
			for(j in 0...raw_map_data[0].length){
				var val = raw_map_data[i][j];
				var col = 0;
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
	            	//Arctic
	            	if(temp_data[i][j] < -5)
	            		col = 0xffffffff;
	            	//Colder climes
	            	else if(temp_data[i][j] < 5){
	            		if(Math.random() > (temp_data[i][j]+5)/10)
	            			col = 0xffffffff;
	            		else
	            			col = 0xff669900;
	            	}
	            	else if(temp_data[i][j] > 30 && rain_data[i][j] < 40){
	            		col = 0xffFFE680;
	            	}
	            	//Plains
	            	else
	                	col = 0xff669900;
	            }
	            else if(val < hilllimit && val < mountainlimit){
	                col = 0xff666633;
	            }
	            else{
	                col = 0xffffffff;
	            }
	            tile_data[i][j] = col;

	            // trace(forests[i][j]);
	            // if(val < plainslimit-20 && val > waterline+30 && forests[i][j] > 125){

	            //	tile_data[i][j] = 0xff336600;
	            //}
	            if(rivers[i][j] > 0){
	            	tile_data[i][j] = 0xff0099FF;
	            }

			}
		}

	}

	public function getSprite(){
		//trace("Making sprite");
		var sprite:FlxSprite = new FlxSprite(0,0);
		//trace("Making graphic");
		//trace(raw_map_data);
		sprite.makeGraphic(raw_map_data.length*2,raw_map_data[0].length*2,0xffffffff);
		//trace("Copying pixels");
		for(i in 0...raw_map_data.length){
			for(j in 0...raw_map_data[0].length){
				//trace("Value");
				
				var col = tile_data[i][j];
				
				


	            sprite.pixels.setPixel(j*2,i*2,col);
	            sprite.pixels.setPixel(j*2+1,i*2,col);
	            sprite.pixels.setPixel(j*2,i*2+1,col);
	            sprite.pixels.setPixel(j*2+1,i*2+1,col);

			}
		}

		for(city in cities){

			var nationColour = colours[nations[city]];

			trace(city.x+","+city.y+" - "+city.name);

			sprite.pixels.setPixel(city.x*2-1,city.y*2,nationColour);
			sprite.pixels.setPixel(city.x*2-1,city.y*2+1,nationColour);
			sprite.pixels.setPixel(city.x*2+2,city.y*2,nationColour);
			sprite.pixels.setPixel(city.x*2+2,city.y*2+1,nationColour);
			sprite.pixels.setPixel(city.x*2,city.y*2-1,nationColour);
			sprite.pixels.setPixel(city.x*2+1,city.y*2-1,nationColour);
			sprite.pixels.setPixel(city.x*2,city.y*2+2,nationColour);
			sprite.pixels.setPixel(city.x*2+1,city.y*2+2,nationColour);

			sprite.pixels.setPixel(city.x*2,city.y*2,nationColour);
			sprite.pixels.setPixel(city.x*2+1,city.y*2,nationColour);
			sprite.pixels.setPixel(city.x*2,city.y*2+1,nationColour);
			sprite.pixels.setPixel(city.x*2+1,city.y*2+1,nationColour);
		}

		return sprite;
	}

}