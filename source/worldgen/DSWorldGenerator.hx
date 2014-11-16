package worldgen;

import flixel.*;

class DSWorldGenerator{
	
	static var DATA_SIZE:Int = 257;

	static public function generateWorld(){

		

		var SEED:Int = Std.random(255);
		var data:Array<Array<Int>> = new Array<Array<Int>>();

		for(i in 0...DATA_SIZE){
			data.push(new Array<Int>());
			for(j in 0...DATA_SIZE){
				data[i].push(0);
			}
		}

		data[0][0] = SEED;
		data[0][DATA_SIZE-1] = SEED;
		data[DATA_SIZE-1][0] = SEED;
		data[DATA_SIZE-1][DATA_SIZE-1] = SEED;

		var h:Int = 255;

		var sideLength:Int = DATA_SIZE - 1;
		var iteration = 0;
		while(sideLength >= 2){
			iteration++;

			var halfSide:Int = Std.int(sideLength/2);

			var x:Int = 0;
			while(x < DATA_SIZE - 1){
				var y:Int = 0;
				while(y < DATA_SIZE - 1){

					var avg:Float = data[x][y] + //top left
				    data[x+sideLength][y] +//top right
				    data[x][y+sideLength] + //lower left
				    data[x+sideLength][y+sideLength];//lower right
				    avg /= 4.0;

		      		data[x+halfSide][y+halfSide] = (Std.int(avg + (Math.random()*2*h) - h)+255)%255;

					y += sideLength;
				}
				x += sideLength;
			}
		

			var x:Int = 0;
			while(x < DATA_SIZE - 1){
				var y:Int = Std.int((x+halfSide) % sideLength);
				while(y < DATA_SIZE - 1){

					var avg:Float = 
				        data[(x-halfSide+(DATA_SIZE-1))%(DATA_SIZE-1)][y] + //left of center
				        data[(x+halfSide)%(DATA_SIZE-1)][y] + //right of center
				        data[x][(y+halfSide)%(DATA_SIZE-1)] + //below center
				        data[x][(y-halfSide+(DATA_SIZE-1))%(DATA_SIZE-1)]; //above center
				      avg /= 4.0;

			      //new value = average plus random offset
			      //We calculate random value in range of 2h
			      //and then subtract h so the end value is
			      //in the range (-h, +h)
			      avg = avg + (Math.random()*2*h) - h;
			      //update value for center of diamond
			      data[x][y] = (Std.int(avg)+255)%255;

			      //wrap values on the edges, remove
			      //this and adjust loop condition above
			      //for non-wrapping values.
			      if(x == 0)  data[DATA_SIZE-1][y] = (Std.int(avg)+255)%255;
			      if(y == 0)  data[x][DATA_SIZE-1] = (Std.int(avg)+255)%255;

					y += sideLength;
				}
				x += halfSide;
			}

		  	//For loop modifier
			sideLength = Std.int(sideLength/2);
			if(iteration > 1)
				h = Std.int(h * randChangeFactor);
		}
		  

		//print out the data
		for(i in 0...data.length){
			var line:String = "";
			for(j in 0...data[i].length){
			   	line += " "+data[i][j]+"";
			}
			trace(line);
		}

		return new World(data);
	}

	static public var randChangeFactor = 0.54;

	static public function getSprite(tile_data:Array<Array<Int>>){
		//trace("Making sprite");
		var sprite:FlxSprite = new FlxSprite(0,0);
		//trace("Making graphic");
		//trace(raw_map_data);
		sprite.makeGraphic(DATA_SIZE*2,DATA_SIZE*2,0xffffffff);
		//trace("Copying pixels");

		var min:Float = 1000000;
		var max:Float = 0;
		for(i in 0...DATA_SIZE){
			for(j in 0...DATA_SIZE){
				if(tile_data[i][j] < min){
					min = tile_data[i][j];
				}
				if(tile_data[i][j] > max){
					max = tile_data[i][j];
				}
			}
		}
		trace("min "+min+", max "+max);

		for(i in 0...DATA_SIZE){
			for(j in 0...DATA_SIZE){
				//trace("Value");
				
				var val = tile_data[i][j];
				//val = Std.int(((val - min)/(max-min))*254);
				trace(val);

				var col = (Math.round(val) << 16) | (Math.round(val) << 8) | Math.round(val);

	            sprite.pixels.setPixel(i*2,j*2,col);
	            sprite.pixels.setPixel(i*2+1,j*2,col);
	            sprite.pixels.setPixel(i*2,j*2+1,col);
	            sprite.pixels.setPixel(i*2+1,j*2+1,col);

			}
		}

		return sprite;
	}

}