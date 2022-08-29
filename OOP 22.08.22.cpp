#include <iostream>
#include <string>
#include <algorithm>
#include "Check.h"

using namespace std;
using namespace model;
int main()  {
	setlocale(LC_ALL, "ru");
	
	
	Check check;	
	People people;
	check.setNameColor("Red");
	check.setNumberCheck(1);
	check.setQuantity(12);
	check.setNameProduct("Rose");
	people.setName("Bob");
	check.printCheck();
	
	
	










	return 0;
}

