#pragma once
#include "People.h"
#include "Services.h"
#include "Product.h"
#include "Color.h"
#include <iostream>
#include <string>
#include <list>

namespace model {

	class Check : public Product, public Color, public People {
	public:
		Check() {

		}
		Check(int numberCheck, int quantity, Product product, Color color, People people) {
			numberCheck_ = numberCheck;
			quantity_ = quantity;
			product_ = product;
			color_ = color;
			people_ = people;
		}
		void setNumberCheck(int numberCheck) {
			numberCheck_ = numberCheck;
		}

		int getNumberCheck() {
			return numberCheck_;
		}

		void setQuantity(int quantity) {
			quantity_ = quantity;
		}

		int getQuantity() {
			return quantity_;
		}

		void setProduct(Product &product) {
			product_ = product;
		}

		std::string getProduct() {
			return Product::getNameProduct();
		}

		void setColor(Color &color) {
			color_ = color;
		}

		std::string getColor() {
			return Color::getNameColor();
		}

		void setPeople(People &people) {
			people_ = people;
		}

		std::string getName() {
			return People::getName();
		}

		void printCheck() {
			std::cout << "Number: " << numberCheck_ << "  product: " << getProduct()
				<< "  quantity: " << quantity_ <<"  color: " << getColor()
				<< "  name: " << getName() << std::endl;
		}

		void printTest() {
			std::cout << getProduct();
		}

	private:
		int numberCheck_ = 0;
		int quantity_ = 0;
		Product product_;
		Color color_;
		People people_;
	};
}

