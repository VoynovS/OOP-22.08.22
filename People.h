#pragma once
#include <string>
class People {
public:
	People() {}
	People(std::string name, int salary, int age) {
		name_ = name;
		salary_ = salary;
		age_ = age;
	}
	void setName(std::string name) {
		name_ = name;
	}

	std::string getName() {
		return name_;
	}

	void setSalary(int salary) {
		salary_ = salary;
	}

	int getSalary() {
		return salary_;
	}

private:
	std::string name_ = " ";
	int	salary_ = 0;
	int age_= 0;
};

