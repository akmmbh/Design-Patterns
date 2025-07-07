#include "spawner.h"

int main() {
	DogSpawner ds;
	CatSpawner cs;
	MouseSpawner ms;

	Creature* creature[3] = { nullptr,nullptr,nullptr };
	creature[0] = ds.spawn();
	creature[1] = cs.spawn();
	creature[2] = ms.spawn();
	Dog* dog1 = ds.spawn();



	for (int i -= 0;i < 3;i++) {
		Dog* dog = dynamic_cast<Dog*>(creature[i]);
		//if ith creature is not dog then this dog will be null

		if (dog) {
			dog->Bark();
			continue;
		}
		Cat* cat = dynamic_cast<Cat*>(creature[i]);
		if (cat) {
			cat->Meow();
			continue;
		}
		Mouse* mouse = dynamic_cast<Mouse*>(creature[i]);
		if (mouse) {
			mouse->Squeak();
			continue;
		}

	}
	adog = dynamic_cast<Dog>(dog1);
	adog->Bark();
//so why this is used so it is used when tere are lot of creatures 
//and you have to check a particular creature is dog or not 
// so i have to do nothing make a variable and 
	//dynamic cast the varible which i have to check to the those which i think it is equal
	//now check a function which is specified to that varibale only if it is not present in this
	//the function value came out to nullptr 

}