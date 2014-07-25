package culgen;

class LanguageGenerator{

	//For consonants
	static var min_tongue = 0;
	static var max_tongue = 7;
	static var min_softness = 0;
	static var max_softness = 5;
	//For vowels
	static var min_expressiveness = 0;
	static var max_expressiveness = 3;
	static var min_length = 0;
	static var max_length = 5;

	static var cons_phonemes = [
	//Bilabial	L-Dent	Dental			Alveolar		Post-alve		Palatal		Velar		Glottal
	[["p","b"],	[],			[],			["t","d"],		[],				[],			["k","g"],	[]], 	//Plosive/Stop 	//HARD
	[["m"],		[],			[],			["n"],			[],				[],			["ng"],		[]],	//Nasal
	[[],		[],			[],			[],				["ch","j"],		[],			[],			[]],	//Affricate
	[[],		["f","v"],	["th"],		["s","z"],		["shh","sh"],	[],			["chk"],	["h"]],	//Fricative
	[[],		[],			[],			["r"],			[],				["yj"],		["w"],		[]],	//Approximant
	[[],		[],			[],			["l"],			[],				[],			[],			[]],	//Approximant	//SOFT
	];

	static var vow_phonemes = [
	//Short 		-------> 			Long
	["A", 	"AA", 	"O", 	"OR",	"",		""],    //Expressive/wide mouth
	["I", 	"EE", 	"E", 	"OO",	"",		""],
	["AY", 	"EI", 	"OI", 	"OA", 	"OW", 	"UR"],
	["AR", 	"OR", 	"EAR", 	"AIR", 	"YUR",	""],	//Narrow mouth
	];

	static var syllable_patterns = ["CV", "VC"];

	static public function generateLanguage(){
		min_tongue = 0; max_tongue = 7;
		min_softness = 0; max_softness = 5;
		min_expressiveness = 0; max_expressiveness = 3;
		min_length = 0; max_length = 5;

		if(Math.random() < 0.2){
			//No labials
			min_tongue+=2;
		}
		else if(Math.random() < 0.2){
			//Short tongue
			min_tongue++;
			max_tongue -= 2;
		}

		if(Math.random()<0.2){
			//Soft language
			min_softness++;
			min_expressiveness++;
		}
		else if(Math.random()<0.2){
			//Harsh language
			max_softness-=2;
			max_expressiveness--;
			max_length-=2;
		}

		var consonants:Array<String> = new Array<String>();
		for(i in min_tongue...max_tongue){
			for(j in min_softness...max_softness){
				for(cons in cons_phonemes[j][i]){
					//trace(cons);
					consonants.push(cons);
				}
			}
		}
		var vowels:Array<String> = new Array<String>();
		for(i in min_expressiveness...max_expressiveness){
			for(j in min_length...max_length){
				//trace(vow_phonemes[i][j]);
				if(vow_phonemes[i][j].length > 0)
					vowels.push(vow_phonemes[i][j]);
			}
		}

		return new Language(consonants,vowels);
	}
	
	static public function test(){
		var word:String = "";
		for(i in 1...(2+Std.random(2))){
			if(Math.random() < 0.5){
				//Find a phoneme
				word+=getRandomConsonant();
				word+=getRandomVowel();
			}
			else{
				word+=getRandomVowel();
				word+=getRandomConsonant();
			}
		}
		trace(word+ " - Species of bird");
	}

	static public function getRandomConsonant(){
		var lab = Std.random(max_tongue-min_tongue)+min_tongue;
		var soft = Std.random(max_softness-min_softness)+min_softness;
		while(cons_phonemes[soft][lab].length == 0){
			lab = Std.random(max_tongue-min_tongue)+min_tongue;
			soft = Std.random(max_softness-min_softness)+min_softness;
		}
		return cons_phonemes[soft][lab][Std.random(cons_phonemes[soft][lab].length)];
	}

	static public function getRandomVowel(){
		var exp = Std.random(max_expressiveness-min_expressiveness)+min_expressiveness;
		var len = Std.random(max_length-min_length)+min_length;
		while(vow_phonemes[exp][len] == ""){
			exp = Std.random(max_expressiveness-min_expressiveness)+min_expressiveness;
			len = Std.random(max_length-min_length)+min_length;
		}
		return vow_phonemes[exp][len].toLowerCase();
	}

}