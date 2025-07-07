// all the factory is nothing but a glorified constructor you have to use the factory when your constructor is not enought 
class Creature {
public:
	virtual ~Creature() {};
	virtual Creature* Clone() { return nullptr; };
	int getHp() { return HitPoints; }
	int getSpeed() { return Speed; }
	int getAttack() { return Attack; }
protected:
	int HitPoints = 0;
	int Speed = 0;
	int Attack = 0;

};
#include "creature.h"

class Dog : public Creature {
public: Dog() { Hitpoints = 3;Speed = 3;Attack = 3; }
	  void bark() { std::cout << "Bark!" << "\n"; }
};
class Cat : public Creature {
public:Cat() { Hitpoints = 2; Speed = 2; Attack = 2; }
	  void meow() { std::cout << "Meow!" << std::endl; }
};
class Mouse : public Creature {
public:Mouse() { Hitpoints = 1;Speed = 1;Attack = 1; }
	  void squeak() {
		  std::cout << "Squeak!" << std::endl;
	  }
};
//prototype creature 

class Lizard :public Creature {
public:
	Lizard(int hp,int speed ,int attack) {
		HitPoints = hp;
		Speed = speed;
		Attack = attack;
	}
	Creature* Clone() {
		return new Lizard(HitPoints, Speed, Attack);
	}
	void Hiss() {
		std::cout<<"ssssssss!!!\n"<<
	}
};