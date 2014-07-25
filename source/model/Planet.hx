package model;


// import sys.io.FileOutput;

class Planet{

	public var name:String;
	public var x:Float;
	public var y:Float;
    var size:Int;

    public var settledBy:Civ;
    public var star:Star;
	
	public function new(x:Float, y:Float, s:Star){
		this.name = names[Std.random(names.length)];
		this.y = y;
		this.x = x;
		
        this.star = s;
        size = 3+Std.random(7);

        Reg.state.logMessage(name+" faded in, a class "+size+" planet.");
	}

    public function settle(civ:Civ){
        settledBy = civ;
        Reg.state.logMessage(civ.name+" collected on the planet "+name);

        //SNIP

        //TIME FOR FORESTS?

        //TIME FOR... MINERALS? IDK
       
    }

    // public function settleRandom(civ:Civ){
    //     var x:Int = Std.random(size);
    //     var y:Int = Std.random(size);
    //     while(map_ownership[x][y] != ""){
    //         x = Std.random(size);
    //         y = Std.random(size);
    //     }
    //     map_ownership[x][y] = civ.name;
    // }

	var names:Array<String> = [
		"Deimos",
        "Phobos",
         "Metis",
        "Adrastea",
        "Amalthea",
        "Thebe",
        "Io",
        "Europa",
        "Ganymede",
        "Callisto",
        "Themisto",
        "Leda",
        "Himalia",
        "Lysithea",
        "Elara",
        "S/2000 J11",
        "S/2003 J12",
        "Carpo",
        "Euporie",
        "S/2003 J3",
        "S/2003 J18",
        "Orthosie",
        "Euanthe",
        "Harpalyke",
        "Praxidike",
        "Thyone",
        "S/2003 J16",
        "Iocaste",
        "Mneme",
        "Hermippe",
        "Thelxinoe",
        "Helike",
        "Ananke",
        "S/2003 J15",
        "Eurydome",
        "Arche",
        "Herse",
        "Pasithee",
        "S/2003 J10",
        "Chaldene",
        "Isonoe",
        "Erinome",
        "Kale",
        "Aitne",
        "Taygete",
        "S/2003 J9",
        "Carme",
        "Sponde",
        "Megaclite",
        "S/2003 J5",
        "S/2003 J19",
        "S/2003 J23",
        "Kalyke",
        "Kore",
        "Pasiphae",
        "Eukelade",
        "S/2003 J4",
        "Sinope",
        "Hegemone",
        "Aoede",
        "Kallichore",
        "Autonoe",
        "Callirrhoe",
        "Cyllene",
        "S/2003 J2",
        "Tarqeq",
        "Pan",
        "Daphnis",
        "Atlas",
        "Prometheus",
        "Pandora",
        "Epimetheus",
        "Janus",
        "Aegaeon",
        "Mimas",
        "Methone",
        "Anthe",
        "Pallene",
        "Enceladus",
        "Tethys",
        "Calypso",
        "Telesto",
        "Polydeuces",
        "Dione",
        "Helene",
        "Rhea",
        "Titan",
        "Hyperion",
        "Iapetus",
        "Kiviuq",
        "Ijiraq",
        "Phoebe",
        "Paaliaq",
        "Skathi",
        "Albiorix",
        "S/2007 S2",
        "Bebhionn",
        "Erriapo",
        "Siarnaq",
        "Skoll",
        "Tarvos",
        "Greip",
        "S/2004 S13",
        "Hyrrokkin",
        "Mundilfari",
        "S/2006 S1",
        "Jarnsaxa",
        "Narvi",
        "Bergelmir",
        "S/2004 S17",
        "Suttungr",
        "Hati",
        "S/2004 S12",
        "Bestla",
        "Farbauti",
        "Thrymr",
        "S/2007 S3",
        "Aegir",
        "S/2004 S7",
        "S/2006 S3",
        "Kari",
        "Fenrir",
        "Surtur",
        "Ymir",
        "Loge",
        "Fornjot",
		"Cordelia",
        "Ophelia",
        "Bianca",
        "Cressida",
        "Desdemona",
        "Juliet",
        "Portia",
        "Rosalind",
        "Cupid",
        "Belinda",
        "Perdita",
        "Puck",
        "Mab",
        "Miranda",
        "Ariel",
        "Umbriel",
        "Titania",
        "Oberon",
        "Francisco",
        "Caliban",
        "Stephano",
        "Trinculo",
        "Sycorax",
        "Margaret",
        "Prospero",
        "Setebos",
        "Ferdinand",
        "Naiad",
        "Thalassa",
        "Despina",
        "Galatea",
        "Larissa",
        "Proteus",
        "Triton",
        "Nereid",
        "Halimede",
        "Sao",
        "Laomedeia",
        "Psamathe",
        "Neso",
        "Charon",
        "Styx",
        "Nix",
        "Kerberos",
        "Hydra",
        "Namaka",
        "Hi'iaka",
	];
}