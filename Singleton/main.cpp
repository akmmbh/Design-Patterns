#include "singleton.h"
#include<iostream>
/*
*## Learnings
* in singletonb there should be a manager which can be used only once a
* for that we are using static and private constructor approach and intializing thought static fucntion so that it intialization is done for the whole class and not the in the class
* usage of static and static function  
* [[nodiscard]] used no discard which is used to pull before function which is returning somthing so that when we are not using any look a like 
container for the function with something returning it will give you the complie error so we should get understand 
* when we are using for(auto ) always use for(auto &) as it will not create the copy but send the acctual pointer to change the value 
* 
 * 
* 
*/int main() {
	Manager* manager = nullptr;
	Tea tea{};
	tea.cost = 10;
	tea.quantity = 500;
	tea.strength = 55;
	manager = Manager::Get();
	manager->Add(tea);
	//we can also do like this Manager::Get()->Add(tea);
	auto tealist = manager->GetTeaList();
	for (const auto& teas : tealist) {
		std::cout << "Cost: " << teas.cost << ", Strength: " << teas.strength << ", Quantity: " << teas.quantity << std::endl;
	}
	return EXIT_SUCCES;
}