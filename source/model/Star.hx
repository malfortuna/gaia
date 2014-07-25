package model;

class Star{
	
	public var x:Float;
	public var y:Float;
	public var type:Int;
	public var spec:Int;

	public var planets:Array<Planet> = [];

	public function new(x:Float, y:Float){
		this.x = x;
		this.y = y;
		var c:Float = Math.random()*100;
		if(c == 0){
			type = 0;
			spec = 0xff33CCFF;
		}
		else if(c < 0.131){
			type = 1;
			spec = 0xff66FFFF;
		}
		else if(c < 0.6+0.131){
			type = 2;
			spec = 0xffffffff;
		}
		else if(c < 3+0.6+0.131){
			type = 3;
			spec = 0xffFFFF99;
		}
		else if(c < 7.6+3+0.6+0.131){
			type = 4;
			spec = 0xffFFFF19;
		}
		else if(c < 12.1+7.6+3+0.6+0.131){
			type = 5;
			spec = 0xffFF9900;
		}
		else if(c < 76.4+12.1+7.6+3+0.6+0.131){
			type = 6;
			spec = 0xffFF3300;
		}
		else{
			type = 7;
			spec = 0xffCC3300;
		}
	}

}