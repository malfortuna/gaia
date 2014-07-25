class RollingMask{
	
	public var map:Array<Array<Float>>;

	public function new(width:Int, height:Int, ?particles:Int=3000, ?lifespan:Int=50){
		var max:Float = 0;
		map = new Array<Array<Float>>();
		//trace("init");
		for(j in 0...height){
			map.push(new Array<Float>());
			for(i in 0...width){
				map[j].push(0);
			}
		}
		//trace("init done");
		//particle time
		var px:Int,py:Int,lx:Int,ly:Int;
		for(p in 0...particles){
			//trace("particle "+p);
			px = Std.int(width/2) - 10 + Std.random(20);
			py = Std.int(height/2) - 10 + Std.random(20);
			for(l in 0...lifespan){
				map[px][py]++;
				if(map[px][py] > max){
					max = map[px][py];
				}
				for(i in -1...2){
					lx = px;
					ly = py;
					for(j in -1...2){
						if((px+j < 0 || px+j >= width || py+i < 0 || py+i >= height) || (i == j && i == 0)){
							continue;
						}
						if(map[px+j][py+i] < map[lx][ly]){
							lx = px+j;
							ly = py+i;
						}
					}
					px = lx;
					py = ly;
				}
			}
		}
		
		for(j in 0...height){
			for(i in 0...width){
				map[i][j] = map[i][j]/max;
			}
		}
		trace(map);
	}

}