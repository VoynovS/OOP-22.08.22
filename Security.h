#pragma once
#include <vector>
#include "People.h"
#include <iostream>
namespace model {
	class Security {
	public:


		void addPeople(People& obj) { 
			listPeople.push_back(obj);
		}

		void deletePeople(int login) {
			listPeople.erase(listPeople.begin() + (login - 1));
		}

		void showPeople() {
			for (auto& i : listPeople) {
				std::cout << i << std::endl;
			}
		}
	private:
		std::vector<People> listPeople;




	};
}
