#include"tea.h"


class Manager {
public:
	static Manager* Get() {
		static Manager* instance = nullptr;

		if (!instance) {
			instance = new Manager();
		}
			
		return instance;
	}
	void Add(Tea tea) {
		teas.push_back(tea);
	}
	void Remove(Tea tea){
	teas.erase(std::remove_if())
	}
	[[nodiscard]] std::vector<Tea> GetTeaList() {
		return teas;
	}
private:
	std::vector<Tea>teas;
	Manager(){}
};