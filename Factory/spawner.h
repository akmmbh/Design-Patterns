#include "creature.h"

class Spawner
 public:
	 virtual ~Spawner() {};
	 virtual spawnCreature() = 0;


};
class DogSpawner :public Spawner {

};

