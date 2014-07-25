package model;

class Universe{
	
	public var stars:Array<Star> = [];
	public var planets:Array<Planet> = [];
	public var civs:Array<Civ> = [];

	public var date:Int;

	public function new(){
		date = Std.random(1000) + 4000;
	}

	public function getCivByName(name:String){
		for(civ in civs){
			if(civ.name == name){
				return civ;
			}
		}
		return null;
	}

}