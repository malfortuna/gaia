package culgen;

class Language{

	public var name:String;
	
	var to_english:Map<String, String> = new Map<String, String>();
	var to_language:Map<String, String> = new Map<String, String>();

	var consonant_phonemes:Array<String> = new Array<String>();
	var vowel_phonemes:Array<String> = new Array<String>();

	public function new(cons:Array<String>, vows:Array<String>){
		consonant_phonemes = consonant_phonemes.concat(cons);
		vowel_phonemes = vowel_phonemes.concat(vows);
		//Name itself
		name = generateRandom();
	}

	public function toLanguage(word:String){
		if(to_language.exists(word)){
			return to_language[word];
		}
		else{
			var translation = generateRandom();
			to_language[word] = translation;
			to_english[translation] = word;
			return translation;
		}

	}

	public function generateRandom(?length:Int=0){
		var word = "";
		if(length < 1)
			length = 2+Std.random(3);
		for(i in 1...length){
			//if(Math.random() < 0.5){
				word += getRandomConsonant();
				word += getRandomVowel();
			//}
			// else{
			// 	word += getRandomVowel();	
			// 	word += getRandomConsonant();
			// }
		}
		return word.toLowerCase();
	}

	public function getRandomConsonant(){
		return consonant_phonemes[Std.random(consonant_phonemes.length)];
	}

	public function getRandomVowel(){
		return vowel_phonemes[Std.random(vowel_phonemes.length)];
	}

}