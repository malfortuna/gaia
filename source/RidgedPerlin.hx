/**
Title:      Ridged Perlin noise
Version:    1.0
Author:     Einar Öberg

Based on Perlin Noise version 1.3 by Ron Valstar http://www.sjeiti.com/ with
AS3 optimizations by Mario Klingemann http://www.quasimondo.com and
haXe port and optimization by Nicolas Cannasse http://haxe.org.
Ridge features taken from http://libnoise.sourceforge.net/
*/
import flash.display.BitmapData;

class RidgedPerlin {

  private static var DEFAULT_RIDGED_LACUNARITY:Float = 2.0;
	
  private static var P = [
    151,160,137,91,90,15,131,13,201,95,
    96,53,194,233,7,225,140,36,103,30,69,
    142,8,99,37,240,21,10,23,190,6,148,
    247,120,234,75,0,26,197,62,94,252,
    219,203,117,35,11,32,57,177,33,88,
    237,149,56,87,174,20,125,136,171,
    168,68,175,74,165,71,134,139,48,27,
    166,77,146,158,231,83,111,229,122,
    60,211,133,230,220,105,92,41,55,46,
    245,40,244,102,143,54,65,25,63,161,
    1,216,80,73,209,76,132,187,208,89,
    18,169,200,196,135,130,116,188,159,
    86,164,100,109,198,173,186,3,64,52,
    217,226,250,124,123,5,202,38,147,118,
    126,255,82,85,212,207,206,59,227,47,
    16,58,17,182,189,28,42,223,183,170,
    213,119,248,152,2,44,154,163,70,221,
    153,101,155,167,43,172,9,129,22,39,
    253,19,98,108,110,79,113,224,232,
    178,185,112,104,218,246,97,228,251,
    34,242,193,238,210,144,12,191,179,
    162,241,81,51,145,235,249,14,239,
    107,49,192,214,31,181,199,106,157,
    184,84,204,176,115,121,50,45,127,4,
    150,254,138,236,205,93,222,114,67,29,
    24,72,243,141,128,195,78,66,215,61,
    156,180,151,160,137,91,90,15,131,13,
    201,95,96,53,194,233,7,225,140,36,
    103,30,69,142,8,99,37,240,21,10,23,
    190,6,148,247,120,234,75,0,26,197,
    62,94,252,219,203,117,35,11,32,57,
    177,33,88,237,149,56,87,174,20,125,
    136,171,168,68,175,74,165,71,134,139,
    48,27,166,77,146,158,231,83,111,229,
    122,60,211,133,230,220,105,92,41,55,
    46,245,40,244,102,143,54,65,25,63,
    161,1,216,80,73,209,76,132,187,208,
    89,18,169,200,196,135,130,116,188,
    159,86,164,100,109,198,173,186,3,64,
    52,217,226,250,124,123,5,202,38,147,
    118,126,255,82,85,212,207,206,59,
    227,47,16,58,17,182,189,28,42,223,
    183,170,213,119,248,152,2,44,154,
    163,70,221,153,101,155,167,43,172,9,
    129,22,39,253,19,98,108,110,79,113,
    224,232,178,185,112,104,218,246,97,
    228,251,34,242,193,238,210,144,12,
    191,179,162,241,81,51,145,235,249,
    14,239,107,49,192,214,31,181,199,
    106,157,184,84,204,176,115,121,50,
    45,127,4,150,254,138,236,205,93,
    222,114,67,29,24,72,243,141,128,
    195,78,66,215,61,156,180
  ];

  var octaves : Int;

  var aOctFreq:Array<Float>; // frequency per octave
  var aOctPers:Array<Float>; // persistence per octave
  var fPersMax:Float;// 1 / max persistence

  var iXoffset:Float;
  var iYoffset:Float;
  var iZoffset:Float;
  
  var minColor: Float;
  var maxColor: Float;
  
  
  public function new( ?seed, ?octaves, ?falloff ) {
    if( seed == null ) seed = 123;
    if( falloff == null ) falloff = .4;
    this.octaves = if( octaves == null ) 3 else octaves;
   
    seedOffset(seed);
    octFreqPers(falloff);
  }

  public function updateTables(?seed, ?octaves, ?falloff ) {
	 this.octaves = octaves;
	 seedOffset(seed);
	 octFreqPers(falloff);
  }
  
  public function fill( bitmap:BitmapData, _x:Float, _y:Float, _z:Float, _baseFactor:Float, _gain:Float, _offset:Float ,_clamp:Bool ,?_ ):Void {

    var baseX:Float;

    baseX = _x * _baseFactor + iXoffset;
    _y = _y * _baseFactor + iYoffset;
    _z = _z * _baseFactor + iZoffset;

    var width:Int = bitmap.width;
    var height:Int = bitmap.height;

    var p = P;
    var octaves = octaves;
    var aOctFreq = aOctFreq;
    var aOctPers = aOctPers;
	var weight:Float;
	var prev:Float;
			
	minColor = 255;
	maxColor = 0;
	
    for ( py in 0...height )
    {
      _x = baseX;

      for ( px in 0...width )
      {
        var s = 0.;

		weight = 1; 
		prev = 1;
		
        for ( i in 0...octaves )
        {
			var fFreq = aOctFreq[i];
			var fPers = aOctPers[i];

			var x = _x * fFreq;
			var y = _y * fFreq;
			var z = _z * fFreq;

			var xf = x - (x % 1);
			var yf = y - (y % 1);
			var zf = z - (z % 1);

			var X = Std.int(xf) & 255;
			var Y = Std.int(yf) & 255;
			var Z = Std.int(zf) & 255;

			x -= xf;
			y -= yf;
			z -= zf;

			var u = x * x * x * (x * (x*6 - 15) + 10);
			var v = y * y * y * (y * (y*6 - 15) + 10);
			var w = z * z * z * (z * (z*6 - 15) + 10);

			var A  = (p[X]) + Y;
			var AA = (p[A]) + Z;
			var AB = (p[A+1]) + Z;
			var B  = (p[X+1]) + Y;
			var BA = (p[B]) + Z;
			var BB = (p[B+1]) + Z;

			var x1 = x-1;
			var y1 = y-1;
			var z1 = z-1;

			var hash = (p[BB+1]) & 15;
			var g1 = ((hash&1) == 0 ? (hash<8 ? x1 : y1) : (hash<8 ? -x1 : -y1)) + ((hash&2) == 0 ? hash<4 ? y1 : ( hash==12 ? x1 : z1 ) : hash<4 ? -y1 : ( hash==14 ? -x1 : -z1 ));

			hash = (p[AB+1]) & 15;
			var g2 = ((hash&1) == 0 ? (hash<8 ? x  : y1) : (hash<8 ? -x  : -y1)) + ((hash&2) == 0 ? hash<4 ? y1 : ( hash==12 ? x  : z1 ) : hash<4 ? -y1 : ( hash==14 ? -x : -z1 ));

			hash = (p[BA+1]) & 15;
			var g3 = ((hash&1) == 0 ? (hash<8 ? x1 : y ) : (hash<8 ? -x1 : -y )) + ((hash&2) == 0 ? hash<4 ? y  : ( hash==12 ? x1 : z1 ) : hash<4 ? -y  : ( hash==14 ? -x1 : -z1 ));

			hash = (p[AA+1]) & 15;
			var g4 = ((hash&1) == 0 ? (hash<8 ? x  : y ) : (hash<8 ? -x  : -y )) + ((hash&2) == 0 ? hash<4 ? y  : ( hash==12 ? x  : z1 ) : hash<4 ? -y  : ( hash==14 ? -x  : -z1 ));

			hash = (p[BB]) & 15;
			var g5 = ((hash&1) == 0 ? (hash<8 ? x1 : y1) : (hash<8 ? -x1 : -y1)) + ((hash&2) == 0 ? hash<4 ? y1 : ( hash==12 ? x1 : z  ) : hash<4 ? -y1 : ( hash==14 ? -x1 : -z  ));

			hash = (p[AB]) & 15;
			var g6 = ((hash&1) == 0 ? (hash<8 ? x  : y1) : (hash<8 ? -x  : -y1)) + ((hash&2) == 0 ? hash<4 ? y1 : ( hash==12 ? x  : z  ) : hash<4 ? -y1 : ( hash==14 ? -x  : -z  ));

			hash = (p[BA]) & 15;
			var g7 = ((hash&1) == 0 ? (hash<8 ? x1 : y ) : (hash<8 ? -x1 : -y )) + ((hash&2) == 0 ? hash<4 ? y  : ( hash==12 ? x1 : z  ) : hash<4 ? -y  : ( hash==14 ? -x1 : -z  ));

			hash = (p[AA]) & 15;
			var g8 = ((hash&1) == 0 ? (hash<8 ? x  : y ) : (hash<8 ? -x  : -y )) + ((hash&2) == 0 ? hash<4 ? y  : ( hash==12 ? x  : z  ) : hash<4 ? -y  : ( hash==14 ? -x  : -z  ));

			g2 += u * (g1 - g2);
			g4 += u * (g3 - g4);
			g6 += u * (g5 - g6);
			g8 += u * (g7 - g8);

			g4 += v * (g2 - g4);
			g8 += v * (g6 - g8);

			var noise = ( g8 + w * (g4 - g8))*fPers;
		
			// Make the ridges.
			noise = Math.abs( noise );
			noise = _offset - noise;
			
			// Square the signal to increase the sharpness of the ridges.
			noise = noise * noise;
			
			// The weighting from the previous octave is applied to the signal.
			// Larger values have higher weights, producing sharp points along the
			// ridges.
			noise *= weight;
			
			// Weight successive contributions by the previous signal.
			weight = noise * _gain;
			if (weight > 1) weight = 1;
			if (weight < 0) weight = 0;
			
			 // Add the signal to the output value.
			s += noise * fFreq;
		  
        }

        var color = Std.int( ( s * fPersMax ) * 128 );
     	
		if( _clamp ) {
			if (color >= 255 ) color = 255;
			else if ( color <= 0 ) color = 0;
		}
		
        bitmap.setPixel( px, py, color << 16 );

        _x += _baseFactor;
      }

      _y += _baseFactor;
    }
  }

  function octFreqPers( fPersistence ) {

    var fFreq:Float, fPers:Float;

	fFreq = 1;
	
    aOctFreq = [];
    aOctPers = [];
    fPersMax = 0;

    for ( i in 0...octaves ) {
     
	  fFreq *= DEFAULT_RIDGED_LACUNARITY;
      fPers = Math.pow(fPersistence,i);
      fPersMax += fPers;
      aOctFreq.push( fFreq );
      aOctPers.push( fPers );
    }

    fPersMax = 1 / fPersMax;
  }

  function seedOffset( iSeed : Int ) {
    iXoffset = iSeed = Std.int((iSeed * 16807.) % 2147483647);
    iYoffset = iSeed = Std.int((iSeed * 16807.) % 2147483647);
    iZoffset = iSeed = Std.int((iSeed * 16807.) % 2147483647);
  }
}