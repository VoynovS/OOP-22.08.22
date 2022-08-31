#include <iostream>
#include <string>
#include <algorithm>
#include "Security.h"
#include "Check.h"

using namespace std;
using namespace model;
int main()  {
	setlocale(LC_ALL, "ru");
	
	Security f;
	People people_1(1,"Войнов Сергей", 66666, 88);
	People people_2(2,"Иванов Сергей", 55555, 77);
	People people_3(3,"Петров Сергей", 44444, 66);
	People people_4(4,"Сидоров Сергей", 333333, 55);


	f.addPeople(people_1);
	f.addPeople(people_2);
	f.addPeople(people_3);
	f.addPeople(people_4);

	f.showPeople();
	cout << endl;
	f.deletePeople(3);

	f.showPeople();

	
	
	










	return 0;
}

