package worldgen;

class City{

	public var oldnames:Array<String> = new Array<String>();
	public var name:String;
	public var x:Int;
	public var y:Int;

	public var population:Int;

	public function new(name:String, x:Int, y:Int){
		this.name = name;
		this.x = x;
		this.y = y;

		population = 10;
	}
	
	public function changeName(name:String){
		oldnames.push(this.name);
		this.name = name;
	}

}