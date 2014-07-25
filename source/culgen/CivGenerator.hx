package culgen;

import model.*;
import worldgen.*;
import culgen.LanguageGenerator;
import flixel.util.FlxPoint;

class CivGenerator{

	static public function findSettlementSite(world:World, ?civ:Civ=null){
            var bestSites:Array<FlxPoint> = new Array<FlxPoint>();
            var bestSiteScore:Float = 0;
            var siteScore:Int = 0;
            trace("finding a settlement site");
            for(i in 0...world.raw_map_data.length){
                  for(j in 0...world.raw_map_data[0].length){
                        siteScore = 0;
                        //Don't settle in the sea or on rivers (TODO: Make this parameters of the civ)
                        if(world.raw_map_data[i][j] <= world.waterline ||
                           world.rivers[i][j] > 0){
                              continue;
                        }
                        //Penalise cities that are near other ones (assuming we have any)
                        if(world.cities.length > 0){
                              var cx = 0; var cy = 0;
                              for(city in world.cities){
                                    cx += city.x;
                                    cy += city.y;
                                    if(city.x == i && city.y == j){
                                          siteScore -= 100;
                                    }
                                    var dist = Math.sqrt(Math.pow(city.x-i,2)+Math.pow(city.y-j,2));
                                    if(dist < 50){
                                          siteScore -= 2*Std.int(50-dist);
                                    }
                              }
                              cx = Std.int(cx / world.cities.length);
                              cy = Std.int(cy / world.cities.length);
                        }

                        //Prefer plains,then hills, then mountains (TODO: Make this parameters of the civ)
                        if(world.raw_map_data[i][j] < world.plainslimit)
                              siteScore += 20;
                        else if(world.raw_map_data[i][j] < world.hilllimit)
                              siteScore += 0;
                        else if(world.raw_map_data[i][j] < world.mountainlimit)
                              siteScore -= 20;
                        siteScore += 5*countAdjacentRivers(i, j, world);
                        siteScore += 3*countAdjacentOcean(i, j, world);

                        if(siteScore > bestSiteScore){
                              bestSites = [new FlxPoint(i, j)];
                              bestSiteScore = siteScore;
                        }
                        else if(siteScore == bestSiteScore){
                              bestSites.push(new FlxPoint(i, j));
                        }
                  }
            }
            if(bestSites.length == 0)
                  return null;
            return bestSites[Std.random(bestSites.length)];
      }

	static public function settleCity(world:World, ?civ:Civ = null){
		var site = findSettlementSite(world, civ);
        if(site == null){
              return;
        }
        if(civ != null)
        	civ.addCity(new City(civ.language.generateRandom(2+Std.random(2)), Std.int(site.x), Std.int(site.y)), world);
        else{
        	var city:City = new City(LanguageGenerator.generateLanguage().generateRandom(2+Std.random(2)), Std.int(site.x), Std.int(site.y));
            world.cities.push(city);
        }
        //foundCity(Std.int(site.x), Std.int(site.y), world);
	}

	static public function assignCities(world:World, ?clusters:Int = 3){
		clusterCities(world, clusters);
		trace(world.cities);
		trace(world.civs);

		for(city in world.cities){
			world.civs[world.nations[city]].addCity(city, world);
		}
	}
	
	static public function clusterCities(world:World, ?clusters:Int=3){
		var means:Array<FlxPoint> = new Array<FlxPoint>();
		var assignment:Array<Array<City>> = new Array<Array<City>>();

		for(i in 0...clusters){
			means.push(new FlxPoint(Std.random(world.raw_map_data.length),Std.random(world.raw_map_data[0].length)));
			assignment.push(new Array<City>());
			//world.colours.push(Std.random(100000000));
		}

		for(city in world.cities){
			var nearestDistance = 123123123123;
			var nearestMean = -1;
			//Find the nearest mean
			for(meanindex in 0...means.length){
				var mean = means[meanindex];
				var dist = Math.sqrt(Math.pow(mean.x-city.x,2)+Math.pow(mean.y-city.y,2));
				if(dist < nearestDistance){
					nearestMean = meanindex;
					nearestDistance = dist;
				}
			}
			//Assign them to this cluster
			assignment[nearestMean].push(city);
		}

		for(i in 0...40){
			//Now iterate through the clusters and update the mean.
			for(cin in 0...assignment.length){
				var cluster = assignment[cin];
				if(cluster.length == 0)
					continue;
				var sumx = 0;
				var sumy = 0;
				for(city in cluster){
					sumx += city.x;
					sumy += city.y;
				}
				means[cin] = new FlxPoint(Std.int(sumx/cluster.length), Std.int(sumy/cluster.length));
			}
			assignment = new Array<Array<City>>();
			for(i in 0...clusters){
				assignment.push(new Array<City>());
			}
			//Then reassign cities based on the new means
			for(city in world.cities){
				var nearestDistance = 123123123123;
				var nearestMean = -1;
				//Find the nearest mean
				for(meanindex in 0...means.length){
					var mean = means[meanindex];
					var dist = Math.sqrt(Math.pow(mean.x-city.x,2)+Math.pow(mean.y-city.y,2));
					if(dist < nearestDistance){
						nearestMean = meanindex;
						nearestDistance = dist;
					}
				}
				//Assign them to this cluster
				assignment[nearestMean].push(city);
			}
		}

		for(cin in 0...assignment.length){		
			var cluster = assignment[cin];
			for(city in cluster){
				world.nations[city] = cin;
			}
		}
	}

	static function countAdjacentOcean(x:Int, y:Int, world:World){
            var count = 0;
            for(i in -1...2){
                  for(j in -1...2){
                        if(x+i < 0 || y+j < 0 || x+i >= world.rivers.length || y+j >= world.rivers[0].length || (i == 0 && j == 0)){

                        }
                        else{
                              if(world.raw_map_data[x+i][y+j] < world.waterline){
                                    count++;
                              }
                        }
                  }
            }
            return count;
      }

    static function countAdjacentRivers(x:Int, y:Int, world:World){
            var count = 0;
            for(i in -1...2){
                  for(j in -1...2){
                        if(x+i < 0 || y+j < 0 || x+i >= world.rivers.length || y+j >= world.rivers[0].length || (i == 0 && j == 0)){

                        }
                        else{
                              if(world.rivers[x+i][y+j] > 0){
                                    count++;
                              }
                        }
                  }
            }
            return count;
      }

}