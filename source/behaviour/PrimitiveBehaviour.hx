package behaviour;

import model.*;

class PrimitiveBehaviour extends CivBehaviour{
	
	var behaviour_expansionist:Float = 0.5;
	var behaviour_scholarly:Float = 0.5;
    var behaviour_militaristic:Float = 0.5;

	public function new(civ:Civ){
		super(civ);

		behaviour_expansionist = Math.random();
		behaviour_scholarly = Math.random();
		behaviour_militaristic = Math.random();

		//trace(behaviour_expansionist+","+behaviour_scholarly+","+behaviour_militaristic);
	}

	override public function tick(){

	}

}