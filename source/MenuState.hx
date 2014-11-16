package;

import culgen.*;
import culgen.CivGenerator;
import flash.geom.Point;
import flash.geom.Rectangle;
import flixel.effects.FlxFlicker;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import worldgen.DSWorldGenerator;
import worldgen.WorldDecorator;
import worldgen.WorldGenerator;
import model.*;
import worldgen.*;


/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{

	public static var universe:Universe;
	public var log:FlxText;

	public static var starSpriteMap:Map<Star,FlxSprite> = new Map<Star,FlxSprite>();

	public function logMessage(s:String){
		log.text = s;
	}

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		super.create();
		Reg.state = this;
		log = new FlxText(0, 400, FlxG.width,"",16);

		//Create the Universe
		trace("the universe exhales");
		universe = new Universe();
		
		//Populate the star systems
		for(i in 1...100){
			universe.stars.push(new Star(Math.random()*200, Math.random()*200));
		}
		//Add in planets
		for(i in 1...100){
			for(j in 1...(1+Std.random(5))){
				var p:Planet = new Planet(Math.random()*100, Math.random()*100,universe.stars[i-1]);
				universe.planets.push(p);
				universe.stars[i-1].planets.push(p);
			}
		}

		var tile:FlxSprite;
		for(i in 0...99){
			tile = new FlxSprite(universe.stars[i].x*2, universe.stars[i].y*2);
			//universe.planets.push(new Planet(Math.random()*100, Math.random()*100));
			tile.makeGraphic(2,2,universe.stars[i].spec);
			starSpriteMap[universe.stars[i]] = tile;
			//add(tile);
		}

		w = worldgen.DSWorldGenerator.generateWorld();
		WorldDecorator.addRivers(w);
		WorldDecorator.addTempMap(w);
		WorldDecorator.addRainMap(w);
		add(w.getSprite());
		//add(worldgen.DSWorldGenerator.generateWorld());
		
		return;

		var p:Planet = universe.planets[Std.random(universe.planets.length)];
		//First, geography
		//w = worldgen.WorldGenerator.generateWorld();

		//WorldGenerator.addRivers(w);
		
		//FlxFlicker.flicker(starSpriteMap[p.star]);

		//Generate civilisations for the planet
		for(i in 0...numCivs){
			var civ:Civ = new Civ(p, LanguageGenerator.generateLanguage());
			w.civs.push(civ);	
			universe.civs.push(civ);
		}
		
		//Place down 20 cities
		for(i in 0...20)
			CivGenerator.settleCity(w);

		//Then assign them to civilisations
		culgen.CivGenerator.assignCities(w);


		add(w.getSprite());
		var s = w.getSprite();
		s.x += 65;
		add(s);
		s = w.getSprite();
		s.y += 65;
		add(s);
		s = w.getSprite();
		s.x += 65;
		s.y += 65;
		add(s);

		add(log);		
	}

	var w:World;
	var numCivs:Int = 3;
	//var civ:Civ;
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();

		if(FlxG.keys.justPressed.R){
			FlxG.switchState(new MenuState());
		}
		if(FlxG.keys.justPressed.T){
			// //Add civs in
			// civ.worldGenTick();
			// civ.settle(w);
			// add(w.getSprite());
			//add(worldgen.DSWorldGenerator.generateWorld());
			w = worldgen.DSWorldGenerator.generateWorld();
			add(w.getSprite());
		}

		if(FlxG.keys.justPressed.Q){
			w.waterline -= 5;
			w.recolourMap();
			add(w.getSprite());
		}
		else if(FlxG.keys.justPressed.W){
			w.waterline += 5;
			w.recolourMap();
			add(w.getSprite());
		}
		if(FlxG.keys.justPressed.A){
			w.plainslimit -= 5;
			w.recolourMap();
			add(w.getSprite());
		}
		else if(FlxG.keys.justPressed.S){
			w.plainslimit += 5;
			w.recolourMap();
			add(w.getSprite());
		}
		if(FlxG.keys.justPressed.Z){
			w.hilllimit -= 5;
			w.recolourMap();
			add(w.getSprite());
		}
		else if(FlxG.keys.justPressed.X){
			w.hilllimit += 5;
			w.recolourMap();
			add(w.getSprite());
		}
		if(FlxG.keys.justPressed.O){
			worldgen.DSWorldGenerator.randChangeFactor -= 0.005;
			trace(DSWorldGenerator.randChangeFactor);
		}
		else if(FlxG.keys.justPressed.P){
			DSWorldGenerator.randChangeFactor += 0.005;
			trace(DSWorldGenerator.randChangeFactor);
		}
	}	

	var mapp:FlxSprite;
}