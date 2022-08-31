#pragma once
#include <iostream>
#include <string>

namespace model {
	class People {
	public:
		People() {
			_name = "name_default";
			_passport = 000000;
			_age = 0;
			_login = 0;

		}
		People(int login, std::string name, int passport, int age) {
			_name = name;
			_passport = passport;
			_age = age;
			_login = login;
		}
		void setName(std::string name) {
			_name = name;
		}

		std::string getName() {
			return _name;
		}

		void setPassport(int passport) {
			_passport = passport;
		}

		int getPassport() {
			return _passport;
		}

		void setAge(int age) {
			_age = age;
		}

		int getAge() {
			return _age;
		}

		void setLogin(int login) {
			_login = login;
		}

		int getLogin() {
			return _login;
		}

		friend std::ostream& operator << (std::ostream& os, const People& obj) {
			 os << "Логин: " << obj._login << ", ФИО: " << obj._name << ", паспорт:  "<< obj._passport
				<< ", возвраст: " << obj._age;
			 return os;
		}

	private:
		std::string _name;
		int	_passport;
		int _age;
		int _login;
	};
}
