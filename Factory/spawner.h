#include "creature.h"

class Spawner
 public:
	 virtual ~Spawner() {};
	 virtual Creature* spawn() = 0;


};
class DogSpawner :public Spawner {
public:
	Creature* spawn() {
		return new Dog();
	}
	std::vector<Creature*> spawnPack() {
		std::vector<Creature*> pack;
		for (int i = 0; i < 5; ++i) {
			pack.push_back(new Dog());
		}
		return pack;
	}
};
class CatSpawner : public Spawner {
public:
	Creature* spawn() {
		return new Cat();
	}
};
class MouseSpawner : public Spawner {	
public:
	Creature* spawn() {
		return new Mouse();
	}
};
//class PackOfDogs :public Spawner {
//
//
//};
//
