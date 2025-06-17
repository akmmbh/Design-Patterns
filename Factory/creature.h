// all the factory is nothing but a glorified constructor you have to use the factory when your constructor is not enought 
class Creature {
public:
	virtual ~Creature() {};
	
	int getHp() { return HitPoints; }
	int getSpeed() { return Speed; }
	int getAttack() { return Attack; }
private:
	int HitPoints = 0;
	int Speed = 0;
	int Attack = 0;

};
#include "creature.h"

class Dog : public Creature {};
class Cat : public Creature {};
class Mouse : public Creature {};
